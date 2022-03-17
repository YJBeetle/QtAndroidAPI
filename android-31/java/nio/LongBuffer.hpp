#pragma once

#include "../../JLongArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Buffer.def.hpp"
#include "./ByteOrder.def.hpp"
#include "./LongBuffer.def.hpp"

namespace java::nio
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::LongBuffer LongBuffer::allocate(jint arg0)
	{
		return callStaticObjectMethod(
			"java.nio.LongBuffer",
			"allocate",
			"(I)Ljava/nio/LongBuffer;",
			arg0
		);
	}
	inline java::nio::LongBuffer LongBuffer::wrap(JLongArray arg0)
	{
		return callStaticObjectMethod(
			"java.nio.LongBuffer",
			"wrap",
			"([J)Ljava/nio/LongBuffer;",
			arg0.object<jlongArray>()
		);
	}
	inline java::nio::LongBuffer LongBuffer::wrap(JLongArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.nio.LongBuffer",
			"wrap",
			"([JII)Ljava/nio/LongBuffer;",
			arg0.object<jlongArray>(),
			arg1,
			arg2
		);
	}
	inline JLongArray LongBuffer::array() const
	{
		return callObjectMethod(
			"array",
			"()[J"
		);
	}
	inline jint LongBuffer::arrayOffset() const
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	inline java::nio::LongBuffer LongBuffer::asReadOnlyBuffer() const
	{
		return callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/LongBuffer;"
		);
	}
	inline java::nio::LongBuffer LongBuffer::clear() const
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/LongBuffer;"
		);
	}
	inline java::nio::LongBuffer LongBuffer::compact() const
	{
		return callObjectMethod(
			"compact",
			"()Ljava/nio/LongBuffer;"
		);
	}
	inline jint LongBuffer::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint LongBuffer::compareTo(java::nio::LongBuffer arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/LongBuffer;)I",
			arg0.object()
		);
	}
	inline java::nio::LongBuffer LongBuffer::duplicate() const
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/LongBuffer;"
		);
	}
	inline jboolean LongBuffer::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::nio::LongBuffer LongBuffer::flip() const
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/LongBuffer;"
		);
	}
	inline java::nio::LongBuffer LongBuffer::get(JLongArray arg0) const
	{
		return callObjectMethod(
			"get",
			"([J)Ljava/nio/LongBuffer;",
			arg0.object<jlongArray>()
		);
	}
	inline java::nio::LongBuffer LongBuffer::get(jint arg0, JLongArray arg1) const
	{
		return callObjectMethod(
			"get",
			"(I[J)Ljava/nio/LongBuffer;",
			arg0,
			arg1.object<jlongArray>()
		);
	}
	inline java::nio::LongBuffer LongBuffer::get(JLongArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"get",
			"([JII)Ljava/nio/LongBuffer;",
			arg0.object<jlongArray>(),
			arg1,
			arg2
		);
	}
	inline java::nio::LongBuffer LongBuffer::get(jint arg0, JLongArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"get",
			"(I[JII)Ljava/nio/LongBuffer;",
			arg0,
			arg1.object<jlongArray>(),
			arg2,
			arg3
		);
	}
	inline jlong LongBuffer::get() const
	{
		return callMethod<jlong>(
			"get",
			"()J"
		);
	}
	inline jlong LongBuffer::get(jint arg0) const
	{
		return callMethod<jlong>(
			"get",
			"(I)J",
			arg0
		);
	}
	inline jboolean LongBuffer::hasArray() const
	{
		return callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	inline jint LongBuffer::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean LongBuffer::isDirect() const
	{
		return callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	inline java::nio::LongBuffer LongBuffer::limit(jint arg0) const
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/LongBuffer;",
			arg0
		);
	}
	inline java::nio::LongBuffer LongBuffer::mark() const
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/LongBuffer;"
		);
	}
	inline jint LongBuffer::mismatch(java::nio::LongBuffer arg0) const
	{
		return callMethod<jint>(
			"mismatch",
			"(Ljava/nio/LongBuffer;)I",
			arg0.object()
		);
	}
	inline java::nio::ByteOrder LongBuffer::order() const
	{
		return callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	inline java::nio::LongBuffer LongBuffer::position(jint arg0) const
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/LongBuffer;",
			arg0
		);
	}
	inline java::nio::LongBuffer LongBuffer::put(JLongArray arg0) const
	{
		return callObjectMethod(
			"put",
			"([J)Ljava/nio/LongBuffer;",
			arg0.object<jlongArray>()
		);
	}
	inline java::nio::LongBuffer LongBuffer::put(java::nio::LongBuffer arg0) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/nio/LongBuffer;)Ljava/nio/LongBuffer;",
			arg0.object()
		);
	}
	inline java::nio::LongBuffer LongBuffer::put(jlong arg0) const
	{
		return callObjectMethod(
			"put",
			"(J)Ljava/nio/LongBuffer;",
			arg0
		);
	}
	inline java::nio::LongBuffer LongBuffer::put(jint arg0, JLongArray arg1) const
	{
		return callObjectMethod(
			"put",
			"(I[J)Ljava/nio/LongBuffer;",
			arg0,
			arg1.object<jlongArray>()
		);
	}
	inline java::nio::LongBuffer LongBuffer::put(jint arg0, jlong arg1) const
	{
		return callObjectMethod(
			"put",
			"(IJ)Ljava/nio/LongBuffer;",
			arg0,
			arg1
		);
	}
	inline java::nio::LongBuffer LongBuffer::put(JLongArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"put",
			"([JII)Ljava/nio/LongBuffer;",
			arg0.object<jlongArray>(),
			arg1,
			arg2
		);
	}
	inline java::nio::LongBuffer LongBuffer::put(jint arg0, JLongArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"put",
			"(I[JII)Ljava/nio/LongBuffer;",
			arg0,
			arg1.object<jlongArray>(),
			arg2,
			arg3
		);
	}
	inline java::nio::LongBuffer LongBuffer::put(jint arg0, java::nio::LongBuffer arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"put",
			"(ILjava/nio/LongBuffer;II)Ljava/nio/LongBuffer;",
			arg0,
			arg1.object(),
			arg2,
			arg3
		);
	}
	inline java::nio::LongBuffer LongBuffer::reset() const
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/LongBuffer;"
		);
	}
	inline java::nio::LongBuffer LongBuffer::rewind() const
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/LongBuffer;"
		);
	}
	inline java::nio::LongBuffer LongBuffer::slice() const
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/LongBuffer;"
		);
	}
	inline java::nio::LongBuffer LongBuffer::slice(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/LongBuffer;",
			arg0,
			arg1
		);
	}
	inline JString LongBuffer::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio

// Base class headers
#include "./Buffer.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio;
#endif
