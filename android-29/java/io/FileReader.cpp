#include "./File.hpp"
#include "./FileDescriptor.hpp"
#include "../nio/charset/Charset.hpp"
#include "./FileReader.hpp"

namespace java::io
{
	// Fields
	
	FileReader::FileReader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileReader::FileReader(java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileReader",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	FileReader::FileReader(java::io::FileDescriptor arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileReader",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	FileReader::FileReader(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileReader",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	FileReader::FileReader(java::io::File arg0, java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileReader",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	FileReader::FileReader(jstring arg0, java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileReader",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
} // namespace java::io

