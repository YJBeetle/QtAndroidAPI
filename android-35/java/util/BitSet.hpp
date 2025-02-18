#pragma once

#include "../../JByteArray.hpp"
#include "../../JLongArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/ByteBuffer.def.hpp"
#include "../nio/LongBuffer.def.hpp"
#include "./BitSet.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline BitSet::BitSet()
		: JObject(
			"java.util.BitSet",
			"()V"
		) {}
	inline BitSet::BitSet(jint arg0)
		: JObject(
			"java.util.BitSet",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline java::util::BitSet BitSet::valueOf(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"([B)Ljava/util/BitSet;",
			arg0.object<jbyteArray>()
		);
	}
	inline java::util::BitSet BitSet::valueOf(JLongArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"([J)Ljava/util/BitSet;",
			arg0.object<jlongArray>()
		);
	}
	inline java::util::BitSet BitSet::valueOf(java::nio::ByteBuffer arg0)
	{
		return callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"(Ljava/nio/ByteBuffer;)Ljava/util/BitSet;",
			arg0.object()
		);
	}
	inline java::util::BitSet BitSet::valueOf(java::nio::LongBuffer arg0)
	{
		return callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"(Ljava/nio/LongBuffer;)Ljava/util/BitSet;",
			arg0.object()
		);
	}
	inline void BitSet::and_(java::util::BitSet arg0) const
	{
		callMethod<void>(
			"and",
			"(Ljava/util/BitSet;)V",
			arg0.object()
		);
	}
	inline void BitSet::andNot(java::util::BitSet arg0) const
	{
		callMethod<void>(
			"andNot",
			"(Ljava/util/BitSet;)V",
			arg0.object()
		);
	}
	inline jint BitSet::cardinality() const
	{
		return callMethod<jint>(
			"cardinality",
			"()I"
		);
	}
	inline void BitSet::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline void BitSet::clear(jint arg0) const
	{
		callMethod<void>(
			"clear",
			"(I)V",
			arg0
		);
	}
	inline void BitSet::clear(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"clear",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline JObject BitSet::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean BitSet::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void BitSet::flip(jint arg0) const
	{
		callMethod<void>(
			"flip",
			"(I)V",
			arg0
		);
	}
	inline void BitSet::flip(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"flip",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline jboolean BitSet::get(jint arg0) const
	{
		return callMethod<jboolean>(
			"get",
			"(I)Z",
			arg0
		);
	}
	inline java::util::BitSet BitSet::get(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"get",
			"(II)Ljava/util/BitSet;",
			arg0,
			arg1
		);
	}
	inline jint BitSet::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean BitSet::intersects(java::util::BitSet arg0) const
	{
		return callMethod<jboolean>(
			"intersects",
			"(Ljava/util/BitSet;)Z",
			arg0.object()
		);
	}
	inline jboolean BitSet::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline jint BitSet::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	inline jint BitSet::nextClearBit(jint arg0) const
	{
		return callMethod<jint>(
			"nextClearBit",
			"(I)I",
			arg0
		);
	}
	inline jint BitSet::nextSetBit(jint arg0) const
	{
		return callMethod<jint>(
			"nextSetBit",
			"(I)I",
			arg0
		);
	}
	inline void BitSet::or_(java::util::BitSet arg0) const
	{
		callMethod<void>(
			"or",
			"(Ljava/util/BitSet;)V",
			arg0.object()
		);
	}
	inline jint BitSet::previousClearBit(jint arg0) const
	{
		return callMethod<jint>(
			"previousClearBit",
			"(I)I",
			arg0
		);
	}
	inline jint BitSet::previousSetBit(jint arg0) const
	{
		return callMethod<jint>(
			"previousSetBit",
			"(I)I",
			arg0
		);
	}
	inline void BitSet::set(jint arg0) const
	{
		callMethod<void>(
			"set",
			"(I)V",
			arg0
		);
	}
	inline void BitSet::set(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"set",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void BitSet::set(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void BitSet::set(jint arg0, jint arg1, jboolean arg2) const
	{
		callMethod<void>(
			"set",
			"(IIZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline jint BitSet::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JObject BitSet::stream() const
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/IntStream;"
		);
	}
	inline JByteArray BitSet::toByteArray() const
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
	inline JLongArray BitSet::toLongArray() const
	{
		return callObjectMethod(
			"toLongArray",
			"()[J"
		);
	}
	inline JString BitSet::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void BitSet::xor_(java::util::BitSet arg0) const
	{
		callMethod<void>(
			"xor",
			"(Ljava/util/BitSet;)V",
			arg0.object()
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
