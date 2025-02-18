#pragma once

#include "../../../JArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./SupplicantState.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline android::net::wifi::SupplicantState SupplicantState::ASSOCIATED()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"ASSOCIATED",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	inline android::net::wifi::SupplicantState SupplicantState::ASSOCIATING()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"ASSOCIATING",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	inline android::net::wifi::SupplicantState SupplicantState::AUTHENTICATING()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"AUTHENTICATING",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	inline android::net::wifi::SupplicantState SupplicantState::COMPLETED()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"COMPLETED",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	inline android::net::wifi::SupplicantState SupplicantState::DISCONNECTED()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"DISCONNECTED",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	inline android::net::wifi::SupplicantState SupplicantState::DORMANT()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"DORMANT",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	inline android::net::wifi::SupplicantState SupplicantState::FOUR_WAY_HANDSHAKE()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"FOUR_WAY_HANDSHAKE",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	inline android::net::wifi::SupplicantState SupplicantState::GROUP_HANDSHAKE()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"GROUP_HANDSHAKE",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	inline android::net::wifi::SupplicantState SupplicantState::INACTIVE()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"INACTIVE",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	inline android::net::wifi::SupplicantState SupplicantState::INTERFACE_DISABLED()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"INTERFACE_DISABLED",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	inline android::net::wifi::SupplicantState SupplicantState::INVALID()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"INVALID",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	inline android::net::wifi::SupplicantState SupplicantState::SCANNING()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"SCANNING",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	inline android::net::wifi::SupplicantState SupplicantState::UNINITIALIZED()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"UNINITIALIZED",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean SupplicantState::isValidState(android::net::wifi::SupplicantState arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.wifi.SupplicantState",
			"isValidState",
			"(Landroid/net/wifi/SupplicantState;)Z",
			arg0.object()
		);
	}
	inline android::net::wifi::SupplicantState SupplicantState::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.wifi.SupplicantState",
			"valueOf",
			"(Ljava/lang/String;)Landroid/net/wifi/SupplicantState;",
			arg0.object<jstring>()
		);
	}
	inline JArray SupplicantState::values()
	{
		return callStaticObjectMethod(
			"android.net.wifi.SupplicantState",
			"values",
			"()[Landroid/net/wifi/SupplicantState;"
		);
	}
	inline jint SupplicantState::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void SupplicantState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
