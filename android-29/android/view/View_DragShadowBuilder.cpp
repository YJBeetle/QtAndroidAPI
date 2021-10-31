#include "../graphics/Canvas.hpp"
#include "../graphics/Point.hpp"
#include "./View.hpp"
#include "./View_DragShadowBuilder.hpp"

namespace android::view
{
	// Fields
	
	View_DragShadowBuilder::View_DragShadowBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	View_DragShadowBuilder::View_DragShadowBuilder()
	{
		__thiz = QAndroidJniObject(
			"android.view.View$DragShadowBuilder",
			"()V"
		);
	}
	View_DragShadowBuilder::View_DragShadowBuilder(android::view::View arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.View$DragShadowBuilder",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject View_DragShadowBuilder::getView()
	{
		return __thiz.callObjectMethod(
			"getView",
			"()Landroid/view/View;"
		);
	}
	void View_DragShadowBuilder::onDrawShadow(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"onDrawShadow",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	void View_DragShadowBuilder::onProvideShadowMetrics(android::graphics::Point arg0, android::graphics::Point arg1)
	{
		__thiz.callMethod<void>(
			"onProvideShadowMetrics",
			"(Landroid/graphics/Point;Landroid/graphics/Point;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::view

