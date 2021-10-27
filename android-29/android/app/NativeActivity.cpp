#include "../content/res/Configuration.hpp"
#include "../os/Bundle.hpp"
#include "../view/InputQueue.hpp"
#include "./NativeActivity.hpp"

namespace android::app
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
	
	NativeActivity::NativeActivity(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NativeActivity::NativeActivity()
	{
		__thiz = QAndroidJniObject(
			"android.app.NativeActivity",
			"()V"
		);
	}
	
	// Methods
	void NativeActivity::onConfigurationChanged(android::content::res::Configuration arg0)
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
	void NativeActivity::onInputQueueCreated(android::view::InputQueue arg0)
	{
		__thiz.callMethod<void>(
			"onInputQueueCreated",
			"(Landroid/view/InputQueue;)V",
			arg0.__jniObject().object()
		);
	}
	void NativeActivity::onInputQueueDestroyed(android::view::InputQueue arg0)
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
	void NativeActivity::surfaceChanged(__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
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
	void NativeActivity::surfaceCreated(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"surfaceCreated",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void NativeActivity::surfaceDestroyed(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"surfaceDestroyed",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void NativeActivity::surfaceRedrawNeeded(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"surfaceRedrawNeeded",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app

