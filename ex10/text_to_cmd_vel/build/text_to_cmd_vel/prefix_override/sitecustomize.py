import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/user/robotics/ex10/text_to_cmd_vel/install/text_to_cmd_vel'
