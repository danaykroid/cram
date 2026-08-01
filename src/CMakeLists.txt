include(FetchContent)

FetchContent_Declare(
	quill
	URL https://github.com/odygrd/quill/archive/refs/tags/v12.1.0.tar.gz
)

FetchContent_MakeAvailable(quill)

target_link_libraries(cram PRIVATE quill::quill)
