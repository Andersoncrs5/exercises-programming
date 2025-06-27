"""
Sphere Volume Calculator

Write a Python program to get the volume of a sphere with radius six.

Python: Volume of a Sphere

A sphere is a three-dimensional solid with no face, no edge, no base and no vertex.
It is a round body with all points on its surface equidistant from the center. The
volume of a sphere is measured in cubic units.

The volume of the sphere is : V = 4/3 × π × r3 = π × d3/6.
"""
import math

radius = float(input("Input radius value: "))

v = (4/3) * math.pi * (radius ** 3)

print('The volume of the sphere is: ', v)

