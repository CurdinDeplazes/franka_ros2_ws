# CMake generated Testfile for 
# Source directory: /home/curdin/franka_ros2_ws/src/cartesian_impedance_control
# Build directory: /home/curdin/franka_ros2_ws/build/cartesian_impedance_control
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(clang_format "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/test_results/cartesian_impedance_control/clang_format.xunit.xml" "--package-name" "cartesian_impedance_control" "--output-file" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/ament_clang_format/clang_format.txt" "--command" "/opt/ros/humble/bin/ament_clang_format" "--xunit-file" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/test_results/cartesian_impedance_control/clang_format.xunit.xml" "src" "include" "--config" "../.clang-format")
set_tests_properties(clang_format PROPERTIES  LABELS "clang_format;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/curdin/franka_ros2_ws/src/cartesian_impedance_control" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_clang_format/cmake/ament_clang_format.cmake;57;ament_add_test;/home/curdin/franka_ros2_ws/src/cartesian_impedance_control/CMakeLists.txt;83;ament_clang_format;/home/curdin/franka_ros2_ws/src/cartesian_impedance_control/CMakeLists.txt;0;")
add_test(copyright "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/test_results/cartesian_impedance_control/copyright.xunit.xml" "--package-name" "cartesian_impedance_control" "--output-file" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/ament_copyright/copyright.txt" "--command" "/opt/ros/humble/bin/ament_copyright" "--xunit-file" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/test_results/cartesian_impedance_control/copyright.xunit.xml" "src" "src" "include" "package.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "200" WORKING_DIRECTORY "/home/curdin/franka_ros2_ws/src/cartesian_impedance_control" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_copyright/cmake/ament_copyright.cmake;51;ament_add_test;/home/curdin/franka_ros2_ws/src/cartesian_impedance_control/CMakeLists.txt;84;ament_copyright;/home/curdin/franka_ros2_ws/src/cartesian_impedance_control/CMakeLists.txt;0;")
add_test(cppcheck "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/test_results/cartesian_impedance_control/cppcheck.xunit.xml" "--package-name" "cartesian_impedance_control" "--output-file" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/humble/bin/ament_cppcheck" "--xunit-file" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/test_results/cartesian_impedance_control/cppcheck.xunit.xml" "src" "include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/curdin/franka_ros2_ws/src/cartesian_impedance_control" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/home/curdin/franka_ros2_ws/src/cartesian_impedance_control/CMakeLists.txt;85;ament_cppcheck;/home/curdin/franka_ros2_ws/src/cartesian_impedance_control/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/test_results/cartesian_impedance_control/lint_cmake.xunit.xml" "--package-name" "cartesian_impedance_control" "--output-file" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/humble/bin/ament_lint_cmake" "--xunit-file" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/test_results/cartesian_impedance_control/lint_cmake.xunit.xml" "CMakeLists.txt")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/curdin/franka_ros2_ws/src/cartesian_impedance_control" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/home/curdin/franka_ros2_ws/src/cartesian_impedance_control/CMakeLists.txt;86;ament_lint_cmake;/home/curdin/franka_ros2_ws/src/cartesian_impedance_control/CMakeLists.txt;0;")
add_test(flake8 "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/test_results/cartesian_impedance_control/flake8.xunit.xml" "--package-name" "cartesian_impedance_control" "--output-file" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/ament_flake8/flake8.txt" "--command" "/opt/ros/humble/bin/ament_flake8" "--xunit-file" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/test_results/cartesian_impedance_control/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/curdin/franka_ros2_ws/src/cartesian_impedance_control" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_flake8/cmake/ament_flake8.cmake;63;ament_add_test;/home/curdin/franka_ros2_ws/src/cartesian_impedance_control/CMakeLists.txt;87;ament_flake8;/home/curdin/franka_ros2_ws/src/cartesian_impedance_control/CMakeLists.txt;0;")
add_test(pep257 "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/test_results/cartesian_impedance_control/pep257.xunit.xml" "--package-name" "cartesian_impedance_control" "--output-file" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/ament_pep257/pep257.txt" "--command" "/opt/ros/humble/bin/ament_pep257" "--xunit-file" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/test_results/cartesian_impedance_control/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/curdin/franka_ros2_ws/src/cartesian_impedance_control" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/home/curdin/franka_ros2_ws/src/cartesian_impedance_control/CMakeLists.txt;88;ament_pep257;/home/curdin/franka_ros2_ws/src/cartesian_impedance_control/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/test_results/cartesian_impedance_control/xmllint.xunit.xml" "--package-name" "cartesian_impedance_control" "--output-file" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/ament_xmllint/xmllint.txt" "--command" "/opt/ros/humble/bin/ament_xmllint" "--xunit-file" "/home/curdin/franka_ros2_ws/build/cartesian_impedance_control/test_results/cartesian_impedance_control/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/curdin/franka_ros2_ws/src/cartesian_impedance_control" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/home/curdin/franka_ros2_ws/src/cartesian_impedance_control/CMakeLists.txt;89;ament_xmllint;/home/curdin/franka_ros2_ws/src/cartesian_impedance_control/CMakeLists.txt;0;")
