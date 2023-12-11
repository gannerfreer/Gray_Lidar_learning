# add_library(${PROJECT_NAME}.gray
#         )

add_executable(run_gins_gray run_gins_gray.cc)

target_link_libraries(run_gins_gray
            glog gflags
        )