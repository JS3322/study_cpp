#CMake는 빌드 시스템에서 필요로 하는 파일을 생성
cmake_minimum_required(VERSION 3.25)
#프로젝트 이름
project(plc)

# 변수 정의
# SET ( <변수명> <값> )
# $변수명 : 단일 변수
# ${<변수명>} : list
# SET ( SRC_FILES main.c foo.c bar.c )
# ADD_EXECUTABLE ( app.out ${SRC_FILES} )
set(CMAKE_CXX_STANDARD 17)

#add_executable(my_exe   # 이후에 나오는 .cpp 파일을 사용해 .exe를 생성한다 or my_lib      # 이후에 나오는 .cpp 파일을 사용해 라이브러리를 생성한다
#        main.cpp
#        # 개행을 여러번 하여도 문제되지 않습니다.
#        feature1.cpp
#        feature2.cpp
#        algorithm3.cpp      # 상대 경로로 소스 코드를 찾아냅니다.
#        # 현재 사용중인 CMakeList의 위치를 기준으로
#        # 경로를 지시해야 합니다
#        data_structure4.cpp
#        # ...
#        )
add_executable(plc main.cpp custom_module/add.cpp custom_module/add.h)
