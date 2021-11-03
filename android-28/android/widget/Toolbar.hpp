#pragma once

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
class JString;

namespace android::widget
{
	class Toolbar : public android::view::ViewGroup
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Toolbar(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup(className, sig, std::forward<Ts>(agv)...) {}
		Toolbar(QJniObject obj);
		
		// Constructors
		Toolbar(android::content::Context arg0);
		Toolbar(android::content::Context arg0, JObject arg1);
		Toolbar(android::content::Context arg0, JObject arg1, jint arg2);
		Toolbar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void collapseActionView();
		void dismissPopupMenus();
		android::widget::Toolbar_LayoutParams generateLayoutParams(JObject arg0);
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
		android::graphics::drawable::Drawable getLogo();
		JString getLogoDescription();
		JObject getMenu();
		JString getNavigationContentDescription();
		android::graphics::drawable::Drawable getNavigationIcon();
		android::graphics::drawable::Drawable getOverflowIcon();
		jint getPopupTheme();
		JString getSubtitle();
		JString getTitle();
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
		void setContentInsetEndWithActions(jint arg0);
		void setContentInsetStartWithNavigation(jint arg0);
		void setContentInsetsAbsolute(jint arg0, jint arg1);
		void setContentInsetsRelative(jint arg0, jint arg1);
		void setLogo(android::graphics::drawable::Drawable arg0);
		void setLogo(jint arg0);
		void setLogoDescription(jint arg0);
		void setLogoDescription(JString arg0);
		void setNavigationContentDescription(jint arg0);
		void setNavigationContentDescription(JString arg0);
		void setNavigationIcon(android::graphics::drawable::Drawable arg0);
		void setNavigationIcon(jint arg0);
		void setNavigationOnClickListener(JObject arg0);
		void setOnMenuItemClickListener(JObject arg0);
		void setOverflowIcon(android::graphics::drawable::Drawable arg0);
		void setPopupTheme(jint arg0);
		void setSubtitle(jint arg0);
		void setSubtitle(JString arg0);
		void setSubtitleTextAppearance(android::content::Context arg0, jint arg1);
		void setSubtitleTextColor(jint arg0);
		void setTitle(jint arg0);
		void setTitle(JString arg0);
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

