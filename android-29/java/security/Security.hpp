#pragma once

#ifndef JAVA_SECURITY_SECURITY
#define JAVA_SECURITY_SECURITY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Properties;
}
namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::util
{
	class LinkedHashSet;
}

namespace __jni_impl::java::security
{
	class Security : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getProperty(jstring arg0);
		static void setProperty(jstring arg0, jstring arg1);
		static jint addProvider(__jni_impl::java::security::Provider arg0);
		static QAndroidJniObject getProvider(jstring arg0);
		static jint insertProviderAt(__jni_impl::java::security::Provider arg0, jint arg1);
		static QAndroidJniObject getProviders();
		static QAndroidJniObject getProviders(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject getProviders(jstring arg0);
		static QAndroidJniObject getAlgorithmProperty(jstring arg0, jstring arg1);
		static void removeProvider(jstring arg0);
		static QAndroidJniObject getAlgorithms(jstring arg0);
	};
} // namespace __jni_impl::java::security

#include "../util/Properties.hpp"
#include "Provider.hpp"
#include "../io/File.hpp"
#include "../util/LinkedHashSet.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void Security::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.Security",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Security::getProperty(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	void Security::setProperty(jstring arg0, jstring arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.security.Security",
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	jint Security::addProvider(__jni_impl::java::security::Provider arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.security.Security",
			"addProvider",
			"(Ljava/security/Provider;)I",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Security::getProvider(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getProvider",
			"(Ljava/lang/String;)Ljava/security/Provider;",
			arg0);
	}
	jint Security::insertProviderAt(__jni_impl::java::security::Provider arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.security.Security",
			"insertProviderAt",
			"(Ljava/security/Provider;I)I",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject Security::getProviders()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getProviders",
			"()[Ljava/security/Provider;");
	}
	QAndroidJniObject Security::getProviders(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getProviders",
			"(Ljava/util/Map;)[Ljava/security/Provider;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Security::getProviders(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getProviders",
			"(Ljava/lang/String;)[Ljava/security/Provider;",
			arg0);
	}
	QAndroidJniObject Security::getAlgorithmProperty(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getAlgorithmProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	void Security::removeProvider(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.security.Security",
			"removeProvider",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject Security::getAlgorithms(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getAlgorithms",
			"(Ljava/lang/String;)Ljava/util/Set;",
			arg0);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class Security : public __jni_impl::java::security::Security
	{
	public:
		Security(QAndroidJniObject obj) { __thiz = obj; }
		Security()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_SECURITY

