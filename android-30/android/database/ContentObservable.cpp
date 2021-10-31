#include "./ContentObserver.hpp"
#include "../net/Uri.hpp"
#include "./ContentObservable.hpp"

namespace android::database
{
	// Fields
	
	// QJniObject forward
	ContentObservable::ContentObservable(QJniObject obj) : android::database::Observable(obj) {}
	
	// Constructors
	ContentObservable::ContentObservable()
		: android::database::Observable(
			"android.database.ContentObservable",
			"()V"
		) {}
	
	// Methods
	void ContentObservable::dispatchChange(jboolean arg0)
	{
		callMethod<void>(
			"dispatchChange",
			"(Z)V",
			arg0
		);
	}
	void ContentObservable::dispatchChange(jboolean arg0, android::net::Uri arg1)
	{
		callMethod<void>(
			"dispatchChange",
			"(ZLandroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	void ContentObservable::notifyChange(jboolean arg0)
	{
		callMethod<void>(
			"notifyChange",
			"(Z)V",
			arg0
		);
	}
	void ContentObservable::registerObserver(android::database::ContentObserver arg0)
	{
		callMethod<void>(
			"registerObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	void ContentObservable::registerObserver(jobject arg0)
	{
		callMethod<void>(
			"registerObserver",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace android::database

