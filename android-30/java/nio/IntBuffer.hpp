#pragma once

#include "../../JIntArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Buffer.def.hpp"
#include "./ByteOrder.def.hpp"
#include "./IntBuffer.def.hpp"

namespace java::nio
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::IntBuffer IntBuffer::allocate(jint arg0)
	{
		return callStaticObjectMethod(
			"java.nio.IntBuffer",
			"allocate",
			"(I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	inline java::nio::IntBuffer IntBuffer::wrap(JIntArray arg0)
	{
		return callStaticObjectMethod(
			"java.nio.IntBuffer",
			"wrap",
			"([I)Ljava/nio/IntBuffer;",
			arg0.object<jintArray>()
		);
	}
	inline java::nio::IntBuffer IntBuffer::wrap(JIntArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.nio.IntBuffer",
			"wrap",
			"([III)Ljava/nio/IntBuffer;",
			arg0.object<jintArray>(),
			arg1,
			arg2
		);
	}
	inline JIntArray IntBuffer::array() const
	{
		return callObjectMethod(
			"array",
			"()[I"
		);
	}
	inline jint IntBuffer::arrayOffset() const
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	inline java::nio::IntBuffer IntBuffer::asReadOnlyBuffer() const
	{
		return callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/IntBuffer;"
		);
	}
	inline java::nio::IntBuffer IntBuffer::clear() const
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/IntBuffer;"
		);
	}
	inline java::nio::IntBuffer IntBuffer::compact() const
	{
		return callObjectMethod(
			"compact",
			"()Ljava/nio/IntBuffer;"
		);
	}
	inline jint IntBuffer::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint IntBuffer::compareTo(java::nio::IntBuffer arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/IntBuffer;)I",
			arg0.object()
		);
	}
	inline java::nio::IntBuffer IntBuffer::duplicate() const
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/IntBuffer;"
		);
	}
	inline jboolean IntBuffer::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::nio::IntBuffer IntBuffer::flip() const
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/IntBuffer;"
		);
	}
	inline jint IntBuffer::get() const
	{
		return callMethod<jint>(
			"get",
			"()I"
		);
	}
	inline jint IntBuffer::get(jint arg0) const
	{
		return callMethod<jint>(
			"get",
			"(I)I",
			arg0
		);
	}
	inline java::nio::IntBuffer IntBuffer::get(JIntArray arg0) const
	{
		return callObjectMethod(
			"get",
			"([I)Ljava/nio/IntBuffer;",
			arg0.object<jintArray>()
		);
	}
	inline java::nio::IntBuffer IntBuffer::get(jint arg0, JIntArray arg1) const
	{
		return callObjectMethod(
			"get",
			"(I[I)Ljava/nio/IntBuffer;",
			arg0,
			arg1.object<jintArray>()
		);
	}
	inline java::nio::IntBuffer IntBuffer::get(JIntArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"get",
			"([III)Ljava/nio/IntBuffer;",
			arg0.object<jintArray>(),
			arg1,
			arg2
		);
	}
	inline java::nio::IntBuffer IntBuffer::get(jint arg0, JIntArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"get",
			"(I[III)Ljava/nio/IntBuffer;",
			arg0,
			arg1.object<jintArray>(),
			arg2,
			arg3
		);
	}
	inline jboolean IntBuffer::hasArray() const
	{
		return callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	inline jint IntBuffer::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean IntBuffer::isDirect() const
	{
		return callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	inline java::nio::IntBuffer IntBuffer::limit(jint arg0) const
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	inline java::nio::IntBuffer IntBuffer::mark() const
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/IntBuffer;"
		);
	}
	inline jint IntBuffer::mismatch(java::nio::IntBuffer arg0) const
	{
		return callMethod<jint>(
			"mismatch",
			"(Ljava/nio/IntBuffer;)I",
			arg0.object()
		);
	}
	inline java::nio::ByteOrder IntBuffer::order() const
	{
		return callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	inline java::nio::IntBuffer IntBuffer::position(jint arg0) const
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	inline java::nio::IntBuffer IntBuffer::put(JIntArray arg0) const
	{
		return callObjectMethod(
			"put",
			"([I)Ljava/nio/IntBuffer;",
			arg0.object<jintArray>()
		);
	}
	inline java::nio::IntBuffer IntBuffer::put(jint arg0) const
	{
		return callObjectMethod(
			"put",
			"(I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	inline java::nio::IntBuffer IntBuffer::put(java::nio::IntBuffer arg0) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/nio/IntBuffer;)Ljava/nio/IntBuffer;",
			arg0.object()
		);
	}
	inline java::nio::IntBuffer IntBuffer::put(jint arg0, JIntArray arg1) const
	{
		return callObjectMethod(
			"put",
			"(I[I)Ljava/nio/IntBuffer;",
			arg0,
			arg1.object<jintArray>()
		);
	}
	inline java::nio::IntBuffer IntBuffer::put(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"put",
			"(II)Ljava/nio/IntBuffer;",
			arg0,
			arg1
		);
	}
	inline java::nio::IntBuffer IntBuffer::put(JIntArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"put",
			"([III)Ljava/nio/IntBuffer;",
			arg0.object<jintArray>(),
			arg1,
			arg2
		);
	}
	inline java::nio::IntBuffer IntBuffer::put(jint arg0, JIntArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"put",
			"(I[III)Ljava/nio/IntBuffer;",
			arg0,
			arg1.object<jintArray>(),
			arg2,
			arg3
		);
	}
	inline java::nio::IntBuffer IntBuffer::put(jint arg0, java::nio::IntBuffer arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"put",
			"(ILjava/nio/IntBuffer;II)Ljava/nio/IntBuffer;",
			arg0,
			arg1.object(),
			arg2,
			arg3
		);
	}
	inline java::nio::IntBuffer IntBuffer::reset() const
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/IntBuffer;"
		);
	}
	inline java::nio::IntBuffer IntBuffer::rewind() const
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/IntBuffer;"
		);
	}
	inline java::nio::IntBuffer IntBuffer::slice() const
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/IntBuffer;"
		);
	}
	inline java::nio::IntBuffer IntBuffer::slice(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/IntBuffer;",
			arg0,
			arg1
		);
	}
	inline JString IntBuffer::toString() const
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
