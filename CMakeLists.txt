# CMake 最低版本要求
cmake_minimum_required(VERSION 3.10)

# 專案名稱
project(MyECCProject CXX)

# 設定 C++ 標準為 C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 尋找並連結 OpenSSL 函式庫
find_package(OpenSSL REQUIRED)

# 建立可執行檔
add_executable(my_ecc_app src/main.cpp)

# 將 OpenSSL 函式庫連結到我們的程式
target_link_libraries(my_ecc_app PRIVATE OpenSSL::SSL OpenSSL::Crypto)