#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Region.hpp"
#include "./SurfaceView.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	SurfaceView::SurfaceView(android::content::Context arg0)
		: android::view::View(
			"android.view.SurfaceView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	SurfaceView::SurfaceView(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.view.SurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	SurfaceView::SurfaceView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.view.SurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	SurfaceView::SurfaceView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.view.SurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void SurfaceView::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jboolean SurfaceView::gatherTransparentRegion(android::graphics::Region arg0) const
	{
		return callMethod<jboolean>(
			"gatherTransparentRegion",
			"(Landroid/graphics/Region;)Z",
			arg0.object()
		);
	}
	JObject SurfaceView::getHolder() const
	{
		return callObjectMethod(
			"getHolder",
			"()Landroid/view/SurfaceHolder;"
		);
	}
	void SurfaceView::setSecure(jboolean arg0) const
	{
		callMethod<void>(
			"setSecure",
			"(Z)V",
			arg0
		);
	}
	void SurfaceView::setVisibility(jint arg0) const
	{
		callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
	void SurfaceView::setZOrderMediaOverlay(jboolean arg0) const
	{
		callMethod<void>(
			"setZOrderMediaOverlay",
			"(Z)V",
			arg0
		);
	}
	void SurfaceView::setZOrderOnTop(jboolean arg0) const
	{
		callMethod<void>(
			"setZOrderOnTop",
			"(Z)V",
			arg0
		);
	}
} // namespace android::view

