#include "./Loader.hpp"
#include "./Loader_ForceLoadContentObserver.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	Loader_ForceLoadContentObserver::Loader_ForceLoadContentObserver(android::content::Loader arg0)
		: android::database::ContentObserver(
			"android.content.Loader$ForceLoadContentObserver",
			"(Landroid/content/Loader;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean Loader_ForceLoadContentObserver::deliverSelfNotifications() const
	{
		return callMethod<jboolean>(
			"deliverSelfNotifications",
			"()Z"
		);
	}
	void Loader_ForceLoadContentObserver::onChange(jboolean arg0) const
	{
		callMethod<void>(
			"onChange",
			"(Z)V",
			arg0
		);
	}
} // namespace android::content

