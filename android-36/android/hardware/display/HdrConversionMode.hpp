#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./HdrConversionMode.def.hpp"

namespace android::hardware::display
{
	// Fields
	inline JObject HdrConversionMode::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.display.HdrConversionMode",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint HdrConversionMode::HDR_CONVERSION_FORCE()
	{
		return getStaticField<jint>(
			"android.hardware.display.HdrConversionMode",
			"HDR_CONVERSION_FORCE"
		);
	}
	inline jint HdrConversionMode::HDR_CONVERSION_PASSTHROUGH()
	{
		return getStaticField<jint>(
			"android.hardware.display.HdrConversionMode",
			"HDR_CONVERSION_PASSTHROUGH"
		);
	}
	inline jint HdrConversionMode::HDR_CONVERSION_SYSTEM()
	{
		return getStaticField<jint>(
			"android.hardware.display.HdrConversionMode",
			"HDR_CONVERSION_SYSTEM"
		);
	}
	inline jint HdrConversionMode::HDR_CONVERSION_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.hardware.display.HdrConversionMode",
			"HDR_CONVERSION_UNSUPPORTED"
		);
	}
	
	// Constructors
	inline HdrConversionMode::HdrConversionMode(jint arg0)
		: JObject(
			"android.hardware.display.HdrConversionMode",
			"(I)V",
			arg0
		) {}
	inline HdrConversionMode::HdrConversionMode(jint arg0, jint arg1)
		: JObject(
			"android.hardware.display.HdrConversionMode",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint HdrConversionMode::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean HdrConversionMode::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint HdrConversionMode::getConversionMode() const
	{
		return callMethod<jint>(
			"getConversionMode",
			"()I"
		);
	}
	inline jint HdrConversionMode::getPreferredHdrOutputType() const
	{
		return callMethod<jint>(
			"getPreferredHdrOutputType",
			"()I"
		);
	}
	inline jint HdrConversionMode::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString HdrConversionMode::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void HdrConversionMode::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::display

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::display;
#endif
