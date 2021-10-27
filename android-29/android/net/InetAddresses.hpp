#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class InetAddress;
}

namespace __jni_impl::android::net
{
	class InetAddresses : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean isNumericAddress(jstring arg0);
		static jboolean isNumericAddress(const QString &arg0);
		static QAndroidJniObject parseNumericAddress(jstring arg0);
		static QAndroidJniObject parseNumericAddress(const QString &arg0);
	};
} // namespace __jni_impl::android::net

#include "../../java/net/InetAddress.hpp"

namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void InetAddresses::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.InetAddresses",
			"(V)V");
	}
	
	// Methods
	jboolean InetAddresses::isNumericAddress(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.InetAddresses",
			"isNumericAddress",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean InetAddresses::isNumericAddress(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.InetAddresses",
			"isNumericAddress",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject InetAddresses::parseNumericAddress(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.InetAddresses",
			"parseNumericAddress",
			"(Ljava/lang/String;)Ljava/net/InetAddress;",
			arg0
		);
	}
	QAndroidJniObject InetAddresses::parseNumericAddress(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.InetAddresses",
			"parseNumericAddress",
			"(Ljava/lang/String;)Ljava/net/InetAddress;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class InetAddresses : public __jni_impl::android::net::InetAddresses
	{
	public:
		InetAddresses(QAndroidJniObject obj) { __thiz = obj; }
		InetAddresses()
		{
			__constructor();
		}
	};
} // namespace android::net

