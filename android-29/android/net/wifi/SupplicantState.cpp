#include "../../os/Parcel.hpp"
#include "./SupplicantState.hpp"

namespace android::net::wifi
{
	// Fields
	QAndroidJniObject SupplicantState::ASSOCIATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"ASSOCIATED",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	QAndroidJniObject SupplicantState::ASSOCIATING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"ASSOCIATING",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	QAndroidJniObject SupplicantState::AUTHENTICATING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"AUTHENTICATING",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	QAndroidJniObject SupplicantState::COMPLETED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"COMPLETED",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	QAndroidJniObject SupplicantState::DISCONNECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"DISCONNECTED",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	QAndroidJniObject SupplicantState::DORMANT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"DORMANT",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	QAndroidJniObject SupplicantState::FOUR_WAY_HANDSHAKE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"FOUR_WAY_HANDSHAKE",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	QAndroidJniObject SupplicantState::GROUP_HANDSHAKE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"GROUP_HANDSHAKE",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	QAndroidJniObject SupplicantState::INACTIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"INACTIVE",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	QAndroidJniObject SupplicantState::INTERFACE_DISABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"INTERFACE_DISABLED",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	QAndroidJniObject SupplicantState::INVALID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"INVALID",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	QAndroidJniObject SupplicantState::SCANNING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"SCANNING",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	QAndroidJniObject SupplicantState::UNINITIALIZED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.SupplicantState",
			"UNINITIALIZED",
			"Landroid/net/wifi/SupplicantState;"
		);
	}
	
	SupplicantState::SupplicantState(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean SupplicantState::isValidState(android::net::wifi::SupplicantState arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.wifi.SupplicantState",
			"isValidState",
			"(Landroid/net/wifi/SupplicantState;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SupplicantState::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.SupplicantState",
			"valueOf",
			"(Ljava/lang/String;)Landroid/net/wifi/SupplicantState;",
			arg0
		);
	}
	jarray SupplicantState::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.SupplicantState",
			"values",
			"()[Landroid/net/wifi/SupplicantState;"
		).object<jarray>();
	}
	jint SupplicantState::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void SupplicantState::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::wifi

