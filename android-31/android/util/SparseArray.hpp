#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SparseArray.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline SparseArray::SparseArray()
		: JObject(
			"android.util.SparseArray",
			"()V"
		) {}
	inline SparseArray::SparseArray(jint arg0)
		: JObject(
			"android.util.SparseArray",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline void SparseArray::append(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"append",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline void SparseArray::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline android::util::SparseArray SparseArray::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/util/SparseArray;"
		);
	}
	inline jboolean SparseArray::contains(jint arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(I)Z",
			arg0
		);
	}
	inline jboolean SparseArray::contentEquals(android::util::SparseArray arg0) const
	{
		return callMethod<jboolean>(
			"contentEquals",
			"(Landroid/util/SparseArray;)Z",
			arg0.object()
		);
	}
	inline jint SparseArray::contentHashCode() const
	{
		return callMethod<jint>(
			"contentHashCode",
			"()I"
		);
	}
	inline void SparseArray::delete_(jint arg0) const
	{
		callMethod<void>(
			"delete",
			"(I)V",
			arg0
		);
	}
	inline JObject SparseArray::get(jint arg0) const
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline JObject SparseArray::get(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"get",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline jint SparseArray::indexOfKey(jint arg0) const
	{
		return callMethod<jint>(
			"indexOfKey",
			"(I)I",
			arg0
		);
	}
	inline jint SparseArray::indexOfValue(JObject arg0) const
	{
		return callMethod<jint>(
			"indexOfValue",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint SparseArray::keyAt(jint arg0) const
	{
		return callMethod<jint>(
			"keyAt",
			"(I)I",
			arg0
		);
	}
	inline void SparseArray::put(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"put",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline void SparseArray::remove(jint arg0) const
	{
		callMethod<void>(
			"remove",
			"(I)V",
			arg0
		);
	}
	inline void SparseArray::removeAt(jint arg0) const
	{
		callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	inline void SparseArray::removeAtRange(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"removeAtRange",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void SparseArray::set(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"set",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline void SparseArray::setValueAt(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"setValueAt",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline jint SparseArray::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JString SparseArray::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JObject SparseArray::valueAt(jint arg0) const
	{
		return callObjectMethod(
			"valueAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
} // namespace android::util

// Base class headers

