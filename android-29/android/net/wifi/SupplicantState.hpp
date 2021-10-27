#pragma once

#ifndef ANDROID_NET_WIFI_SUPPLICANTSTATE
#define ANDROID_NET_WIFI_SUPPLICANTSTATE

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi
{
	class SupplicantState : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ASSOCIATED();
		static QAndroidJniObject ASSOCIATING();
		static QAndroidJniObject AUTHENTICATING();
		static QAndroidJniObject COMPLETED();
		static QAndroidJniObject DISCONNECTED();
		static QAndroidJniObject DORMANT();
		static QAndroidJniObject FOUR_WAY_HANDSHAKE();
		static QAndroidJniObject GROUP_HANDSHAKE();
		static QAndroidJniObject INACTIVE();
		static QAndroidJniObject INTERFACE_DISABLED();
		static QAndroidJniObject INVALID();
		static QAndroidJniObject SCANNING();
		static QAndroidJniObject UNINITIALIZED();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean isValidState(__jni_impl::android::net::wifi::SupplicantState arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi
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
	
	// Constructors
	void SupplicantState::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.SupplicantState",
			"(V)V");
	}
	
	// Methods
	jboolean SupplicantState::isValidState(__jni_impl::android::net::wifi::SupplicantState arg0)
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
	QAndroidJniObject SupplicantState::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.SupplicantState",
			"valueOf",
			"(Ljava/lang/String;)Landroid/net/wifi/SupplicantState;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void SupplicantState::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class SupplicantState : public __jni_impl::android::net::wifi::SupplicantState
	{
	public:
		SupplicantState(QAndroidJniObject obj) { __thiz = obj; }
		SupplicantState()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

#endif // ANDROID_NET_WIFI_SUPPLICANTSTATE

