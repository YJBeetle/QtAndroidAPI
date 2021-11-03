#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::app
{
	class Fragment;
}
namespace android::app
{
	class FragmentHostCallback;
}
namespace android::app
{
	class FragmentManager;
}
namespace android::app
{
	class FragmentManagerNonConfig;
}
namespace android::app
{
	class LoaderManager;
}
namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::util
{
	class ArrayMap;
}
namespace android::view
{
	class MenuInflater;
}
namespace android::view
{
	class View;
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

namespace android::app
{
	class FragmentController : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FragmentController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FragmentController(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::app::FragmentController createController(android::app::FragmentHostCallback arg0);
		void attachHost(android::app::Fragment arg0);
		void dispatchActivityCreated();
		void dispatchConfigurationChanged(android::content::res::Configuration arg0);
		jboolean dispatchContextItemSelected(JObject arg0);
		void dispatchCreate();
		jboolean dispatchCreateOptionsMenu(JObject arg0, android::view::MenuInflater arg1);
		void dispatchDestroy();
		void dispatchDestroyView();
		void dispatchLowMemory();
		void dispatchMultiWindowModeChanged(jboolean arg0);
		void dispatchMultiWindowModeChanged(jboolean arg0, android::content::res::Configuration arg1);
		jboolean dispatchOptionsItemSelected(JObject arg0);
		void dispatchOptionsMenuClosed(JObject arg0);
		void dispatchPause();
		void dispatchPictureInPictureModeChanged(jboolean arg0);
		void dispatchPictureInPictureModeChanged(jboolean arg0, android::content::res::Configuration arg1);
		jboolean dispatchPrepareOptionsMenu(JObject arg0);
		void dispatchResume();
		void dispatchStart();
		void dispatchStop();
		void dispatchTrimMemory(jint arg0);
		void doLoaderDestroy();
		void doLoaderStart();
		void doLoaderStop(jboolean arg0);
		void dumpLoaders(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3);
		jboolean execPendingActions();
		android::app::Fragment findFragmentByWho(JString arg0);
		android::app::FragmentManager getFragmentManager();
		android::app::LoaderManager getLoaderManager();
		void noteStateNotSaved();
		android::view::View onCreateView(android::view::View arg0, JString arg1, android::content::Context arg2, JObject arg3);
		void reportLoaderStart();
		void restoreAllState(JObject arg0, android::app::FragmentManagerNonConfig arg1);
		void restoreAllState(JObject arg0, JObject arg1);
		void restoreLoaderNonConfig(android::util::ArrayMap arg0);
		android::util::ArrayMap retainLoaderNonConfig();
		android::app::FragmentManagerNonConfig retainNestedNonConfig();
		JObject retainNonConfig();
		JObject saveAllState();
	};
} // namespace android::app

