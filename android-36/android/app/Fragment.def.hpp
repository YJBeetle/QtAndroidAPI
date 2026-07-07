#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JObjectArray;
class JArray;
namespace android::animation
{
	class Animator;
}
namespace android::app
{
	class Activity;
}
namespace android::app
{
	class Fragment_SavedState;
}
namespace android::app
{
	class FragmentManager;
}
namespace android::app
{
	class LoaderManager;
}
namespace android::app
{
	class SharedElementCallback;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::content
{
	class IntentSender;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::content::res
{
	class Resources;
}
namespace android::os
{
	class Bundle;
}
namespace android::transition
{
	class Transition;
}
namespace android::view
{
	class LayoutInflater;
}
namespace android::view
{
	class MenuInflater;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}
class JString;
class JObject;
class JString;

namespace android::app
{
	class Fragment : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Fragment(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Fragment(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Fragment();
		
		// Methods
		static android::app::Fragment instantiate(android::content::Context arg0, JString arg1);
		static android::app::Fragment instantiate(android::content::Context arg0, JString arg1, android::os::Bundle arg2);
		void dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const;
		jboolean equals(JObject arg0) const;
		android::app::Activity getActivity() const;
		jboolean getAllowEnterTransitionOverlap() const;
		jboolean getAllowReturnTransitionOverlap() const;
		android::os::Bundle getArguments() const;
		android::app::FragmentManager getChildFragmentManager() const;
		android::content::Context getContext() const;
		android::transition::Transition getEnterTransition() const;
		android::transition::Transition getExitTransition() const;
		android::app::FragmentManager getFragmentManager() const;
		JObject getHost() const;
		jint getId() const;
		android::view::LayoutInflater getLayoutInflater() const;
		android::app::LoaderManager getLoaderManager() const;
		android::app::Fragment getParentFragment() const;
		android::transition::Transition getReenterTransition() const;
		android::content::res::Resources getResources() const;
		jboolean getRetainInstance() const;
		android::transition::Transition getReturnTransition() const;
		android::transition::Transition getSharedElementEnterTransition() const;
		android::transition::Transition getSharedElementReturnTransition() const;
		JString getString(jint arg0) const;
		JString getString(jint arg0, JObjectArray arg1) const;
		JString getTag() const;
		android::app::Fragment getTargetFragment() const;
		jint getTargetRequestCode() const;
		JString getText(jint arg0) const;
		jboolean getUserVisibleHint() const;
		android::view::View getView() const;
		jint hashCode() const;
		jboolean isAdded() const;
		jboolean isDetached() const;
		jboolean isHidden() const;
		jboolean isInLayout() const;
		jboolean isRemoving() const;
		jboolean isResumed() const;
		jboolean isStateSaved() const;
		jboolean isVisible() const;
		void onActivityCreated(android::os::Bundle arg0) const;
		void onActivityResult(jint arg0, jint arg1, android::content::Intent arg2) const;
		void onAttach(android::app::Activity arg0) const;
		void onAttach(android::content::Context arg0) const;
		void onAttachFragment(android::app::Fragment arg0) const;
		void onConfigurationChanged(android::content::res::Configuration arg0) const;
		jboolean onContextItemSelected(JObject arg0) const;
		void onCreate(android::os::Bundle arg0) const;
		android::animation::Animator onCreateAnimator(jint arg0, jboolean arg1, jint arg2) const;
		void onCreateContextMenu(JObject arg0, android::view::View arg1, JObject arg2) const;
		void onCreateOptionsMenu(JObject arg0, android::view::MenuInflater arg1) const;
		android::view::View onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2) const;
		void onDestroy() const;
		void onDestroyOptionsMenu() const;
		void onDestroyView() const;
		void onDetach() const;
		android::view::LayoutInflater onGetLayoutInflater(android::os::Bundle arg0) const;
		void onHiddenChanged(jboolean arg0) const;
		void onInflate(JObject arg0, android::os::Bundle arg1) const;
		void onInflate(android::app::Activity arg0, JObject arg1, android::os::Bundle arg2) const;
		void onInflate(android::content::Context arg0, JObject arg1, android::os::Bundle arg2) const;
		void onLowMemory() const;
		void onMultiWindowModeChanged(jboolean arg0) const;
		void onMultiWindowModeChanged(jboolean arg0, android::content::res::Configuration arg1) const;
		jboolean onOptionsItemSelected(JObject arg0) const;
		void onOptionsMenuClosed(JObject arg0) const;
		void onPause() const;
		void onPictureInPictureModeChanged(jboolean arg0) const;
		void onPictureInPictureModeChanged(jboolean arg0, android::content::res::Configuration arg1) const;
		void onPrepareOptionsMenu(JObject arg0) const;
		void onRequestPermissionsResult(jint arg0, JArray arg1, JIntArray arg2) const;
		void onResume() const;
		void onSaveInstanceState(android::os::Bundle arg0) const;
		void onStart() const;
		void onStop() const;
		void onTrimMemory(jint arg0) const;
		void onViewCreated(android::view::View arg0, android::os::Bundle arg1) const;
		void onViewStateRestored(android::os::Bundle arg0) const;
		void postponeEnterTransition() const;
		void registerForContextMenu(android::view::View arg0) const;
		void requestPermissions(JArray arg0, jint arg1) const;
		void setAllowEnterTransitionOverlap(jboolean arg0) const;
		void setAllowReturnTransitionOverlap(jboolean arg0) const;
		void setArguments(android::os::Bundle arg0) const;
		void setEnterSharedElementCallback(android::app::SharedElementCallback arg0) const;
		void setEnterTransition(android::transition::Transition arg0) const;
		void setExitSharedElementCallback(android::app::SharedElementCallback arg0) const;
		void setExitTransition(android::transition::Transition arg0) const;
		void setHasOptionsMenu(jboolean arg0) const;
		void setInitialSavedState(android::app::Fragment_SavedState arg0) const;
		void setMenuVisibility(jboolean arg0) const;
		void setReenterTransition(android::transition::Transition arg0) const;
		void setRetainInstance(jboolean arg0) const;
		void setReturnTransition(android::transition::Transition arg0) const;
		void setSharedElementEnterTransition(android::transition::Transition arg0) const;
		void setSharedElementReturnTransition(android::transition::Transition arg0) const;
		void setTargetFragment(android::app::Fragment arg0, jint arg1) const;
		void setUserVisibleHint(jboolean arg0) const;
		jboolean shouldShowRequestPermissionRationale(JString arg0) const;
		void startActivity(android::content::Intent arg0) const;
		void startActivity(android::content::Intent arg0, android::os::Bundle arg1) const;
		void startActivityForResult(android::content::Intent arg0, jint arg1) const;
		void startActivityForResult(android::content::Intent arg0, jint arg1, android::os::Bundle arg2) const;
		void startIntentSenderForResult(android::content::IntentSender arg0, jint arg1, android::content::Intent arg2, jint arg3, jint arg4, jint arg5, android::os::Bundle arg6) const;
		void startPostponedEnterTransition() const;
		JString toString() const;
		void unregisterForContextMenu(android::view::View arg0) const;
	};
} // namespace android::app

