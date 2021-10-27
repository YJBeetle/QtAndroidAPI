#pragma once

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
		jbyteArray getEncoded();
		jint getType();
		jint hashCode();
		jstring toString();
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
	jbyteArray SNIServerName::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jint SNIServerName::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint SNIServerName::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring SNIServerName::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

