#include "../MacAddress.hpp"
#include "../../os/Parcel.hpp"
#include "./SoftApConfiguration.hpp"

namespace android::net::wifi
{
	// Fields
	JObject SoftApConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.SoftApConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SoftApConfiguration::SECURITY_TYPE_OPEN()
	{
		return getStaticField<jint>(
			"android.net.wifi.SoftApConfiguration",
			"SECURITY_TYPE_OPEN"
		);
	}
	jint SoftApConfiguration::SECURITY_TYPE_WPA2_PSK()
	{
		return getStaticField<jint>(
			"android.net.wifi.SoftApConfiguration",
			"SECURITY_TYPE_WPA2_PSK"
		);
	}
	jint SoftApConfiguration::SECURITY_TYPE_WPA3_SAE()
	{
		return getStaticField<jint>(
			"android.net.wifi.SoftApConfiguration",
			"SECURITY_TYPE_WPA3_SAE"
		);
	}
	jint SoftApConfiguration::SECURITY_TYPE_WPA3_SAE_TRANSITION()
	{
		return getStaticField<jint>(
			"android.net.wifi.SoftApConfiguration",
			"SECURITY_TYPE_WPA3_SAE_TRANSITION"
		);
	}
	
	// QJniObject forward
	SoftApConfiguration::SoftApConfiguration(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SoftApConfiguration::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SoftApConfiguration::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::net::MacAddress SoftApConfiguration::getBssid()
	{
		return callObjectMethod(
			"getBssid",
			"()Landroid/net/MacAddress;"
		);
	}
	jstring SoftApConfiguration::getPassphrase()
	{
		return callObjectMethod(
			"getPassphrase",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SoftApConfiguration::getSecurityType()
	{
		return callMethod<jint>(
			"getSecurityType",
			"()I"
		);
	}
	jstring SoftApConfiguration::getSsid()
	{
		return callObjectMethod(
			"getSsid",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SoftApConfiguration::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean SoftApConfiguration::isHiddenSsid()
	{
		return callMethod<jboolean>(
			"isHiddenSsid",
			"()Z"
		);
	}
	jstring SoftApConfiguration::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SoftApConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

