#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Region.hpp"
#include "./SurfaceControl.hpp"
#include "./SurfaceView.hpp"

namespace android::view
{
	// Fields
	
	SurfaceView::SurfaceView(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SurfaceView::SurfaceView(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.SurfaceView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	SurfaceView::SurfaceView(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.SurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	SurfaceView::SurfaceView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.SurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	SurfaceView::SurfaceView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.SurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void SurfaceView::draw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean SurfaceView::gatherTransparentRegion(android::graphics::Region arg0)
	{
		return __thiz.callMethod<jboolean>(
			"gatherTransparentRegion",
			"(Landroid/graphics/Region;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SurfaceView::getHolder()
	{
		return __thiz.callObjectMethod(
			"getHolder",
			"()Landroid/view/SurfaceHolder;"
		);
	}
	QAndroidJniObject SurfaceView::getSurfaceControl()
	{
		return __thiz.callObjectMethod(
			"getSurfaceControl",
			"()Landroid/view/SurfaceControl;"
		);
	}
	void SurfaceView::setSecure(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSecure",
			"(Z)V",
			arg0
		);
	}
	void SurfaceView::setVisibility(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
	void SurfaceView::setZOrderMediaOverlay(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setZOrderMediaOverlay",
			"(Z)V",
			arg0
		);
	}
	void SurfaceView::setZOrderOnTop(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setZOrderOnTop",
			"(Z)V",
			arg0
		);
	}
} // namespace android::view

