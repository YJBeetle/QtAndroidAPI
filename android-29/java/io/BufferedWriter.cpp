#include "./Writer.hpp"
#include "./BufferedWriter.hpp"

namespace java::io
{
	// Fields
	
	BufferedWriter::BufferedWriter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BufferedWriter::BufferedWriter(java::io::Writer arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.BufferedWriter",
			"(Ljava/io/Writer;)V",
			arg0.__jniObject().object()
		);
	}
	BufferedWriter::BufferedWriter(java::io::Writer arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.BufferedWriter",
			"(Ljava/io/Writer;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void BufferedWriter::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void BufferedWriter::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void BufferedWriter::newLine()
	{
		__thiz.callMethod<void>(
			"newLine",
			"()V"
		);
	}
	void BufferedWriter::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void BufferedWriter::write(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void BufferedWriter::write(jstring arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io

