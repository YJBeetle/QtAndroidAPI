#include "./File.hpp"
#include "./FileDescriptor.hpp"
#include "../nio/charset/Charset.hpp"
#include "./FileWriter.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	FileWriter::FileWriter(QAndroidJniObject obj) : java::io::OutputStreamWriter(obj) {}
	
	// Constructors
	FileWriter::FileWriter(java::io::File arg0)
		: java::io::OutputStreamWriter(
			"java.io.FileWriter",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	FileWriter::FileWriter(java::io::FileDescriptor arg0)
		: java::io::OutputStreamWriter(
			"java.io.FileWriter",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		) {}
	FileWriter::FileWriter(jstring arg0)
		: java::io::OutputStreamWriter(
			"java.io.FileWriter",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	FileWriter::FileWriter(java::io::File arg0, jboolean arg1)
		: java::io::OutputStreamWriter(
			"java.io.FileWriter",
			"(Ljava/io/File;Z)V",
			arg0.object(),
			arg1
		) {}
	FileWriter::FileWriter(java::io::File arg0, java::nio::charset::Charset arg1)
		: java::io::OutputStreamWriter(
			"java.io.FileWriter",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	FileWriter::FileWriter(jstring arg0, jboolean arg1)
		: java::io::OutputStreamWriter(
			"java.io.FileWriter",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		) {}
	FileWriter::FileWriter(jstring arg0, java::nio::charset::Charset arg1)
		: java::io::OutputStreamWriter(
			"java.io.FileWriter",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0,
			arg1.object()
		) {}
	FileWriter::FileWriter(java::io::File arg0, java::nio::charset::Charset arg1, jboolean arg2)
		: java::io::OutputStreamWriter(
			"java.io.FileWriter",
			"(Ljava/io/File;Ljava/nio/charset/Charset;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	FileWriter::FileWriter(jstring arg0, java::nio::charset::Charset arg1, jboolean arg2)
		: java::io::OutputStreamWriter(
			"java.io.FileWriter",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;Z)V",
			arg0,
			arg1.object(),
			arg2
		) {}
	
	// Methods
} // namespace java::io

