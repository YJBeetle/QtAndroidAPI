#pragma once

#ifndef ANDROID_NET_NETWORKINFO_STATE
#define ANDROID_NET_NETWORKINFO_STATE

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::net
{
	class NetworkInfo_State : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CONNECTING();
		static QAndroidJniObject CONNECTED();
		static QAndroidJniObject SUSPENDED();
		static QAndroidJniObject DISCONNECTING();
		static QAndroidJniObject DISCONNECTED();
		static QAndroidJniObject UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::net


namespace __jni_impl::android::net
{
	// Fields
	QAndroidJniObject NetworkInfo_State::CONNECTING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$State",
			"CONNECTING",
			"Landroid/net/NetworkInfo$State;");
	}
	QAndroidJniObject NetworkInfo_State::CONNECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$State",
			"CONNECTED",
			"Landroid/net/NetworkInfo$State;");
	}
	QAndroidJniObject NetworkInfo_State::SUSPENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$State",
			"SUSPENDED",
			"Landroid/net/NetworkInfo$State;");
	}
	QAndroidJniObject NetworkInfo_State::DISCONNECTING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$State",
			"DISCONNECTING",
			"Landroid/net/NetworkInfo$State;");
	}
	QAndroidJniObject NetworkInfo_State::DISCONNECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$State",
			"DISCONNECTED",
			"Landroid/net/NetworkInfo$State;");
	}
	QAndroidJniObject NetworkInfo_State::UNKNOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo$State",
			"UNKNOWN",
			"Landroid/net/NetworkInfo$State;");
	}
	
	// Constructors
	void NetworkInfo_State::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.NetworkInfo$State",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject NetworkInfo_State::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.NetworkInfo$State",
			"values",
			"()[Landroid/net/NetworkInfo$State;");
	}
	QAndroidJniObject NetworkInfo_State::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.NetworkInfo$State",
			"valueOf",
			"(Ljava/lang/String;)Landroid/net/NetworkInfo$State;",
			arg0);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class NetworkInfo_State : public __jni_impl::android::net::NetworkInfo_State
	{
	public:
		NetworkInfo_State(QAndroidJniObject obj) { __thiz = obj; }
		NetworkInfo_State()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_NETWORKINFO_STATE

