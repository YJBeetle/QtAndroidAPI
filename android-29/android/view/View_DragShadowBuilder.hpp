#pragma once

#ifndef ANDROID_VIEW_VIEW_DRAGSHADOWBUILDER
#define ANDROID_VIEW_VIEW_DRAGSHADOWBUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Point;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::view
{
	class View_DragShadowBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::view::View arg0);
		
		// Methods
		QAndroidJniObject getView();
		void onDrawShadow(__jni_impl::android::graphics::Canvas arg0);
		void onProvideShadowMetrics(__jni_impl::android::graphics::Point arg0, __jni_impl::android::graphics::Point arg1);
	};
} // namespace __jni_impl::android::view

#include "../graphics/Canvas.hpp"
#include "../graphics/Point.hpp"
#include "View.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void View_DragShadowBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.View$DragShadowBuilder",
			"()V"
		);
	}
	void View_DragShadowBuilder::__constructor(__jni_impl::android::view::View arg0)
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
	void View_DragShadowBuilder::onDrawShadow(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"onDrawShadow",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	void View_DragShadowBuilder::onProvideShadowMetrics(__jni_impl::android::graphics::Point arg0, __jni_impl::android::graphics::Point arg1)
	{
		__thiz.callMethod<void>(
			"onProvideShadowMetrics",
			"(Landroid/graphics/Point;Landroid/graphics/Point;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class View_DragShadowBuilder : public __jni_impl::android::view::View_DragShadowBuilder
	{
	public:
		View_DragShadowBuilder(QAndroidJniObject obj) { __thiz = obj; }
		View_DragShadowBuilder()
		{
			__constructor();
		}
		View_DragShadowBuilder(__jni_impl::android::view::View arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_VIEW_DRAGSHADOWBUILDER

