#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SparseIntArray.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline SparseIntArray::SparseIntArray()
		: JObject(
			"android.util.SparseIntArray",
			"()V"
		) {}
	inline SparseIntArray::SparseIntArray(jint arg0)
		: JObject(
			"android.util.SparseIntArray",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline void SparseIntArray::append(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"append",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void SparseIntArray::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline android::util::SparseIntArray SparseIntArray::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/util/SparseIntArray;"
		);
	}
	inline void SparseIntArray::delete_(jint arg0) const
	{
		callMethod<void>(
			"delete",
			"(I)V",
			arg0
		);
	}
	inline jint SparseIntArray::get(jint arg0) const
	{
		return callMethod<jint>(
			"get",
			"(I)I",
			arg0
		);
	}
	inline jint SparseIntArray::get(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"get",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint SparseIntArray::indexOfKey(jint arg0) const
	{
		return callMethod<jint>(
			"indexOfKey",
			"(I)I",
			arg0
		);
	}
	inline jint SparseIntArray::indexOfValue(jint arg0) const
	{
		return callMethod<jint>(
			"indexOfValue",
			"(I)I",
			arg0
		);
	}
	inline jint SparseIntArray::keyAt(jint arg0) const
	{
		return callMethod<jint>(
			"keyAt",
			"(I)I",
			arg0
		);
	}
	inline void SparseIntArray::put(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"put",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void SparseIntArray::removeAt(jint arg0) const
	{
		callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	inline jint SparseIntArray::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JString SparseIntArray::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jint SparseIntArray::valueAt(jint arg0) const
	{
		return callMethod<jint>(
			"valueAt",
			"(I)I",
			arg0
		);
	}
} // namespace android::util

// Base class headers

