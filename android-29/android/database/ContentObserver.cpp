#include "../net/Uri.hpp"
#include "../os/Handler.hpp"
#include "./ContentObserver.hpp"

namespace android::database
{
	// Fields
	
	ContentObserver::ContentObserver(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ContentObserver::ContentObserver(android::os::Handler arg0)
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
	void ContentObserver::dispatchChange(jboolean arg0, android::net::Uri arg1)
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
	void ContentObserver::onChange(jboolean arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"onChange",
			"(ZLandroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace android::database

