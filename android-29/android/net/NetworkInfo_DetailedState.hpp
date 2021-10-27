#pragma once

#ifndef ANDROID_NET_NETWORKINFO_DETAILEDSTATE
#define ANDROID_NET_NETWORKINFO_DETAILEDSTATE

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::net
{
	class NetworkInfo_DetailedState : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject AUTHENTICATING();
		static QAndroidJniObject BLOCKED();
		static QAndroidJniObject CAPTIVE_PORTAL_CHECK();
		static QAndroidJniObject CONNECTED();
		static QAndroidJniObject CONNECTING();
		static QAndroidJniObject DISCONNECTED();
		static QAndroidJniObject DISCONNECTING();
		static QAndroidJniObject FAILED();
		static QAndroidJniObject IDLE();
		static QAndroidJniObject OBTAINING_IPADDR();
		static QAndroidJniObject SCANNING();
		static QAndroidJniObject SUSPENDED();
		static QAndroidJniObject VERIFYING_POOR_LINK();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::net


namespace __jni_impl::android::net
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
	
	// Constructors
	void NetworkInfo_DetailedState::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.NetworkInfo$DetailedState",
			"(V)V");
	}
	
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
	QAndroidJniObject NetworkInfo_DetailedState::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.NetworkInfo$DetailedState",
			"valueOf",
			"(Ljava/lang/String;)Landroid/net/NetworkInfo$DetailedState;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
} // namespace __jni_impl::android::net

namespace android::net
{
	class NetworkInfo_DetailedState : public __jni_impl::android::net::NetworkInfo_DetailedState
	{
	public:
		NetworkInfo_DetailedState(QAndroidJniObject obj) { __thiz = obj; }
		NetworkInfo_DetailedState()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_NETWORKINFO_DETAILEDSTATE

