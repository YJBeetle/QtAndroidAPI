#include "../../os/Parcel.hpp"
#include "./SupplicantState.hpp"

namespace android::net::wifi
{
	// Fields
	android::net::wifi::SupplicantState SupplicantState::ASSOCIATED()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"ASSOCIATED",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	android::net::wifi::SupplicantState SupplicantState::ASSOCIATING()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"ASSOCIATING",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	android::net::wifi::SupplicantState SupplicantState::AUTHENTICATING()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"AUTHENTICATING",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	android::net::wifi::SupplicantState SupplicantState::COMPLETED()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"COMPLETED",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	android::net::wifi::SupplicantState SupplicantState::DISCONNECTED()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"DISCONNECTED",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	android::net::wifi::SupplicantState SupplicantState::DORMANT()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"DORMANT",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	android::net::wifi::SupplicantState SupplicantState::FOUR_WAY_HANDSHAKE()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"FOUR_WAY_HANDSHAKE",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	android::net::wifi::SupplicantState SupplicantState::GROUP_HANDSHAKE()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"GROUP_HANDSHAKE",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	android::net::wifi::SupplicantState SupplicantState::INACTIVE()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"INACTIVE",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	android::net::wifi::SupplicantState SupplicantState::INTERFACE_DISABLED()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"INTERFACE_DISABLED",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	android::net::wifi::SupplicantState SupplicantState::INVALID()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"INVALID",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	android::net::wifi::SupplicantState SupplicantState::SCANNING()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"SCANNING",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	android::net::wifi::SupplicantState SupplicantState::UNINITIALIZED()
	{
		return getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"UNINITIALIZED",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	
	// QAndroidJniObject forward
	SupplicantState::SupplicantState(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	jboolean SupplicantState::isValidState(android::net::wifi::SupplicantState arg0)
	{
		return callStaticMethod<jboolean>(
			"android.net.wifi.SupplicantState",
			"isValidState",
			"(Landroid/net/wifi/SupplicantState;)Z",
			arg0.object()
		);
	}
	android::net::wifi::SupplicantState SupplicantState::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.net.wifi.SupplicantState",
			"valueOf",
			"(Ljava/lang/String;)Landroid/net/wifi/SupplicantState;",
			arg0
		);
	}
	jarray SupplicantState::values()
	{
		return callStaticObjectMethod(
			"android.net.wifi.SupplicantState",
			"values",
			"()[Landroid/net/wifi/SupplicantState;"
		).object<jarray>();
	}
	jint SupplicantState::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void SupplicantState::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

