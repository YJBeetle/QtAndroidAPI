#include "./ContentObserver.hpp"
#include "../net/Uri.hpp"
#include "./ContentObservable.hpp"

namespace android::database
{
	// Fields
	
	ContentObservable::ContentObservable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ContentObservable::ContentObservable()
	{
		__thiz = QAndroidJniObject(
			"android.database.ContentObservable",
			"()V"
		);
	}
	
	// Methods
	void ContentObservable::dispatchChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchChange",
			"(Z)V",
			arg0
		);
	}
	void ContentObservable::dispatchChange(jboolean arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"dispatchChange",
			"(ZLandroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentObservable::notifyChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"notifyChange",
			"(Z)V",
			arg0
		);
	}
	void ContentObservable::registerObserver(android::database::ContentObserver arg0)
	{
		__thiz.callMethod<void>(
			"registerObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.__jniObject().object()
		);
	}
	void ContentObservable::registerObserver(jobject arg0)
	{
		__thiz.callMethod<void>(
			"registerObserver",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace android::database

