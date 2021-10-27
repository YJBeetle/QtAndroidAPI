#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::net
{
	class LocalSocketAddress_Namespace : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ABSTRACT();
		static QAndroidJniObject FILESYSTEM();
		static QAndroidJniObject RESERVED();
		
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
	QAndroidJniObject LocalSocketAddress_Namespace::ABSTRACT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.LocalSocketAddress$Namespace",
			"ABSTRACT",
			"Landroid/net/LocalSocketAddress$Namespace;"
		);
	}
	QAndroidJniObject LocalSocketAddress_Namespace::FILESYSTEM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.LocalSocketAddress$Namespace",
			"FILESYSTEM",
			"Landroid/net/LocalSocketAddress$Namespace;"
		);
	}
	QAndroidJniObject LocalSocketAddress_Namespace::RESERVED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.LocalSocketAddress$Namespace",
			"RESERVED",
			"Landroid/net/LocalSocketAddress$Namespace;"
		);
	}
	
	// Constructors
	void LocalSocketAddress_Namespace::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.LocalSocketAddress$Namespace",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject LocalSocketAddress_Namespace::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.LocalSocketAddress$Namespace",
			"valueOf",
			"(Ljava/lang/String;)Landroid/net/LocalSocketAddress$Namespace;",
			arg0
		);
	}
	QAndroidJniObject LocalSocketAddress_Namespace::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.LocalSocketAddress$Namespace",
			"valueOf",
			"(Ljava/lang/String;)Landroid/net/LocalSocketAddress$Namespace;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray LocalSocketAddress_Namespace::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.LocalSocketAddress$Namespace",
			"values",
			"()[Landroid/net/LocalSocketAddress$Namespace;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class LocalSocketAddress_Namespace : public __jni_impl::android::net::LocalSocketAddress_Namespace
	{
	public:
		LocalSocketAddress_Namespace(QAndroidJniObject obj) { __thiz = obj; }
		LocalSocketAddress_Namespace()
		{
			__constructor();
		}
	};
} // namespace android::net

