#include "../../../os/Parcel.hpp"
#include "./Characteristics.hpp"

namespace android::net::wifi::aware
{
	// Fields
	JObject Characteristics::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.Characteristics",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Characteristics::WIFI_AWARE_CIPHER_SUITE_NCS_SK_128()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.Characteristics",
			"WIFI_AWARE_CIPHER_SUITE_NCS_SK_128"
		);
	}
	jint Characteristics::WIFI_AWARE_CIPHER_SUITE_NCS_SK_256()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.Characteristics",
			"WIFI_AWARE_CIPHER_SUITE_NCS_SK_256"
		);
	}
	
	// QJniObject forward
	Characteristics::Characteristics(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Characteristics::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint Characteristics::getMaxMatchFilterLength() const
	{
		return callMethod<jint>(
			"getMaxMatchFilterLength",
			"()I"
		);
	}
	jint Characteristics::getMaxServiceNameLength() const
	{
		return callMethod<jint>(
			"getMaxServiceNameLength",
			"()I"
		);
	}
	jint Characteristics::getMaxServiceSpecificInfoLength() const
	{
		return callMethod<jint>(
			"getMaxServiceSpecificInfoLength",
			"()I"
		);
	}
	jint Characteristics::getSupportedCipherSuites() const
	{
		return callMethod<jint>(
			"getSupportedCipherSuites",
			"()I"
		);
	}
	jboolean Characteristics::isInstantCommunicationModeSupported() const
	{
		return callMethod<jboolean>(
			"isInstantCommunicationModeSupported",
			"()Z"
		);
	}
	void Characteristics::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

