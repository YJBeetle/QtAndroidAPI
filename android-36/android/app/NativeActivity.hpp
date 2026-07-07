#pragma once

#include "../content/res/Configuration.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../view/InputQueue.def.hpp"
#include "../../JString.hpp"
#include "./NativeActivity.def.hpp"

namespace android::app
{
	// Fields
	inline JString NativeActivity::META_DATA_FUNC_NAME()
	{
		return getStaticObjectField(
			"android.app.NativeActivity",
			"META_DATA_FUNC_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString NativeActivity::META_DATA_LIB_NAME()
	{
		return getStaticObjectField(
			"android.app.NativeActivity",
			"META_DATA_LIB_NAME",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline NativeActivity::NativeActivity()
		: android::app::Activity(
			"android.app.NativeActivity",
			"()V"
		) {}
	
	// Methods
	inline void NativeActivity::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	inline void NativeActivity::onGlobalLayout() const
	{
		callMethod<void>(
			"onGlobalLayout",
			"()V"
		);
	}
	inline void NativeActivity::onInputQueueCreated(android::view::InputQueue arg0) const
	{
		callMethod<void>(
			"onInputQueueCreated",
			"(Landroid/view/InputQueue;)V",
			arg0.object()
		);
	}
	inline void NativeActivity::onInputQueueDestroyed(android::view::InputQueue arg0) const
	{
		callMethod<void>(
			"onInputQueueDestroyed",
			"(Landroid/view/InputQueue;)V",
			arg0.object()
		);
	}
	inline void NativeActivity::onLowMemory() const
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	inline void NativeActivity::onWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	inline void NativeActivity::surfaceChanged(JObject arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void NativeActivity::surfaceCreated(JObject arg0) const
	{
		callMethod<void>(
			"surfaceCreated",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	inline void NativeActivity::surfaceDestroyed(JObject arg0) const
	{
		callMethod<void>(
			"surfaceDestroyed",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	inline void NativeActivity::surfaceRedrawNeeded(JObject arg0) const
	{
		callMethod<void>(
			"surfaceRedrawNeeded",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "./Activity.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
