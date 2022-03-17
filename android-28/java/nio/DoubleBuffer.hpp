#pragma once

#include "../../JDoubleArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Buffer.def.hpp"
#include "./ByteOrder.def.hpp"
#include "./DoubleBuffer.def.hpp"

namespace java::nio
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::DoubleBuffer DoubleBuffer::allocate(jint arg0)
	{
		return callStaticObjectMethod(
			"java.nio.DoubleBuffer",
			"allocate",
			"(I)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::wrap(JDoubleArray arg0)
	{
		return callStaticObjectMethod(
			"java.nio.DoubleBuffer",
			"wrap",
			"([D)Ljava/nio/DoubleBuffer;",
			arg0.object<jdoubleArray>()
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::wrap(JDoubleArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.nio.DoubleBuffer",
			"wrap",
			"([DII)Ljava/nio/DoubleBuffer;",
			arg0.object<jdoubleArray>(),
			arg1,
			arg2
		);
	}
	inline JDoubleArray DoubleBuffer::array() const
	{
		return callObjectMethod(
			"array",
			"()[D"
		);
	}
	inline jint DoubleBuffer::arrayOffset() const
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::asReadOnlyBuffer() const
	{
		return callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::clear() const
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::compact() const
	{
		return callObjectMethod(
			"compact",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	inline jint DoubleBuffer::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint DoubleBuffer::compareTo(java::nio::DoubleBuffer arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/DoubleBuffer;)I",
			arg0.object()
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::duplicate() const
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	inline jboolean DoubleBuffer::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::flip() const
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	inline jdouble DoubleBuffer::get() const
	{
		return callMethod<jdouble>(
			"get",
			"()D"
		);
	}
	inline jdouble DoubleBuffer::get(jint arg0) const
	{
		return callMethod<jdouble>(
			"get",
			"(I)D",
			arg0
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::get(JDoubleArray arg0) const
	{
		return callObjectMethod(
			"get",
			"([D)Ljava/nio/DoubleBuffer;",
			arg0.object<jdoubleArray>()
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::get(jint arg0, JDoubleArray arg1) const
	{
		return callObjectMethod(
			"get",
			"(I[D)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1.object<jdoubleArray>()
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::get(JDoubleArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"get",
			"([DII)Ljava/nio/DoubleBuffer;",
			arg0.object<jdoubleArray>(),
			arg1,
			arg2
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::get(jint arg0, JDoubleArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"get",
			"(I[DII)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1.object<jdoubleArray>(),
			arg2,
			arg3
		);
	}
	inline jboolean DoubleBuffer::hasArray() const
	{
		return callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	inline jint DoubleBuffer::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean DoubleBuffer::isDirect() const
	{
		return callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::limit(jint arg0) const
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::mark() const
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	inline jint DoubleBuffer::mismatch(java::nio::DoubleBuffer arg0) const
	{
		return callMethod<jint>(
			"mismatch",
			"(Ljava/nio/DoubleBuffer;)I",
			arg0.object()
		);
	}
	inline java::nio::ByteOrder DoubleBuffer::order() const
	{
		return callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::position(jint arg0) const
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::put(JDoubleArray arg0) const
	{
		return callObjectMethod(
			"put",
			"([D)Ljava/nio/DoubleBuffer;",
			arg0.object<jdoubleArray>()
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::put(jdouble arg0) const
	{
		return callObjectMethod(
			"put",
			"(D)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::put(java::nio::DoubleBuffer arg0) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/nio/DoubleBuffer;)Ljava/nio/DoubleBuffer;",
			arg0.object()
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::put(jint arg0, JDoubleArray arg1) const
	{
		return callObjectMethod(
			"put",
			"(I[D)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1.object<jdoubleArray>()
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::put(jint arg0, jdouble arg1) const
	{
		return callObjectMethod(
			"put",
			"(ID)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::put(JDoubleArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"put",
			"([DII)Ljava/nio/DoubleBuffer;",
			arg0.object<jdoubleArray>(),
			arg1,
			arg2
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::put(jint arg0, JDoubleArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"put",
			"(I[DII)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1.object<jdoubleArray>(),
			arg2,
			arg3
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::put(jint arg0, java::nio::DoubleBuffer arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"put",
			"(ILjava/nio/DoubleBuffer;II)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1.object(),
			arg2,
			arg3
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::reset() const
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::rewind() const
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::slice() const
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	inline java::nio::DoubleBuffer DoubleBuffer::slice(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1
		);
	}
	inline JString DoubleBuffer::toString() const
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
