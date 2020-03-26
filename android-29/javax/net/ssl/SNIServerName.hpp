#pragma once

#ifndef JAVAX_NET_SSL_SNISERVERNAME
#define JAVAX_NET_SSL_SNISERVERNAME

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::net::ssl
{
	class SNIServerName : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint getType();
		jbyteArray getEncoded();
	};
} // namespace __jni_impl::javax::net::ssl


namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SNIServerName::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SNIServerName",
			"(V)V");
	}
	
	// Methods
	jboolean SNIServerName::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring SNIServerName::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SNIServerName::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint SNIServerName::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jbyteArray SNIServerName::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SNIServerName : public __jni_impl::javax::net::ssl::SNIServerName
	{
	public:
		SNIServerName(QAndroidJniObject obj) { __thiz = obj; }
		SNIServerName()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SNISERVERNAME

