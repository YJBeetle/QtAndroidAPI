#pragma once

#include "./Fragment.def.hpp"
#include "./FragmentManager.def.hpp"
#include "../content/Context.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../view/View.def.hpp"
#include "./FragmentManager_FragmentLifecycleCallbacks.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline FragmentManager_FragmentLifecycleCallbacks::FragmentManager_FragmentLifecycleCallbacks()
		: JObject(
			"android.app.FragmentManager$FragmentLifecycleCallbacks",
			"()V"
		) {}
	
	// Methods
	inline void FragmentManager_FragmentLifecycleCallbacks::onFragmentActivityCreated(android::app::FragmentManager arg0, android::app::Fragment arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onFragmentActivityCreated",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void FragmentManager_FragmentLifecycleCallbacks::onFragmentAttached(android::app::FragmentManager arg0, android::app::Fragment arg1, android::content::Context arg2) const
	{
		callMethod<void>(
			"onFragmentAttached",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/content/Context;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void FragmentManager_FragmentLifecycleCallbacks::onFragmentCreated(android::app::FragmentManager arg0, android::app::Fragment arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onFragmentCreated",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void FragmentManager_FragmentLifecycleCallbacks::onFragmentDestroyed(android::app::FragmentManager arg0, android::app::Fragment arg1) const
	{
		callMethod<void>(
			"onFragmentDestroyed",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void FragmentManager_FragmentLifecycleCallbacks::onFragmentDetached(android::app::FragmentManager arg0, android::app::Fragment arg1) const
	{
		callMethod<void>(
			"onFragmentDetached",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void FragmentManager_FragmentLifecycleCallbacks::onFragmentPaused(android::app::FragmentManager arg0, android::app::Fragment arg1) const
	{
		callMethod<void>(
			"onFragmentPaused",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void FragmentManager_FragmentLifecycleCallbacks::onFragmentPreAttached(android::app::FragmentManager arg0, android::app::Fragment arg1, android::content::Context arg2) const
	{
		callMethod<void>(
			"onFragmentPreAttached",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/content/Context;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void FragmentManager_FragmentLifecycleCallbacks::onFragmentPreCreated(android::app::FragmentManager arg0, android::app::Fragment arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onFragmentPreCreated",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void FragmentManager_FragmentLifecycleCallbacks::onFragmentResumed(android::app::FragmentManager arg0, android::app::Fragment arg1) const
	{
		callMethod<void>(
			"onFragmentResumed",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void FragmentManager_FragmentLifecycleCallbacks::onFragmentSaveInstanceState(android::app::FragmentManager arg0, android::app::Fragment arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onFragmentSaveInstanceState",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void FragmentManager_FragmentLifecycleCallbacks::onFragmentStarted(android::app::FragmentManager arg0, android::app::Fragment arg1) const
	{
		callMethod<void>(
			"onFragmentStarted",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void FragmentManager_FragmentLifecycleCallbacks::onFragmentStopped(android::app::FragmentManager arg0, android::app::Fragment arg1) const
	{
		callMethod<void>(
			"onFragmentStopped",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void FragmentManager_FragmentLifecycleCallbacks::onFragmentViewCreated(android::app::FragmentManager arg0, android::app::Fragment arg1, android::view::View arg2, android::os::Bundle arg3) const
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
	inline void FragmentManager_FragmentLifecycleCallbacks::onFragmentViewDestroyed(android::app::FragmentManager arg0, android::app::Fragment arg1) const
	{
		callMethod<void>(
			"onFragmentViewDestroyed",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::app

// Base class headers

