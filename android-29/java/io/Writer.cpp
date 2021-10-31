#include "./Writer.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	Writer::Writer(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Writer::nullWriter()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.Writer",
			"nullWriter",
			"()Ljava/io/Writer;"
		);
	}
	QAndroidJniObject Writer::append(jchar arg0)
	{
		return callObjectMethod(
			"append",
			"(C)Ljava/io/Writer;",
			arg0
		);
	}
	QAndroidJniObject Writer::append(jstring arg0)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/Writer;",
			arg0
		);
	}
	QAndroidJniObject Writer::append(jstring arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/Writer;",
			arg0,
			arg1,
			arg2
		);
	}
	void Writer::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void Writer::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	void Writer::write(jcharArray arg0)
	{
		callMethod<void>(
			"write",
			"([C)V",
			arg0
		);
	}
	void Writer::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void Writer::write(jstring arg0)
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Writer::write(jcharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Writer::write(jstring arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io
