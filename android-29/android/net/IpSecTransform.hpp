#pragma once

#ifndef ANDROID_NET_IPSECTRANSFORM
#define ANDROID_NET_IPSECTRANSFORM

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::net
{
	class IpSecTransform : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		jstring toString();
	};
} // namespace __jni_impl::android::net


namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void IpSecTransform::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.IpSecTransform",
			"(V)V");
	}
	
	// Methods
	void IpSecTransform::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jstring IpSecTransform::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class IpSecTransform : public __jni_impl::android::net::IpSecTransform
	{
	public:
		IpSecTransform(QAndroidJniObject obj) { __thiz = obj; }
		IpSecTransform()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_IPSECTRANSFORM

