#pragma once

#ifndef ANDROID_WIDGET_ACTIONMENUVIEW
#define ANDROID_WIDGET_ACTIONMENUVIEW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "LinearLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::widget
{
	class ActionMenuView_LayoutParams;
}
namespace __jni_impl::android::widget
{
	class LinearLayout_LayoutParams;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}

namespace __jni_impl::android::widget
{
	class ActionMenuView : public __jni_impl::android::widget::LinearLayout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject generateLayoutParams(__jni_impl::__JniBaseClass arg0);
		void onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0);
		void onDetachedFromWindow();
		void setOnMenuItemClickListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getMenu();
		void setPopupTheme(jint arg0);
		jint getPopupTheme();
		jboolean isOverflowMenuShowing();
		jboolean showOverflowMenu();
		jboolean hideOverflowMenu();
		void dismissPopupMenus();
		void setOverflowIcon(__jni_impl::android::graphics::drawable::Drawable arg0);
		QAndroidJniObject getOverflowIcon();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "ActionMenuView_LayoutParams.hpp"
#include "LinearLayout_LayoutParams.hpp"
#include "../content/res/Configuration.hpp"
#include "../graphics/drawable/Drawable.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void ActionMenuView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ActionMenuView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	void ActionMenuView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ActionMenuView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ActionMenuView::generateLayoutParams(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/ActionMenuView$LayoutParams;",
			arg0.__jniObject().object());
	}
	void ActionMenuView::onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object());
	}
	void ActionMenuView::onDetachedFromWindow()
	{
		__thiz.callMethod<void>(
			"onDetachedFromWindow",
			"()V");
	}
	void ActionMenuView::setOnMenuItemClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnMenuItemClickListener",
			"(Landroid/widget/ActionMenuView$OnMenuItemClickListener;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ActionMenuView::getMenu()
	{
		return __thiz.callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;");
	}
	void ActionMenuView::setPopupTheme(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPopupTheme",
			"(I)V",
			arg0);
	}
	jint ActionMenuView::getPopupTheme()
	{
		return __thiz.callMethod<jint>(
			"getPopupTheme",
			"()I");
	}
	jboolean ActionMenuView::isOverflowMenuShowing()
	{
		return __thiz.callMethod<jboolean>(
			"isOverflowMenuShowing",
			"()Z");
	}
	jboolean ActionMenuView::showOverflowMenu()
	{
		return __thiz.callMethod<jboolean>(
			"showOverflowMenu",
			"()Z");
	}
	jboolean ActionMenuView::hideOverflowMenu()
	{
		return __thiz.callMethod<jboolean>(
			"hideOverflowMenu",
			"()Z");
	}
	void ActionMenuView::dismissPopupMenus()
	{
		__thiz.callMethod<void>(
			"dismissPopupMenus",
			"()V");
	}
	void ActionMenuView::setOverflowIcon(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setOverflowIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ActionMenuView::getOverflowIcon()
	{
		return __thiz.callObjectMethod(
			"getOverflowIcon",
			"()Landroid/graphics/drawable/Drawable;");
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ActionMenuView : public __jni_impl::android::widget::ActionMenuView
	{
	public:
		ActionMenuView(QAndroidJniObject obj) { __thiz = obj; }
		ActionMenuView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		ActionMenuView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_ACTIONMENUVIEW

