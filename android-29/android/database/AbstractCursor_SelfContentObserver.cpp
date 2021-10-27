#include "./AbstractCursor.hpp"
#include "./AbstractCursor_SelfContentObserver.hpp"

namespace android::database
{
	// Fields
	
	AbstractCursor_SelfContentObserver::AbstractCursor_SelfContentObserver(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AbstractCursor_SelfContentObserver::AbstractCursor_SelfContentObserver(android::database::AbstractCursor &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.AbstractCursor$SelfContentObserver",
			"(Landroid/database/AbstractCursor;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean AbstractCursor_SelfContentObserver::deliverSelfNotifications()
	{
		return __thiz.callMethod<jboolean>(
			"deliverSelfNotifications",
			"()Z"
		);
	}
	void AbstractCursor_SelfContentObserver::onChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onChange",
			"(Z)V",
			arg0
		);
	}
} // namespace android::database

