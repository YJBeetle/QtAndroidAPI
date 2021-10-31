#include "./AbstractCursor.hpp"
#include "./AbstractCursor_SelfContentObserver.hpp"

namespace android::database
{
	// Fields
	
	// QAndroidJniObject forward
	AbstractCursor_SelfContentObserver::AbstractCursor_SelfContentObserver(QAndroidJniObject obj) : android::database::ContentObserver(obj) {}
	
	// Constructors
	AbstractCursor_SelfContentObserver::AbstractCursor_SelfContentObserver(android::database::AbstractCursor arg0)
		: android::database::ContentObserver(
			"android.database.AbstractCursor$SelfContentObserver",
			"(Landroid/database/AbstractCursor;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean AbstractCursor_SelfContentObserver::deliverSelfNotifications()
	{
		return callMethod<jboolean>(
			"deliverSelfNotifications",
			"()Z"
		);
	}
	void AbstractCursor_SelfContentObserver::onChange(jboolean arg0)
	{
		callMethod<void>(
			"onChange",
			"(Z)V",
			arg0
		);
	}
} // namespace android::database

