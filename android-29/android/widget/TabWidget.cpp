#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/PointerIcon.hpp"
#include "../view/View.hpp"
#include "./TabWidget.hpp"

namespace android::widget
{
	// Fields
	
	TabWidget::TabWidget(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TabWidget::TabWidget(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TabWidget",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	TabWidget::TabWidget(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TabWidget",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	TabWidget::TabWidget(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TabWidget",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	TabWidget::TabWidget(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
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
	void TabWidget::addView(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void TabWidget::childDrawableStateChanged(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"childDrawableStateChanged",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void TabWidget::dispatchDraw(android::graphics::Canvas arg0)
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
	void TabWidget::onFocusChange(android::view::View arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onFocusChange",
			"(Landroid/view/View;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject TabWidget::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1)
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
	void TabWidget::setDividerDrawable(android::graphics::drawable::Drawable arg0)
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
	void TabWidget::setLeftStripDrawable(android::graphics::drawable::Drawable arg0)
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
	void TabWidget::setRightStripDrawable(android::graphics::drawable::Drawable arg0)
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
} // namespace android::widget

