#pragma once

#include "../content/Context.def.hpp"
#include "./Display.def.hpp"
#include "./SurfaceControlViewHost_SurfacePackage.def.hpp"
#include "./View.def.hpp"
#include "./SurfaceControlViewHost.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline SurfaceControlViewHost::SurfaceControlViewHost(android::content::Context arg0, android::view::Display arg1, JObject arg2)
		: JObject(
			"android.view.SurfaceControlViewHost",
			"(Landroid/content/Context;Landroid/view/Display;Landroid/os/IBinder;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline android::view::SurfaceControlViewHost_SurfacePackage SurfaceControlViewHost::getSurfacePackage() const
	{
		return callObjectMethod(
			"getSurfacePackage",
			"()Landroid/view/SurfaceControlViewHost$SurfacePackage;"
		);
	}
	inline android::view::View SurfaceControlViewHost::getView() const
	{
		return callObjectMethod(
			"getView",
			"()Landroid/view/View;"
		);
	}
	inline void SurfaceControlViewHost::relayout(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"relayout",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void SurfaceControlViewHost::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void SurfaceControlViewHost::setView(android::view::View arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setView",
			"(Landroid/view/View;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline jboolean SurfaceControlViewHost::transferTouchGestureToHost() const
	{
		return callMethod<jboolean>(
			"transferTouchGestureToHost",
			"()Z"
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
