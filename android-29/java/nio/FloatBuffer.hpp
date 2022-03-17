#pragma once

#include "../../JFloatArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Buffer.def.hpp"
#include "./ByteOrder.def.hpp"
#include "./FloatBuffer.def.hpp"

namespace java::nio
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::FloatBuffer FloatBuffer::allocate(jint arg0)
	{
		return callStaticObjectMethod(
			"java.nio.FloatBuffer",
			"allocate",
			"(I)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::wrap(JFloatArray arg0)
	{
		return callStaticObjectMethod(
			"java.nio.FloatBuffer",
			"wrap",
			"([F)Ljava/nio/FloatBuffer;",
			arg0.object<jfloatArray>()
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::wrap(JFloatArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.nio.FloatBuffer",
			"wrap",
			"([FII)Ljava/nio/FloatBuffer;",
			arg0.object<jfloatArray>(),
			arg1,
			arg2
		);
	}
	inline JFloatArray FloatBuffer::array() const
	{
		return callObjectMethod(
			"array",
			"()[F"
		);
	}
	inline jint FloatBuffer::arrayOffset() const
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::asReadOnlyBuffer() const
	{
		return callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::clear() const
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::compact() const
	{
		return callObjectMethod(
			"compact",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	inline jint FloatBuffer::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint FloatBuffer::compareTo(java::nio::FloatBuffer arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/FloatBuffer;)I",
			arg0.object()
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::duplicate() const
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	inline jboolean FloatBuffer::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::flip() const
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	inline jfloat FloatBuffer::get() const
	{
		return callMethod<jfloat>(
			"get",
			"()F"
		);
	}
	inline jfloat FloatBuffer::get(jint arg0) const
	{
		return callMethod<jfloat>(
			"get",
			"(I)F",
			arg0
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::get(JFloatArray arg0) const
	{
		return callObjectMethod(
			"get",
			"([F)Ljava/nio/FloatBuffer;",
			arg0.object<jfloatArray>()
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::get(jint arg0, JFloatArray arg1) const
	{
		return callObjectMethod(
			"get",
			"(I[F)Ljava/nio/FloatBuffer;",
			arg0,
			arg1.object<jfloatArray>()
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::get(JFloatArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"get",
			"([FII)Ljava/nio/FloatBuffer;",
			arg0.object<jfloatArray>(),
			arg1,
			arg2
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::get(jint arg0, JFloatArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"get",
			"(I[FII)Ljava/nio/FloatBuffer;",
			arg0,
			arg1.object<jfloatArray>(),
			arg2,
			arg3
		);
	}
	inline jboolean FloatBuffer::hasArray() const
	{
		return callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	inline jint FloatBuffer::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean FloatBuffer::isDirect() const
	{
		return callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::limit(jint arg0) const
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::mark() const
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	inline jint FloatBuffer::mismatch(java::nio::FloatBuffer arg0) const
	{
		return callMethod<jint>(
			"mismatch",
			"(Ljava/nio/FloatBuffer;)I",
			arg0.object()
		);
	}
	inline java::nio::ByteOrder FloatBuffer::order() const
	{
		return callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::position(jint arg0) const
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::put(JFloatArray arg0) const
	{
		return callObjectMethod(
			"put",
			"([F)Ljava/nio/FloatBuffer;",
			arg0.object<jfloatArray>()
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::put(jfloat arg0) const
	{
		return callObjectMethod(
			"put",
			"(F)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::put(java::nio::FloatBuffer arg0) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/nio/FloatBuffer;)Ljava/nio/FloatBuffer;",
			arg0.object()
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::put(jint arg0, JFloatArray arg1) const
	{
		return callObjectMethod(
			"put",
			"(I[F)Ljava/nio/FloatBuffer;",
			arg0,
			arg1.object<jfloatArray>()
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::put(jint arg0, jfloat arg1) const
	{
		return callObjectMethod(
			"put",
			"(IF)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::put(JFloatArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"put",
			"([FII)Ljava/nio/FloatBuffer;",
			arg0.object<jfloatArray>(),
			arg1,
			arg2
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::put(jint arg0, JFloatArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"put",
			"(I[FII)Ljava/nio/FloatBuffer;",
			arg0,
			arg1.object<jfloatArray>(),
			arg2,
			arg3
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::put(jint arg0, java::nio::FloatBuffer arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"put",
			"(ILjava/nio/FloatBuffer;II)Ljava/nio/FloatBuffer;",
			arg0,
			arg1.object(),
			arg2,
			arg3
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::reset() const
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::rewind() const
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::slice() const
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	inline java::nio::FloatBuffer FloatBuffer::slice(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	inline JString FloatBuffer::toString() const
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
