#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./LongSparseArray.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline LongSparseArray::LongSparseArray()
		: JObject(
			"android.util.LongSparseArray",
			"()V"
		) {}
	inline LongSparseArray::LongSparseArray(jint arg0)
		: JObject(
			"android.util.LongSparseArray",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline void LongSparseArray::append(jlong arg0, JObject arg1) const
	{
		callMethod<void>(
			"append",
			"(JLjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline void LongSparseArray::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline android::util::LongSparseArray LongSparseArray::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/util/LongSparseArray;"
		);
	}
	inline void LongSparseArray::delete_(jlong arg0) const
	{
		callMethod<void>(
			"delete",
			"(J)V",
			arg0
		);
	}
	inline JObject LongSparseArray::get(jlong arg0) const
	{
		return callObjectMethod(
			"get",
			"(J)Ljava/lang/Object;",
			arg0
		);
	}
	inline JObject LongSparseArray::get(jlong arg0, JObject arg1) const
	{
		return callObjectMethod(
			"get",
			"(JLjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline jint LongSparseArray::indexOfKey(jlong arg0) const
	{
		return callMethod<jint>(
			"indexOfKey",
			"(J)I",
			arg0
		);
	}
	inline jint LongSparseArray::indexOfValue(JObject arg0) const
	{
		return callMethod<jint>(
			"indexOfValue",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jlong LongSparseArray::keyAt(jint arg0) const
	{
		return callMethod<jlong>(
			"keyAt",
			"(I)J",
			arg0
		);
	}
	inline void LongSparseArray::put(jlong arg0, JObject arg1) const
	{
		callMethod<void>(
			"put",
			"(JLjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline void LongSparseArray::remove(jlong arg0) const
	{
		callMethod<void>(
			"remove",
			"(J)V",
			arg0
		);
	}
	inline void LongSparseArray::removeAt(jint arg0) const
	{
		callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	inline void LongSparseArray::setValueAt(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"setValueAt",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline jint LongSparseArray::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JString LongSparseArray::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JObject LongSparseArray::valueAt(jint arg0) const
	{
		return callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
} // namespace android::util

// Base class headers

