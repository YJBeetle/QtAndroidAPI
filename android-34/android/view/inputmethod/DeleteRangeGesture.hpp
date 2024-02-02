#pragma once

#include "../../graphics/RectF.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./DeleteRangeGesture.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject DeleteRangeGesture::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.DeleteRangeGesture",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint DeleteRangeGesture::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean DeleteRangeGesture::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::graphics::RectF DeleteRangeGesture::getDeletionEndArea() const
	{
		return callObjectMethod(
			"getDeletionEndArea",
			"()Landroid/graphics/RectF;"
		);
	}
	inline android::graphics::RectF DeleteRangeGesture::getDeletionStartArea() const
	{
		return callObjectMethod(
			"getDeletionStartArea",
			"()Landroid/graphics/RectF;"
		);
	}
	inline jint DeleteRangeGesture::getGranularity() const
	{
		return callMethod<jint>(
			"getGranularity",
			"()I"
		);
	}
	inline jint DeleteRangeGesture::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void DeleteRangeGesture::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
