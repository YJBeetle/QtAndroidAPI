#pragma once

#ifndef ANDROID_APP_FRAGMENT
#define ANDROID_APP_FRAGMENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}
namespace __jni_impl::android::app
{
	class LoaderManager;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::app
{
	class FragmentManager;
}
namespace __jni_impl::android::view
{
	class MenuInflater;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class LayoutInflater;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::content
{
	class IntentSender;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}
namespace __jni_impl::android::app
{
	class SharedElementCallback;
}
namespace __jni_impl::android::transition
{
	class Transition;
}
namespace __jni_impl::android::app
{
	class Fragment_SavedState;
}
namespace __jni_impl::android::animation
{
	class Animator;
}

namespace __jni_impl::android::app
{
	class Fragment : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getResources();
		QAndroidJniObject getContext();
		jint getId();
		QAndroidJniObject getHost();
		QAndroidJniObject getString(jint arg0);
		QAndroidJniObject getString(jint arg0, jobjectArray arg1);
		void onStart();
		QAndroidJniObject getTag();
		jboolean isHidden();
		QAndroidJniObject getText(jint arg0);
		QAndroidJniObject getActivity();
		jboolean isVisible();
		jboolean isInLayout();
		void dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3);
		QAndroidJniObject getLoaderManager();
		void onCreate(__jni_impl::android::os::Bundle arg0);
		void onResume();
		void onSaveInstanceState(__jni_impl::android::os::Bundle arg0);
		void onPause();
		void onStop();
		void onDestroy();
		void onMultiWindowModeChanged(jboolean arg0);
		void onMultiWindowModeChanged(jboolean arg0, __jni_impl::android::content::res::Configuration arg1);
		void onPictureInPictureModeChanged(jboolean arg0);
		void onPictureInPictureModeChanged(jboolean arg0, __jni_impl::android::content::res::Configuration arg1);
		void onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0);
		void onLowMemory();
		void onTrimMemory(jint arg0);
		QAndroidJniObject getFragmentManager();
		void onAttachFragment(__jni_impl::android::app::Fragment arg0);
		void onCreateOptionsMenu(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::MenuInflater arg1);
		void onPrepareOptionsMenu(__jni_impl::__JniBaseClass arg0);
		jboolean onOptionsItemSelected(__jni_impl::__JniBaseClass arg0);
		void onOptionsMenuClosed(__jni_impl::__JniBaseClass arg0);
		void onCreateContextMenu(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2);
		void registerForContextMenu(__jni_impl::android::view::View arg0);
		void unregisterForContextMenu(__jni_impl::android::view::View arg0);
		jboolean onContextItemSelected(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getLayoutInflater();
		void requestPermissions(jarray arg0, jint arg1);
		void onRequestPermissionsResult(jint arg0, jarray arg1, jintArray arg2);
		jboolean shouldShowRequestPermissionRationale(jstring arg0);
		void startActivityForResult(__jni_impl::android::content::Intent arg0, jint arg1);
		void startActivityForResult(__jni_impl::android::content::Intent arg0, jint arg1, __jni_impl::android::os::Bundle arg2);
		void startIntentSenderForResult(__jni_impl::android::content::IntentSender arg0, jint arg1, __jni_impl::android::content::Intent arg2, jint arg3, jint arg4, jint arg5, __jni_impl::android::os::Bundle arg6);
		void onActivityResult(jint arg0, jint arg1, __jni_impl::android::content::Intent arg2);
		QAndroidJniObject onCreateView(__jni_impl::android::view::LayoutInflater arg0, __jni_impl::android::view::ViewGroup arg1, __jni_impl::android::os::Bundle arg2);
		void setEnterSharedElementCallback(__jni_impl::android::app::SharedElementCallback arg0);
		void setExitSharedElementCallback(__jni_impl::android::app::SharedElementCallback arg0);
		void postponeEnterTransition();
		void startPostponedEnterTransition();
		void startActivity(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::Bundle arg1);
		void startActivity(__jni_impl::android::content::Intent arg0);
		void setEnterTransition(__jni_impl::android::transition::Transition arg0);
		void setReturnTransition(__jni_impl::android::transition::Transition arg0);
		void setExitTransition(__jni_impl::android::transition::Transition arg0);
		void setReenterTransition(__jni_impl::android::transition::Transition arg0);
		QAndroidJniObject getEnterTransition();
		QAndroidJniObject getReturnTransition();
		QAndroidJniObject getExitTransition();
		QAndroidJniObject getReenterTransition();
		void setSharedElementEnterTransition(__jni_impl::android::transition::Transition arg0);
		void setSharedElementReturnTransition(__jni_impl::android::transition::Transition arg0);
		QAndroidJniObject getSharedElementEnterTransition();
		QAndroidJniObject getSharedElementReturnTransition();
		void setAllowEnterTransitionOverlap(jboolean arg0);
		jboolean getAllowEnterTransitionOverlap();
		void setAllowReturnTransitionOverlap(jboolean arg0);
		jboolean getAllowReturnTransitionOverlap();
		static QAndroidJniObject instantiate(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		static QAndroidJniObject instantiate(__jni_impl::android::content::Context arg0, jstring arg1);
		void setArguments(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject getArguments();
		jboolean isStateSaved();
		void setInitialSavedState(__jni_impl::android::app::Fragment_SavedState arg0);
		void onDestroyView();
		void setTargetFragment(__jni_impl::android::app::Fragment arg0, jint arg1);
		QAndroidJniObject getTargetFragment();
		jint getTargetRequestCode();
		QAndroidJniObject getChildFragmentManager();
		QAndroidJniObject getParentFragment();
		jboolean isAdded();
		jboolean isDetached();
		jboolean isRemoving();
		jboolean isResumed();
		void onHiddenChanged(jboolean arg0);
		void setRetainInstance(jboolean arg0);
		jboolean getRetainInstance();
		void setHasOptionsMenu(jboolean arg0);
		void setMenuVisibility(jboolean arg0);
		void setUserVisibleHint(jboolean arg0);
		jboolean getUserVisibleHint();
		QAndroidJniObject onGetLayoutInflater(__jni_impl::android::os::Bundle arg0);
		void onInflate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Bundle arg1);
		void onInflate(__jni_impl::android::app::Activity arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Bundle arg2);
		void onInflate(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Bundle arg2);
		void onAttach(__jni_impl::android::app::Activity arg0);
		void onAttach(__jni_impl::android::content::Context arg0);
		QAndroidJniObject onCreateAnimator(jint arg0, jboolean arg1, jint arg2);
		void onViewCreated(__jni_impl::android::view::View arg0, __jni_impl::android::os::Bundle arg1);
		QAndroidJniObject getView();
		void onActivityCreated(__jni_impl::android::os::Bundle arg0);
		void onViewStateRestored(__jni_impl::android::os::Bundle arg0);
		void onDetach();
		void onDestroyOptionsMenu();
	};
} // namespace __jni_impl::android::app

#include "../content/res/Resources.hpp"
#include "../content/Context.hpp"
#include "Activity.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "LoaderManager.hpp"
#include "../os/Bundle.hpp"
#include "../content/res/Configuration.hpp"
#include "FragmentManager.hpp"
#include "../view/MenuInflater.hpp"
#include "../view/View.hpp"
#include "../view/LayoutInflater.hpp"
#include "../content/Intent.hpp"
#include "../content/IntentSender.hpp"
#include "../view/ViewGroup.hpp"
#include "SharedElementCallback.hpp"
#include "../transition/Transition.hpp"
#include "Fragment_SavedState.hpp"
#include "../animation/Animator.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Fragment::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Fragment",
			"()V");
	}
	
	// Methods
	jboolean Fragment::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Fragment::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Fragment::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject Fragment::getResources()
	{
		return __thiz.callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;");
	}
	QAndroidJniObject Fragment::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;");
	}
	jint Fragment::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I");
	}
	QAndroidJniObject Fragment::getHost()
	{
		return __thiz.callObjectMethod(
			"getHost",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject Fragment::getString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Fragment::getString(jint arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	void Fragment::onStart()
	{
		__thiz.callMethod<void>(
			"onStart",
			"()V");
	}
	QAndroidJniObject Fragment::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/String;");
	}
	jboolean Fragment::isHidden()
	{
		return __thiz.callMethod<jboolean>(
			"isHidden",
			"()Z");
	}
	QAndroidJniObject Fragment::getText(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getText",
			"(I)Ljava/lang/CharSequence;",
			arg0);
	}
	QAndroidJniObject Fragment::getActivity()
	{
		return __thiz.callObjectMethod(
			"getActivity",
			"()Landroid/app/Activity;");
	}
	jboolean Fragment::isVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isVisible",
			"()Z");
	}
	jboolean Fragment::isInLayout()
	{
		return __thiz.callMethod<jboolean>(
			"isInLayout",
			"()Z");
	}
	void Fragment::dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3);
	}
	QAndroidJniObject Fragment::getLoaderManager()
	{
		return __thiz.callObjectMethod(
			"getLoaderManager",
			"()Landroid/app/LoaderManager;");
	}
	void Fragment::onCreate(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	void Fragment::onResume()
	{
		__thiz.callMethod<void>(
			"onResume",
			"()V");
	}
	void Fragment::onSaveInstanceState(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onSaveInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	void Fragment::onPause()
	{
		__thiz.callMethod<void>(
			"onPause",
			"()V");
	}
	void Fragment::onStop()
	{
		__thiz.callMethod<void>(
			"onStop",
			"()V");
	}
	void Fragment::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V");
	}
	void Fragment::onMultiWindowModeChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onMultiWindowModeChanged",
			"(Z)V",
			arg0);
	}
	void Fragment::onMultiWindowModeChanged(jboolean arg0, __jni_impl::android::content::res::Configuration arg1)
	{
		__thiz.callMethod<void>(
			"onMultiWindowModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void Fragment::onPictureInPictureModeChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onPictureInPictureModeChanged",
			"(Z)V",
			arg0);
	}
	void Fragment::onPictureInPictureModeChanged(jboolean arg0, __jni_impl::android::content::res::Configuration arg1)
	{
		__thiz.callMethod<void>(
			"onPictureInPictureModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void Fragment::onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object());
	}
	void Fragment::onLowMemory()
	{
		__thiz.callMethod<void>(
			"onLowMemory",
			"()V");
	}
	void Fragment::onTrimMemory(jint arg0)
	{
		__thiz.callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0);
	}
	QAndroidJniObject Fragment::getFragmentManager()
	{
		return __thiz.callObjectMethod(
			"getFragmentManager",
			"()Landroid/app/FragmentManager;");
	}
	void Fragment::onAttachFragment(__jni_impl::android::app::Fragment arg0)
	{
		__thiz.callMethod<void>(
			"onAttachFragment",
			"(Landroid/app/Fragment;)V",
			arg0.__jniObject().object());
	}
	void Fragment::onCreateOptionsMenu(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::MenuInflater arg1)
	{
		__thiz.callMethod<void>(
			"onCreateOptionsMenu",
			"(Landroid/view/Menu;Landroid/view/MenuInflater;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Fragment::onPrepareOptionsMenu(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onPrepareOptionsMenu",
			"(Landroid/view/Menu;)V",
			arg0.__jniObject().object());
	}
	jboolean Fragment::onOptionsItemSelected(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.__jniObject().object());
	}
	void Fragment::onOptionsMenuClosed(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onOptionsMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.__jniObject().object());
	}
	void Fragment::onCreateContextMenu(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::View arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onCreateContextMenu",
			"(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void Fragment::registerForContextMenu(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"registerForContextMenu",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void Fragment::unregisterForContextMenu(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"unregisterForContextMenu",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	jboolean Fragment::onContextItemSelected(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onContextItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Fragment::getLayoutInflater()
	{
		return __thiz.callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;");
	}
	void Fragment::requestPermissions(jarray arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"requestPermissions",
			"([Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	void Fragment::onRequestPermissionsResult(jint arg0, jarray arg1, jintArray arg2)
	{
		__thiz.callMethod<void>(
			"onRequestPermissionsResult",
			"(I[Ljava/lang/String;[I)V",
			arg0,
			arg1,
			arg2);
	}
	jboolean Fragment::shouldShowRequestPermissionRationale(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"shouldShowRequestPermissionRationale",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	void Fragment::startActivityForResult(__jni_impl::android::content::Intent arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"startActivityForResult",
			"(Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Fragment::startActivityForResult(__jni_impl::android::content::Intent arg0, jint arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"startActivityForResult",
			"(Landroid/content/Intent;ILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void Fragment::startIntentSenderForResult(__jni_impl::android::content::IntentSender arg0, jint arg1, __jni_impl::android::content::Intent arg2, jint arg3, jint arg4, jint arg5, __jni_impl::android::os::Bundle arg6)
	{
		__thiz.callMethod<void>(
			"startIntentSenderForResult",
			"(Landroid/content/IntentSender;ILandroid/content/Intent;IIILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object());
	}
	void Fragment::onActivityResult(jint arg0, jint arg1, __jni_impl::android::content::Intent arg2)
	{
		__thiz.callMethod<void>(
			"onActivityResult",
			"(IILandroid/content/Intent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject Fragment::onCreateView(__jni_impl::android::view::LayoutInflater arg0, __jni_impl::android::view::ViewGroup arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"onCreateView",
			"(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void Fragment::setEnterSharedElementCallback(__jni_impl::android::app::SharedElementCallback arg0)
	{
		__thiz.callMethod<void>(
			"setEnterSharedElementCallback",
			"(Landroid/app/SharedElementCallback;)V",
			arg0.__jniObject().object());
	}
	void Fragment::setExitSharedElementCallback(__jni_impl::android::app::SharedElementCallback arg0)
	{
		__thiz.callMethod<void>(
			"setExitSharedElementCallback",
			"(Landroid/app/SharedElementCallback;)V",
			arg0.__jniObject().object());
	}
	void Fragment::postponeEnterTransition()
	{
		__thiz.callMethod<void>(
			"postponeEnterTransition",
			"()V");
	}
	void Fragment::startPostponedEnterTransition()
	{
		__thiz.callMethod<void>(
			"startPostponedEnterTransition",
			"()V");
	}
	void Fragment::startActivity(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Fragment::startActivity(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object());
	}
	void Fragment::setEnterTransition(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object());
	}
	void Fragment::setReturnTransition(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setReturnTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object());
	}
	void Fragment::setExitTransition(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setExitTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object());
	}
	void Fragment::setReenterTransition(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setReenterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Fragment::getEnterTransition()
	{
		return __thiz.callObjectMethod(
			"getEnterTransition",
			"()Landroid/transition/Transition;");
	}
	QAndroidJniObject Fragment::getReturnTransition()
	{
		return __thiz.callObjectMethod(
			"getReturnTransition",
			"()Landroid/transition/Transition;");
	}
	QAndroidJniObject Fragment::getExitTransition()
	{
		return __thiz.callObjectMethod(
			"getExitTransition",
			"()Landroid/transition/Transition;");
	}
	QAndroidJniObject Fragment::getReenterTransition()
	{
		return __thiz.callObjectMethod(
			"getReenterTransition",
			"()Landroid/transition/Transition;");
	}
	void Fragment::setSharedElementEnterTransition(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setSharedElementEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object());
	}
	void Fragment::setSharedElementReturnTransition(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setSharedElementReturnTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Fragment::getSharedElementEnterTransition()
	{
		return __thiz.callObjectMethod(
			"getSharedElementEnterTransition",
			"()Landroid/transition/Transition;");
	}
	QAndroidJniObject Fragment::getSharedElementReturnTransition()
	{
		return __thiz.callObjectMethod(
			"getSharedElementReturnTransition",
			"()Landroid/transition/Transition;");
	}
	void Fragment::setAllowEnterTransitionOverlap(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowEnterTransitionOverlap",
			"(Z)V",
			arg0);
	}
	jboolean Fragment::getAllowEnterTransitionOverlap()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowEnterTransitionOverlap",
			"()Z");
	}
	void Fragment::setAllowReturnTransitionOverlap(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowReturnTransitionOverlap",
			"(Z)V",
			arg0);
	}
	jboolean Fragment::getAllowReturnTransitionOverlap()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowReturnTransitionOverlap",
			"()Z");
	}
	QAndroidJniObject Fragment::instantiate(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.Fragment",
			"instantiate",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;)Landroid/app/Fragment;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject Fragment::instantiate(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.Fragment",
			"instantiate",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/app/Fragment;",
			arg0.__jniObject().object(),
			arg1);
	}
	void Fragment::setArguments(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setArguments",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Fragment::getArguments()
	{
		return __thiz.callObjectMethod(
			"getArguments",
			"()Landroid/os/Bundle;");
	}
	jboolean Fragment::isStateSaved()
	{
		return __thiz.callMethod<jboolean>(
			"isStateSaved",
			"()Z");
	}
	void Fragment::setInitialSavedState(__jni_impl::android::app::Fragment_SavedState arg0)
	{
		__thiz.callMethod<void>(
			"setInitialSavedState",
			"(Landroid/app/Fragment$SavedState;)V",
			arg0.__jniObject().object());
	}
	void Fragment::onDestroyView()
	{
		__thiz.callMethod<void>(
			"onDestroyView",
			"()V");
	}
	void Fragment::setTargetFragment(__jni_impl::android::app::Fragment arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setTargetFragment",
			"(Landroid/app/Fragment;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject Fragment::getTargetFragment()
	{
		return __thiz.callObjectMethod(
			"getTargetFragment",
			"()Landroid/app/Fragment;");
	}
	jint Fragment::getTargetRequestCode()
	{
		return __thiz.callMethod<jint>(
			"getTargetRequestCode",
			"()I");
	}
	QAndroidJniObject Fragment::getChildFragmentManager()
	{
		return __thiz.callObjectMethod(
			"getChildFragmentManager",
			"()Landroid/app/FragmentManager;");
	}
	QAndroidJniObject Fragment::getParentFragment()
	{
		return __thiz.callObjectMethod(
			"getParentFragment",
			"()Landroid/app/Fragment;");
	}
	jboolean Fragment::isAdded()
	{
		return __thiz.callMethod<jboolean>(
			"isAdded",
			"()Z");
	}
	jboolean Fragment::isDetached()
	{
		return __thiz.callMethod<jboolean>(
			"isDetached",
			"()Z");
	}
	jboolean Fragment::isRemoving()
	{
		return __thiz.callMethod<jboolean>(
			"isRemoving",
			"()Z");
	}
	jboolean Fragment::isResumed()
	{
		return __thiz.callMethod<jboolean>(
			"isResumed",
			"()Z");
	}
	void Fragment::onHiddenChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onHiddenChanged",
			"(Z)V",
			arg0);
	}
	void Fragment::setRetainInstance(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setRetainInstance",
			"(Z)V",
			arg0);
	}
	jboolean Fragment::getRetainInstance()
	{
		return __thiz.callMethod<jboolean>(
			"getRetainInstance",
			"()Z");
	}
	void Fragment::setHasOptionsMenu(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHasOptionsMenu",
			"(Z)V",
			arg0);
	}
	void Fragment::setMenuVisibility(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMenuVisibility",
			"(Z)V",
			arg0);
	}
	void Fragment::setUserVisibleHint(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUserVisibleHint",
			"(Z)V",
			arg0);
	}
	jboolean Fragment::getUserVisibleHint()
	{
		return __thiz.callMethod<jboolean>(
			"getUserVisibleHint",
			"()Z");
	}
	QAndroidJniObject Fragment::onGetLayoutInflater(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"onGetLayoutInflater",
			"(Landroid/os/Bundle;)Landroid/view/LayoutInflater;",
			arg0.__jniObject().object());
	}
	void Fragment::onInflate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onInflate",
			"(Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Fragment::onInflate(__jni_impl::android::app::Activity arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onInflate",
			"(Landroid/app/Activity;Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void Fragment::onInflate(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onInflate",
			"(Landroid/content/Context;Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void Fragment::onAttach(__jni_impl::android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"onAttach",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object());
	}
	void Fragment::onAttach(__jni_impl::android::content::Context arg0)
	{
		__thiz.callMethod<void>(
			"onAttach",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Fragment::onCreateAnimator(jint arg0, jboolean arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"onCreateAnimator",
			"(IZI)Landroid/animation/Animator;",
			arg0,
			arg1,
			arg2);
	}
	void Fragment::onViewCreated(__jni_impl::android::view::View arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onViewCreated",
			"(Landroid/view/View;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject Fragment::getView()
	{
		return __thiz.callObjectMethod(
			"getView",
			"()Landroid/view/View;");
	}
	void Fragment::onActivityCreated(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onActivityCreated",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	void Fragment::onViewStateRestored(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onViewStateRestored",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	void Fragment::onDetach()
	{
		__thiz.callMethod<void>(
			"onDetach",
			"()V");
	}
	void Fragment::onDestroyOptionsMenu()
	{
		__thiz.callMethod<void>(
			"onDestroyOptionsMenu",
			"()V");
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Fragment : public __jni_impl::android::app::Fragment
	{
	public:
		Fragment(QAndroidJniObject obj) { __thiz = obj; }
		Fragment()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_FRAGMENT

