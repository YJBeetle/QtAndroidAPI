#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./ParameterCapability.def.hpp"

namespace android::media::quality
{
	// Fields
	inline JString ParameterCapability::CAPABILITY_DEFAULT()
	{
		return getStaticObjectField(
			"android.media.quality.ParameterCapability",
			"CAPABILITY_DEFAULT",
			"Ljava/lang/String;"
		);
	}
	inline JString ParameterCapability::CAPABILITY_ENUM()
	{
		return getStaticObjectField(
			"android.media.quality.ParameterCapability",
			"CAPABILITY_ENUM",
			"Ljava/lang/String;"
		);
	}
	inline JString ParameterCapability::CAPABILITY_MAX()
	{
		return getStaticObjectField(
			"android.media.quality.ParameterCapability",
			"CAPABILITY_MAX",
			"Ljava/lang/String;"
		);
	}
	inline JString ParameterCapability::CAPABILITY_MIN()
	{
		return getStaticObjectField(
			"android.media.quality.ParameterCapability",
			"CAPABILITY_MIN",
			"Ljava/lang/String;"
		);
	}
	inline JObject ParameterCapability::CREATOR()
	{
		return getStaticObjectField(
			"android.media.quality.ParameterCapability",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ParameterCapability::TYPE_DOUBLE()
	{
		return getStaticField<jint>(
			"android.media.quality.ParameterCapability",
			"TYPE_DOUBLE"
		);
	}
	inline jint ParameterCapability::TYPE_INT()
	{
		return getStaticField<jint>(
			"android.media.quality.ParameterCapability",
			"TYPE_INT"
		);
	}
	inline jint ParameterCapability::TYPE_LONG()
	{
		return getStaticField<jint>(
			"android.media.quality.ParameterCapability",
			"TYPE_LONG"
		);
	}
	inline jint ParameterCapability::TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.media.quality.ParameterCapability",
			"TYPE_NONE"
		);
	}
	inline jint ParameterCapability::TYPE_STRING()
	{
		return getStaticField<jint>(
			"android.media.quality.ParameterCapability",
			"TYPE_STRING"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ParameterCapability::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::Bundle ParameterCapability::getCapabilities() const
	{
		return callObjectMethod(
			"getCapabilities",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString ParameterCapability::getParameterName() const
	{
		return callObjectMethod(
			"getParameterName",
			"()Ljava/lang/String;"
		);
	}
	inline jint ParameterCapability::getParameterType() const
	{
		return callMethod<jint>(
			"getParameterType",
			"()I"
		);
	}
	inline jboolean ParameterCapability::isSupported() const
	{
		return callMethod<jboolean>(
			"isSupported",
			"()Z"
		);
	}
	inline void ParameterCapability::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::quality

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::quality;
#endif
