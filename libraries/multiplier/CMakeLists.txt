# Get the library name
get_filename_component(CURRENT_DIR_NAME ${CMAKE_CURRENT_LIST_DIR} NAME)

# Add the .c file
target_sources(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/${CURRENT_DIR_NAME}.c)

# Include the .h file
target_include_directories(${PROJECT_NAME} PRIVATE .)