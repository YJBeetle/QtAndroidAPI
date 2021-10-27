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
	
	FragmentController::FragmentController(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject FragmentController::createController(android::app::FragmentHostCallback arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.FragmentController",
			"createController",
			"(Landroid/app/FragmentHostCallback;)Landroid/app/FragmentController;",
			arg0.__jniObject().object()
		);
	}
	void FragmentController::attachHost(android::app::Fragment arg0)
	{
		__thiz.callMethod<void>(
			"attachHost",
			"(Landroid/app/Fragment;)V",
			arg0.__jniObject().object()
		);
	}
	void FragmentController::dispatchActivityCreated()
	{
		__thiz.callMethod<void>(
			"dispatchActivityCreated",
			"()V"
		);
	}
	void FragmentController::dispatchConfigurationChanged(android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"dispatchConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean FragmentController::dispatchContextItemSelected(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchContextItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.__jniObject().object()
		);
	}
	void FragmentController::dispatchCreate()
	{
		__thiz.callMethod<void>(
			"dispatchCreate",
			"()V"
		);
	}
	jboolean FragmentController::dispatchCreateOptionsMenu(__JniBaseClass arg0, android::view::MenuInflater arg1)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchCreateOptionsMenu",
			"(Landroid/view/Menu;Landroid/view/MenuInflater;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void FragmentController::dispatchDestroy()
	{
		__thiz.callMethod<void>(
			"dispatchDestroy",
			"()V"
		);
	}
	void FragmentController::dispatchDestroyView()
	{
		__thiz.callMethod<void>(
			"dispatchDestroyView",
			"()V"
		);
	}
	void FragmentController::dispatchLowMemory()
	{
		__thiz.callMethod<void>(
			"dispatchLowMemory",
			"()V"
		);
	}
	void FragmentController::dispatchMultiWindowModeChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchMultiWindowModeChanged",
			"(Z)V",
			arg0
		);
	}
	void FragmentController::dispatchMultiWindowModeChanged(jboolean arg0, android::content::res::Configuration arg1)
	{
		__thiz.callMethod<void>(
			"dispatchMultiWindowModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean FragmentController::dispatchOptionsItemSelected(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.__jniObject().object()
		);
	}
	void FragmentController::dispatchOptionsMenuClosed(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"dispatchOptionsMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.__jniObject().object()
		);
	}
	void FragmentController::dispatchPause()
	{
		__thiz.callMethod<void>(
			"dispatchPause",
			"()V"
		);
	}
	void FragmentController::dispatchPictureInPictureModeChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchPictureInPictureModeChanged",
			"(Z)V",
			arg0
		);
	}
	void FragmentController::dispatchPictureInPictureModeChanged(jboolean arg0, android::content::res::Configuration arg1)
	{
		__thiz.callMethod<void>(
			"dispatchPictureInPictureModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean FragmentController::dispatchPrepareOptionsMenu(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchPrepareOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.__jniObject().object()
		);
	}
	void FragmentController::dispatchResume()
	{
		__thiz.callMethod<void>(
			"dispatchResume",
			"()V"
		);
	}
	void FragmentController::dispatchStart()
	{
		__thiz.callMethod<void>(
			"dispatchStart",
			"()V"
		);
	}
	void FragmentController::dispatchStop()
	{
		__thiz.callMethod<void>(
			"dispatchStop",
			"()V"
		);
	}
	void FragmentController::dispatchTrimMemory(jint arg0)
	{
		__thiz.callMethod<void>(
			"dispatchTrimMemory",
			"(I)V",
			arg0
		);
	}
	void FragmentController::doLoaderDestroy()
	{
		__thiz.callMethod<void>(
			"doLoaderDestroy",
			"()V"
		);
	}
	void FragmentController::doLoaderStart()
	{
		__thiz.callMethod<void>(
			"doLoaderStart",
			"()V"
		);
	}
	void FragmentController::doLoaderStop(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"doLoaderStop",
			"(Z)V",
			arg0
		);
	}
	void FragmentController::dumpLoaders(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dumpLoaders",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void FragmentController::dumpLoaders(const QString &arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dumpLoaders",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	jboolean FragmentController::execPendingActions()
	{
		return __thiz.callMethod<jboolean>(
			"execPendingActions",
			"()Z"
		);
	}
	QAndroidJniObject FragmentController::findFragmentByWho(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findFragmentByWho",
			"(Ljava/lang/String;)Landroid/app/Fragment;",
			arg0
		);
	}
	QAndroidJniObject FragmentController::findFragmentByWho(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"findFragmentByWho",
			"(Ljava/lang/String;)Landroid/app/Fragment;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject FragmentController::getFragmentManager()
	{
		return __thiz.callObjectMethod(
			"getFragmentManager",
			"()Landroid/app/FragmentManager;"
		);
	}
	QAndroidJniObject FragmentController::getLoaderManager()
	{
		return __thiz.callObjectMethod(
			"getLoaderManager",
			"()Landroid/app/LoaderManager;"
		);
	}
	void FragmentController::noteStateNotSaved()
	{
		__thiz.callMethod<void>(
			"noteStateNotSaved",
			"()V"
		);
	}
	QAndroidJniObject FragmentController::onCreateView(android::view::View arg0, jstring arg1, android::content::Context arg2, __JniBaseClass arg3)
	{
		return __thiz.callObjectMethod(
			"onCreateView",
			"(Landroid/view/View;Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject FragmentController::onCreateView(android::view::View arg0, const QString &arg1, android::content::Context arg2, __JniBaseClass arg3)
	{
		return __thiz.callObjectMethod(
			"onCreateView",
			"(Landroid/view/View;Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void FragmentController::reportLoaderStart()
	{
		__thiz.callMethod<void>(
			"reportLoaderStart",
			"()V"
		);
	}
	void FragmentController::restoreAllState(__JniBaseClass arg0, android::app::FragmentManagerNonConfig arg1)
	{
		__thiz.callMethod<void>(
			"restoreAllState",
			"(Landroid/os/Parcelable;Landroid/app/FragmentManagerNonConfig;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void FragmentController::restoreAllState(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"restoreAllState",
			"(Landroid/os/Parcelable;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void FragmentController::restoreLoaderNonConfig(android::util::ArrayMap arg0)
	{
		__thiz.callMethod<void>(
			"restoreLoaderNonConfig",
			"(Landroid/util/ArrayMap;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FragmentController::retainLoaderNonConfig()
	{
		return __thiz.callObjectMethod(
			"retainLoaderNonConfig",
			"()Landroid/util/ArrayMap;"
		);
	}
	QAndroidJniObject FragmentController::retainNestedNonConfig()
	{
		return __thiz.callObjectMethod(
			"retainNestedNonConfig",
			"()Landroid/app/FragmentManagerNonConfig;"
		);
	}
	QAndroidJniObject FragmentController::retainNonConfig()
	{
		return __thiz.callObjectMethod(
			"retainNonConfig",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject FragmentController::saveAllState()
	{
		return __thiz.callObjectMethod(
			"saveAllState",
			"()Landroid/os/Parcelable;"
		);
	}
} // namespace android::app

