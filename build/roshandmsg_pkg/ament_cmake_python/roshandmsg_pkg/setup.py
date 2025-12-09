from setuptools import find_packages
from setuptools import setup

setup(
    name='roshandmsg_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('roshandmsg_pkg', 'roshandmsg_pkg.*')),
)
