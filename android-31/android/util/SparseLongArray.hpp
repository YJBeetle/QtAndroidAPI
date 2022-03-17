#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SparseLongArray.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline SparseLongArray::SparseLongArray()
		: JObject(
			"android.util.SparseLongArray",
			"()V"
		) {}
	inline SparseLongArray::SparseLongArray(jint arg0)
		: JObject(
			"android.util.SparseLongArray",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline void SparseLongArray::append(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"append",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	inline void SparseLongArray::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline android::util::SparseLongArray SparseLongArray::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/util/SparseLongArray;"
		);
	}
	inline void SparseLongArray::delete_(jint arg0) const
	{
		callMethod<void>(
			"delete",
			"(I)V",
			arg0
		);
	}
	inline jlong SparseLongArray::get(jint arg0) const
	{
		return callMethod<jlong>(
			"get",
			"(I)J",
			arg0
		);
	}
	inline jlong SparseLongArray::get(jint arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"get",
			"(IJ)J",
			arg0,
			arg1
		);
	}
	inline jint SparseLongArray::indexOfKey(jint arg0) const
	{
		return callMethod<jint>(
			"indexOfKey",
			"(I)I",
			arg0
		);
	}
	inline jint SparseLongArray::indexOfValue(jlong arg0) const
	{
		return callMethod<jint>(
			"indexOfValue",
			"(J)I",
			arg0
		);
	}
	inline jint SparseLongArray::keyAt(jint arg0) const
	{
		return callMethod<jint>(
			"keyAt",
			"(I)I",
			arg0
		);
	}
	inline void SparseLongArray::put(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"put",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	inline void SparseLongArray::removeAt(jint arg0) const
	{
		callMethod<void>(
			"removeAt",
			"(I)V",
			arg0
		);
	}
	inline jint SparseLongArray::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JString SparseLongArray::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jlong SparseLongArray::valueAt(jint arg0) const
	{
		return callMethod<jlong>(
			"valueAt",
			"(I)J",
			arg0
		);
	}
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
