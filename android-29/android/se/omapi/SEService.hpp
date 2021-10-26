#pragma once

#ifndef ANDROID_SE_OMAPI_SESERVICE
#define ANDROID_SE_OMAPI_SESERVICE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::se::omapi
{
	class SEService : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		
		// Methods
		void shutdown();
		jstring getVersion();
		jarray getReaders();
		jboolean isConnected();
	};
} // namespace __jni_impl::android::se::omapi

#include "../../content/Context.hpp"

namespace __jni_impl::android::se::omapi
{
	// Fields
	
	// Constructors
	void SEService::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"android.se.omapi.SEService",
			"(Landroid/content/Context;Ljava/util/concurrent/Executor;Landroid/se/omapi/SEService$OnConnectedListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	void SEService::shutdown()
	{
		__thiz.callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	jstring SEService::getVersion()
	{
		return __thiz.callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray SEService::getReaders()
	{
		return __thiz.callObjectMethod(
			"getReaders",
			"()[Landroid/se/omapi/Reader;"
		).object<jarray>();
	}
	jboolean SEService::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
} // namespace __jni_impl::android::se::omapi

namespace android::se::omapi
{
	class SEService : public __jni_impl::android::se::omapi::SEService
	{
	public:
		SEService(QAndroidJniObject obj) { __thiz = obj; }
		SEService(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::se::omapi

#endif // ANDROID_SE_OMAPI_SESERVICE

