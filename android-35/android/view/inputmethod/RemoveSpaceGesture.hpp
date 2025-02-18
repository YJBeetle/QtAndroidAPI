#pragma once

#include "../../graphics/PointF.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./RemoveSpaceGesture.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject RemoveSpaceGesture::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.RemoveSpaceGesture",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RemoveSpaceGesture::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RemoveSpaceGesture::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::graphics::PointF RemoveSpaceGesture::getEndPoint() const
	{
		return callObjectMethod(
			"getEndPoint",
			"()Landroid/graphics/PointF;"
		);
	}
	inline android::graphics::PointF RemoveSpaceGesture::getStartPoint() const
	{
		return callObjectMethod(
			"getStartPoint",
			"()Landroid/graphics/PointF;"
		);
	}
	inline jint RemoveSpaceGesture::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void RemoveSpaceGesture::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
