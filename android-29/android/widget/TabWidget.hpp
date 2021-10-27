#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "LinearLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::view
{
	class PointerIcon;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::widget
{
	class TabWidget : public __jni_impl::android::widget::LinearLayout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void addView(__jni_impl::android::view::View arg0);
		void childDrawableStateChanged(__jni_impl::android::view::View arg0);
		void dispatchDraw(__jni_impl::android::graphics::Canvas arg0);
		void focusCurrentTab(jint arg0);
		jstring getAccessibilityClassName();
		QAndroidJniObject getChildTabViewAt(jint arg0);
		QAndroidJniObject getLeftStripDrawable();
		QAndroidJniObject getRightStripDrawable();
		jint getTabCount();
		jboolean isStripEnabled();
		void onFocusChange(__jni_impl::android::view::View arg0, jboolean arg1);
		QAndroidJniObject onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1);
		void removeAllViews();
		void setCurrentTab(jint arg0);
		void setDividerDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setDividerDrawable(jint arg0);
		void setEnabled(jboolean arg0);
		void setLeftStripDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setLeftStripDrawable(jint arg0);
		void setRightStripDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setRightStripDrawable(jint arg0);
		void setStripEnabled(jboolean arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/PointerIcon.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void TabWidget::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TabWidget",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void TabWidget::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TabWidget",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TabWidget::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TabWidget",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void TabWidget::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TabWidget",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void TabWidget::addView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void TabWidget::childDrawableStateChanged(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"childDrawableStateChanged",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void TabWidget::dispatchDraw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"dispatchDraw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	void TabWidget::focusCurrentTab(jint arg0)
	{
		__thiz.callMethod<void>(
			"focusCurrentTab",
			"(I)V",
			arg0
		);
	}
	jstring TabWidget::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject TabWidget::getChildTabViewAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getChildTabViewAt",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	QAndroidJniObject TabWidget::getLeftStripDrawable()
	{
		return __thiz.callObjectMethod(
			"getLeftStripDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject TabWidget::getRightStripDrawable()
	{
		return __thiz.callObjectMethod(
			"getRightStripDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint TabWidget::getTabCount()
	{
		return __thiz.callMethod<jint>(
			"getTabCount",
			"()I"
		);
	}
	jboolean TabWidget::isStripEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isStripEnabled",
			"()Z"
		);
	}
	void TabWidget::onFocusChange(__jni_impl::android::view::View arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onFocusChange",
			"(Landroid/view/View;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject TabWidget::onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void TabWidget::removeAllViews()
	{
		__thiz.callMethod<void>(
			"removeAllViews",
			"()V"
		);
	}
	void TabWidget::setCurrentTab(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentTab",
			"(I)V",
			arg0
		);
	}
	void TabWidget::setDividerDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setDividerDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void TabWidget::setDividerDrawable(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDividerDrawable",
			"(I)V",
			arg0
		);
	}
	void TabWidget::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void TabWidget::setLeftStripDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setLeftStripDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void TabWidget::setLeftStripDrawable(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLeftStripDrawable",
			"(I)V",
			arg0
		);
	}
	void TabWidget::setRightStripDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setRightStripDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void TabWidget::setRightStripDrawable(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRightStripDrawable",
			"(I)V",
			arg0
		);
	}
	void TabWidget::setStripEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setStripEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class TabWidget : public __jni_impl::android::widget::TabWidget
	{
	public:
		TabWidget(QAndroidJniObject obj) { __thiz = obj; }
		TabWidget(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		TabWidget(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TabWidget(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		TabWidget(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

