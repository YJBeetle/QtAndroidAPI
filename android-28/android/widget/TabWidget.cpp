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
	
	// QJniObject forward
	TabWidget::TabWidget(QJniObject obj) : android::widget::LinearLayout(obj) {}
	
	// Constructors
	TabWidget::TabWidget(android::content::Context arg0)
		: android::widget::LinearLayout(
			"android.widget.TabWidget",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	TabWidget::TabWidget(android::content::Context arg0, JObject arg1)
		: android::widget::LinearLayout(
			"android.widget.TabWidget",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	TabWidget::TabWidget(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::LinearLayout(
			"android.widget.TabWidget",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	TabWidget::TabWidget(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::LinearLayout(
			"android.widget.TabWidget",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void TabWidget::addView(android::view::View arg0)
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void TabWidget::childDrawableStateChanged(android::view::View arg0)
	{
		callMethod<void>(
			"childDrawableStateChanged",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void TabWidget::dispatchDraw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"dispatchDraw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	void TabWidget::focusCurrentTab(jint arg0)
	{
		callMethod<void>(
			"focusCurrentTab",
			"(I)V",
			arg0
		);
	}
	jstring TabWidget::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::view::View TabWidget::getChildTabViewAt(jint arg0)
	{
		return callObjectMethod(
			"getChildTabViewAt",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	android::graphics::drawable::Drawable TabWidget::getLeftStripDrawable()
	{
		return callObjectMethod(
			"getLeftStripDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::drawable::Drawable TabWidget::getRightStripDrawable()
	{
		return callObjectMethod(
			"getRightStripDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint TabWidget::getTabCount()
	{
		return callMethod<jint>(
			"getTabCount",
			"()I"
		);
	}
	jboolean TabWidget::isStripEnabled()
	{
		return callMethod<jboolean>(
			"isStripEnabled",
			"()Z"
		);
	}
	void TabWidget::onFocusChange(android::view::View arg0, jboolean arg1)
	{
		callMethod<void>(
			"onFocusChange",
			"(Landroid/view/View;Z)V",
			arg0.object(),
			arg1
		);
	}
	android::view::PointerIcon TabWidget::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1)
	{
		return callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
	void TabWidget::removeAllViews()
	{
		callMethod<void>(
			"removeAllViews",
			"()V"
		);
	}
	void TabWidget::setCurrentTab(jint arg0)
	{
		callMethod<void>(
			"setCurrentTab",
			"(I)V",
			arg0
		);
	}
	void TabWidget::setDividerDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setDividerDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void TabWidget::setDividerDrawable(jint arg0)
	{
		callMethod<void>(
			"setDividerDrawable",
			"(I)V",
			arg0
		);
	}
	void TabWidget::setEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void TabWidget::setLeftStripDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setLeftStripDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void TabWidget::setLeftStripDrawable(jint arg0)
	{
		callMethod<void>(
			"setLeftStripDrawable",
			"(I)V",
			arg0
		);
	}
	void TabWidget::setRightStripDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setRightStripDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void TabWidget::setRightStripDrawable(jint arg0)
	{
		callMethod<void>(
			"setRightStripDrawable",
			"(I)V",
			arg0
		);
	}
	void TabWidget::setStripEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setStripEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace android::widget

