#include "../../../JByteArray.hpp"
#include "../../nio/ByteBuffer.hpp"
#include "./Inflater.hpp"

namespace java::util::zip
{
	// Fields
	
	// QAndroidJniObject forward
	Inflater::Inflater(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Inflater::Inflater()
		: JObject(
			"java.util.zip.Inflater",
			"()V"
		) {}
	Inflater::Inflater(jboolean arg0)
		: JObject(
			"java.util.zip.Inflater",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	void Inflater::end() const
	{
		callMethod<void>(
			"end",
			"()V"
		);
	}
	jboolean Inflater::finished() const
	{
		return callMethod<jboolean>(
			"finished",
			"()Z"
		);
	}
	jint Inflater::getAdler() const
	{
		return callMethod<jint>(
			"getAdler",
			"()I"
		);
	}
	jlong Inflater::getBytesRead() const
	{
		return callMethod<jlong>(
			"getBytesRead",
			"()J"
		);
	}
	jlong Inflater::getBytesWritten() const
	{
		return callMethod<jlong>(
			"getBytesWritten",
			"()J"
		);
	}
	jint Inflater::getRemaining() const
	{
		return callMethod<jint>(
			"getRemaining",
			"()I"
		);
	}
	jint Inflater::getTotalIn() const
	{
		return callMethod<jint>(
			"getTotalIn",
			"()I"
		);
	}
	jint Inflater::getTotalOut() const
	{
		return callMethod<jint>(
			"getTotalOut",
			"()I"
		);
	}
	jint Inflater::inflate(JByteArray arg0) const
	{
		return callMethod<jint>(
			"inflate",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	jint Inflater::inflate(java::nio::ByteBuffer arg0) const
	{
		return callMethod<jint>(
			"inflate",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	jint Inflater::inflate(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"inflate",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jboolean Inflater::needsDictionary() const
	{
		return callMethod<jboolean>(
			"needsDictionary",
			"()Z"
		);
	}
	jboolean Inflater::needsInput() const
	{
		return callMethod<jboolean>(
			"needsInput",
			"()Z"
		);
	}
	void Inflater::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Inflater::setDictionary(JByteArray arg0) const
	{
		callMethod<void>(
			"setDictionary",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void Inflater::setDictionary(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"setDictionary",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void Inflater::setDictionary(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setDictionary",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void Inflater::setInput(JByteArray arg0) const
	{
		callMethod<void>(
			"setInput",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void Inflater::setInput(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"setInput",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void Inflater::setInput(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setInput",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::util::zip

