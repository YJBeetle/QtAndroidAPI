#include "./Parcel.hpp"
#include "./VibrationAttributes.hpp"

namespace android::os
{
	// Fields
	__JniBaseClass VibrationAttributes::CREATOR()
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
	VibrationAttributes::VibrationAttributes(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint VibrationAttributes::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean VibrationAttributes::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint VibrationAttributes::getFlags()
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	jint VibrationAttributes::getUsage()
	{
		return callMethod<jint>(
			"getUsage",
			"()I"
		);
	}
	jint VibrationAttributes::getUsageClass()
	{
		return callMethod<jint>(
			"getUsageClass",
			"()I"
		);
	}
	jint VibrationAttributes::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean VibrationAttributes::isFlagSet(jint arg0)
	{
		return callMethod<jboolean>(
			"isFlagSet",
			"(I)Z",
			arg0
		);
	}
	jstring VibrationAttributes::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VibrationAttributes::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

