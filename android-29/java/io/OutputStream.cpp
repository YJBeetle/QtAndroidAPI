#include "./OutputStream.hpp"

namespace java::io
{
	// Fields
	
	OutputStream::OutputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	OutputStream::OutputStream()
	{
		__thiz = QAndroidJniObject(
			"java.io.OutputStream",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject OutputStream::nullOutputStream()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.OutputStream",
			"nullOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	void OutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void OutputStream::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void OutputStream::write(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"([B)V",
			arg0
		);
	}
	void OutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void OutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io

