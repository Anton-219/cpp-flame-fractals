cmake_minimum_required(VERSION 3.16)
project(fractal)

#include_directories(/run/host/usr/include/opencv4)
find_package(OpenCV CONFIG REQUIRED)

set(CMAKE_CXX_STANDARD 17)

add_executable(fractal main.cpp ../cpp-flame-fractals/src/function/AbstractFunction.cpp ../cpp-flame-fractals/src/function/AbstractFunction.h ../cpp-flame-fractals/src/function/MandelbrotFunction.cpp ../cpp-flame-fractals/src/function/MandelbrotFunction.h ../cpp-flame-fractals/src/Fractal.cpp ../cpp-flame-fractals/src/Fractal.h ../cpp-flame-fractals/src/Mesh.cpp ../cpp-flame-fractals/src/Mesh.h src/common/auxiliary.h)

# target_link_libraries(fractal PRIVATE nlohmann_json::nlohmann_json)
target_link_libraries(fractal PRIVATE opencv_ml opencv_dnn opencv_core opencv_flann opencv_highgui opencv_dnn)

#target_include_directories(fractal PUBLIC /usr/include/opencv4/)
#include_directories(/usr/include/opencv4)
#
#set(OpenCV_LIBS opencv_highgui)
## target_link_libraries(fractal ${OpenCV_LIBS})
#target_link_libraries(fractal opencv::opencv)
##target_link_libraries(fractal -lopencv_stitching -lopencv_alphamat -lopencv_aruco -lopencv_barcode -lopencv_bgsegm -lopencv_bioinspired -lopencv_ccalib -lopencv_dnn_objdetect -lopencv_dnn_superres -lopencv_dpm -lopencv_face -lopencv_freetype -lopencv_fuzzy -lopencv_hdf -lopencv_hfs -lopencv_img_hash -lopencv_intensity_transform -lopencv_line_descriptor -lopencv_mcc -lopencv_quality -lopencv_rapid -lopencv_reg -lopencv_rgbd -lopencv_saliency -lopencv_shape -lopencv_stereo -lopencv_structured_light -lopencv_phase_unwrapping -lopencv_superres -lopencv_optflow -lopencv_surface_matching -lopencv_tracking -lopencv_highgui -lopencv_datasets -lopencv_text -lopencv_plot -lopencv_ml -lopencv_videostab -lopencv_videoio -lopencv_viz -lopencv_wechat_qrcode -lopencv_ximgproc -lopencv_video -lopencv_xobjdetect -lopencv_objdetect -lopencv_calib3d -lopencv_imgcodecs -lopencv_features2d -lopencv_dnn -lopencv_flann -lopencv_xphoto -lopencv_photo -lopencv_imgproc -lopencv_core)