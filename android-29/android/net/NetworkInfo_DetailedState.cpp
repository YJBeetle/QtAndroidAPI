#include "./NetworkInfo_DetailedState.hpp"

namespace android::net
{
	// Fields
	QAndroidJniObject NetworkInfo_DetailedState::AUTHENTICATING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"AUTHENTICATING",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	QAndroidJniObject NetworkInfo_DetailedState::BLOCKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"BLOCKED",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	QAndroidJniObject NetworkInfo_DetailedState::CAPTIVE_PORTAL_CHECK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"CAPTIVE_PORTAL_CHECK",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	QAndroidJniObject NetworkInfo_DetailedState::CONNECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"CONNECTED",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	QAndroidJniObject NetworkInfo_DetailedState::CONNECTING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"CONNECTING",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	QAndroidJniObject NetworkInfo_DetailedState::DISCONNECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"DISCONNECTED",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	QAndroidJniObject NetworkInfo_DetailedState::DISCONNECTING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"DISCONNECTING",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	QAndroidJniObject NetworkInfo_DetailedState::FAILED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"FAILED",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	QAndroidJniObject NetworkInfo_DetailedState::IDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"IDLE",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	QAndroidJniObject NetworkInfo_DetailedState::OBTAINING_IPADDR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"OBTAINING_IPADDR",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	QAndroidJniObject NetworkInfo_DetailedState::SCANNING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"SCANNING",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	QAndroidJniObject NetworkInfo_DetailedState::SUSPENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"SUSPENDED",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	QAndroidJniObject NetworkInfo_DetailedState::VERIFYING_POOR_LINK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$DetailedState",
			"VERIFYING_POOR_LINK",
			"Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	
	// QAndroidJniObject forward
	NetworkInfo_DetailedState::NetworkInfo_DetailedState(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject NetworkInfo_DetailedState::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.NetworkInfo$DetailedState",
			"valueOf",
			"(Ljava/lang/String;)Landroid/net/NetworkInfo$DetailedState;",
			arg0
		);
	}
	jarray NetworkInfo_DetailedState::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.NetworkInfo$DetailedState",
			"values",
			"()[Landroid/net/NetworkInfo$DetailedState;"
		).object<jarray>();
	}
} // namespace android::net

