if(WIN32)
  # Fixme to solve visual studio can not find dll lib
  set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${SKITY_DLL_DIR})
endif()

if(${PNG_FOUND})
  add_executable(png_decode_test png_decode_test.cc)
  target_link_libraries(png_decode_test skity::skity skity::codec)
endif()

if(${JPEG_FOUND})
  add_executable(jpeg_encode_test jpeg_encode_test.cc)
  target_link_libraries(jpeg_encode_test skity::skity skity::codec)
endif()
