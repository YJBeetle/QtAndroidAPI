#pragma once

#include "../Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./VibratorEnvelopeEffectInfo.def.hpp"

namespace android::os::vibrator
{
	// Fields
	inline JObject VibratorEnvelopeEffectInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.os.vibrator.VibratorEnvelopeEffectInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint VibratorEnvelopeEffectInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean VibratorEnvelopeEffectInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong VibratorEnvelopeEffectInfo::getMaxControlPointDurationMillis() const
	{
		return callMethod<jlong>(
			"getMaxControlPointDurationMillis",
			"()J"
		);
	}
	inline jlong VibratorEnvelopeEffectInfo::getMaxDurationMillis() const
	{
		return callMethod<jlong>(
			"getMaxDurationMillis",
			"()J"
		);
	}
	inline jint VibratorEnvelopeEffectInfo::getMaxSize() const
	{
		return callMethod<jint>(
			"getMaxSize",
			"()I"
		);
	}
	inline jlong VibratorEnvelopeEffectInfo::getMinControlPointDurationMillis() const
	{
		return callMethod<jlong>(
			"getMinControlPointDurationMillis",
			"()J"
		);
	}
	inline jint VibratorEnvelopeEffectInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString VibratorEnvelopeEffectInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void VibratorEnvelopeEffectInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os::vibrator

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os::vibrator;
#endif
