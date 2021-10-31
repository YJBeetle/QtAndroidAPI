#include "./NetworkInfo_State.hpp"

namespace android::net
{
	// Fields
	android::net::NetworkInfo_State NetworkInfo_State::CONNECTED()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$State",
			"CONNECTED",
			"Landroid/net/NetworkInfo$State;"
		);
	}
	android::net::NetworkInfo_State NetworkInfo_State::CONNECTING()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$State",
			"CONNECTING",
			"Landroid/net/NetworkInfo$State;"
		);
	}
	android::net::NetworkInfo_State NetworkInfo_State::DISCONNECTED()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$State",
			"DISCONNECTED",
			"Landroid/net/NetworkInfo$State;"
		);
	}
	android::net::NetworkInfo_State NetworkInfo_State::DISCONNECTING()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$State",
			"DISCONNECTING",
			"Landroid/net/NetworkInfo$State;"
		);
	}
	android::net::NetworkInfo_State NetworkInfo_State::SUSPENDED()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$State",
			"SUSPENDED",
			"Landroid/net/NetworkInfo$State;"
		);
	}
	android::net::NetworkInfo_State NetworkInfo_State::UNKNOWN()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo$State",
			"UNKNOWN",
			"Landroid/net/NetworkInfo$State;"
		);
	}
	
	// QAndroidJniObject forward
	NetworkInfo_State::NetworkInfo_State(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::net::NetworkInfo_State NetworkInfo_State::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.net.NetworkInfo$State",
			"valueOf",
			"(Ljava/lang/String;)Landroid/net/NetworkInfo$State;",
			arg0
		);
	}
	jarray NetworkInfo_State::values()
	{
		return callStaticObjectMethod(
			"android.net.NetworkInfo$State",
			"values",
			"()[Landroid/net/NetworkInfo$State;"
		).object<jarray>();
	}
} // namespace android::net

