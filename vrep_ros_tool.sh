#!/bin/bash 
rosversion="jade"
read -p "Press any key to continue process of libv_repExtRos.so." 

eval "cd vrep_common"
if grep -q "<!--<build_depend>opencv2<\/build_depend>-->" package.xml
then
	wait
else
	sed -i -- "s/<build_depend>opencv2<\/build_depend>/<!--<build_depend>opencv2<\/build_depend>-->/g" package.xml
fi
source /opt/ros/$rosversion/setup.bash
mkdir build && cd build && cmake .. && make -j & wait
eval "cd .."
eval "cd vrep_plugin"
	if grep -q "<!--<build_depend>opencv2<\/build_depend>-->" package.xml
	then
		wait
	else
		sed -i -- "s/<build_depend>opencv2<\/build_depend>/<!--<build_depend>opencv2<\/build_depend>-->/g" package.xml
	fi
	if grep -q 'link_directories("/opt/ros/hydro/lib")' CMakeLists.txt
	then
		echo "found"
	    sed -i -- "s/hydro/$rosversion/g" CMakeLists.txt
	fi
source ../vrep_common/build/devel/setup.bash
mkdir build && cd build && cmake .. && make -j & wait
read -p "Press any key exit." 
