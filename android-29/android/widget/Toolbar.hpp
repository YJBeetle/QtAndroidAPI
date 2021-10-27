#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::widget
{
	class Toolbar_LayoutParams;
}

namespace android::widget
{
	class Toolbar : public android::view::ViewGroup
	{
	public:
		// Fields
		
		Toolbar(QAndroidJniObject obj);
		// Constructors
		Toolbar(android::content::Context &arg0);
		Toolbar(android::content::Context &arg0, __JniBaseClass &arg1);
		Toolbar(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		Toolbar(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		Toolbar() = default;
		
		// Methods
		void collapseActionView();
		void dismissPopupMenus();
		QAndroidJniObject generateLayoutParams(__JniBaseClass arg0);
		jstring getCollapseContentDescription();
		QAndroidJniObject getCollapseIcon();
		jint getContentInsetEnd();
		jint getContentInsetEndWithActions();
		jint getContentInsetLeft();
		jint getContentInsetRight();
		jint getContentInsetStart();
		jint getContentInsetStartWithNavigation();
		jint getCurrentContentInsetEnd();
		jint getCurrentContentInsetLeft();
		jint getCurrentContentInsetRight();
		jint getCurrentContentInsetStart();
		QAndroidJniObject getLogo();
		jstring getLogoDescription();
		QAndroidJniObject getMenu();
		jstring getNavigationContentDescription();
		QAndroidJniObject getNavigationIcon();
		QAndroidJniObject getOverflowIcon();
		jint getPopupTheme();
		jstring getSubtitle();
		jstring getTitle();
		jint getTitleMarginBottom();
		jint getTitleMarginEnd();
		jint getTitleMarginStart();
		jint getTitleMarginTop();
		jboolean hasExpandedActionView();
		jboolean hideOverflowMenu();
		void inflateMenu(jint arg0);
		jboolean isOverflowMenuShowing();
		void onRtlPropertiesChanged(jint arg0);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		void setCollapseContentDescription(jint arg0);
		void setCollapseContentDescription(jstring arg0);
		void setCollapseContentDescription(const QString &arg0);
		void setCollapseIcon(android::graphics::drawable::Drawable arg0);
		void setCollapseIcon(jint arg0);
		void setContentInsetEndWithActions(jint arg0);
		void setContentInsetStartWithNavigation(jint arg0);
		void setContentInsetsAbsolute(jint arg0, jint arg1);
		void setContentInsetsRelative(jint arg0, jint arg1);
		void setLogo(android::graphics::drawable::Drawable arg0);
		void setLogo(jint arg0);
		void setLogoDescription(jint arg0);
		void setLogoDescription(jstring arg0);
		void setLogoDescription(const QString &arg0);
		void setNavigationContentDescription(jint arg0);
		void setNavigationContentDescription(jstring arg0);
		void setNavigationContentDescription(const QString &arg0);
		void setNavigationIcon(android::graphics::drawable::Drawable arg0);
		void setNavigationIcon(jint arg0);
		void setNavigationOnClickListener(__JniBaseClass arg0);
		void setOnMenuItemClickListener(__JniBaseClass arg0);
		void setOverflowIcon(android::graphics::drawable::Drawable arg0);
		void setPopupTheme(jint arg0);
		void setSubtitle(jint arg0);
		void setSubtitle(jstring arg0);
		void setSubtitle(const QString &arg0);
		void setSubtitleTextAppearance(android::content::Context arg0, jint arg1);
		void setSubtitleTextColor(jint arg0);
		void setTitle(jint arg0);
		void setTitle(jstring arg0);
		void setTitle(const QString &arg0);
		void setTitleMargin(jint arg0, jint arg1, jint arg2, jint arg3);
		void setTitleMarginBottom(jint arg0);
		void setTitleMarginEnd(jint arg0);
		void setTitleMarginStart(jint arg0);
		void setTitleMarginTop(jint arg0);
		void setTitleTextAppearance(android::content::Context arg0, jint arg1);
		void setTitleTextColor(jint arg0);
		jboolean showOverflowMenu();
	};
} // namespace android::widget

