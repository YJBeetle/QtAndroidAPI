#pragma once

#include "../../../JByteArray.hpp"
#include "../../nio/ByteBuffer.def.hpp"
#include "./Deflater.def.hpp"

namespace java::util::zip
{
	// Fields
	inline jint Deflater::BEST_COMPRESSION()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"BEST_COMPRESSION"
		);
	}
	inline jint Deflater::BEST_SPEED()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"BEST_SPEED"
		);
	}
	inline jint Deflater::DEFAULT_COMPRESSION()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"DEFAULT_COMPRESSION"
		);
	}
	inline jint Deflater::DEFAULT_STRATEGY()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"DEFAULT_STRATEGY"
		);
	}
	inline jint Deflater::DEFLATED()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"DEFLATED"
		);
	}
	inline jint Deflater::FILTERED()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"FILTERED"
		);
	}
	inline jint Deflater::FULL_FLUSH()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"FULL_FLUSH"
		);
	}
	inline jint Deflater::HUFFMAN_ONLY()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"HUFFMAN_ONLY"
		);
	}
	inline jint Deflater::NO_COMPRESSION()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"NO_COMPRESSION"
		);
	}
	inline jint Deflater::NO_FLUSH()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"NO_FLUSH"
		);
	}
	inline jint Deflater::SYNC_FLUSH()
	{
		return getStaticField<jint>(
			"java.util.zip.Deflater",
			"SYNC_FLUSH"
		);
	}
	
	// Constructors
	inline Deflater::Deflater()
		: JObject(
			"java.util.zip.Deflater",
			"()V"
		) {}
	inline Deflater::Deflater(jint arg0)
		: JObject(
			"java.util.zip.Deflater",
			"(I)V",
			arg0
		) {}
	inline Deflater::Deflater(jint arg0, jboolean arg1)
		: JObject(
			"java.util.zip.Deflater",
			"(IZ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint Deflater::deflate(JByteArray arg0) const
	{
		return callMethod<jint>(
			"deflate",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	inline jint Deflater::deflate(java::nio::ByteBuffer arg0) const
	{
		return callMethod<jint>(
			"deflate",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	inline jint Deflater::deflate(java::nio::ByteBuffer arg0, jint arg1) const
	{
		return callMethod<jint>(
			"deflate",
			"(Ljava/nio/ByteBuffer;I)I",
			arg0.object(),
			arg1
		);
	}
	inline jint Deflater::deflate(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"deflate",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jint Deflater::deflate(JByteArray arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void Deflater::end() const
	{
		callMethod<void>(
			"end",
			"()V"
		);
	}
	inline void Deflater::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	inline jboolean Deflater::finished() const
	{
		return callMethod<jboolean>(
			"finished",
			"()Z"
		);
	}
	inline jint Deflater::getAdler() const
	{
		return callMethod<jint>(
			"getAdler",
			"()I"
		);
	}
	inline jlong Deflater::getBytesRead() const
	{
		return callMethod<jlong>(
			"getBytesRead",
			"()J"
		);
	}
	inline jlong Deflater::getBytesWritten() const
	{
		return callMethod<jlong>(
			"getBytesWritten",
			"()J"
		);
	}
	inline jint Deflater::getTotalIn() const
	{
		return callMethod<jint>(
			"getTotalIn",
			"()I"
		);
	}
	inline jint Deflater::getTotalOut() const
	{
		return callMethod<jint>(
			"getTotalOut",
			"()I"
		);
	}
	inline jboolean Deflater::needsInput() const
	{
		return callMethod<jboolean>(
			"needsInput",
			"()Z"
		);
	}
	inline void Deflater::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void Deflater::setDictionary(JByteArray arg0) const
	{
		callMethod<void>(
			"setDictionary",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void Deflater::setDictionary(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"setDictionary",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	inline void Deflater::setDictionary(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setDictionary",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void Deflater::setInput(JByteArray arg0) const
	{
		callMethod<void>(
			"setInput",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void Deflater::setInput(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"setInput",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	inline void Deflater::setInput(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setInput",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void Deflater::setLevel(jint arg0) const
	{
		callMethod<void>(
			"setLevel",
			"(I)V",
			arg0
		);
	}
	inline void Deflater::setStrategy(jint arg0) const
	{
		callMethod<void>(
			"setStrategy",
			"(I)V",
			arg0
		);
	}
} // namespace java::util::zip

// Base class headers

