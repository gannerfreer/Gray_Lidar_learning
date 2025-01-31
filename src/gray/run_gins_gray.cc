/*
 * @Author: Gray g-ray@qq.com
 * @Date: 2023-12-11 15:49:08
 * @LastEditors: Gray g-ray@qq.com
 * @LastEditTime: 2023-12-12 11:09:13
 * @FilePath: /Gray_Lidar_learning/src/gray/run_gins_gray.cc
 * @Description: 
 */

#include "common/io_utils.h"
#include "tools/ui/pangolin_window.h"

#include <gflags/gflags.h>
#include <glog/logging.h>
#include <fstream>
#include <iomanip>

using namespace sad;

int main(int argc, char** argv) {
    google::InitGoogleLogging(argv[0]);  // 初始化log当前目录
    FLAGS_stderrthreshold = google::INFO;//log等级为INFO级别
    FLAGS_colorlogtostderr = true;       // 设置记录到标准输出的颜色消息（如果终端支持）
    google::ParseCommandLineFlags(&argc, &argv, true);

    // 代码流程:
    // 1.IMU初始化
    // 2.等待第一帧GNSS数据
    // 3.GNSS-IMU联合优化


    return 0;
}