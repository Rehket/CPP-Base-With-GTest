project(calendars)

set(HEADER_FILES
        Project.h
        )

set(SOURCE_FILES
        Project.cpp
        )

add_library(project STATIC ${SOURCE_FILES} ${HEADER_FILES})
