#pragma once

#include "../../graphics/RectF.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./SelectGesture.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject SelectGesture::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.SelectGesture",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SelectGesture::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SelectGesture::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint SelectGesture::getGranularity() const
	{
		return callMethod<jint>(
			"getGranularity",
			"()I"
		);
	}
	inline android::graphics::RectF SelectGesture::getSelectionArea() const
	{
		return callObjectMethod(
			"getSelectionArea",
			"()Landroid/graphics/RectF;"
		);
	}
	inline jint SelectGesture::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void SelectGesture::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
