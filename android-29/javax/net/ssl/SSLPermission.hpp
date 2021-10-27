#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/security/Permission.hpp"
#include "../../../java/security/BasicPermission.hpp"


namespace __jni_impl::javax::net::ssl
{
	class SSLPermission : public __jni_impl::java::security::BasicPermission
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		
		// Methods
	};
} // namespace __jni_impl::javax::net::ssl


namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SSLPermission::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SSLPermission::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLPermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SSLPermission::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void SSLPermission::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLPermission : public __jni_impl::javax::net::ssl::SSLPermission
	{
	public:
		SSLPermission(QAndroidJniObject obj) { __thiz = obj; }
		SSLPermission(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SSLPermission(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::net::ssl

