#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/Region.hpp"
#include "./SurfaceControl.hpp"
#include "./SurfaceControlViewHost_SurfacePackage.hpp"
#include "./SurfaceView.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	SurfaceView::SurfaceView(QJniObject obj) : android::view::View(obj) {}
	
	// Constructors
	SurfaceView::SurfaceView(android::content::Context arg0)
		: android::view::View(
			"android.view.SurfaceView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	SurfaceView::SurfaceView(android::content::Context arg0, __JniBaseClass arg1)
		: android::view::View(
			"android.view.SurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	SurfaceView::SurfaceView(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::view::View(
			"android.view.SurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	SurfaceView::SurfaceView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.view.SurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void SurfaceView::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jboolean SurfaceView::gatherTransparentRegion(android::graphics::Region arg0)
	{
		return callMethod<jboolean>(
			"gatherTransparentRegion",
			"(Landroid/graphics/Region;)Z",
			arg0.object()
		);
	}
	__JniBaseClass SurfaceView::getHolder()
	{
		return callObjectMethod(
			"getHolder",
			"()Landroid/view/SurfaceHolder;"
		);
	}
	__JniBaseClass SurfaceView::getHostToken()
	{
		return callObjectMethod(
			"getHostToken",
			"()Landroid/os/IBinder;"
		);
	}
	jint SurfaceView::getImportantForAccessibility()
	{
		return callMethod<jint>(
			"getImportantForAccessibility",
			"()I"
		);
	}
	android::view::SurfaceControl SurfaceView::getSurfaceControl()
	{
		return callObjectMethod(
			"getSurfaceControl",
			"()Landroid/view/SurfaceControl;"
		);
	}
	void SurfaceView::setAlpha(jfloat arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
	void SurfaceView::setChildSurfacePackage(android::view::SurfaceControlViewHost_SurfacePackage arg0)
	{
		callMethod<void>(
			"setChildSurfacePackage",
			"(Landroid/view/SurfaceControlViewHost$SurfacePackage;)V",
			arg0.object()
		);
	}
	void SurfaceView::setClipBounds(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"setClipBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void SurfaceView::setSecure(jboolean arg0)
	{
		callMethod<void>(
			"setSecure",
			"(Z)V",
			arg0
		);
	}
	void SurfaceView::setVisibility(jint arg0)
	{
		callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
	void SurfaceView::setZOrderMediaOverlay(jboolean arg0)
	{
		callMethod<void>(
			"setZOrderMediaOverlay",
			"(Z)V",
			arg0
		);
	}
	void SurfaceView::setZOrderOnTop(jboolean arg0)
	{
		callMethod<void>(
			"setZOrderOnTop",
			"(Z)V",
			arg0
		);
	}
} // namespace android::view

