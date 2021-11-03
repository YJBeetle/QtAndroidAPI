#include "../net/Uri.hpp"
#include "../os/Handler.hpp"
#include "./ContentObserver.hpp"

namespace android::database
{
	// Fields
	
	// QAndroidJniObject forward
	ContentObserver::ContentObserver(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ContentObserver::ContentObserver(android::os::Handler arg0)
		: JObject(
			"android.database.ContentObserver",
			"(Landroid/os/Handler;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean ContentObserver::deliverSelfNotifications()
	{
		return callMethod<jboolean>(
			"deliverSelfNotifications",
			"()Z"
		);
	}
	void ContentObserver::dispatchChange(jboolean arg0)
	{
		callMethod<void>(
			"dispatchChange",
			"(Z)V",
			arg0
		);
	}
	void ContentObserver::dispatchChange(jboolean arg0, android::net::Uri arg1)
	{
		callMethod<void>(
			"dispatchChange",
			"(ZLandroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	void ContentObserver::dispatchChange(jboolean arg0, android::net::Uri arg1, jint arg2)
	{
		callMethod<void>(
			"dispatchChange",
			"(ZLandroid/net/Uri;I)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	void ContentObserver::dispatchChange(jboolean arg0, JObject arg1, jint arg2)
	{
		callMethod<void>(
			"dispatchChange",
			"(ZLjava/util/Collection;I)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	void ContentObserver::onChange(jboolean arg0)
	{
		callMethod<void>(
			"onChange",
			"(Z)V",
			arg0
		);
	}
	void ContentObserver::onChange(jboolean arg0, android::net::Uri arg1)
	{
		callMethod<void>(
			"onChange",
			"(ZLandroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	void ContentObserver::onChange(jboolean arg0, android::net::Uri arg1, jint arg2)
	{
		callMethod<void>(
			"onChange",
			"(ZLandroid/net/Uri;I)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	void ContentObserver::onChange(jboolean arg0, JObject arg1, jint arg2)
	{
		callMethod<void>(
			"onChange",
			"(ZLjava/util/Collection;I)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
} // namespace android::database

