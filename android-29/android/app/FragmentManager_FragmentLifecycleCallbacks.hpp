#pragma once

#ifndef ANDROID_APP_FRAGMENTMANAGER_FRAGMENTLIFECYCLECALLBACKS
#define ANDROID_APP_FRAGMENTMANAGER_FRAGMENTLIFECYCLECALLBACKS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class FragmentManager;
}
namespace __jni_impl::android::app
{
	class Fragment;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::app
{
	class FragmentManager_FragmentLifecycleCallbacks : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onFragmentPreAttached(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1, __jni_impl::android::content::Context arg2);
		void onFragmentAttached(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1, __jni_impl::android::content::Context arg2);
		void onFragmentPreCreated(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1, __jni_impl::android::os::Bundle arg2);
		void onFragmentCreated(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1, __jni_impl::android::os::Bundle arg2);
		void onFragmentActivityCreated(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1, __jni_impl::android::os::Bundle arg2);
		void onFragmentViewCreated(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1, __jni_impl::android::view::View arg2, __jni_impl::android::os::Bundle arg3);
		void onFragmentStarted(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1);
		void onFragmentResumed(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1);
		void onFragmentPaused(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1);
		void onFragmentStopped(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1);
		void onFragmentSaveInstanceState(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1, __jni_impl::android::os::Bundle arg2);
		void onFragmentViewDestroyed(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1);
		void onFragmentDestroyed(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1);
		void onFragmentDetached(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1);
	};
} // namespace __jni_impl::android::app

#include "FragmentManager.hpp"
#include "Fragment.hpp"
#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void FragmentManager_FragmentLifecycleCallbacks::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.FragmentManager$FragmentLifecycleCallbacks",
			"()V"
		);
	}
	
	// Methods
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentPreAttached(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1, __jni_impl::android::content::Context arg2)
	{
		__thiz.callMethod<void>(
			"onFragmentPreAttached",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/content/Context;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentAttached(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1, __jni_impl::android::content::Context arg2)
	{
		__thiz.callMethod<void>(
			"onFragmentAttached",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/content/Context;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentPreCreated(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onFragmentPreCreated",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentCreated(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onFragmentCreated",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentActivityCreated(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onFragmentActivityCreated",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentViewCreated(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1, __jni_impl::android::view::View arg2, __jni_impl::android::os::Bundle arg3)
	{
		__thiz.callMethod<void>(
			"onFragmentViewCreated",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/view/View;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentStarted(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1)
	{
		__thiz.callMethod<void>(
			"onFragmentStarted",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentResumed(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1)
	{
		__thiz.callMethod<void>(
			"onFragmentResumed",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentPaused(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1)
	{
		__thiz.callMethod<void>(
			"onFragmentPaused",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentStopped(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1)
	{
		__thiz.callMethod<void>(
			"onFragmentStopped",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentSaveInstanceState(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onFragmentSaveInstanceState",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentViewDestroyed(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1)
	{
		__thiz.callMethod<void>(
			"onFragmentViewDestroyed",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentDestroyed(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1)
	{
		__thiz.callMethod<void>(
			"onFragmentDestroyed",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void FragmentManager_FragmentLifecycleCallbacks::onFragmentDetached(__jni_impl::android::app::FragmentManager arg0, __jni_impl::android::app::Fragment arg1)
	{
		__thiz.callMethod<void>(
			"onFragmentDetached",
			"(Landroid/app/FragmentManager;Landroid/app/Fragment;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class FragmentManager_FragmentLifecycleCallbacks : public __jni_impl::android::app::FragmentManager_FragmentLifecycleCallbacks
	{
	public:
		FragmentManager_FragmentLifecycleCallbacks(QAndroidJniObject obj) { __thiz = obj; }
		FragmentManager_FragmentLifecycleCallbacks()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_FRAGMENTMANAGER_FRAGMENTLIFECYCLECALLBACKS

