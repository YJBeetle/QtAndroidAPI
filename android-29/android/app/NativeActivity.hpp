#pragma once

#ifndef ANDROID_APP_NATIVEACTIVITY
#define ANDROID_APP_NATIVEACTIVITY

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "Activity.hpp"

namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view
{
	class InputQueue;
}

namespace __jni_impl::android::app
{
	class NativeActivity : public __jni_impl::android::app::Activity
	{
	public:
		// Fields
		static jstring META_DATA_FUNC_NAME();
		static jstring META_DATA_LIB_NAME();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0);
		void onGlobalLayout();
		void onInputQueueCreated(__jni_impl::android::view::InputQueue arg0);
		void onInputQueueDestroyed(__jni_impl::android::view::InputQueue arg0);
		void onLowMemory();
		void onWindowFocusChanged(jboolean arg0);
		void surfaceChanged(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jint arg3);
		void surfaceCreated(__jni_impl::__JniBaseClass arg0);
		void surfaceDestroyed(__jni_impl::__JniBaseClass arg0);
		void surfaceRedrawNeeded(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::app

#include "../content/res/Configuration.hpp"
#include "../os/Bundle.hpp"
#include "../view/InputQueue.hpp"

namespace __jni_impl::android::app
{
	// Fields
	jstring NativeActivity::META_DATA_FUNC_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NativeActivity",
			"META_DATA_FUNC_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NativeActivity::META_DATA_LIB_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NativeActivity",
			"META_DATA_LIB_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void NativeActivity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.NativeActivity",
			"()V"
		);
	}
	
	// Methods
	void NativeActivity::onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	void NativeActivity::onGlobalLayout()
	{
		__thiz.callMethod<void>(
			"onGlobalLayout",
			"()V"
		);
	}
	void NativeActivity::onInputQueueCreated(__jni_impl::android::view::InputQueue arg0)
	{
		__thiz.callMethod<void>(
			"onInputQueueCreated",
			"(Landroid/view/InputQueue;)V",
			arg0.__jniObject().object()
		);
	}
	void NativeActivity::onInputQueueDestroyed(__jni_impl::android::view::InputQueue arg0)
	{
		__thiz.callMethod<void>(
			"onInputQueueDestroyed",
			"(Landroid/view/InputQueue;)V",
			arg0.__jniObject().object()
		);
	}
	void NativeActivity::onLowMemory()
	{
		__thiz.callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	void NativeActivity::onWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void NativeActivity::surfaceChanged(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"surfaceChanged",
			"(Landroid/view/SurfaceHolder;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void NativeActivity::surfaceCreated(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"surfaceCreated",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void NativeActivity::surfaceDestroyed(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"surfaceDestroyed",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void NativeActivity::surfaceRedrawNeeded(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"surfaceRedrawNeeded",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class NativeActivity : public __jni_impl::android::app::NativeActivity
	{
	public:
		NativeActivity(QAndroidJniObject obj) { __thiz = obj; }
		NativeActivity()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NATIVEACTIVITY

