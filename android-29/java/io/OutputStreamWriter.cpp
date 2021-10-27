#include "./OutputStream.hpp"
#include "./Writer.hpp"
#include "../nio/charset/Charset.hpp"
#include "../nio/charset/CharsetEncoder.hpp"
#include "./OutputStreamWriter.hpp"

namespace java::io
{
	// Fields
	
	OutputStreamWriter::OutputStreamWriter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	OutputStreamWriter::OutputStreamWriter(java::io::OutputStream &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	OutputStreamWriter::OutputStreamWriter(java::io::OutputStream &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	OutputStreamWriter::OutputStreamWriter(java::io::OutputStream &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	OutputStreamWriter::OutputStreamWriter(java::io::OutputStream &arg0, java::nio::charset::Charset &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	OutputStreamWriter::OutputStreamWriter(java::io::OutputStream &arg0, java::nio::charset::CharsetEncoder &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.OutputStreamWriter",
			"(Ljava/io/OutputStream;Ljava/nio/charset/CharsetEncoder;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject OutputStreamWriter::append(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/Writer;",
			arg0
		);
	}
	QAndroidJniObject OutputStreamWriter::append(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/Writer;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject OutputStreamWriter::append(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/Writer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject OutputStreamWriter::append(const QString &arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/Writer;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void OutputStreamWriter::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void OutputStreamWriter::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	jstring OutputStreamWriter::getEncoding()
	{
		return __thiz.callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void OutputStreamWriter::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void OutputStreamWriter::write(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void OutputStreamWriter::write(jstring arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void OutputStreamWriter::write(const QString &arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
} // namespace java::io

