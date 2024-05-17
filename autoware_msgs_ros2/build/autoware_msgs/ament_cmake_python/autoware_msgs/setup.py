from setuptools import find_packages
from setuptools import setup

setup(
    name='autoware_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('autoware_msgs', 'autoware_msgs.*')),
)
