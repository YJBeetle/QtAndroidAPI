#pragma once

#include "../../graphics/PointF.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./JoinOrSplitGesture.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject JoinOrSplitGesture::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.JoinOrSplitGesture",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint JoinOrSplitGesture::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean JoinOrSplitGesture::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::graphics::PointF JoinOrSplitGesture::getJoinOrSplitPoint() const
	{
		return callObjectMethod(
			"getJoinOrSplitPoint",
			"()Landroid/graphics/PointF;"
		);
	}
	inline jint JoinOrSplitGesture::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void JoinOrSplitGesture::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
