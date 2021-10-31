#include "./Loader.hpp"
#include "./Loader_ForceLoadContentObserver.hpp"

namespace android::content
{
	// Fields
	
	Loader_ForceLoadContentObserver::Loader_ForceLoadContentObserver(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Loader_ForceLoadContentObserver::Loader_ForceLoadContentObserver(android::content::Loader arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.Loader$ForceLoadContentObserver",
			"(Landroid/content/Loader;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean Loader_ForceLoadContentObserver::deliverSelfNotifications()
	{
		return __thiz.callMethod<jboolean>(
			"deliverSelfNotifications",
			"()Z"
		);
	}
	void Loader_ForceLoadContentObserver::onChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onChange",
			"(Z)V",
			arg0
		);
	}
} // namespace android::content

