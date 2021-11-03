#include "../os/Parcel.hpp"
#include "./SignalThresholdInfo.hpp"

namespace android::telephony
{
	// Fields
	JObject SignalThresholdInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.SignalThresholdInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SignalThresholdInfo::SIGNAL_MEASUREMENT_TYPE_RSCP()
	{
		return getStaticField<jint>(
			"android.telephony.SignalThresholdInfo",
			"SIGNAL_MEASUREMENT_TYPE_RSCP"
		);
	}
	jint SignalThresholdInfo::SIGNAL_MEASUREMENT_TYPE_RSRP()
	{
		return getStaticField<jint>(
			"android.telephony.SignalThresholdInfo",
			"SIGNAL_MEASUREMENT_TYPE_RSRP"
		);
	}
	jint SignalThresholdInfo::SIGNAL_MEASUREMENT_TYPE_RSRQ()
	{
		return getStaticField<jint>(
			"android.telephony.SignalThresholdInfo",
			"SIGNAL_MEASUREMENT_TYPE_RSRQ"
		);
	}
	jint SignalThresholdInfo::SIGNAL_MEASUREMENT_TYPE_RSSI()
	{
		return getStaticField<jint>(
			"android.telephony.SignalThresholdInfo",
			"SIGNAL_MEASUREMENT_TYPE_RSSI"
		);
	}
	jint SignalThresholdInfo::SIGNAL_MEASUREMENT_TYPE_RSSNR()
	{
		return getStaticField<jint>(
			"android.telephony.SignalThresholdInfo",
			"SIGNAL_MEASUREMENT_TYPE_RSSNR"
		);
	}
	jint SignalThresholdInfo::SIGNAL_MEASUREMENT_TYPE_SSRSRP()
	{
		return getStaticField<jint>(
			"android.telephony.SignalThresholdInfo",
			"SIGNAL_MEASUREMENT_TYPE_SSRSRP"
		);
	}
	jint SignalThresholdInfo::SIGNAL_MEASUREMENT_TYPE_SSRSRQ()
	{
		return getStaticField<jint>(
			"android.telephony.SignalThresholdInfo",
			"SIGNAL_MEASUREMENT_TYPE_SSRSRQ"
		);
	}
	jint SignalThresholdInfo::SIGNAL_MEASUREMENT_TYPE_SSSINR()
	{
		return getStaticField<jint>(
			"android.telephony.SignalThresholdInfo",
			"SIGNAL_MEASUREMENT_TYPE_SSSINR"
		);
	}
	jint SignalThresholdInfo::SIGNAL_MEASUREMENT_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.SignalThresholdInfo",
			"SIGNAL_MEASUREMENT_TYPE_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	SignalThresholdInfo::SignalThresholdInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SignalThresholdInfo::getMaximumNumberOfThresholdsAllowed()
	{
		return callStaticMethod<jint>(
			"android.telephony.SignalThresholdInfo",
			"getMaximumNumberOfThresholdsAllowed",
			"()I"
		);
	}
	jint SignalThresholdInfo::getMinimumNumberOfThresholdsAllowed()
	{
		return callStaticMethod<jint>(
			"android.telephony.SignalThresholdInfo",
			"getMinimumNumberOfThresholdsAllowed",
			"()I"
		);
	}
	jint SignalThresholdInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SignalThresholdInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint SignalThresholdInfo::getRadioAccessNetworkType()
	{
		return callMethod<jint>(
			"getRadioAccessNetworkType",
			"()I"
		);
	}
	jint SignalThresholdInfo::getSignalMeasurementType()
	{
		return callMethod<jint>(
			"getSignalMeasurementType",
			"()I"
		);
	}
	jintArray SignalThresholdInfo::getThresholds()
	{
		return callObjectMethod(
			"getThresholds",
			"()[I"
		).object<jintArray>();
	}
	jint SignalThresholdInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring SignalThresholdInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SignalThresholdInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

