from setuptools import find_packages
from setuptools import setup

setup(
    name='full_name',
    version='0.0.0',
    packages=find_packages(
        include=('full_name', 'full_name.*')),
)
