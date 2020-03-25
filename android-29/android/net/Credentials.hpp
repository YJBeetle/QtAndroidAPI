#pragma once

#ifndef ANDROID_NET_CREDENTIALS
#define ANDROID_NET_CREDENTIALS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::net
{
	class Credentials : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jint getGid();
		jint getUid();
		jint getPid();
	};
} // namespace __jni_impl::android::net


namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void Credentials::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.net.Credentials",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	jint Credentials::getGid()
	{
		return __thiz.callMethod<jint>(
			"getGid",
			"()I");
	}
	jint Credentials::getUid()
	{
		return __thiz.callMethod<jint>(
			"getUid",
			"()I");
	}
	jint Credentials::getPid()
	{
		return __thiz.callMethod<jint>(
			"getPid",
			"()I");
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class Credentials : public __jni_impl::android::net::Credentials
	{
	public:
		Credentials(QAndroidJniObject obj) { __thiz = obj; }
		Credentials(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::net

#endif // ANDROID_NET_CREDENTIALS

