#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../graphics/Region.def.hpp"
#include "./SurfaceControl.def.hpp"
#include "./SurfaceControl_Transaction.def.hpp"
#include "./SurfaceControlViewHost_SurfacePackage.def.hpp"
#include "./SurfaceView.def.hpp"

namespace android::view
{
	// Fields
	inline jint SurfaceView::SURFACE_LIFECYCLE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.view.SurfaceView",
			"SURFACE_LIFECYCLE_DEFAULT"
		);
	}
	inline jint SurfaceView::SURFACE_LIFECYCLE_FOLLOWS_ATTACHMENT()
	{
		return getStaticField<jint>(
			"android.view.SurfaceView",
			"SURFACE_LIFECYCLE_FOLLOWS_ATTACHMENT"
		);
	}
	inline jint SurfaceView::SURFACE_LIFECYCLE_FOLLOWS_VISIBILITY()
	{
		return getStaticField<jint>(
			"android.view.SurfaceView",
			"SURFACE_LIFECYCLE_FOLLOWS_VISIBILITY"
		);
	}
	
	// Constructors
	inline SurfaceView::SurfaceView(android::content::Context arg0)
		: android::view::View(
			"android.view.SurfaceView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline SurfaceView::SurfaceView(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.view.SurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline SurfaceView::SurfaceView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.view.SurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline SurfaceView::SurfaceView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.view.SurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void SurfaceView::applyTransactionToFrame(android::view::SurfaceControl_Transaction arg0) const
	{
		callMethod<void>(
			"applyTransactionToFrame",
			"(Landroid/view/SurfaceControl$Transaction;)V",
			arg0.object()
		);
	}
	inline void SurfaceView::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jboolean SurfaceView::gatherTransparentRegion(android::graphics::Region arg0) const
	{
		return callMethod<jboolean>(
			"gatherTransparentRegion",
			"(Landroid/graphics/Region;)Z",
			arg0.object()
		);
	}
	inline JObject SurfaceView::getHolder() const
	{
		return callObjectMethod(
			"getHolder",
			"()Landroid/view/SurfaceHolder;"
		);
	}
	inline JObject SurfaceView::getHostToken() const
	{
		return callObjectMethod(
			"getHostToken",
			"()Landroid/os/IBinder;"
		);
	}
	inline jint SurfaceView::getImportantForAccessibility() const
	{
		return callMethod<jint>(
			"getImportantForAccessibility",
			"()I"
		);
	}
	inline android::view::SurfaceControl SurfaceView::getSurfaceControl() const
	{
		return callObjectMethod(
			"getSurfaceControl",
			"()Landroid/view/SurfaceControl;"
		);
	}
	inline jboolean SurfaceView::hasOverlappingRendering() const
	{
		return callMethod<jboolean>(
			"hasOverlappingRendering",
			"()Z"
		);
	}
	inline void SurfaceView::setAlpha(jfloat arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
	inline void SurfaceView::setChildSurfacePackage(android::view::SurfaceControlViewHost_SurfacePackage arg0) const
	{
		callMethod<void>(
			"setChildSurfacePackage",
			"(Landroid/view/SurfaceControlViewHost$SurfacePackage;)V",
			arg0.object()
		);
	}
	inline void SurfaceView::setClipBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setClipBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void SurfaceView::setSecure(jboolean arg0) const
	{
		callMethod<void>(
			"setSecure",
			"(Z)V",
			arg0
		);
	}
	inline void SurfaceView::setSurfaceLifecycle(jint arg0) const
	{
		callMethod<void>(
			"setSurfaceLifecycle",
			"(I)V",
			arg0
		);
	}
	inline void SurfaceView::setVisibility(jint arg0) const
	{
		callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
	inline void SurfaceView::setZOrderMediaOverlay(jboolean arg0) const
	{
		callMethod<void>(
			"setZOrderMediaOverlay",
			"(Z)V",
			arg0
		);
	}
	inline void SurfaceView::setZOrderOnTop(jboolean arg0) const
	{
		callMethod<void>(
			"setZOrderOnTop",
			"(Z)V",
			arg0
		);
	}
} // namespace android::view

// Base class headers
#include "./View.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
