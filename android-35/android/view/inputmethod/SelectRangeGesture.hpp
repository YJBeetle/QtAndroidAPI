#pragma once

#include "../../graphics/RectF.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./SelectRangeGesture.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject SelectRangeGesture::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.SelectRangeGesture",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SelectRangeGesture::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SelectRangeGesture::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint SelectRangeGesture::getGranularity() const
	{
		return callMethod<jint>(
			"getGranularity",
			"()I"
		);
	}
	inline android::graphics::RectF SelectRangeGesture::getSelectionEndArea() const
	{
		return callObjectMethod(
			"getSelectionEndArea",
			"()Landroid/graphics/RectF;"
		);
	}
	inline android::graphics::RectF SelectRangeGesture::getSelectionStartArea() const
	{
		return callObjectMethod(
			"getSelectionStartArea",
			"()Landroid/graphics/RectF;"
		);
	}
	inline jint SelectRangeGesture::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void SelectRangeGesture::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
#include "./HandwritingGesture.hpp"
#include "./PreviewableHandwritingGesture.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
