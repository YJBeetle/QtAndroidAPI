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
		
		// QJniObject forward
		template<typename ...Ts> explicit FragmentController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FragmentController(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::app::FragmentController createController(android::app::FragmentHostCallback arg0);
		void attachHost(android::app::Fragment arg0) const;
		void dispatchActivityCreated() const;
		void dispatchConfigurationChanged(android::content::res::Configuration arg0) const;
		jboolean dispatchContextItemSelected(JObject arg0) const;
		void dispatchCreate() const;
		jboolean dispatchCreateOptionsMenu(JObject arg0, android::view::MenuInflater arg1) const;
		void dispatchDestroy() const;
		void dispatchDestroyView() const;
		void dispatchLowMemory() const;
		void dispatchMultiWindowModeChanged(jboolean arg0) const;
		void dispatchMultiWindowModeChanged(jboolean arg0, android::content::res::Configuration arg1) const;
		jboolean dispatchOptionsItemSelected(JObject arg0) const;
		void dispatchOptionsMenuClosed(JObject arg0) const;
		void dispatchPause() const;
		void dispatchPictureInPictureModeChanged(jboolean arg0) const;
		void dispatchPictureInPictureModeChanged(jboolean arg0, android::content::res::Configuration arg1) const;
		jboolean dispatchPrepareOptionsMenu(JObject arg0) const;
		void dispatchResume() const;
		void dispatchStart() const;
		void dispatchStop() const;
		void dispatchTrimMemory(jint arg0) const;
		void doLoaderDestroy() const;
		void doLoaderStart() const;
		void doLoaderStop(jboolean arg0) const;
		void dumpLoaders(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const;
		jboolean execPendingActions() const;
		android::app::Fragment findFragmentByWho(JString arg0) const;
		android::app::FragmentManager getFragmentManager() const;
		android::app::LoaderManager getLoaderManager() const;
		void noteStateNotSaved() const;
		android::view::View onCreateView(android::view::View arg0, JString arg1, android::content::Context arg2, JObject arg3) const;
		void reportLoaderStart() const;
		void restoreAllState(JObject arg0, android::app::FragmentManagerNonConfig arg1) const;
		void restoreAllState(JObject arg0, JObject arg1) const;
		void restoreLoaderNonConfig(android::util::ArrayMap arg0) const;
		android::util::ArrayMap retainLoaderNonConfig() const;
		android::app::FragmentManagerNonConfig retainNestedNonConfig() const;
		JObject retainNonConfig() const;
		JObject saveAllState() const;
	};
} // namespace android::app

