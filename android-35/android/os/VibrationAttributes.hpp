#pragma once

#include "./Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./VibrationAttributes.def.hpp"

namespace android::os
{
	// Fields
	inline JObject VibrationAttributes::CREATOR()
	{
		return getStaticObjectField(
			"android.os.VibrationAttributes",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint VibrationAttributes::FLAG_BYPASS_INTERRUPTION_POLICY()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"FLAG_BYPASS_INTERRUPTION_POLICY"
		);
	}
	inline jint VibrationAttributes::USAGE_ACCESSIBILITY()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_ACCESSIBILITY"
		);
	}
	inline jint VibrationAttributes::USAGE_ALARM()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_ALARM"
		);
	}
	inline jint VibrationAttributes::USAGE_CLASS_ALARM()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_CLASS_ALARM"
		);
	}
	inline jint VibrationAttributes::USAGE_CLASS_FEEDBACK()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_CLASS_FEEDBACK"
		);
	}
	inline jint VibrationAttributes::USAGE_CLASS_MASK()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_CLASS_MASK"
		);
	}
	inline jint VibrationAttributes::USAGE_CLASS_MEDIA()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_CLASS_MEDIA"
		);
	}
	inline jint VibrationAttributes::USAGE_CLASS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_CLASS_UNKNOWN"
		);
	}
	inline jint VibrationAttributes::USAGE_COMMUNICATION_REQUEST()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_COMMUNICATION_REQUEST"
		);
	}
	inline jint VibrationAttributes::USAGE_HARDWARE_FEEDBACK()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_HARDWARE_FEEDBACK"
		);
	}
	inline jint VibrationAttributes::USAGE_MEDIA()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_MEDIA"
		);
	}
	inline jint VibrationAttributes::USAGE_NOTIFICATION()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_NOTIFICATION"
		);
	}
	inline jint VibrationAttributes::USAGE_PHYSICAL_EMULATION()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_PHYSICAL_EMULATION"
		);
	}
	inline jint VibrationAttributes::USAGE_RINGTONE()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_RINGTONE"
		);
	}
	inline jint VibrationAttributes::USAGE_TOUCH()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_TOUCH"
		);
	}
	inline jint VibrationAttributes::USAGE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::os::VibrationAttributes VibrationAttributes::createForUsage(jint arg0)
	{
		return callStaticObjectMethod(
			"android.os.VibrationAttributes",
			"createForUsage",
			"(I)Landroid/os/VibrationAttributes;",
			arg0
		);
	}
	inline jint VibrationAttributes::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean VibrationAttributes::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint VibrationAttributes::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	inline jint VibrationAttributes::getUsage() const
	{
		return callMethod<jint>(
			"getUsage",
			"()I"
		);
	}
	inline jint VibrationAttributes::getUsageClass() const
	{
		return callMethod<jint>(
			"getUsageClass",
			"()I"
		);
	}
	inline jint VibrationAttributes::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean VibrationAttributes::isFlagSet(jint arg0) const
	{
		return callMethod<jboolean>(
			"isFlagSet",
			"(I)Z",
			arg0
		);
	}
	inline JString VibrationAttributes::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void VibrationAttributes::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
