#include "../../os/Parcel.hpp"
#include "./ScanResult.hpp"

namespace android::net::wifi
{
	// Fields
	jstring ScanResult::BSSID()
	{
		return __thiz.getObjectField(
			"BSSID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ScanResult::CHANNEL_WIDTH_160MHZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_160MHZ"
		);
	}
	jint ScanResult::CHANNEL_WIDTH_20MHZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_20MHZ"
		);
	}
	jint ScanResult::CHANNEL_WIDTH_40MHZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_40MHZ"
		);
	}
	jint ScanResult::CHANNEL_WIDTH_80MHZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_80MHZ"
		);
	}
	jint ScanResult::CHANNEL_WIDTH_80MHZ_PLUS_MHZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_80MHZ_PLUS_MHZ"
		);
	}
	jstring ScanResult::SSID()
	{
		return __thiz.getObjectField(
			"SSID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ScanResult::capabilities()
	{
		return __thiz.getObjectField(
			"capabilities",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ScanResult::centerFreq0()
	{
		return __thiz.getField<jint>(
			"centerFreq0"
		);
	}
	jint ScanResult::centerFreq1()
	{
		return __thiz.getField<jint>(
			"centerFreq1"
		);
	}
	jint ScanResult::channelWidth()
	{
		return __thiz.getField<jint>(
			"channelWidth"
		);
	}
	jint ScanResult::frequency()
	{
		return __thiz.getField<jint>(
			"frequency"
		);
	}
	jint ScanResult::level()
	{
		return __thiz.getField<jint>(
			"level"
		);
	}
	jstring ScanResult::operatorFriendlyName()
	{
		return __thiz.getObjectField(
			"operatorFriendlyName",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jlong ScanResult::timestamp()
	{
		return __thiz.getField<jlong>(
			"timestamp"
		);
	}
	jstring ScanResult::venueName()
	{
		return __thiz.getObjectField(
			"venueName",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	
	ScanResult::ScanResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint ScanResult::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ScanResult::is80211mcResponder()
	{
		return __thiz.callMethod<jboolean>(
			"is80211mcResponder",
			"()Z"
		);
	}
	jboolean ScanResult::isPasspointNetwork()
	{
		return __thiz.callMethod<jboolean>(
			"isPasspointNetwork",
			"()Z"
		);
	}
	jstring ScanResult::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ScanResult::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::wifi

