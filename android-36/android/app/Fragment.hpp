#pragma once

#include "../../JIntArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../animation/Animator.def.hpp"
#include "./Activity.def.hpp"
#include "./Fragment_SavedState.def.hpp"
#include "./FragmentManager.def.hpp"
#include "./LoaderManager.def.hpp"
#include "./SharedElementCallback.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../content/IntentSender.def.hpp"
#include "../content/res/Configuration.def.hpp"
#include "../content/res/Resources.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../transition/Transition.def.hpp"
#include "../view/LayoutInflater.def.hpp"
#include "../view/MenuInflater.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../java/io/PrintWriter.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Fragment.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Fragment::Fragment()
		: JObject(
			"android.app.Fragment",
			"()V"
		) {}
	
	// Methods
	inline android::app::Fragment Fragment::instantiate(android::content::Context arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.app.Fragment",
			"instantiate",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/app/Fragment;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::app::Fragment Fragment::instantiate(android::content::Context arg0, JString arg1, android::os::Bundle arg2)
	{
		return callStaticObjectMethod(
			"android.app.Fragment",
			"instantiate",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;)Landroid/app/Fragment;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void Fragment::dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>()
		);
	}
	inline jboolean Fragment::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::app::Activity Fragment::getActivity() const
	{
		return callObjectMethod(
			"getActivity",
			"()Landroid/app/Activity;"
		);
	}
	inline jboolean Fragment::getAllowEnterTransitionOverlap() const
	{
		return callMethod<jboolean>(
			"getAllowEnterTransitionOverlap",
			"()Z"
		);
	}
	inline jboolean Fragment::getAllowReturnTransitionOverlap() const
	{
		return callMethod<jboolean>(
			"getAllowReturnTransitionOverlap",
			"()Z"
		);
	}
	inline android::os::Bundle Fragment::getArguments() const
	{
		return callObjectMethod(
			"getArguments",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::app::FragmentManager Fragment::getChildFragmentManager() const
	{
		return callObjectMethod(
			"getChildFragmentManager",
			"()Landroid/app/FragmentManager;"
		);
	}
	inline android::content::Context Fragment::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	inline android::transition::Transition Fragment::getEnterTransition() const
	{
		return callObjectMethod(
			"getEnterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	inline android::transition::Transition Fragment::getExitTransition() const
	{
		return callObjectMethod(
			"getExitTransition",
			"()Landroid/transition/Transition;"
		);
	}
	inline android::app::FragmentManager Fragment::getFragmentManager() const
	{
		return callObjectMethod(
			"getFragmentManager",
			"()Landroid/app/FragmentManager;"
		);
	}
	inline JObject Fragment::getHost() const
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/Object;"
		);
	}
	inline jint Fragment::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline android::view::LayoutInflater Fragment::getLayoutInflater() const
	{
		return callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	inline android::app::LoaderManager Fragment::getLoaderManager() const
	{
		return callObjectMethod(
			"getLoaderManager",
			"()Landroid/app/LoaderManager;"
		);
	}
	inline android::app::Fragment Fragment::getParentFragment() const
	{
		return callObjectMethod(
			"getParentFragment",
			"()Landroid/app/Fragment;"
		);
	}
	inline android::transition::Transition Fragment::getReenterTransition() const
	{
		return callObjectMethod(
			"getReenterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	inline android::content::res::Resources Fragment::getResources() const
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	inline jboolean Fragment::getRetainInstance() const
	{
		return callMethod<jboolean>(
			"getRetainInstance",
			"()Z"
		);
	}
	inline android::transition::Transition Fragment::getReturnTransition() const
	{
		return callObjectMethod(
			"getReturnTransition",
			"()Landroid/transition/Transition;"
		);
	}
	inline android::transition::Transition Fragment::getSharedElementEnterTransition() const
	{
		return callObjectMethod(
			"getSharedElementEnterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	inline android::transition::Transition Fragment::getSharedElementReturnTransition() const
	{
		return callObjectMethod(
			"getSharedElementReturnTransition",
			"()Landroid/transition/Transition;"
		);
	}
	inline JString Fragment::getString(jint arg0) const
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Fragment::getString(jint arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"getString",
			"(I[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1.object<jobjectArray>()
		);
	}
	inline JString Fragment::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	inline android::app::Fragment Fragment::getTargetFragment() const
	{
		return callObjectMethod(
			"getTargetFragment",
			"()Landroid/app/Fragment;"
		);
	}
	inline jint Fragment::getTargetRequestCode() const
	{
		return callMethod<jint>(
			"getTargetRequestCode",
			"()I"
		);
	}
	inline JString Fragment::getText(jint arg0) const
	{
		return callObjectMethod(
			"getText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		);
	}
	inline jboolean Fragment::getUserVisibleHint() const
	{
		return callMethod<jboolean>(
			"getUserVisibleHint",
			"()Z"
		);
	}
	inline android::view::View Fragment::getView() const
	{
		return callObjectMethod(
			"getView",
			"()Landroid/view/View;"
		);
	}
	inline jint Fragment::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Fragment::isAdded() const
	{
		return callMethod<jboolean>(
			"isAdded",
			"()Z"
		);
	}
	inline jboolean Fragment::isDetached() const
	{
		return callMethod<jboolean>(
			"isDetached",
			"()Z"
		);
	}
	inline jboolean Fragment::isHidden() const
	{
		return callMethod<jboolean>(
			"isHidden",
			"()Z"
		);
	}
	inline jboolean Fragment::isInLayout() const
	{
		return callMethod<jboolean>(
			"isInLayout",
			"()Z"
		);
	}
	inline jboolean Fragment::isRemoving() const
	{
		return callMethod<jboolean>(
			"isRemoving",
			"()Z"
		);
	}
	inline jboolean Fragment::isResumed() const
	{
		return callMethod<jboolean>(
			"isResumed",
			"()Z"
		);
	}
	inline jboolean Fragment::isStateSaved() const
	{
		return callMethod<jboolean>(
			"isStateSaved",
			"()Z"
		);
	}
	inline jboolean Fragment::isVisible() const
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	inline void Fragment::onActivityCreated(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onActivityCreated",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Fragment::onActivityResult(jint arg0, jint arg1, android::content::Intent arg2) const
	{
		callMethod<void>(
			"onActivityResult",
			"(IILandroid/content/Intent;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void Fragment::onAttach(android::app::Activity arg0) const
	{
		callMethod<void>(
			"onAttach",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	inline void Fragment::onAttach(android::content::Context arg0) const
	{
		callMethod<void>(
			"onAttach",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
	inline void Fragment::onAttachFragment(android::app::Fragment arg0) const
	{
		callMethod<void>(
			"onAttachFragment",
			"(Landroid/app/Fragment;)V",
			arg0.object()
		);
	}
	inline void Fragment::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	inline jboolean Fragment::onContextItemSelected(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onContextItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	inline void Fragment::onCreate(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline android::animation::Animator Fragment::onCreateAnimator(jint arg0, jboolean arg1, jint arg2) const
	{
		return callObjectMethod(
			"onCreateAnimator",
			"(IZI)Landroid/animation/Animator;",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Fragment::onCreateContextMenu(JObject arg0, android::view::View arg1, JObject arg2) const
	{
		callMethod<void>(
			"onCreateContextMenu",
			"(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void Fragment::onCreateOptionsMenu(JObject arg0, android::view::MenuInflater arg1) const
	{
		callMethod<void>(
			"onCreateOptionsMenu",
			"(Landroid/view/Menu;Landroid/view/MenuInflater;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::view::View Fragment::onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"onCreateView",
			"(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void Fragment::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	inline void Fragment::onDestroyOptionsMenu() const
	{
		callMethod<void>(
			"onDestroyOptionsMenu",
			"()V"
		);
	}
	inline void Fragment::onDestroyView() const
	{
		callMethod<void>(
			"onDestroyView",
			"()V"
		);
	}
	inline void Fragment::onDetach() const
	{
		callMethod<void>(
			"onDetach",
			"()V"
		);
	}
	inline android::view::LayoutInflater Fragment::onGetLayoutInflater(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"onGetLayoutInflater",
			"(Landroid/os/Bundle;)Landroid/view/LayoutInflater;",
			arg0.object()
		);
	}
	inline void Fragment::onHiddenChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onHiddenChanged",
			"(Z)V",
			arg0
		);
	}
	inline void Fragment::onInflate(JObject arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onInflate",
			"(Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Fragment::onInflate(android::app::Activity arg0, JObject arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onInflate",
			"(Landroid/app/Activity;Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void Fragment::onInflate(android::content::Context arg0, JObject arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onInflate",
			"(Landroid/content/Context;Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void Fragment::onLowMemory() const
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	inline void Fragment::onMultiWindowModeChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onMultiWindowModeChanged",
			"(Z)V",
			arg0
		);
	}
	inline void Fragment::onMultiWindowModeChanged(jboolean arg0, android::content::res::Configuration arg1) const
	{
		callMethod<void>(
			"onMultiWindowModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Fragment::onOptionsItemSelected(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	inline void Fragment::onOptionsMenuClosed(JObject arg0) const
	{
		callMethod<void>(
			"onOptionsMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.object()
		);
	}
	inline void Fragment::onPause() const
	{
		callMethod<void>(
			"onPause",
			"()V"
		);
	}
	inline void Fragment::onPictureInPictureModeChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onPictureInPictureModeChanged",
			"(Z)V",
			arg0
		);
	}
	inline void Fragment::onPictureInPictureModeChanged(jboolean arg0, android::content::res::Configuration arg1) const
	{
		callMethod<void>(
			"onPictureInPictureModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Fragment::onPrepareOptionsMenu(JObject arg0) const
	{
		callMethod<void>(
			"onPrepareOptionsMenu",
			"(Landroid/view/Menu;)V",
			arg0.object()
		);
	}
	inline void Fragment::onRequestPermissionsResult(jint arg0, JArray arg1, JIntArray arg2) const
	{
		callMethod<void>(
			"onRequestPermissionsResult",
			"(I[Ljava/lang/String;[I)V",
			arg0,
			arg1.object<jarray>(),
			arg2.object<jintArray>()
		);
	}
	inline void Fragment::onResume() const
	{
		callMethod<void>(
			"onResume",
			"()V"
		);
	}
	inline void Fragment::onSaveInstanceState(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onSaveInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Fragment::onStart() const
	{
		callMethod<void>(
			"onStart",
			"()V"
		);
	}
	inline void Fragment::onStop() const
	{
		callMethod<void>(
			"onStop",
			"()V"
		);
	}
	inline void Fragment::onTrimMemory(jint arg0) const
	{
		callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	inline void Fragment::onViewCreated(android::view::View arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onViewCreated",
			"(Landroid/view/View;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Fragment::onViewStateRestored(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onViewStateRestored",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Fragment::postponeEnterTransition() const
	{
		callMethod<void>(
			"postponeEnterTransition",
			"()V"
		);
	}
	inline void Fragment::registerForContextMenu(android::view::View arg0) const
	{
		callMethod<void>(
			"registerForContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void Fragment::requestPermissions(JArray arg0, jint arg1) const
	{
		callMethod<void>(
			"requestPermissions",
			"([Ljava/lang/String;I)V",
			arg0.object<jarray>(),
			arg1
		);
	}
	inline void Fragment::setAllowEnterTransitionOverlap(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowEnterTransitionOverlap",
			"(Z)V",
			arg0
		);
	}
	inline void Fragment::setAllowReturnTransitionOverlap(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowReturnTransitionOverlap",
			"(Z)V",
			arg0
		);
	}
	inline void Fragment::setArguments(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setArguments",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Fragment::setEnterSharedElementCallback(android::app::SharedElementCallback arg0) const
	{
		callMethod<void>(
			"setEnterSharedElementCallback",
			"(Landroid/app/SharedElementCallback;)V",
			arg0.object()
		);
	}
	inline void Fragment::setEnterTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void Fragment::setExitSharedElementCallback(android::app::SharedElementCallback arg0) const
	{
		callMethod<void>(
			"setExitSharedElementCallback",
			"(Landroid/app/SharedElementCallback;)V",
			arg0.object()
		);
	}
	inline void Fragment::setExitTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setExitTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void Fragment::setHasOptionsMenu(jboolean arg0) const
	{
		callMethod<void>(
			"setHasOptionsMenu",
			"(Z)V",
			arg0
		);
	}
	inline void Fragment::setInitialSavedState(android::app::Fragment_SavedState arg0) const
	{
		callMethod<void>(
			"setInitialSavedState",
			"(Landroid/app/Fragment$SavedState;)V",
			arg0.object()
		);
	}
	inline void Fragment::setMenuVisibility(jboolean arg0) const
	{
		callMethod<void>(
			"setMenuVisibility",
			"(Z)V",
			arg0
		);
	}
	inline void Fragment::setReenterTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setReenterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void Fragment::setRetainInstance(jboolean arg0) const
	{
		callMethod<void>(
			"setRetainInstance",
			"(Z)V",
			arg0
		);
	}
	inline void Fragment::setReturnTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setReturnTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void Fragment::setSharedElementEnterTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setSharedElementEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void Fragment::setSharedElementReturnTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setSharedElementReturnTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void Fragment::setTargetFragment(android::app::Fragment arg0, jint arg1) const
	{
		callMethod<void>(
			"setTargetFragment",
			"(Landroid/app/Fragment;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Fragment::setUserVisibleHint(jboolean arg0) const
	{
		callMethod<void>(
			"setUserVisibleHint",
			"(Z)V",
			arg0
		);
	}
	inline jboolean Fragment::shouldShowRequestPermissionRationale(JString arg0) const
	{
		return callMethod<jboolean>(
			"shouldShowRequestPermissionRationale",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline void Fragment::startActivity(android::content::Intent arg0) const
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void Fragment::startActivity(android::content::Intent arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Fragment::startActivityForResult(android::content::Intent arg0, jint arg1) const
	{
		callMethod<void>(
			"startActivityForResult",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Fragment::startActivityForResult(android::content::Intent arg0, jint arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"startActivityForResult",
			"(Landroid/content/Intent;ILandroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void Fragment::startIntentSenderForResult(android::content::IntentSender arg0, jint arg1, android::content::Intent arg2, jint arg3, jint arg4, jint arg5, android::os::Bundle arg6) const
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
	inline void Fragment::startPostponedEnterTransition() const
	{
		callMethod<void>(
			"startPostponedEnterTransition",
			"()V"
		);
	}
	inline JString Fragment::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Fragment::unregisterForContextMenu(android::view::View arg0) const
	{
		callMethod<void>(
			"unregisterForContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
