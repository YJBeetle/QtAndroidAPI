#include "./NetworkInfo_State.hpp"

namespace android::net
{
	// Fields
	QAndroidJniObject NetworkInfo_State::CONNECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$State",
			"CONNECTED",
			"Landroid/net/NetworkInfo$State;"
		);
	}
	QAndroidJniObject NetworkInfo_State::CONNECTING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$State",
			"CONNECTING",
			"Landroid/net/NetworkInfo$State;"
		);
	}
	QAndroidJniObject NetworkInfo_State::DISCONNECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$State",
			"DISCONNECTED",
			"Landroid/net/NetworkInfo$State;"
		);
	}
	QAndroidJniObject NetworkInfo_State::DISCONNECTING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$State",
			"DISCONNECTING",
			"Landroid/net/NetworkInfo$State;"
		);
	}
	QAndroidJniObject NetworkInfo_State::SUSPENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$State",
			"SUSPENDED",
			"Landroid/net/NetworkInfo$State;"
		);
	}
	QAndroidJniObject NetworkInfo_State::UNKNOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$State",
			"UNKNOWN",
			"Landroid/net/NetworkInfo$State;"
		);
	}
	
	// QAndroidJniObject forward
	NetworkInfo_State::NetworkInfo_State(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject NetworkInfo_State::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.NetworkInfo$State",
			"valueOf",
			"(Ljava/lang/String;)Landroid/net/NetworkInfo$State;",
			arg0
		);
	}
	jarray NetworkInfo_State::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.NetworkInfo$State",
			"values",
			"()[Landroid/net/NetworkInfo$State;"
		).object<jarray>();
	}
} // namespace android::net

