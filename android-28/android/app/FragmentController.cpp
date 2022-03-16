#include "../../JArray.hpp"
#include "./Fragment.hpp"
#include "./FragmentHostCallback.hpp"
#include "./FragmentManager.hpp"
#include "./FragmentManagerNonConfig.hpp"
#include "./LoaderManager.hpp"
#include "../content/Context.hpp"
#include "../content/res/Configuration.hpp"
#include "../util/ArrayMap.hpp"
#include "../view/MenuInflater.hpp"
#include "../view/View.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "../../JString.hpp"
#include "./FragmentController.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	
	// Methods
	android::app::FragmentController FragmentController::createController(android::app::FragmentHostCallback arg0)
	{
		return callStaticObjectMethod(
			"android.app.FragmentController",
			"createController",
			"(Landroid/app/FragmentHostCallback;)Landroid/app/FragmentController;",
			arg0.object()
		);
	}
	void FragmentController::attachHost(android::app::Fragment arg0) const
	{
		callMethod<void>(
			"attachHost",
			"(Landroid/app/Fragment;)V",
			arg0.object()
		);
	}
	void FragmentController::dispatchActivityCreated() const
	{
		callMethod<void>(
			"dispatchActivityCreated",
			"()V"
		);
	}
	void FragmentController::dispatchConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"dispatchConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	jboolean FragmentController::dispatchContextItemSelected(JObject arg0) const
	{
		return callMethod<jboolean>(
			"dispatchContextItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	void FragmentController::dispatchCreate() const
	{
		callMethod<void>(
			"dispatchCreate",
			"()V"
		);
	}
	jboolean FragmentController::dispatchCreateOptionsMenu(JObject arg0, android::view::MenuInflater arg1) const
	{
		return callMethod<jboolean>(
			"dispatchCreateOptionsMenu",
			"(Landroid/view/Menu;Landroid/view/MenuInflater;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void FragmentController::dispatchDestroy() const
	{
		callMethod<void>(
			"dispatchDestroy",
			"()V"
		);
	}
	void FragmentController::dispatchDestroyView() const
	{
		callMethod<void>(
			"dispatchDestroyView",
			"()V"
		);
	}
	void FragmentController::dispatchLowMemory() const
	{
		callMethod<void>(
			"dispatchLowMemory",
			"()V"
		);
	}
	void FragmentController::dispatchMultiWindowModeChanged(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchMultiWindowModeChanged",
			"(Z)V",
			arg0
		);
	}
	void FragmentController::dispatchMultiWindowModeChanged(jboolean arg0, android::content::res::Configuration arg1) const
	{
		callMethod<void>(
			"dispatchMultiWindowModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.object()
		);
	}
	jboolean FragmentController::dispatchOptionsItemSelected(JObject arg0) const
	{
		return callMethod<jboolean>(
			"dispatchOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	void FragmentController::dispatchOptionsMenuClosed(JObject arg0) const
	{
		callMethod<void>(
			"dispatchOptionsMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.object()
		);
	}
	void FragmentController::dispatchPause() const
	{
		callMethod<void>(
			"dispatchPause",
			"()V"
		);
	}
	void FragmentController::dispatchPictureInPictureModeChanged(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchPictureInPictureModeChanged",
			"(Z)V",
			arg0
		);
	}
	void FragmentController::dispatchPictureInPictureModeChanged(jboolean arg0, android::content::res::Configuration arg1) const
	{
		callMethod<void>(
			"dispatchPictureInPictureModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.object()
		);
	}
	jboolean FragmentController::dispatchPrepareOptionsMenu(JObject arg0) const
	{
		return callMethod<jboolean>(
			"dispatchPrepareOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.object()
		);
	}
	void FragmentController::dispatchResume() const
	{
		callMethod<void>(
			"dispatchResume",
			"()V"
		);
	}
	void FragmentController::dispatchStart() const
	{
		callMethod<void>(
			"dispatchStart",
			"()V"
		);
	}
	void FragmentController::dispatchStop() const
	{
		callMethod<void>(
			"dispatchStop",
			"()V"
		);
	}
	void FragmentController::dispatchTrimMemory(jint arg0) const
	{
		callMethod<void>(
			"dispatchTrimMemory",
			"(I)V",
			arg0
		);
	}
	void FragmentController::doLoaderDestroy() const
	{
		callMethod<void>(
			"doLoaderDestroy",
			"()V"
		);
	}
	void FragmentController::doLoaderStart() const
	{
		callMethod<void>(
			"doLoaderStart",
			"()V"
		);
	}
	void FragmentController::doLoaderStop(jboolean arg0) const
	{
		callMethod<void>(
			"doLoaderStop",
			"(Z)V",
			arg0
		);
	}
	void FragmentController::dumpLoaders(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const
	{
		callMethod<void>(
			"dumpLoaders",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>()
		);
	}
	jboolean FragmentController::execPendingActions() const
	{
		return callMethod<jboolean>(
			"execPendingActions",
			"()Z"
		);
	}
	android::app::Fragment FragmentController::findFragmentByWho(JString arg0) const
	{
		return callObjectMethod(
			"findFragmentByWho",
			"(Ljava/lang/String;)Landroid/app/Fragment;",
			arg0.object<jstring>()
		);
	}
	android::app::FragmentManager FragmentController::getFragmentManager() const
	{
		return callObjectMethod(
			"getFragmentManager",
			"()Landroid/app/FragmentManager;"
		);
	}
	android::app::LoaderManager FragmentController::getLoaderManager() const
	{
		return callObjectMethod(
			"getLoaderManager",
			"()Landroid/app/LoaderManager;"
		);
	}
	void FragmentController::noteStateNotSaved() const
	{
		callMethod<void>(
			"noteStateNotSaved",
			"()V"
		);
	}
	android::view::View FragmentController::onCreateView(android::view::View arg0, JString arg1, android::content::Context arg2, JObject arg3) const
	{
		return callObjectMethod(
			"onCreateView",
			"(Landroid/view/View;Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	void FragmentController::reportLoaderStart() const
	{
		callMethod<void>(
			"reportLoaderStart",
			"()V"
		);
	}
	void FragmentController::restoreAllState(JObject arg0, android::app::FragmentManagerNonConfig arg1) const
	{
		callMethod<void>(
			"restoreAllState",
			"(Landroid/os/Parcelable;Landroid/app/FragmentManagerNonConfig;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void FragmentController::restoreAllState(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"restoreAllState",
			"(Landroid/os/Parcelable;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void FragmentController::restoreLoaderNonConfig(android::util::ArrayMap arg0) const
	{
		callMethod<void>(
			"restoreLoaderNonConfig",
			"(Landroid/util/ArrayMap;)V",
			arg0.object()
		);
	}
	android::util::ArrayMap FragmentController::retainLoaderNonConfig() const
	{
		return callObjectMethod(
			"retainLoaderNonConfig",
			"()Landroid/util/ArrayMap;"
		);
	}
	android::app::FragmentManagerNonConfig FragmentController::retainNestedNonConfig() const
	{
		return callObjectMethod(
			"retainNestedNonConfig",
			"()Landroid/app/FragmentManagerNonConfig;"
		);
	}
	JObject FragmentController::retainNonConfig() const
	{
		return callObjectMethod(
			"retainNonConfig",
			"()Ljava/util/List;"
		);
	}
	JObject FragmentController::saveAllState() const
	{
		return callObjectMethod(
			"saveAllState",
			"()Landroid/os/Parcelable;"
		);
	}
} // namespace android::app

