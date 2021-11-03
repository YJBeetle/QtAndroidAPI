#include "./Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./VibrationAttributes.hpp"

namespace android::os
{
	// Fields
	JObject VibrationAttributes::CREATOR()
	{
		return getStaticObjectField(
			"android.os.VibrationAttributes",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint VibrationAttributes::FLAG_BYPASS_INTERRUPTION_POLICY()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"FLAG_BYPASS_INTERRUPTION_POLICY"
		);
	}
	jint VibrationAttributes::USAGE_ALARM()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_ALARM"
		);
	}
	jint VibrationAttributes::USAGE_CLASS_ALARM()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_CLASS_ALARM"
		);
	}
	jint VibrationAttributes::USAGE_CLASS_FEEDBACK()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_CLASS_FEEDBACK"
		);
	}
	jint VibrationAttributes::USAGE_CLASS_MASK()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_CLASS_MASK"
		);
	}
	jint VibrationAttributes::USAGE_CLASS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_CLASS_UNKNOWN"
		);
	}
	jint VibrationAttributes::USAGE_COMMUNICATION_REQUEST()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_COMMUNICATION_REQUEST"
		);
	}
	jint VibrationAttributes::USAGE_HARDWARE_FEEDBACK()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_HARDWARE_FEEDBACK"
		);
	}
	jint VibrationAttributes::USAGE_NOTIFICATION()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_NOTIFICATION"
		);
	}
	jint VibrationAttributes::USAGE_PHYSICAL_EMULATION()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_PHYSICAL_EMULATION"
		);
	}
	jint VibrationAttributes::USAGE_RINGTONE()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_RINGTONE"
		);
	}
	jint VibrationAttributes::USAGE_TOUCH()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_TOUCH"
		);
	}
	jint VibrationAttributes::USAGE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.os.VibrationAttributes",
			"USAGE_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	VibrationAttributes::VibrationAttributes(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint VibrationAttributes::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean VibrationAttributes::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint VibrationAttributes::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	jint VibrationAttributes::getUsage() const
	{
		return callMethod<jint>(
			"getUsage",
			"()I"
		);
	}
	jint VibrationAttributes::getUsageClass() const
	{
		return callMethod<jint>(
			"getUsageClass",
			"()I"
		);
	}
	jint VibrationAttributes::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean VibrationAttributes::isFlagSet(jint arg0) const
	{
		return callMethod<jboolean>(
			"isFlagSet",
			"(I)Z",
			arg0
		);
	}
	JString VibrationAttributes::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void VibrationAttributes::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

