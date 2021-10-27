#include "../content/Context.hpp"
#include "../content/res/Configuration.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./ActionMenuView_LayoutParams.hpp"
#include "./LinearLayout_LayoutParams.hpp"
#include "./ActionMenuView.hpp"

namespace android::widget
{
	// Fields
	
	ActionMenuView::ActionMenuView(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ActionMenuView::ActionMenuView(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ActionMenuView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	ActionMenuView::ActionMenuView(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ActionMenuView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void ActionMenuView::dismissPopupMenus()
	{
		__thiz.callMethod<void>(
			"dismissPopupMenus",
			"()V"
		);
	}
	QAndroidJniObject ActionMenuView::generateLayoutParams(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/ActionMenuView$LayoutParams;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ActionMenuView::getMenu()
	{
		return __thiz.callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;"
		);
	}
	QAndroidJniObject ActionMenuView::getOverflowIcon()
	{
		return __thiz.callObjectMethod(
			"getOverflowIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint ActionMenuView::getPopupTheme()
	{
		return __thiz.callMethod<jint>(
			"getPopupTheme",
			"()I"
		);
	}
	jboolean ActionMenuView::hideOverflowMenu()
	{
		return __thiz.callMethod<jboolean>(
			"hideOverflowMenu",
			"()Z"
		);
	}
	jboolean ActionMenuView::isOverflowMenuShowing()
	{
		return __thiz.callMethod<jboolean>(
			"isOverflowMenuShowing",
			"()Z"
		);
	}
	void ActionMenuView::onConfigurationChanged(android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionMenuView::onDetachedFromWindow()
	{
		__thiz.callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	void ActionMenuView::setOnMenuItemClickListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnMenuItemClickListener",
			"(Landroid/widget/ActionMenuView$OnMenuItemClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionMenuView::setOverflowIcon(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setOverflowIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionMenuView::setPopupTheme(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPopupTheme",
			"(I)V",
			arg0
		);
	}
	jboolean ActionMenuView::showOverflowMenu()
	{
		return __thiz.callMethod<jboolean>(
			"showOverflowMenu",
			"()Z"
		);
	}
} // namespace android::widget

