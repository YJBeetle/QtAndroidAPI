#pragma once

#ifndef JAVAX_NET_SSL_SNIHOSTNAME
#define JAVAX_NET_SSL_SNIHOSTNAME

#include "../../../__JniBaseClass.hpp"
#include "SNIServerName.hpp"

namespace __jni_impl::javax::net::ssl
{
	class SNIMatcher;
}

namespace __jni_impl::javax::net::ssl
{
	class SNIHostName : public __jni_impl::javax::net::ssl::SNIServerName
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jbyteArray arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jstring getAsciiName();
		static QAndroidJniObject createSNIMatcher(jstring arg0);
		static QAndroidJniObject createSNIMatcher(const QString &arg0);
	};
} // namespace __jni_impl::javax::net::ssl

#include "SNIMatcher.hpp"

namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SNIHostName::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SNIHostName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SNIHostName::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SNIHostName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SNIHostName::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SNIHostName",
			"([B)V",
			arg0
		);
	}
	
	// Methods
	jboolean SNIHostName::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring SNIHostName::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SNIHostName::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring SNIHostName::getAsciiName()
	{
		return __thiz.callObjectMethod(
			"getAsciiName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SNIHostName::createSNIMatcher(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SNIHostName",
			"createSNIMatcher",
			"(Ljava/lang/String;)Ljavax/net/ssl/SNIMatcher;",
			arg0
		);
	}
	QAndroidJniObject SNIHostName::createSNIMatcher(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.SNIHostName",
			"createSNIMatcher",
			"(Ljava/lang/String;)Ljavax/net/ssl/SNIMatcher;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SNIHostName : public __jni_impl::javax::net::ssl::SNIHostName
	{
	public:
		SNIHostName(QAndroidJniObject obj) { __thiz = obj; }
		SNIHostName(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SNIHostName(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SNIHOSTNAME

