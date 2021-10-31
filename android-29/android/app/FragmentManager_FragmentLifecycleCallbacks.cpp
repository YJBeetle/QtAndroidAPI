#include "./Fragment.hpp"
#include "./FragmentManager.hpp"
#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "../view/View.hpp"
#include "./FragmentManager_FragmentLifecycleCallbacks.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	FragmentManager_FragmentLifecycleCallbacks::FragmentManager_FragmentLifecycleCallbacks(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	FragmentManager_FragmentLifecycleCallbacks::FragmentManager_FragmentLifecycleCallbacks()
		: __JniBaseClass(
			"android.app.FragmentManager$FragmentLifecycleCallbacks",
			"()V"
		) {}
	
	// Methods
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentActivityCreated(android::app::FragmentManager arg0, android::app::Fragment arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"onFragmentActivityCreated",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentAttached(android::app::FragmentManager arg0, android::app::Fragment arg1, android::content::Context arg2)
	{
		callMethod<void>(
			"onFragmentAttached",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/content/Context;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentCreated(android::app::FragmentManager arg0, android::app::Fragment arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"onFragmentCreated",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentDestroyed(android::app::FragmentManager arg0, android::app::Fragment arg1)
	{
		callMethod<void>(
			"onFragmentDestroyed",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentDetached(android::app::FragmentManager arg0, android::app::Fragment arg1)
	{
		callMethod<void>(
			"onFragmentDetached",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentPaused(android::app::FragmentManager arg0, android::app::Fragment arg1)
	{
		callMethod<void>(
			"onFragmentPaused",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentPreAttached(android::app::FragmentManager arg0, android::app::Fragment arg1, android::content::Context arg2)
	{
		callMethod<void>(
			"onFragmentPreAttached",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/content/Context;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentPreCreated(android::app::FragmentManager arg0, android::app::Fragment arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"onFragmentPreCreated",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentResumed(android::app::FragmentManager arg0, android::app::Fragment arg1)
	{
		callMethod<void>(
			"onFragmentResumed",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentSaveInstanceState(android::app::FragmentManager arg0, android::app::Fragment arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"onFragmentSaveInstanceState",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentStarted(android::app::FragmentManager arg0, android::app::Fragment arg1)
	{
		callMethod<void>(
			"onFragmentStarted",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentStopped(android::app::FragmentManager arg0, android::app::Fragment arg1)
	{
		callMethod<void>(
			"onFragmentStopped",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentViewCreated(android::app::FragmentManager arg0, android::app::Fragment arg1, android::view::View arg2, android::os::Bundle arg3)
	{
		callMethod<void>(
			"onFragmentViewCreated",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/view/View;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentViewDestroyed(android::app::FragmentManager arg0, android::app::Fragment arg1)
	{
		callMethod<void>(
			"onFragmentViewDestroyed",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::app

