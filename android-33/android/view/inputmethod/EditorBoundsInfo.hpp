#pragma once

#include "../../graphics/RectF.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./EditorBoundsInfo.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject EditorBoundsInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.EditorBoundsInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint EditorBoundsInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean EditorBoundsInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::graphics::RectF EditorBoundsInfo::getEditorBounds() const
	{
		return callObjectMethod(
			"getEditorBounds",
			"()Landroid/graphics/RectF;"
		);
	}
	inline android::graphics::RectF EditorBoundsInfo::getHandwritingBounds() const
	{
		return callObjectMethod(
			"getHandwritingBounds",
			"()Landroid/graphics/RectF;"
		);
	}
	inline jint EditorBoundsInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString EditorBoundsInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void EditorBoundsInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
