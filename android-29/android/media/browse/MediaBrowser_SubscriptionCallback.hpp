#pragma once

#ifndef ANDROID_MEDIA_BROWSE_MEDIABROWSER_SUBSCRIPTIONCALLBACK
#define ANDROID_MEDIA_BROWSE_MEDIABROWSER_SUBSCRIPTIONCALLBACK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::media::browse
{
	class MediaBrowser_SubscriptionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onError(jstring arg0);
		void onError(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void onChildrenLoaded(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void onChildrenLoaded(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Bundle arg2);
	};
} // namespace __jni_impl::android::media::browse

#include "../../os/Bundle.hpp"

namespace __jni_impl::android::media::browse
{
	// Fields
	
	// Constructors
	void MediaBrowser_SubscriptionCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.browse.MediaBrowser$SubscriptionCallback",
			"()V");
	}
	
	// Methods
	void MediaBrowser_SubscriptionCallback::onError(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void MediaBrowser_SubscriptionCallback::onError(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void MediaBrowser_SubscriptionCallback::onChildrenLoaded(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onChildrenLoaded",
			"(Ljava/lang/String;Ljava/util/List;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void MediaBrowser_SubscriptionCallback::onChildrenLoaded(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onChildrenLoaded",
			"(Ljava/lang/String;Ljava/util/List;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
} // namespace __jni_impl::android::media::browse

namespace android::media::browse
{
	class MediaBrowser_SubscriptionCallback : public __jni_impl::android::media::browse::MediaBrowser_SubscriptionCallback
	{
	public:
		MediaBrowser_SubscriptionCallback(QAndroidJniObject obj) { __thiz = obj; }
		MediaBrowser_SubscriptionCallback()
		{
			__constructor();
		}
	};
} // namespace android::media::browse

#endif // ANDROID_MEDIA_BROWSE_MEDIABROWSER_SUBSCRIPTIONCALLBACK

