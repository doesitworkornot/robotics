import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, ExecuteProcess
from launch.substitutions import LaunchConfiguration


def generate_launch_description():
    radius = LaunchConfiguration('radius', default='2.0')
    direction_of_rotation = LaunchConfiguration('direction_of_rotation', default='1')

    return LaunchDescription([
        DeclareLaunchArgument(
            'radius',
            default_value='2.0',
            description='Radius of the carrot\'s orbit'
        ),
        DeclareLaunchArgument(
            'direction_of_rotation',
            default_value='1',
            description='Direction of rotation: 1 for clockwise, -1 for counterclockwise'
        ),
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='sim'
        ),
        ExecuteProcess(
                    cmd=['ros2', 'service', 'call', '/spawn', 'turtlesim/srv/Spawn', '{x: 2.0, y: 2.0, theta: 0.0, name: "turtle2"}'],
                    output='screen'
                ),
        Node(
            package='turtlesim',
            executable='turtle_teleop_key',
            name='teleop',
            prefix='xterm -e'
        ),
        Node(
            package='after_carrot',
            executable='turtle1_tf2_broadcaster',
            name='broadcaster1',
            parameters=[{'turtlename': 'turtle1'}]
        ),
        Node(
            package='after_carrot',
            executable='turtle2_tf2_broadcaster',
            name='broadcaster2',
            parameters=[{'turtlename': 'turtle2'}]
        ),
        Node(
            package='after_carrot',
            executable='carrot_tf2_broadcaster',
            name='carrot_broadcaster',
            parameters=[{'radius': radius, 'direction_of_rotation': direction_of_rotation}]
        ),
        Node(
            package='after_carrot',
            executable='turtle2_tf2_listener',
            name='listener'
        ),
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', os.path.join(get_package_share_directory('ex02'), 'config', 'carrot.rviz')]
        )
    ])
