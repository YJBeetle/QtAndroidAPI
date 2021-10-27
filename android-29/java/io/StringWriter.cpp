#include "./Writer.hpp"
#include "../lang/StringBuffer.hpp"
#include "./StringWriter.hpp"

namespace java::io
{
	// Fields
	
	StringWriter::StringWriter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StringWriter::StringWriter()
	{
		__thiz = QAndroidJniObject(
			"java.io.StringWriter",
			"()V"
		);
	}
	StringWriter::StringWriter(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.StringWriter",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject StringWriter::append(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(C)Ljava/io/StringWriter;",
			arg0
		);
	}
	QAndroidJniObject StringWriter::append(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/StringWriter;",
			arg0
		);
	}
	QAndroidJniObject StringWriter::append(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/StringWriter;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject StringWriter::append(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/StringWriter;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject StringWriter::append(const QString &arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/StringWriter;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void StringWriter::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void StringWriter::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	QAndroidJniObject StringWriter::getBuffer()
	{
		return __thiz.callObjectMethod(
			"getBuffer",
			"()Ljava/lang/StringBuffer;"
		);
	}
	jstring StringWriter::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void StringWriter::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void StringWriter::write(jstring arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StringWriter::write(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void StringWriter::write(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void StringWriter::write(jstring arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void StringWriter::write(const QString &arg0, jint arg1, jint arg2)
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

