#include "./File.hpp"
#include "./FileDescriptor.hpp"
#include "../nio/charset/Charset.hpp"
#include "./FileReader.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	FileReader::FileReader(QAndroidJniObject obj) : java::io::InputStreamReader(obj) {}
	
	// Constructors
	FileReader::FileReader(java::io::File arg0)
		: java::io::InputStreamReader(
			"java.io.FileReader",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	FileReader::FileReader(java::io::FileDescriptor arg0)
		: java::io::InputStreamReader(
			"java.io.FileReader",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		) {}
	FileReader::FileReader(jstring arg0)
		: java::io::InputStreamReader(
			"java.io.FileReader",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	FileReader::FileReader(java::io::File arg0, java::nio::charset::Charset arg1)
		: java::io::InputStreamReader(
			"java.io.FileReader",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	FileReader::FileReader(jstring arg0, java::nio::charset::Charset arg1)
		: java::io::InputStreamReader(
			"java.io.FileReader",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
} // namespace java::io

