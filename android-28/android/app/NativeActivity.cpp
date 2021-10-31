#include "../content/res/Configuration.hpp"
#include "../os/Bundle.hpp"
#include "../view/InputQueue.hpp"
#include "./NativeActivity.hpp"

namespace android::app
{
	// Fields
	jstring NativeActivity::META_DATA_FUNC_NAME()
	{
		return getStaticObjectField(
			"android.app.NativeActivity",
			"META_DATA_FUNC_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NativeActivity::META_DATA_LIB_NAME()
	{
		return getStaticObjectField(
			"android.app.NativeActivity",
			"META_DATA_LIB_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	NativeActivity::NativeActivity(QJniObject obj) : android::app::Activity(obj) {}
	
	// Constructors
	NativeActivity::NativeActivity()
		: android::app::Activity(
			"android.app.NativeActivity",
			"()V"
		) {}
	
	// Methods
	void NativeActivity::onConfigurationChanged(android::content::res::Configuration arg0)
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	void NativeActivity::onGlobalLayout()
	{
		callMethod<void>(
			"onGlobalLayout",
			"()V"
		);
	}
	void NativeActivity::onInputQueueCreated(android::view::InputQueue arg0)
	{
		callMethod<void>(
			"onInputQueueCreated",
			"(Landroid/view/InputQueue;)V",
			arg0.object()
		);
	}
	void NativeActivity::onInputQueueDestroyed(android::view::InputQueue arg0)
	{
		callMethod<void>(
			"onInputQueueDestroyed",
			"(Landroid/view/InputQueue;)V",
			arg0.object()
		);
	}
	void NativeActivity::onLowMemory()
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	void NativeActivity::onWindowFocusChanged(jboolean arg0)
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void NativeActivity::surfaceChanged(__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"surfaceChanged",
			"(Landroid/view/SurfaceHolder;III)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	void NativeActivity::surfaceCreated(__JniBaseClass arg0)
	{
		callMethod<void>(
			"surfaceCreated",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	void NativeActivity::surfaceDestroyed(__JniBaseClass arg0)
	{
		callMethod<void>(
			"surfaceDestroyed",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	void NativeActivity::surfaceRedrawNeeded(__JniBaseClass arg0)
	{
		callMethod<void>(
			"surfaceRedrawNeeded",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
} // namespace android::app

