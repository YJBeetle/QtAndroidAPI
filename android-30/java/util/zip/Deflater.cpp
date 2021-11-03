#include "../../../JByteArray.hpp"
#include "../../nio/ByteBuffer.hpp"
#include "./Deflater.hpp"

namespace java::util::zip
{
	// Fields
	jint Deflater::BEST_COMPRESSION()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"BEST_COMPRESSION"
		);
	}
	jint Deflater::BEST_SPEED()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"BEST_SPEED"
		);
	}
	jint Deflater::DEFAULT_COMPRESSION()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"DEFAULT_COMPRESSION"
		);
	}
	jint Deflater::DEFAULT_STRATEGY()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"DEFAULT_STRATEGY"
		);
	}
	jint Deflater::DEFLATED()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"DEFLATED"
		);
	}
	jint Deflater::FILTERED()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"FILTERED"
		);
	}
	jint Deflater::FULL_FLUSH()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"FULL_FLUSH"
		);
	}
	jint Deflater::HUFFMAN_ONLY()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"HUFFMAN_ONLY"
		);
	}
	jint Deflater::NO_COMPRESSION()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"NO_COMPRESSION"
		);
	}
	jint Deflater::NO_FLUSH()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"NO_FLUSH"
		);
	}
	jint Deflater::SYNC_FLUSH()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"SYNC_FLUSH"
		);
	}
	
	// QAndroidJniObject forward
	Deflater::Deflater(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Deflater::Deflater()
		: JObject(
			"java.util.zip.Deflater",
			"()V"
		) {}
	Deflater::Deflater(jint arg0)
		: JObject(
			"java.util.zip.Deflater",
			"(I)V",
			arg0
		) {}
	Deflater::Deflater(jint arg0, jboolean arg1)
		: JObject(
			"java.util.zip.Deflater",
			"(IZ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint Deflater::deflate(JByteArray arg0) const
	{
		return callMethod<jint>(
			"deflate",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	jint Deflater::deflate(java::nio::ByteBuffer arg0) const
	{
		return callMethod<jint>(
			"deflate",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	jint Deflater::deflate(java::nio::ByteBuffer arg0, jint arg1) const
	{
		return callMethod<jint>(
			"deflate",
			"(Ljava/nio/ByteBuffer;I)I",
			arg0.object(),
			arg1
		);
	}
	jint Deflater::deflate(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"deflate",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jint Deflater::deflate(JByteArray arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jint>(
			"deflate",
			"([BIII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	void Deflater::end() const
	{
		callMethod<void>(
			"end",
			"()V"
		);
	}
	void Deflater::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	jboolean Deflater::finished() const
	{
		return callMethod<jboolean>(
			"finished",
			"()Z"
		);
	}
	jint Deflater::getAdler() const
	{
		return callMethod<jint>(
			"getAdler",
			"()I"
		);
	}
	jlong Deflater::getBytesRead() const
	{
		return callMethod<jlong>(
			"getBytesRead",
			"()J"
		);
	}
	jlong Deflater::getBytesWritten() const
	{
		return callMethod<jlong>(
			"getBytesWritten",
			"()J"
		);
	}
	jint Deflater::getTotalIn() const
	{
		return callMethod<jint>(
			"getTotalIn",
			"()I"
		);
	}
	jint Deflater::getTotalOut() const
	{
		return callMethod<jint>(
			"getTotalOut",
			"()I"
		);
	}
	jboolean Deflater::needsInput() const
	{
		return callMethod<jboolean>(
			"needsInput",
			"()Z"
		);
	}
	void Deflater::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Deflater::setDictionary(JByteArray arg0) const
	{
		callMethod<void>(
			"setDictionary",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void Deflater::setDictionary(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"setDictionary",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void Deflater::setDictionary(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setDictionary",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void Deflater::setInput(JByteArray arg0) const
	{
		callMethod<void>(
			"setInput",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void Deflater::setInput(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"setInput",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void Deflater::setInput(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setInput",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void Deflater::setLevel(jint arg0) const
	{
		callMethod<void>(
			"setLevel",
			"(I)V",
			arg0
		);
	}
	void Deflater::setStrategy(jint arg0) const
	{
		callMethod<void>(
			"setStrategy",
			"(I)V",
			arg0
		);
	}
} // namespace java::util::zip

