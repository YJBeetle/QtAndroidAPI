#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SparseBooleanArray.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline SparseBooleanArray::SparseBooleanArray()
		: JObject(
			"android.util.SparseBooleanArray",
			"()V"
		) {}
	inline SparseBooleanArray::SparseBooleanArray(jint arg0)
		: JObject(
			"android.util.SparseBooleanArray",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline void SparseBooleanArray::append(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"append",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void SparseBooleanArray::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline android::util::SparseBooleanArray SparseBooleanArray::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/util/SparseBooleanArray;"
		);
	}
	inline void SparseBooleanArray::delete_(jint arg0) const
	{
		callMethod<void>(
			"delete",
			"(I)V",
			arg0
		);
	}
	inline jboolean SparseBooleanArray::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean SparseBooleanArray::get(jint arg0) const
	{
		return callMethod<jboolean>(
			"get",
			"(I)Z",
			arg0
		);
	}
	inline jboolean SparseBooleanArray::get(jint arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"get",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	inline jint SparseBooleanArray::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint SparseBooleanArray::indexOfKey(jint arg0) const
	{
		return callMethod<jint>(
			"indexOfKey",
			"(I)I",
			arg0
		);
	}
	inline jint SparseBooleanArray::indexOfValue(jboolean arg0) const
	{
		return callMethod<jint>(
			"indexOfValue",
			"(Z)I",
			arg0
		);
	}
	inline jint SparseBooleanArray::keyAt(jint arg0) const
	{
		return callMethod<jint>(
			"keyAt",
			"(I)I",
			arg0
		);
	}
	inline void SparseBooleanArray::put(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"put",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void SparseBooleanArray::removeAt(jint arg0) const
	{
		callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	inline void SparseBooleanArray::setValueAt(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setValueAt",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline jint SparseBooleanArray::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JString SparseBooleanArray::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean SparseBooleanArray::valueAt(jint arg0) const
	{
		return callMethod<jboolean>(
			"valueAt",
			"(I)Z",
			arg0
		);
	}
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
