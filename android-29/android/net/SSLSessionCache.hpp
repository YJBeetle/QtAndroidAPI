#pragma once

#ifndef ANDROID_NET_SSLSESSIONCACHE
#define ANDROID_NET_SSLSESSIONCACHE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::net
{
	class SSLSessionCache : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::net

#include "../../java/io/File.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void SSLSessionCache::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.SSLSessionCache",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	void SSLSessionCache::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.SSLSessionCache",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::net

namespace android::net
{
	class SSLSessionCache : public __jni_impl::android::net::SSLSessionCache
	{
	public:
		SSLSessionCache(QAndroidJniObject obj) { __thiz = obj; }
		SSLSessionCache(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		SSLSessionCache(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net

#endif // ANDROID_NET_SSLSESSIONCACHE

