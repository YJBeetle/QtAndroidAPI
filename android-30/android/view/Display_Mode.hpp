#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Display_Mode.def.hpp"

namespace android::view
{
	// Fields
	inline JObject Display_Mode::CREATOR()
	{
		return getStaticObjectField(
			"android.view.Display$Mode",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Display_Mode::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Display_Mode::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Display_Mode::getModeId() const
	{
		return callMethod<jint>(
			"getModeId",
			"()I"
		);
	}
	inline jint Display_Mode::getPhysicalHeight() const
	{
		return callMethod<jint>(
			"getPhysicalHeight",
			"()I"
		);
	}
	inline jint Display_Mode::getPhysicalWidth() const
	{
		return callMethod<jint>(
			"getPhysicalWidth",
			"()I"
		);
	}
	inline jfloat Display_Mode::getRefreshRate() const
	{
		return callMethod<jfloat>(
			"getRefreshRate",
			"()F"
		);
	}
	inline jint Display_Mode::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Display_Mode::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Display_Mode::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

// Base class headers

