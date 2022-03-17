#pragma once

#include "../../JIntArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "./Display_HdrCapabilities.def.hpp"

namespace android::view
{
	// Fields
	inline JObject Display_HdrCapabilities::CREATOR()
	{
		return getStaticObjectField(
			"android.view.Display$HdrCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Display_HdrCapabilities::HDR_TYPE_DOLBY_VISION()
	{
		return getStaticField<jint>(
			"android.view.Display$HdrCapabilities",
			"HDR_TYPE_DOLBY_VISION"
		);
	}
	inline jint Display_HdrCapabilities::HDR_TYPE_HDR10()
	{
		return getStaticField<jint>(
			"android.view.Display$HdrCapabilities",
			"HDR_TYPE_HDR10"
		);
	}
	inline jint Display_HdrCapabilities::HDR_TYPE_HLG()
	{
		return getStaticField<jint>(
			"android.view.Display$HdrCapabilities",
			"HDR_TYPE_HLG"
		);
	}
	inline jfloat Display_HdrCapabilities::INVALID_LUMINANCE()
	{
		return getStaticField<jfloat>(
			"android.view.Display$HdrCapabilities",
			"INVALID_LUMINANCE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Display_HdrCapabilities::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Display_HdrCapabilities::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat Display_HdrCapabilities::getDesiredMaxAverageLuminance() const
	{
		return callMethod<jfloat>(
			"getDesiredMaxAverageLuminance",
			"()F"
		);
	}
	inline jfloat Display_HdrCapabilities::getDesiredMaxLuminance() const
	{
		return callMethod<jfloat>(
			"getDesiredMaxLuminance",
			"()F"
		);
	}
	inline jfloat Display_HdrCapabilities::getDesiredMinLuminance() const
	{
		return callMethod<jfloat>(
			"getDesiredMinLuminance",
			"()F"
		);
	}
	inline JIntArray Display_HdrCapabilities::getSupportedHdrTypes() const
	{
		return callObjectMethod(
			"getSupportedHdrTypes",
			"()[I"
		);
	}
	inline jint Display_HdrCapabilities::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void Display_HdrCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

