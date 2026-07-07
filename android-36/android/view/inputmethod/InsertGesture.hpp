#pragma once

#include "../../graphics/PointF.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./InsertGesture.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject InsertGesture::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InsertGesture",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint InsertGesture::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean InsertGesture::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::graphics::PointF InsertGesture::getInsertionPoint() const
	{
		return callObjectMethod(
			"getInsertionPoint",
			"()Landroid/graphics/PointF;"
		);
	}
	inline JString InsertGesture::getTextToInsert() const
	{
		return callObjectMethod(
			"getTextToInsert",
			"()Ljava/lang/String;"
		);
	}
	inline jint InsertGesture::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void InsertGesture::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
