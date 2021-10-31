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
#include "./FragmentController.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	FragmentController::FragmentController(QJniObject obj) : __JniBaseClass(obj) {}
	
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
	void FragmentController::attachHost(android::app::Fragment arg0)
	{
		callMethod<void>(
			"attachHost",
			"(Landroid/app/Fragment;)V",
			arg0.object()
		);
	}
	void FragmentController::dispatchActivityCreated()
	{
		callMethod<void>(
			"dispatchActivityCreated",
			"()V"
		);
	}
	void FragmentController::dispatchConfigurationChanged(android::content::res::Configuration arg0)
	{
		callMethod<void>(
			"dispatchConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	jboolean FragmentController::dispatchContextItemSelected(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"dispatchContextItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	void FragmentController::dispatchCreate()
	{
		callMethod<void>(
			"dispatchCreate",
			"()V"
		);
	}
	jboolean FragmentController::dispatchCreateOptionsMenu(__JniBaseClass arg0, android::view::MenuInflater arg1)
	{
		return callMethod<jboolean>(
			"dispatchCreateOptionsMenu",
			"(Landroid/view/Menu;Landroid/view/MenuInflater;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void FragmentController::dispatchDestroy()
	{
		callMethod<void>(
			"dispatchDestroy",
			"()V"
		);
	}
	void FragmentController::dispatchDestroyView()
	{
		callMethod<void>(
			"dispatchDestroyView",
			"()V"
		);
	}
	void FragmentController::dispatchLowMemory()
	{
		callMethod<void>(
			"dispatchLowMemory",
			"()V"
		);
	}
	void FragmentController::dispatchMultiWindowModeChanged(jboolean arg0)
	{
		callMethod<void>(
			"dispatchMultiWindowModeChanged",
			"(Z)V",
			arg0
		);
	}
	void FragmentController::dispatchMultiWindowModeChanged(jboolean arg0, android::content::res::Configuration arg1)
	{
		callMethod<void>(
			"dispatchMultiWindowModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.object()
		);
	}
	jboolean FragmentController::dispatchOptionsItemSelected(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"dispatchOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	void FragmentController::dispatchOptionsMenuClosed(__JniBaseClass arg0)
	{
		callMethod<void>(
			"dispatchOptionsMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.object()
		);
	}
	void FragmentController::dispatchPause()
	{
		callMethod<void>(
			"dispatchPause",
			"()V"
		);
	}
	void FragmentController::dispatchPictureInPictureModeChanged(jboolean arg0)
	{
		callMethod<void>(
			"dispatchPictureInPictureModeChanged",
			"(Z)V",
			arg0
		);
	}
	void FragmentController::dispatchPictureInPictureModeChanged(jboolean arg0, android::content::res::Configuration arg1)
	{
		callMethod<void>(
			"dispatchPictureInPictureModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.object()
		);
	}
	jboolean FragmentController::dispatchPrepareOptionsMenu(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"dispatchPrepareOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.object()
		);
	}
	void FragmentController::dispatchResume()
	{
		callMethod<void>(
			"dispatchResume",
			"()V"
		);
	}
	void FragmentController::dispatchStart()
	{
		callMethod<void>(
			"dispatchStart",
			"()V"
		);
	}
	void FragmentController::dispatchStop()
	{
		callMethod<void>(
			"dispatchStop",
			"()V"
		);
	}
	void FragmentController::dispatchTrimMemory(jint arg0)
	{
		callMethod<void>(
			"dispatchTrimMemory",
			"(I)V",
			arg0
		);
	}
	void FragmentController::doLoaderDestroy()
	{
		callMethod<void>(
			"doLoaderDestroy",
			"()V"
		);
	}
	void FragmentController::doLoaderStart()
	{
		callMethod<void>(
			"doLoaderStart",
			"()V"
		);
	}
	void FragmentController::doLoaderStop(jboolean arg0)
	{
		callMethod<void>(
			"doLoaderStop",
			"(Z)V",
			arg0
		);
	}
	void FragmentController::dumpLoaders(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
	{
		callMethod<void>(
			"dumpLoaders",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	jboolean FragmentController::execPendingActions()
	{
		return callMethod<jboolean>(
			"execPendingActions",
			"()Z"
		);
	}
	android::app::Fragment FragmentController::findFragmentByWho(jstring arg0)
	{
		return callObjectMethod(
			"findFragmentByWho",
			"(Ljava/lang/String;)Landroid/app/Fragment;",
			arg0
		);
	}
	android::app::FragmentManager FragmentController::getFragmentManager()
	{
		return callObjectMethod(
			"getFragmentManager",
			"()Landroid/app/FragmentManager;"
		);
	}
	android::app::LoaderManager FragmentController::getLoaderManager()
	{
		return callObjectMethod(
			"getLoaderManager",
			"()Landroid/app/LoaderManager;"
		);
	}
	void FragmentController::noteStateNotSaved()
	{
		callMethod<void>(
			"noteStateNotSaved",
			"()V"
		);
	}
	android::view::View FragmentController::onCreateView(android::view::View arg0, jstring arg1, android::content::Context arg2, __JniBaseClass arg3)
	{
		return callObjectMethod(
			"onCreateView",
			"(Landroid/view/View;Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	void FragmentController::reportLoaderStart()
	{
		callMethod<void>(
			"reportLoaderStart",
			"()V"
		);
	}
	void FragmentController::restoreAllState(__JniBaseClass arg0, android::app::FragmentManagerNonConfig arg1)
	{
		callMethod<void>(
			"restoreAllState",
			"(Landroid/os/Parcelable;Landroid/app/FragmentManagerNonConfig;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void FragmentController::restoreAllState(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"restoreAllState",
			"(Landroid/os/Parcelable;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void FragmentController::restoreLoaderNonConfig(android::util::ArrayMap arg0)
	{
		callMethod<void>(
			"restoreLoaderNonConfig",
			"(Landroid/util/ArrayMap;)V",
			arg0.object()
		);
	}
	android::util::ArrayMap FragmentController::retainLoaderNonConfig()
	{
		return callObjectMethod(
			"retainLoaderNonConfig",
			"()Landroid/util/ArrayMap;"
		);
	}
	android::app::FragmentManagerNonConfig FragmentController::retainNestedNonConfig()
	{
		return callObjectMethod(
			"retainNestedNonConfig",
			"()Landroid/app/FragmentManagerNonConfig;"
		);
	}
	__JniBaseClass FragmentController::retainNonConfig()
	{
		return callObjectMethod(
			"retainNonConfig",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass FragmentController::saveAllState()
	{
		return callObjectMethod(
			"saveAllState",
			"()Landroid/os/Parcelable;"
		);
	}
} // namespace android::app

