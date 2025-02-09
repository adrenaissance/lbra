add_library(lbra
  matrix.c
)
target_include_directories(lbra PUBLIC
  $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
  $<INSTALL_INTERFACE:include/mylib>
)
