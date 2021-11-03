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
	
	// QJniObject forward
	Deflater::Deflater(QJniObject obj) : JObject(obj) {}
	
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
	jint Deflater::deflate(JByteArray arg0)
	{
		return callMethod<jint>(
			"deflate",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	jint Deflater::deflate(java::nio::ByteBuffer arg0)
	{
		return callMethod<jint>(
			"deflate",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	jint Deflater::deflate(java::nio::ByteBuffer arg0, jint arg1)
	{
		return callMethod<jint>(
			"deflate",
			"(Ljava/nio/ByteBuffer;I)I",
			arg0.object(),
			arg1
		);
	}
	jint Deflater::deflate(JByteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"deflate",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jint Deflater::deflate(JByteArray arg0, jint arg1, jint arg2, jint arg3)
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
	void Deflater::end()
	{
		callMethod<void>(
			"end",
			"()V"
		);
	}
	void Deflater::finish()
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	jboolean Deflater::finished()
	{
		return callMethod<jboolean>(
			"finished",
			"()Z"
		);
	}
	jint Deflater::getAdler()
	{
		return callMethod<jint>(
			"getAdler",
			"()I"
		);
	}
	jlong Deflater::getBytesRead()
	{
		return callMethod<jlong>(
			"getBytesRead",
			"()J"
		);
	}
	jlong Deflater::getBytesWritten()
	{
		return callMethod<jlong>(
			"getBytesWritten",
			"()J"
		);
	}
	jint Deflater::getTotalIn()
	{
		return callMethod<jint>(
			"getTotalIn",
			"()I"
		);
	}
	jint Deflater::getTotalOut()
	{
		return callMethod<jint>(
			"getTotalOut",
			"()I"
		);
	}
	jboolean Deflater::needsInput()
	{
		return callMethod<jboolean>(
			"needsInput",
			"()Z"
		);
	}
	void Deflater::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Deflater::setDictionary(JByteArray arg0)
	{
		callMethod<void>(
			"setDictionary",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void Deflater::setDictionary(java::nio::ByteBuffer arg0)
	{
		callMethod<void>(
			"setDictionary",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void Deflater::setDictionary(JByteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setDictionary",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void Deflater::setInput(JByteArray arg0)
	{
		callMethod<void>(
			"setInput",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void Deflater::setInput(java::nio::ByteBuffer arg0)
	{
		callMethod<void>(
			"setInput",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void Deflater::setInput(JByteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setInput",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void Deflater::setLevel(jint arg0)
	{
		callMethod<void>(
			"setLevel",
			"(I)V",
			arg0
		);
	}
	void Deflater::setStrategy(jint arg0)
	{
		callMethod<void>(
			"setStrategy",
			"(I)V",
			arg0
		);
	}
} // namespace java::util::zip

