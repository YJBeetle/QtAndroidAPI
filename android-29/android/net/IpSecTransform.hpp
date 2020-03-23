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
		QAndroidJniObject toString();
		void close();
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
	QAndroidJniObject IpSecTransform::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void IpSecTransform::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
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

