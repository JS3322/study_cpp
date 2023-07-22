#include <iostream>
#include "custom_module/add.h"

/*
 * CMakeLists.txt
 * 최상단에는 해당 프로젝트에서 사용할 CMake 의 최소 버전을 명시
 *
 * Cmake는 Makefile을 만들어주는 툴입니다.
 * Cmake를 설명하기 전에 Makefile이 무엇이냐면 빌드를 편리하게 해주는 일종의 빌드 스크립트
 *
 * Incremental build
 * 처음에는 모두 빌드를 해놓고, 그 이후 수정된 파일에 대해서는 그 소스파일과 연관된 것들만 빌드하여 시간을 줄여주는 빌드 방식
 */
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "The sum of 3 and 4 is " << add(3, 4) << std::endl;
    return 0;
}
