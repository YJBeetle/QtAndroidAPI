#pragma once

#include "../../graphics/RectF.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./DeleteGesture.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject DeleteGesture::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.DeleteGesture",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint DeleteGesture::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean DeleteGesture::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::graphics::RectF DeleteGesture::getDeletionArea() const
	{
		return callObjectMethod(
			"getDeletionArea",
			"()Landroid/graphics/RectF;"
		);
	}
	inline jint DeleteGesture::getGranularity() const
	{
		return callMethod<jint>(
			"getGranularity",
			"()I"
		);
	}
	inline jint DeleteGesture::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void DeleteGesture::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
