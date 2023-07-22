#pragma once

#include "../../../os/Parcel.def.hpp"
#include "./Characteristics.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	inline JObject Characteristics::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.Characteristics",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Characteristics::WIFI_AWARE_CIPHER_SUITE_NCS_PK_128()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.Characteristics",
			"WIFI_AWARE_CIPHER_SUITE_NCS_PK_128"
		);
	}
	inline jint Characteristics::WIFI_AWARE_CIPHER_SUITE_NCS_PK_256()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.Characteristics",
			"WIFI_AWARE_CIPHER_SUITE_NCS_PK_256"
		);
	}
	inline jint Characteristics::WIFI_AWARE_CIPHER_SUITE_NCS_SK_128()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.Characteristics",
			"WIFI_AWARE_CIPHER_SUITE_NCS_SK_128"
		);
	}
	inline jint Characteristics::WIFI_AWARE_CIPHER_SUITE_NCS_SK_256()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.Characteristics",
			"WIFI_AWARE_CIPHER_SUITE_NCS_SK_256"
		);
	}
	inline jint Characteristics::WIFI_AWARE_CIPHER_SUITE_NONE()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.Characteristics",
			"WIFI_AWARE_CIPHER_SUITE_NONE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Characteristics::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint Characteristics::getMaxMatchFilterLength() const
	{
		return callMethod<jint>(
			"getMaxMatchFilterLength",
			"()I"
		);
	}
	inline jint Characteristics::getMaxServiceNameLength() const
	{
		return callMethod<jint>(
			"getMaxServiceNameLength",
			"()I"
		);
	}
	inline jint Characteristics::getMaxServiceSpecificInfoLength() const
	{
		return callMethod<jint>(
			"getMaxServiceSpecificInfoLength",
			"()I"
		);
	}
	inline jint Characteristics::getNumberOfSupportedDataInterfaces() const
	{
		return callMethod<jint>(
			"getNumberOfSupportedDataInterfaces",
			"()I"
		);
	}
	inline jint Characteristics::getNumberOfSupportedDataPaths() const
	{
		return callMethod<jint>(
			"getNumberOfSupportedDataPaths",
			"()I"
		);
	}
	inline jint Characteristics::getNumberOfSupportedPublishSessions() const
	{
		return callMethod<jint>(
			"getNumberOfSupportedPublishSessions",
			"()I"
		);
	}
	inline jint Characteristics::getNumberOfSupportedSubscribeSessions() const
	{
		return callMethod<jint>(
			"getNumberOfSupportedSubscribeSessions",
			"()I"
		);
	}
	inline jint Characteristics::getSupportedCipherSuites() const
	{
		return callMethod<jint>(
			"getSupportedCipherSuites",
			"()I"
		);
	}
	inline jboolean Characteristics::isInstantCommunicationModeSupported() const
	{
		return callMethod<jboolean>(
			"isInstantCommunicationModeSupported",
			"()Z"
		);
	}
	inline void Characteristics::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::aware;
#endif
