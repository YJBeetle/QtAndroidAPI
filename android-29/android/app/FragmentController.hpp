#pragma once

#ifndef ANDROID_APP_FRAGMENTCONTROLLER
#define ANDROID_APP_FRAGMENTCONTROLLER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class FragmentHostCallback;
}
namespace __jni_impl::android::app
{
	class LoaderManager;
}
namespace __jni_impl::android::app
{
	class FragmentManager;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::app
{
	class Fragment;
}
namespace __jni_impl::android::app
{
	class FragmentManagerNonConfig;
}
namespace __jni_impl::android::view
{
	class MenuInflater;
}
namespace __jni_impl::android::util
{
	class ArrayMap;
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
	class FragmentController : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getLoaderManager();
		QAndroidJniObject getFragmentManager();
		QAndroidJniObject onCreateView(__jni_impl::android::view::View arg0, jstring arg1, __jni_impl::android::content::Context arg2, __jni_impl::__JniBaseClass arg3);
		void dispatchConfigurationChanged(__jni_impl::android::content::res::Configuration arg0);
		static QAndroidJniObject createController(__jni_impl::android::app::FragmentHostCallback arg0);
		QAndroidJniObject findFragmentByWho(jstring arg0);
		void attachHost(__jni_impl::android::app::Fragment arg0);
		void noteStateNotSaved();
		QAndroidJniObject saveAllState();
		void restoreAllState(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		void restoreAllState(__jni_impl::__JniBaseClass arg0, __jni_impl::android::app::FragmentManagerNonConfig arg1);
		QAndroidJniObject retainNonConfig();
		QAndroidJniObject retainNestedNonConfig();
		void dispatchActivityCreated();
		void dispatchStart();
		void dispatchDestroyView();
		void dispatchMultiWindowModeChanged(jboolean arg0, __jni_impl::android::content::res::Configuration arg1);
		void dispatchMultiWindowModeChanged(jboolean arg0);
		void dispatchPictureInPictureModeChanged(jboolean arg0);
		void dispatchPictureInPictureModeChanged(jboolean arg0, __jni_impl::android::content::res::Configuration arg1);
		void dispatchLowMemory();
		void dispatchTrimMemory(jint arg0);
		jboolean dispatchCreateOptionsMenu(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::MenuInflater arg1);
		jboolean dispatchPrepareOptionsMenu(__jni_impl::__JniBaseClass arg0);
		jboolean dispatchOptionsItemSelected(__jni_impl::__JniBaseClass arg0);
		jboolean dispatchContextItemSelected(__jni_impl::__JniBaseClass arg0);
		void dispatchOptionsMenuClosed(__jni_impl::__JniBaseClass arg0);
		jboolean execPendingActions();
		void doLoaderStart();
		void doLoaderStop(jboolean arg0);
		void doLoaderDestroy();
		void reportLoaderStart();
		QAndroidJniObject retainLoaderNonConfig();
		void restoreLoaderNonConfig(__jni_impl::android::util::ArrayMap arg0);
		void dumpLoaders(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3);
		void dispatchDestroy();
		void dispatchStop();
		void dispatchPause();
		void dispatchResume();
		void dispatchCreate();
	};
} // namespace __jni_impl::android::app

#include "FragmentHostCallback.hpp"
#include "LoaderManager.hpp"
#include "FragmentManager.hpp"
#include "../view/View.hpp"
#include "../content/Context.hpp"
#include "../content/res/Configuration.hpp"
#include "Fragment.hpp"
#include "FragmentManagerNonConfig.hpp"
#include "../view/MenuInflater.hpp"
#include "../util/ArrayMap.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void FragmentController::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.FragmentController",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject FragmentController::getLoaderManager()
	{
		return __thiz.callObjectMethod(
			"getLoaderManager",
			"()Landroid/app/LoaderManager;"
		);
	}
	QAndroidJniObject FragmentController::getFragmentManager()
	{
		return __thiz.callObjectMethod(
			"getFragmentManager",
			"()Landroid/app/FragmentManager;"
		);
	}
	QAndroidJniObject FragmentController::onCreateView(__jni_impl::android::view::View arg0, jstring arg1, __jni_impl::android::content::Context arg2, __jni_impl::__JniBaseClass arg3)
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
	void FragmentController::dispatchConfigurationChanged(__jni_impl::android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"dispatchConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FragmentController::createController(__jni_impl::android::app::FragmentHostCallback arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.FragmentController",
			"createController",
			"(Landroid/app/FragmentHostCallback;)Landroid/app/FragmentController;",
			arg0.__jniObject().object()
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
	void FragmentController::attachHost(__jni_impl::android::app::Fragment arg0)
	{
		__thiz.callMethod<void>(
			"attachHost",
			"(Landroid/app/Fragment;)V",
			arg0.__jniObject().object()
		);
	}
	void FragmentController::noteStateNotSaved()
	{
		__thiz.callMethod<void>(
			"noteStateNotSaved",
			"()V"
		);
	}
	QAndroidJniObject FragmentController::saveAllState()
	{
		return __thiz.callObjectMethod(
			"saveAllState",
			"()Landroid/os/Parcelable;"
		);
	}
	void FragmentController::restoreAllState(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"restoreAllState",
			"(Landroid/os/Parcelable;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void FragmentController::restoreAllState(__jni_impl::__JniBaseClass arg0, __jni_impl::android::app::FragmentManagerNonConfig arg1)
	{
		__thiz.callMethod<void>(
			"restoreAllState",
			"(Landroid/os/Parcelable;Landroid/app/FragmentManagerNonConfig;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject FragmentController::retainNonConfig()
	{
		return __thiz.callObjectMethod(
			"retainNonConfig",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject FragmentController::retainNestedNonConfig()
	{
		return __thiz.callObjectMethod(
			"retainNestedNonConfig",
			"()Landroid/app/FragmentManagerNonConfig;"
		);
	}
	void FragmentController::dispatchActivityCreated()
	{
		__thiz.callMethod<void>(
			"dispatchActivityCreated",
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
	void FragmentController::dispatchDestroyView()
	{
		__thiz.callMethod<void>(
			"dispatchDestroyView",
			"()V"
		);
	}
	void FragmentController::dispatchMultiWindowModeChanged(jboolean arg0, __jni_impl::android::content::res::Configuration arg1)
	{
		__thiz.callMethod<void>(
			"dispatchMultiWindowModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.__jniObject().object()
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
	void FragmentController::dispatchPictureInPictureModeChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchPictureInPictureModeChanged",
			"(Z)V",
			arg0
		);
	}
	void FragmentController::dispatchPictureInPictureModeChanged(jboolean arg0, __jni_impl::android::content::res::Configuration arg1)
	{
		__thiz.callMethod<void>(
			"dispatchPictureInPictureModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void FragmentController::dispatchLowMemory()
	{
		__thiz.callMethod<void>(
			"dispatchLowMemory",
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
	jboolean FragmentController::dispatchCreateOptionsMenu(__jni_impl::__JniBaseClass arg0, __jni_impl::android::view::MenuInflater arg1)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchCreateOptionsMenu",
			"(Landroid/view/Menu;Landroid/view/MenuInflater;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean FragmentController::dispatchPrepareOptionsMenu(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchPrepareOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean FragmentController::dispatchOptionsItemSelected(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean FragmentController::dispatchContextItemSelected(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchContextItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.__jniObject().object()
		);
	}
	void FragmentController::dispatchOptionsMenuClosed(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"dispatchOptionsMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean FragmentController::execPendingActions()
	{
		return __thiz.callMethod<jboolean>(
			"execPendingActions",
			"()Z"
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
	void FragmentController::doLoaderDestroy()
	{
		__thiz.callMethod<void>(
			"doLoaderDestroy",
			"()V"
		);
	}
	void FragmentController::reportLoaderStart()
	{
		__thiz.callMethod<void>(
			"reportLoaderStart",
			"()V"
		);
	}
	QAndroidJniObject FragmentController::retainLoaderNonConfig()
	{
		return __thiz.callObjectMethod(
			"retainLoaderNonConfig",
			"()Landroid/util/ArrayMap;"
		);
	}
	void FragmentController::restoreLoaderNonConfig(__jni_impl::android::util::ArrayMap arg0)
	{
		__thiz.callMethod<void>(
			"restoreLoaderNonConfig",
			"(Landroid/util/ArrayMap;)V",
			arg0.__jniObject().object()
		);
	}
	void FragmentController::dumpLoaders(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3)
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
	void FragmentController::dispatchDestroy()
	{
		__thiz.callMethod<void>(
			"dispatchDestroy",
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
	void FragmentController::dispatchPause()
	{
		__thiz.callMethod<void>(
			"dispatchPause",
			"()V"
		);
	}
	void FragmentController::dispatchResume()
	{
		__thiz.callMethod<void>(
			"dispatchResume",
			"()V"
		);
	}
	void FragmentController::dispatchCreate()
	{
		__thiz.callMethod<void>(
			"dispatchCreate",
			"()V"
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class FragmentController : public __jni_impl::android::app::FragmentController
	{
	public:
		FragmentController(QAndroidJniObject obj) { __thiz = obj; }
		FragmentController()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_FRAGMENTCONTROLLER

