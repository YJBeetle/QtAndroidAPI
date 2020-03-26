#pragma once

#ifndef ANDROID_WIDGET_TOOLBAR
#define ANDROID_WIDGET_TOOLBAR

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

namespace __jni_impl::android::content
{
	class Context;
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
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::widget
{
	class Toolbar_LayoutParams;
}

namespace __jni_impl::android::widget
{
	class Toolbar : public __jni_impl::android::view::ViewGroup
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void setPopupTheme(jint arg0);
		jint getPopupTheme();
		void setTitleMargin(jint arg0, jint arg1, jint arg2, jint arg3);
		jint getTitleMarginStart();
		void setTitleMarginStart(jint arg0);
		jint getTitleMarginTop();
		void setTitleMarginTop(jint arg0);
		jint getTitleMarginEnd();
		void setTitleMarginEnd(jint arg0);
		jint getTitleMarginBottom();
		void setTitleMarginBottom(jint arg0);
		jboolean isOverflowMenuShowing();
		jboolean showOverflowMenu();
		jboolean hideOverflowMenu();
		void dismissPopupMenus();
		QAndroidJniObject getLogo();
		void setLogoDescription(jstring arg0);
		void setLogoDescription(jint arg0);
		jstring getLogoDescription();
		jboolean hasExpandedActionView();
		void setTitleTextAppearance(__jni_impl::android::content::Context arg0, jint arg1);
		void setSubtitleTextAppearance(__jni_impl::android::content::Context arg0, jint arg1);
		void setTitleTextColor(jint arg0);
		void setSubtitleTextColor(jint arg0);
		jstring getNavigationContentDescription();
		void setNavigationContentDescription(jstring arg0);
		void setNavigationContentDescription(jint arg0);
		void setNavigationIcon(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setNavigationIcon(jint arg0);
		QAndroidJniObject getNavigationIcon();
		void setNavigationOnClickListener(__jni_impl::__JniBaseClass arg0);
		jstring getCollapseContentDescription();
		void setCollapseContentDescription(jint arg0);
		void setCollapseContentDescription(jstring arg0);
		QAndroidJniObject getCollapseIcon();
		void setCollapseIcon(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setCollapseIcon(jint arg0);
		void setOverflowIcon(__jni_impl::android::graphics::drawable::Drawable arg0);
		QAndroidJniObject getOverflowIcon();
		void inflateMenu(jint arg0);
		void setContentInsetsRelative(jint arg0, jint arg1);
		jint getContentInsetStart();
		jint getContentInsetEnd();
		void setContentInsetsAbsolute(jint arg0, jint arg1);
		jint getContentInsetLeft();
		jint getContentInsetRight();
		jint getContentInsetStartWithNavigation();
		void setContentInsetStartWithNavigation(jint arg0);
		jint getContentInsetEndWithActions();
		void setContentInsetEndWithActions(jint arg0);
		jint getCurrentContentInsetStart();
		jint getCurrentContentInsetEnd();
		jint getCurrentContentInsetLeft();
		jint getCurrentContentInsetRight();
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		void setTitle(jint arg0);
		void setTitle(jstring arg0);
		jstring getTitle();
		QAndroidJniObject generateLayoutParams(__jni_impl::__JniBaseClass arg0);
		void onRtlPropertiesChanged(jint arg0);
		jstring getSubtitle();
		void setSubtitle(jstring arg0);
		void setSubtitle(jint arg0);
		void setLogo(jint arg0);
		void setLogo(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setOnMenuItemClickListener(__jni_impl::__JniBaseClass arg0);
		void collapseActionView();
		QAndroidJniObject getMenu();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "Toolbar_LayoutParams.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void Toolbar::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void Toolbar::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void Toolbar::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Toolbar::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void Toolbar::setPopupTheme(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPopupTheme",
			"(I)V",
			arg0
		);
	}
	jint Toolbar::getPopupTheme()
	{
		return __thiz.callMethod<jint>(
			"getPopupTheme",
			"()I"
		);
	}
	void Toolbar::setTitleMargin(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setTitleMargin",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Toolbar::getTitleMarginStart()
	{
		return __thiz.callMethod<jint>(
			"getTitleMarginStart",
			"()I"
		);
	}
	void Toolbar::setTitleMarginStart(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitleMarginStart",
			"(I)V",
			arg0
		);
	}
	jint Toolbar::getTitleMarginTop()
	{
		return __thiz.callMethod<jint>(
			"getTitleMarginTop",
			"()I"
		);
	}
	void Toolbar::setTitleMarginTop(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitleMarginTop",
			"(I)V",
			arg0
		);
	}
	jint Toolbar::getTitleMarginEnd()
	{
		return __thiz.callMethod<jint>(
			"getTitleMarginEnd",
			"()I"
		);
	}
	void Toolbar::setTitleMarginEnd(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitleMarginEnd",
			"(I)V",
			arg0
		);
	}
	jint Toolbar::getTitleMarginBottom()
	{
		return __thiz.callMethod<jint>(
			"getTitleMarginBottom",
			"()I"
		);
	}
	void Toolbar::setTitleMarginBottom(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitleMarginBottom",
			"(I)V",
			arg0
		);
	}
	jboolean Toolbar::isOverflowMenuShowing()
	{
		return __thiz.callMethod<jboolean>(
			"isOverflowMenuShowing",
			"()Z"
		);
	}
	jboolean Toolbar::showOverflowMenu()
	{
		return __thiz.callMethod<jboolean>(
			"showOverflowMenu",
			"()Z"
		);
	}
	jboolean Toolbar::hideOverflowMenu()
	{
		return __thiz.callMethod<jboolean>(
			"hideOverflowMenu",
			"()Z"
		);
	}
	void Toolbar::dismissPopupMenus()
	{
		__thiz.callMethod<void>(
			"dismissPopupMenus",
			"()V"
		);
	}
	QAndroidJniObject Toolbar::getLogo()
	{
		return __thiz.callObjectMethod(
			"getLogo",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void Toolbar::setLogoDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setLogoDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Toolbar::setLogoDescription(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLogoDescription",
			"(I)V",
			arg0
		);
	}
	jstring Toolbar::getLogoDescription()
	{
		return __thiz.callObjectMethod(
			"getLogoDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean Toolbar::hasExpandedActionView()
	{
		return __thiz.callMethod<jboolean>(
			"hasExpandedActionView",
			"()Z"
		);
	}
	void Toolbar::setTitleTextAppearance(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setTitleTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Toolbar::setSubtitleTextAppearance(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSubtitleTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Toolbar::setTitleTextColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitleTextColor",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setSubtitleTextColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSubtitleTextColor",
			"(I)V",
			arg0
		);
	}
	jstring Toolbar::getNavigationContentDescription()
	{
		return __thiz.callObjectMethod(
			"getNavigationContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void Toolbar::setNavigationContentDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setNavigationContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Toolbar::setNavigationContentDescription(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNavigationContentDescription",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setNavigationIcon(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setNavigationIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Toolbar::setNavigationIcon(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNavigationIcon",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject Toolbar::getNavigationIcon()
	{
		return __thiz.callObjectMethod(
			"getNavigationIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void Toolbar::setNavigationOnClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setNavigationOnClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	jstring Toolbar::getCollapseContentDescription()
	{
		return __thiz.callObjectMethod(
			"getCollapseContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void Toolbar::setCollapseContentDescription(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCollapseContentDescription",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setCollapseContentDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCollapseContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	QAndroidJniObject Toolbar::getCollapseIcon()
	{
		return __thiz.callObjectMethod(
			"getCollapseIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void Toolbar::setCollapseIcon(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setCollapseIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Toolbar::setCollapseIcon(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCollapseIcon",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setOverflowIcon(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setOverflowIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Toolbar::getOverflowIcon()
	{
		return __thiz.callObjectMethod(
			"getOverflowIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void Toolbar::inflateMenu(jint arg0)
	{
		__thiz.callMethod<void>(
			"inflateMenu",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setContentInsetsRelative(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setContentInsetsRelative",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint Toolbar::getContentInsetStart()
	{
		return __thiz.callMethod<jint>(
			"getContentInsetStart",
			"()I"
		);
	}
	jint Toolbar::getContentInsetEnd()
	{
		return __thiz.callMethod<jint>(
			"getContentInsetEnd",
			"()I"
		);
	}
	void Toolbar::setContentInsetsAbsolute(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setContentInsetsAbsolute",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint Toolbar::getContentInsetLeft()
	{
		return __thiz.callMethod<jint>(
			"getContentInsetLeft",
			"()I"
		);
	}
	jint Toolbar::getContentInsetRight()
	{
		return __thiz.callMethod<jint>(
			"getContentInsetRight",
			"()I"
		);
	}
	jint Toolbar::getContentInsetStartWithNavigation()
	{
		return __thiz.callMethod<jint>(
			"getContentInsetStartWithNavigation",
			"()I"
		);
	}
	void Toolbar::setContentInsetStartWithNavigation(jint arg0)
	{
		__thiz.callMethod<void>(
			"setContentInsetStartWithNavigation",
			"(I)V",
			arg0
		);
	}
	jint Toolbar::getContentInsetEndWithActions()
	{
		return __thiz.callMethod<jint>(
			"getContentInsetEndWithActions",
			"()I"
		);
	}
	void Toolbar::setContentInsetEndWithActions(jint arg0)
	{
		__thiz.callMethod<void>(
			"setContentInsetEndWithActions",
			"(I)V",
			arg0
		);
	}
	jint Toolbar::getCurrentContentInsetStart()
	{
		return __thiz.callMethod<jint>(
			"getCurrentContentInsetStart",
			"()I"
		);
	}
	jint Toolbar::getCurrentContentInsetEnd()
	{
		return __thiz.callMethod<jint>(
			"getCurrentContentInsetEnd",
			"()I"
		);
	}
	jint Toolbar::getCurrentContentInsetLeft()
	{
		return __thiz.callMethod<jint>(
			"getCurrentContentInsetLeft",
			"()I"
		);
	}
	jint Toolbar::getCurrentContentInsetRight()
	{
		return __thiz.callMethod<jint>(
			"getCurrentContentInsetRight",
			"()I"
		);
	}
	jboolean Toolbar::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void Toolbar::setTitle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	jstring Toolbar::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject Toolbar::generateLayoutParams(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/Toolbar$LayoutParams;",
			arg0.__jniObject().object()
		);
	}
	void Toolbar::onRtlPropertiesChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	jstring Toolbar::getSubtitle()
	{
		return __thiz.callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void Toolbar::setSubtitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Toolbar::setSubtitle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSubtitle",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setLogo(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLogo",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setLogo(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setLogo",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Toolbar::setOnMenuItemClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnMenuItemClickListener",
			"(Landroid/widget/Toolbar$OnMenuItemClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Toolbar::collapseActionView()
	{
		__thiz.callMethod<void>(
			"collapseActionView",
			"()V"
		);
	}
	QAndroidJniObject Toolbar::getMenu()
	{
		return __thiz.callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;"
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class Toolbar : public __jni_impl::android::widget::Toolbar
	{
	public:
		Toolbar(QAndroidJniObject obj) { __thiz = obj; }
		Toolbar(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		Toolbar(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Toolbar(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Toolbar(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_TOOLBAR

