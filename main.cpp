#include <iostream>
#include "custom_module/add.h"

/*
 * CMakeLists.txt
 * 최상단에는 해당 프로젝트에서 사용할 CMake 의 최소 버전을 명시
 *
 * Cmake는 Makefile을 만들어주는 툴
 * Cmake를 설명하기 전에 Makefile이 무엇이냐면 빌드를 편리하게 해주는 일종의 빌드 스크립트
 *
 * Incremental build
 * 처음에는 모두 빌드를 해놓고, 그 이후 수정된 파일에 대해서는 그 소스파일과 연관된 것들만 빌드하여 시간을 줄여주는 빌드 방식
 */
int main() {                                                                                                            // start func main

    /*
     * 자료형 (크기 단위 : byte)
     * 정수형 : char(1), short(2), int(4), long(4), long long(8)
     * 실수형 : float(4), double(8)
     * 양의 정수 : unsigned
     */

    unsigned char char_test001 = 0;
    char char_test002 = 3;

    std::cout << char_test002 << std::endl;
    char_test002 = 256;
    std::cout << char_test002 << std::endl;

    std::cout << "Hello, World!" << std::endl;
    std::cout << "The sum of 3 and 4 is " << add(3, 4) << std::endl;

//    use ip("your_image.jpg");
//    ip.displayImage();

    return 0;
}                                                                                                                       // end func main
