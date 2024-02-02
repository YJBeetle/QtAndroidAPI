#pragma once

#include "../../graphics/PointF.def.hpp"
#include "../../os/CancellationSignal.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./InsertModeGesture.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject InsertModeGesture::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InsertModeGesture",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint InsertModeGesture::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean InsertModeGesture::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::os::CancellationSignal InsertModeGesture::getCancellationSignal() const
	{
		return callObjectMethod(
			"getCancellationSignal",
			"()Landroid/os/CancellationSignal;"
		);
	}
	inline android::graphics::PointF InsertModeGesture::getInsertionPoint() const
	{
		return callObjectMethod(
			"getInsertionPoint",
			"()Landroid/graphics/PointF;"
		);
	}
	inline jint InsertModeGesture::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void InsertModeGesture::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
