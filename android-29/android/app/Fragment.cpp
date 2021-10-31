#include "../animation/Animator.hpp"
#include "./Activity.hpp"
#include "./Fragment_SavedState.hpp"
#include "./FragmentManager.hpp"
#include "./LoaderManager.hpp"
#include "./SharedElementCallback.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../content/IntentSender.hpp"
#include "../content/res/Configuration.hpp"
#include "../content/res/Resources.hpp"
#include "../os/Bundle.hpp"
#include "../transition/Transition.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/MenuInflater.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./Fragment.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	Fragment::Fragment(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Fragment::Fragment()
		: __JniBaseClass(
			"android.app.Fragment",
			"()V"
		) {}
	
	// Methods
	android::app::Fragment Fragment::instantiate(android::content::Context arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.app.Fragment",
			"instantiate",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/app/Fragment;",
			arg0.object(),
			arg1
		);
	}
	android::app::Fragment Fragment::instantiate(android::content::Context arg0, jstring arg1, android::os::Bundle arg2)
	{
		return callStaticObjectMethod(
			"android.app.Fragment",
			"instantiate",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;)Landroid/app/Fragment;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void Fragment::dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	jboolean Fragment::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::app::Activity Fragment::getActivity()
	{
		return callObjectMethod(
			"getActivity",
			"()Landroid/app/Activity;"
		);
	}
	jboolean Fragment::getAllowEnterTransitionOverlap()
	{
		return callMethod<jboolean>(
			"getAllowEnterTransitionOverlap",
			"()Z"
		);
	}
	jboolean Fragment::getAllowReturnTransitionOverlap()
	{
		return callMethod<jboolean>(
			"getAllowReturnTransitionOverlap",
			"()Z"
		);
	}
	android::os::Bundle Fragment::getArguments()
	{
		return callObjectMethod(
			"getArguments",
			"()Landroid/os/Bundle;"
		);
	}
	android::app::FragmentManager Fragment::getChildFragmentManager()
	{
		return callObjectMethod(
			"getChildFragmentManager",
			"()Landroid/app/FragmentManager;"
		);
	}
	android::content::Context Fragment::getContext()
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	android::transition::Transition Fragment::getEnterTransition()
	{
		return callObjectMethod(
			"getEnterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	android::transition::Transition Fragment::getExitTransition()
	{
		return callObjectMethod(
			"getExitTransition",
			"()Landroid/transition/Transition;"
		);
	}
	android::app::FragmentManager Fragment::getFragmentManager()
	{
		return callObjectMethod(
			"getFragmentManager",
			"()Landroid/app/FragmentManager;"
		);
	}
	jobject Fragment::getHost()
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint Fragment::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	android::view::LayoutInflater Fragment::getLayoutInflater()
	{
		return callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	android::app::LoaderManager Fragment::getLoaderManager()
	{
		return callObjectMethod(
			"getLoaderManager",
			"()Landroid/app/LoaderManager;"
		);
	}
	android::app::Fragment Fragment::getParentFragment()
	{
		return callObjectMethod(
			"getParentFragment",
			"()Landroid/app/Fragment;"
		);
	}
	android::transition::Transition Fragment::getReenterTransition()
	{
		return callObjectMethod(
			"getReenterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	android::content::res::Resources Fragment::getResources()
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	jboolean Fragment::getRetainInstance()
	{
		return callMethod<jboolean>(
			"getRetainInstance",
			"()Z"
		);
	}
	android::transition::Transition Fragment::getReturnTransition()
	{
		return callObjectMethod(
			"getReturnTransition",
			"()Landroid/transition/Transition;"
		);
	}
	android::transition::Transition Fragment::getSharedElementEnterTransition()
	{
		return callObjectMethod(
			"getSharedElementEnterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	android::transition::Transition Fragment::getSharedElementReturnTransition()
	{
		return callObjectMethod(
			"getSharedElementReturnTransition",
			"()Landroid/transition/Transition;"
		);
	}
	jstring Fragment::getString(jint arg0)
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Fragment::getString(jint arg0, jobjectArray arg1)
	{
		return callObjectMethod(
			"getString",
			"(I[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Fragment::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::app::Fragment Fragment::getTargetFragment()
	{
		return callObjectMethod(
			"getTargetFragment",
			"()Landroid/app/Fragment;"
		);
	}
	jint Fragment::getTargetRequestCode()
	{
		return callMethod<jint>(
			"getTargetRequestCode",
			"()I"
		);
	}
	jstring Fragment::getText(jint arg0)
	{
		return callObjectMethod(
			"getText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jboolean Fragment::getUserVisibleHint()
	{
		return callMethod<jboolean>(
			"getUserVisibleHint",
			"()Z"
		);
	}
	android::view::View Fragment::getView()
	{
		return callObjectMethod(
			"getView",
			"()Landroid/view/View;"
		);
	}
	jint Fragment::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Fragment::isAdded()
	{
		return callMethod<jboolean>(
			"isAdded",
			"()Z"
		);
	}
	jboolean Fragment::isDetached()
	{
		return callMethod<jboolean>(
			"isDetached",
			"()Z"
		);
	}
	jboolean Fragment::isHidden()
	{
		return callMethod<jboolean>(
			"isHidden",
			"()Z"
		);
	}
	jboolean Fragment::isInLayout()
	{
		return callMethod<jboolean>(
			"isInLayout",
			"()Z"
		);
	}
	jboolean Fragment::isRemoving()
	{
		return callMethod<jboolean>(
			"isRemoving",
			"()Z"
		);
	}
	jboolean Fragment::isResumed()
	{
		return callMethod<jboolean>(
			"isResumed",
			"()Z"
		);
	}
	jboolean Fragment::isStateSaved()
	{
		return callMethod<jboolean>(
			"isStateSaved",
			"()Z"
		);
	}
	jboolean Fragment::isVisible()
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	void Fragment::onActivityCreated(android::os::Bundle arg0)
	{
		callMethod<void>(
			"onActivityCreated",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Fragment::onActivityResult(jint arg0, jint arg1, android::content::Intent arg2)
	{
		callMethod<void>(
			"onActivityResult",
			"(IILandroid/content/Intent;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void Fragment::onAttach(android::app::Activity arg0)
	{
		callMethod<void>(
			"onAttach",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	void Fragment::onAttach(android::content::Context arg0)
	{
		callMethod<void>(
			"onAttach",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
	void Fragment::onAttachFragment(android::app::Fragment arg0)
	{
		callMethod<void>(
			"onAttachFragment",
			"(Landroid/app/Fragment;)V",
			arg0.object()
		);
	}
	void Fragment::onConfigurationChanged(android::content::res::Configuration arg0)
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	jboolean Fragment::onContextItemSelected(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"onContextItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	void Fragment::onCreate(android::os::Bundle arg0)
	{
		callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	android::animation::Animator Fragment::onCreateAnimator(jint arg0, jboolean arg1, jint arg2)
	{
		return callObjectMethod(
			"onCreateAnimator",
			"(IZI)Landroid/animation/Animator;",
			arg0,
			arg1,
			arg2
		);
	}
	void Fragment::onCreateContextMenu(__JniBaseClass arg0, android::view::View arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"onCreateContextMenu",
			"(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Fragment::onCreateOptionsMenu(__JniBaseClass arg0, android::view::MenuInflater arg1)
	{
		callMethod<void>(
			"onCreateOptionsMenu",
			"(Landroid/view/Menu;Landroid/view/MenuInflater;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::view::View Fragment::onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"onCreateView",
			"(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Fragment::onDestroy()
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void Fragment::onDestroyOptionsMenu()
	{
		callMethod<void>(
			"onDestroyOptionsMenu",
			"()V"
		);
	}
	void Fragment::onDestroyView()
	{
		callMethod<void>(
			"onDestroyView",
			"()V"
		);
	}
	void Fragment::onDetach()
	{
		callMethod<void>(
			"onDetach",
			"()V"
		);
	}
	android::view::LayoutInflater Fragment::onGetLayoutInflater(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"onGetLayoutInflater",
			"(Landroid/os/Bundle;)Landroid/view/LayoutInflater;",
			arg0.object()
		);
	}
	void Fragment::onHiddenChanged(jboolean arg0)
	{
		callMethod<void>(
			"onHiddenChanged",
			"(Z)V",
			arg0
		);
	}
	void Fragment::onInflate(__JniBaseClass arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"onInflate",
			"(Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Fragment::onInflate(android::app::Activity arg0, __JniBaseClass arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"onInflate",
			"(Landroid/app/Activity;Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Fragment::onInflate(android::content::Context arg0, __JniBaseClass arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"onInflate",
			"(Landroid/content/Context;Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Fragment::onLowMemory()
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	void Fragment::onMultiWindowModeChanged(jboolean arg0)
	{
		callMethod<void>(
			"onMultiWindowModeChanged",
			"(Z)V",
			arg0
		);
	}
	void Fragment::onMultiWindowModeChanged(jboolean arg0, android::content::res::Configuration arg1)
	{
		callMethod<void>(
			"onMultiWindowModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.object()
		);
	}
	jboolean Fragment::onOptionsItemSelected(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"onOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	void Fragment::onOptionsMenuClosed(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onOptionsMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.object()
		);
	}
	void Fragment::onPause()
	{
		callMethod<void>(
			"onPause",
			"()V"
		);
	}
	void Fragment::onPictureInPictureModeChanged(jboolean arg0)
	{
		callMethod<void>(
			"onPictureInPictureModeChanged",
			"(Z)V",
			arg0
		);
	}
	void Fragment::onPictureInPictureModeChanged(jboolean arg0, android::content::res::Configuration arg1)
	{
		callMethod<void>(
			"onPictureInPictureModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.object()
		);
	}
	void Fragment::onPrepareOptionsMenu(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onPrepareOptionsMenu",
			"(Landroid/view/Menu;)V",
			arg0.object()
		);
	}
	void Fragment::onRequestPermissionsResult(jint arg0, jarray arg1, jintArray arg2)
	{
		callMethod<void>(
			"onRequestPermissionsResult",
			"(I[Ljava/lang/String;[I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Fragment::onResume()
	{
		callMethod<void>(
			"onResume",
			"()V"
		);
	}
	void Fragment::onSaveInstanceState(android::os::Bundle arg0)
	{
		callMethod<void>(
			"onSaveInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Fragment::onStart()
	{
		callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void Fragment::onStop()
	{
		callMethod<void>(
			"onStop",
			"()V"
		);
	}
	void Fragment::onTrimMemory(jint arg0)
	{
		callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	void Fragment::onViewCreated(android::view::View arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"onViewCreated",
			"(Landroid/view/View;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Fragment::onViewStateRestored(android::os::Bundle arg0)
	{
		callMethod<void>(
			"onViewStateRestored",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Fragment::postponeEnterTransition()
	{
		callMethod<void>(
			"postponeEnterTransition",
			"()V"
		);
	}
	void Fragment::registerForContextMenu(android::view::View arg0)
	{
		callMethod<void>(
			"registerForContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void Fragment::requestPermissions(jarray arg0, jint arg1)
	{
		callMethod<void>(
			"requestPermissions",
			"([Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void Fragment::setAllowEnterTransitionOverlap(jboolean arg0)
	{
		callMethod<void>(
			"setAllowEnterTransitionOverlap",
			"(Z)V",
			arg0
		);
	}
	void Fragment::setAllowReturnTransitionOverlap(jboolean arg0)
	{
		callMethod<void>(
			"setAllowReturnTransitionOverlap",
			"(Z)V",
			arg0
		);
	}
	void Fragment::setArguments(android::os::Bundle arg0)
	{
		callMethod<void>(
			"setArguments",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Fragment::setEnterSharedElementCallback(android::app::SharedElementCallback arg0)
	{
		callMethod<void>(
			"setEnterSharedElementCallback",
			"(Landroid/app/SharedElementCallback;)V",
			arg0.object()
		);
	}
	void Fragment::setEnterTransition(android::transition::Transition arg0)
	{
		callMethod<void>(
			"setEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Fragment::setExitSharedElementCallback(android::app::SharedElementCallback arg0)
	{
		callMethod<void>(
			"setExitSharedElementCallback",
			"(Landroid/app/SharedElementCallback;)V",
			arg0.object()
		);
	}
	void Fragment::setExitTransition(android::transition::Transition arg0)
	{
		callMethod<void>(
			"setExitTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Fragment::setHasOptionsMenu(jboolean arg0)
	{
		callMethod<void>(
			"setHasOptionsMenu",
			"(Z)V",
			arg0
		);
	}
	void Fragment::setInitialSavedState(android::app::Fragment_SavedState arg0)
	{
		callMethod<void>(
			"setInitialSavedState",
			"(Landroid/app/Fragment$SavedState;)V",
			arg0.object()
		);
	}
	void Fragment::setMenuVisibility(jboolean arg0)
	{
		callMethod<void>(
			"setMenuVisibility",
			"(Z)V",
			arg0
		);
	}
	void Fragment::setReenterTransition(android::transition::Transition arg0)
	{
		callMethod<void>(
			"setReenterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Fragment::setRetainInstance(jboolean arg0)
	{
		callMethod<void>(
			"setRetainInstance",
			"(Z)V",
			arg0
		);
	}
	void Fragment::setReturnTransition(android::transition::Transition arg0)
	{
		callMethod<void>(
			"setReturnTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Fragment::setSharedElementEnterTransition(android::transition::Transition arg0)
	{
		callMethod<void>(
			"setSharedElementEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Fragment::setSharedElementReturnTransition(android::transition::Transition arg0)
	{
		callMethod<void>(
			"setSharedElementReturnTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Fragment::setTargetFragment(android::app::Fragment arg0, jint arg1)
	{
		callMethod<void>(
			"setTargetFragment",
			"(Landroid/app/Fragment;I)V",
			arg0.object(),
			arg1
		);
	}
	void Fragment::setUserVisibleHint(jboolean arg0)
	{
		callMethod<void>(
			"setUserVisibleHint",
			"(Z)V",
			arg0
		);
	}
	jboolean Fragment::shouldShowRequestPermissionRationale(jstring arg0)
	{
		return callMethod<jboolean>(
			"shouldShowRequestPermissionRationale",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void Fragment::startActivity(android::content::Intent arg0)
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void Fragment::startActivity(android::content::Intent arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Fragment::startActivityForResult(android::content::Intent arg0, jint arg1)
	{
		callMethod<void>(
			"startActivityForResult",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	void Fragment::startActivityForResult(android::content::Intent arg0, jint arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"startActivityForResult",
			"(Landroid/content/Intent;ILandroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void Fragment::startIntentSenderForResult(android::content::IntentSender arg0, jint arg1, android::content::Intent arg2, jint arg3, jint arg4, jint arg5, android::os::Bundle arg6)
	{
		callMethod<void>(
			"startIntentSenderForResult",
			"(Landroid/content/IntentSender;ILandroid/content/Intent;IIILandroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5,
			arg6.object()
		);
	}
	void Fragment::startPostponedEnterTransition()
	{
		callMethod<void>(
			"startPostponedEnterTransition",
			"()V"
		);
	}
	jstring Fragment::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Fragment::unregisterForContextMenu(android::view::View arg0)
	{
		callMethod<void>(
			"unregisterForContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
} // namespace android::app

