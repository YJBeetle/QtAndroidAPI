#pragma once

#include "../../../JByteArray.hpp"
#include "../../nio/ByteBuffer.def.hpp"
#include "./Inflater.def.hpp"

namespace java::util::zip
{
	// Fields
	
	// Constructors
	inline Inflater::Inflater()
		: JObject(
			"java.util.zip.Inflater",
			"()V"
		) {}
	inline Inflater::Inflater(jboolean arg0)
		: JObject(
			"java.util.zip.Inflater",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	inline void Inflater::end() const
	{
		callMethod<void>(
			"end",
			"()V"
		);
	}
	inline jboolean Inflater::finished() const
	{
		return callMethod<jboolean>(
			"finished",
			"()Z"
		);
	}
	inline jint Inflater::getAdler() const
	{
		return callMethod<jint>(
			"getAdler",
			"()I"
		);
	}
	inline jlong Inflater::getBytesRead() const
	{
		return callMethod<jlong>(
			"getBytesRead",
			"()J"
		);
	}
	inline jlong Inflater::getBytesWritten() const
	{
		return callMethod<jlong>(
			"getBytesWritten",
			"()J"
		);
	}
	inline jint Inflater::getRemaining() const
	{
		return callMethod<jint>(
			"getRemaining",
			"()I"
		);
	}
	inline jint Inflater::getTotalIn() const
	{
		return callMethod<jint>(
			"getTotalIn",
			"()I"
		);
	}
	inline jint Inflater::getTotalOut() const
	{
		return callMethod<jint>(
			"getTotalOut",
			"()I"
		);
	}
	inline jint Inflater::inflate(JByteArray arg0) const
	{
		return callMethod<jint>(
			"inflate",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	inline jint Inflater::inflate(java::nio::ByteBuffer arg0) const
	{
		return callMethod<jint>(
			"inflate",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	inline jint Inflater::inflate(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"inflate",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jboolean Inflater::needsDictionary() const
	{
		return callMethod<jboolean>(
			"needsDictionary",
			"()Z"
		);
	}
	inline jboolean Inflater::needsInput() const
	{
		return callMethod<jboolean>(
			"needsInput",
			"()Z"
		);
	}
	inline void Inflater::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void Inflater::setDictionary(JByteArray arg0) const
	{
		callMethod<void>(
			"setDictionary",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void Inflater::setDictionary(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"setDictionary",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	inline void Inflater::setDictionary(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setDictionary",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void Inflater::setInput(JByteArray arg0) const
	{
		callMethod<void>(
			"setInput",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void Inflater::setInput(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"setInput",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	inline void Inflater::setInput(JByteArray arg0, jint arg1, jint arg2) const
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

// Base class headers

