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
		Fragment(QJniObject obj);
		
		// Constructors
		Fragment();
		
		// Methods
		static android::app::Fragment instantiate(android::content::Context arg0, JString arg1);
		static android::app::Fragment instantiate(android::content::Context arg0, JString arg1, android::os::Bundle arg2);
		void dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3);
		jboolean equals(JObject arg0);
		android::app::Activity getActivity();
		jboolean getAllowEnterTransitionOverlap();
		jboolean getAllowReturnTransitionOverlap();
		android::os::Bundle getArguments();
		android::app::FragmentManager getChildFragmentManager();
		android::content::Context getContext();
		android::transition::Transition getEnterTransition();
		android::transition::Transition getExitTransition();
		android::app::FragmentManager getFragmentManager();
		JObject getHost();
		jint getId();
		android::view::LayoutInflater getLayoutInflater();
		android::app::LoaderManager getLoaderManager();
		android::app::Fragment getParentFragment();
		android::transition::Transition getReenterTransition();
		android::content::res::Resources getResources();
		jboolean getRetainInstance();
		android::transition::Transition getReturnTransition();
		android::transition::Transition getSharedElementEnterTransition();
		android::transition::Transition getSharedElementReturnTransition();
		JString getString(jint arg0);
		JString getString(jint arg0, JObjectArray arg1);
		JString getTag();
		android::app::Fragment getTargetFragment();
		jint getTargetRequestCode();
		JString getText(jint arg0);
		jboolean getUserVisibleHint();
		android::view::View getView();
		jint hashCode();
		jboolean isAdded();
		jboolean isDetached();
		jboolean isHidden();
		jboolean isInLayout();
		jboolean isRemoving();
		jboolean isResumed();
		jboolean isStateSaved();
		jboolean isVisible();
		void onActivityCreated(android::os::Bundle arg0);
		void onActivityResult(jint arg0, jint arg1, android::content::Intent arg2);
		void onAttach(android::app::Activity arg0);
		void onAttach(android::content::Context arg0);
		void onAttachFragment(android::app::Fragment arg0);
		void onConfigurationChanged(android::content::res::Configuration arg0);
		jboolean onContextItemSelected(JObject arg0);
		void onCreate(android::os::Bundle arg0);
		android::animation::Animator onCreateAnimator(jint arg0, jboolean arg1, jint arg2);
		void onCreateContextMenu(JObject arg0, android::view::View arg1, JObject arg2);
		void onCreateOptionsMenu(JObject arg0, android::view::MenuInflater arg1);
		android::view::View onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2);
		void onDestroy();
		void onDestroyOptionsMenu();
		void onDestroyView();
		void onDetach();
		android::view::LayoutInflater onGetLayoutInflater(android::os::Bundle arg0);
		void onHiddenChanged(jboolean arg0);
		void onInflate(JObject arg0, android::os::Bundle arg1);
		void onInflate(android::app::Activity arg0, JObject arg1, android::os::Bundle arg2);
		void onInflate(android::content::Context arg0, JObject arg1, android::os::Bundle arg2);
		void onLowMemory();
		void onMultiWindowModeChanged(jboolean arg0);
		void onMultiWindowModeChanged(jboolean arg0, android::content::res::Configuration arg1);
		jboolean onOptionsItemSelected(JObject arg0);
		void onOptionsMenuClosed(JObject arg0);
		void onPause();
		void onPictureInPictureModeChanged(jboolean arg0);
		void onPictureInPictureModeChanged(jboolean arg0, android::content::res::Configuration arg1);
		void onPrepareOptionsMenu(JObject arg0);
		void onRequestPermissionsResult(jint arg0, JArray arg1, JIntArray arg2);
		void onResume();
		void onSaveInstanceState(android::os::Bundle arg0);
		void onStart();
		void onStop();
		void onTrimMemory(jint arg0);
		void onViewCreated(android::view::View arg0, android::os::Bundle arg1);
		void onViewStateRestored(android::os::Bundle arg0);
		void postponeEnterTransition();
		void registerForContextMenu(android::view::View arg0);
		void requestPermissions(JArray arg0, jint arg1);
		void setAllowEnterTransitionOverlap(jboolean arg0);
		void setAllowReturnTransitionOverlap(jboolean arg0);
		void setArguments(android::os::Bundle arg0);
		void setEnterSharedElementCallback(android::app::SharedElementCallback arg0);
		void setEnterTransition(android::transition::Transition arg0);
		void setExitSharedElementCallback(android::app::SharedElementCallback arg0);
		void setExitTransition(android::transition::Transition arg0);
		void setHasOptionsMenu(jboolean arg0);
		void setInitialSavedState(android::app::Fragment_SavedState arg0);
		void setMenuVisibility(jboolean arg0);
		void setReenterTransition(android::transition::Transition arg0);
		void setRetainInstance(jboolean arg0);
		void setReturnTransition(android::transition::Transition arg0);
		void setSharedElementEnterTransition(android::transition::Transition arg0);
		void setSharedElementReturnTransition(android::transition::Transition arg0);
		void setTargetFragment(android::app::Fragment arg0, jint arg1);
		void setUserVisibleHint(jboolean arg0);
		jboolean shouldShowRequestPermissionRationale(JString arg0);
		void startActivity(android::content::Intent arg0);
		void startActivity(android::content::Intent arg0, android::os::Bundle arg1);
		void startActivityForResult(android::content::Intent arg0, jint arg1);
		void startActivityForResult(android::content::Intent arg0, jint arg1, android::os::Bundle arg2);
		void startIntentSenderForResult(android::content::IntentSender arg0, jint arg1, android::content::Intent arg2, jint arg3, jint arg4, jint arg5, android::os::Bundle arg6);
		void startPostponedEnterTransition();
		JString toString();
		void unregisterForContextMenu(android::view::View arg0);
	};
} // namespace android::app

