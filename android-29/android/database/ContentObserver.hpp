#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::database
{
	class ContentObserver : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::os::Handler arg0);
		
		// Methods
		jboolean deliverSelfNotifications();
		void dispatchChange(jboolean arg0);
		void dispatchChange(jboolean arg0, __jni_impl::android::net::Uri arg1);
		void onChange(jboolean arg0);
		void onChange(jboolean arg0, __jni_impl::android::net::Uri arg1);
	};
} // namespace __jni_impl::android::database

#include "../net/Uri.hpp"
#include "../os/Handler.hpp"

namespace __jni_impl::android::database
{
	// Fields
	
	// Constructors
	void ContentObserver::__constructor(__jni_impl::android::os::Handler arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.ContentObserver",
			"(Landroid/os/Handler;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean ContentObserver::deliverSelfNotifications()
	{
		return __thiz.callMethod<jboolean>(
			"deliverSelfNotifications",
			"()Z"
		);
	}
	void ContentObserver::dispatchChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchChange",
			"(Z)V",
			arg0
		);
	}
	void ContentObserver::dispatchChange(jboolean arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"dispatchChange",
			"(ZLandroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentObserver::onChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onChange",
			"(Z)V",
			arg0
		);
	}
	void ContentObserver::onChange(jboolean arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"onChange",
			"(ZLandroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::database

namespace android::database
{
	class ContentObserver : public __jni_impl::android::database::ContentObserver
	{
	public:
		ContentObserver(QAndroidJniObject obj) { __thiz = obj; }
		ContentObserver(__jni_impl::android::os::Handler arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database

