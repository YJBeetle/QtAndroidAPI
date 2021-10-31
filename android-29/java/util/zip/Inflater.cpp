#include "../../nio/ByteBuffer.hpp"
#include "./Inflater.hpp"

namespace java::util::zip
{
	// Fields
	
	// QAndroidJniObject forward
	Inflater::Inflater(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Inflater::Inflater()
		: __JniBaseClass(
			"java.util.zip.Inflater",
			"()V"
		) {}
	Inflater::Inflater(jboolean arg0)
		: __JniBaseClass(
			"java.util.zip.Inflater",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	void Inflater::end()
	{
		callMethod<void>(
			"end",
			"()V"
		);
	}
	jboolean Inflater::finished()
	{
		return callMethod<jboolean>(
			"finished",
			"()Z"
		);
	}
	jint Inflater::getAdler()
	{
		return callMethod<jint>(
			"getAdler",
			"()I"
		);
	}
	jlong Inflater::getBytesRead()
	{
		return callMethod<jlong>(
			"getBytesRead",
			"()J"
		);
	}
	jlong Inflater::getBytesWritten()
	{
		return callMethod<jlong>(
			"getBytesWritten",
			"()J"
		);
	}
	jint Inflater::getRemaining()
	{
		return callMethod<jint>(
			"getRemaining",
			"()I"
		);
	}
	jint Inflater::getTotalIn()
	{
		return callMethod<jint>(
			"getTotalIn",
			"()I"
		);
	}
	jint Inflater::getTotalOut()
	{
		return callMethod<jint>(
			"getTotalOut",
			"()I"
		);
	}
	jint Inflater::inflate(jbyteArray arg0)
	{
		return callMethod<jint>(
			"inflate",
			"([B)I",
			arg0
		);
	}
	jint Inflater::inflate(java::nio::ByteBuffer arg0)
	{
		return callMethod<jint>(
			"inflate",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	jint Inflater::inflate(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"inflate",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Inflater::needsDictionary()
	{
		return callMethod<jboolean>(
			"needsDictionary",
			"()Z"
		);
	}
	jboolean Inflater::needsInput()
	{
		return callMethod<jboolean>(
			"needsInput",
			"()Z"
		);
	}
	void Inflater::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Inflater::setDictionary(jbyteArray arg0)
	{
		callMethod<void>(
			"setDictionary",
			"([B)V",
			arg0
		);
	}
	void Inflater::setDictionary(java::nio::ByteBuffer arg0)
	{
		callMethod<void>(
			"setDictionary",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void Inflater::setDictionary(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setDictionary",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Inflater::setInput(jbyteArray arg0)
	{
		callMethod<void>(
			"setInput",
			"([B)V",
			arg0
		);
	}
	void Inflater::setInput(java::nio::ByteBuffer arg0)
	{
		callMethod<void>(
			"setInput",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void Inflater::setInput(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setInput",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::util::zip

