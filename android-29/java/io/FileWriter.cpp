#include "./File.hpp"
#include "./FileDescriptor.hpp"
#include "../nio/charset/Charset.hpp"
#include "./FileWriter.hpp"

namespace java::io
{
	// Fields
	
	FileWriter::FileWriter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileWriter::FileWriter(java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileWriter",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	FileWriter::FileWriter(java::io::FileDescriptor arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileWriter",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	FileWriter::FileWriter(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileWriter",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	FileWriter::FileWriter(java::io::File arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileWriter",
			"(Ljava/io/File;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	FileWriter::FileWriter(java::io::File arg0, java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileWriter",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	FileWriter::FileWriter(jstring arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileWriter",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	FileWriter::FileWriter(jstring arg0, java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileWriter",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	FileWriter::FileWriter(java::io::File arg0, java::nio::charset::Charset arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileWriter",
			"(Ljava/io/File;Ljava/nio/charset/Charset;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	FileWriter::FileWriter(jstring arg0, java::nio::charset::Charset arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileWriter",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;Z)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
} // namespace java::io

