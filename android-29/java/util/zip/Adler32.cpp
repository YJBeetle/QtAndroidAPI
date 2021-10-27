#include "../../nio/ByteBuffer.hpp"
#include "./Adler32.hpp"

namespace java::util::zip
{
	// Fields
	
	Adler32::Adler32(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Adler32::Adler32()
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.Adler32",
			"()V"
		);
	}
	
	// Methods
	jlong Adler32::getValue()
	{
		return __thiz.callMethod<jlong>(
			"getValue",
			"()J"
		);
	}
	void Adler32::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Adler32::update(jint arg0)
	{
		__thiz.callMethod<void>(
			"update",
			"(I)V",
			arg0
		);
	}
	void Adler32::update(java::nio::ByteBuffer arg0)
	{
		__thiz.callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.__jniObject().object()
		);
	}
	void Adler32::update(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"update",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::util::zip

