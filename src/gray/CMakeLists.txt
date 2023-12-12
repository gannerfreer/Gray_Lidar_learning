add_library(gray_preintegration 
        g2o_types.cc
        imu_preintegration.cc
        )

add_executable(run_gins_gray run_gins_gray.cc)

target_link_libraries(run_gins_gray
        gray_preintegration
        glog gflags ${PROJECT_NAME}.common
        )