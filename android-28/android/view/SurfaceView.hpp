#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/Region.def.hpp"
#include "./SurfaceView.def.hpp"

namespace android::view
{
	// Fields
	
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
	inline void SurfaceView::setSecure(jboolean arg0) const
	{
		callMethod<void>(
			"setSecure",
			"(Z)V",
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
