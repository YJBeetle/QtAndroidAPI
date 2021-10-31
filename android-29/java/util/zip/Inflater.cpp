#include "../../nio/ByteBuffer.hpp"
#include "./Inflater.hpp"

namespace java::util::zip
{
	// Fields
	
	Inflater::Inflater(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Inflater::Inflater()
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.Inflater",
			"()V"
		);
	}
	Inflater::Inflater(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.Inflater",
			"(Z)V",
			arg0
		);
	}
	
	// Methods
	void Inflater::end()
	{
		__thiz.callMethod<void>(
			"end",
			"()V"
		);
	}
	jboolean Inflater::finished()
	{
		return __thiz.callMethod<jboolean>(
			"finished",
			"()Z"
		);
	}
	jint Inflater::getAdler()
	{
		return __thiz.callMethod<jint>(
			"getAdler",
			"()I"
		);
	}
	jlong Inflater::getBytesRead()
	{
		return __thiz.callMethod<jlong>(
			"getBytesRead",
			"()J"
		);
	}
	jlong Inflater::getBytesWritten()
	{
		return __thiz.callMethod<jlong>(
			"getBytesWritten",
			"()J"
		);
	}
	jint Inflater::getRemaining()
	{
		return __thiz.callMethod<jint>(
			"getRemaining",
			"()I"
		);
	}
	jint Inflater::getTotalIn()
	{
		return __thiz.callMethod<jint>(
			"getTotalIn",
			"()I"
		);
	}
	jint Inflater::getTotalOut()
	{
		return __thiz.callMethod<jint>(
			"getTotalOut",
			"()I"
		);
	}
	jint Inflater::inflate(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"inflate",
			"([B)I",
			arg0
		);
	}
	jint Inflater::inflate(java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"inflate",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	jint Inflater::inflate(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"inflate",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Inflater::needsDictionary()
	{
		return __thiz.callMethod<jboolean>(
			"needsDictionary",
			"()Z"
		);
	}
	jboolean Inflater::needsInput()
	{
		return __thiz.callMethod<jboolean>(
			"needsInput",
			"()Z"
		);
	}
	void Inflater::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Inflater::setDictionary(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setDictionary",
			"([B)V",
			arg0
		);
	}
	void Inflater::setDictionary(java::nio::ByteBuffer arg0)
	{
		__thiz.callMethod<void>(
			"setDictionary",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.__jniObject().object()
		);
	}
	void Inflater::setDictionary(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setDictionary",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Inflater::setInput(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setInput",
			"([B)V",
			arg0
		);
	}
	void Inflater::setInput(java::nio::ByteBuffer arg0)
	{
		__thiz.callMethod<void>(
			"setInput",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.__jniObject().object()
		);
	}
	void Inflater::setInput(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setInput",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::util::zip

