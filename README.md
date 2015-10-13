vrep_plugin_ros
========
*Origin method was found here https://github.com/hjeldin/vrep_ros*

vrep ros plugin for ROS jade, V-REP download from http://www.coppeliarobotics.com, ROS from http://www.ros.org/

This project using V-REP 3.2.0 tested working fine with vrep_ros_bridge at https://github.com/lagadic/vrep_ros_bridge
and ROS jade.

if you downloaded V-REP in coppeliarobotics and tried to communicate with ROS,
an error show up:
>Plugin 'Ros': load failed (could not load). 
>The plugin probably couldn't load dependency libraries. 
>Try 'ldd pluginName.so' for more infos, or simply rebuild the plugin.

so i wrote a right way to build these file and a bash file for saving time. please feel free to use it.

##Correct procedure

#### 1. go to the vrep_common folder
#### 2. in package.xml, comment this line
* `<build_depend>opencv2</build_depend>`

#### 3. open a termnial and type
* `source /opt/ros/jade/setup.bash`

#### 4. execute code in this flow 

* `mkdir build`
* `cd build`
* `cmake ..`
* `make -j`

#### 5. go to the vrep_plugin folder
#### 6. in package.xml, comment this line
* `<build_depend>opencv2</build_depend>`

#### 7. in CMakeLists.txt, change ROS Distributions name you are using
* `link_directories("/opt/ros/hydro/lib")` -> `link_directories("/opt/ros/jade/lib")`

#### 8. back to terminal, type in 

* `source ../vrep_common/build/devel/setup.bash`
* `mkdir build`
* `cd build`
* `cmake ..`
* `make -j`

#### 9. copy libv_repExtRos.so file in `vrep_plugin/build/devel/lib` to V-REP folder.

#### 10. set environment variable. And enjoy it!
* `export ROS_MASTER_URI=http://localhost:11311`
