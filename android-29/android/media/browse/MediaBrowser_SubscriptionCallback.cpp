#include "../../os/Bundle.hpp"
#include "./MediaBrowser_SubscriptionCallback.hpp"

namespace android::media::browse
{
	// Fields
	
	MediaBrowser_SubscriptionCallback::MediaBrowser_SubscriptionCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaBrowser_SubscriptionCallback::MediaBrowser_SubscriptionCallback()
	{
		__thiz = QAndroidJniObject(
			"android.media.browse.MediaBrowser$SubscriptionCallback",
			"()V"
		);
	}
	
	// Methods
	void MediaBrowser_SubscriptionCallback::onChildrenLoaded(jstring arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onChildrenLoaded",
			"(Ljava/lang/String;Ljava/util/List;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaBrowser_SubscriptionCallback::onChildrenLoaded(const QString &arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onChildrenLoaded",
			"(Ljava/lang/String;Ljava/util/List;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaBrowser_SubscriptionCallback::onChildrenLoaded(jstring arg0, __JniBaseClass arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onChildrenLoaded",
			"(Ljava/lang/String;Ljava/util/List;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void MediaBrowser_SubscriptionCallback::onChildrenLoaded(const QString &arg0, __JniBaseClass arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onChildrenLoaded",
			"(Ljava/lang/String;Ljava/util/List;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void MediaBrowser_SubscriptionCallback::onError(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaBrowser_SubscriptionCallback::onError(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void MediaBrowser_SubscriptionCallback::onError(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaBrowser_SubscriptionCallback::onError(const QString &arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::media::browse

