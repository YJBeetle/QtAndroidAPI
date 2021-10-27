#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::javax::net::ssl
{
	class SNIServerName;
}

namespace __jni_impl::javax::net::ssl
{
	class SNIMatcher : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getType();
		jboolean matches(__jni_impl::javax::net::ssl::SNIServerName arg0);
	};
} // namespace __jni_impl::javax::net::ssl

#include "SNIServerName.hpp"

namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SNIMatcher::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SNIMatcher",
			"(V)V");
	}
	
	// Methods
	jint SNIMatcher::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jboolean SNIMatcher::matches(__jni_impl::javax::net::ssl::SNIServerName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"matches",
			"(Ljavax/net/ssl/SNIServerName;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SNIMatcher : public __jni_impl::javax::net::ssl::SNIMatcher
	{
	public:
		SNIMatcher(QAndroidJniObject obj) { __thiz = obj; }
		SNIMatcher()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

