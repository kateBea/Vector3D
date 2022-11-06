# Vector3D
Some three dimensional vector stuff. Latest addition is rotation in 3D space, requires two elements, **rotation axis** and the **angle**. The later could be in either degree or radians, just need to specify so to any of the functions to rotate a vector. Threre's six functions to rotate vectors in total, three of them assume the unitary vector for the specific axis (``[1, 0, 0]`` for X axis, ``[0, 1, 0]`` for Y axis and ``[0, 0, 1]`` for Z axis), the other three may take an arbitrary vector for the rotation axis.

# Example execution:

```
******* VECTOR ROTATION *******
vector coordinates [x, y, z]: 1 0 0
[1.000000, 0.000000, 0.000000]
1. Rotate X axis [X]
2. Rotate Y axis [Y]
3. Rotate Z axis [Z]
4. Exit [E]
Axis: Z
Angle: 3.7
Is the angle in degrees? [Y/Yes] : [N/No] -> No
[-0.848100, -0.529836, 0.000000]

vector coordinates [x, y, z]: 1 0 0
[1.000000, 0.000000, 0.000000]
1. Rotate X axis [X]
2. Rotate Y axis [Y]
3. Rotate Z axis [Z]
4. Exit [E]
Axis: Z
Angle: 2.8
Is the angle in degrees? [Y/Yes] : [N/No] -> No
[-0.942222, 0.334988, 0.000000]
```

# Visualization:
![rotate Z axis 3.7 rad](/img/img1.png)


![rotate Z axis 2.8 rad](/img/img2.png)

Images source: 
[GeoGebra](https://www.geogebra.org/m/Fy7UruJa)
