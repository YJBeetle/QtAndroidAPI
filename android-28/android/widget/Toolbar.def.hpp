#pragma once

#include "../view/ViewGroup.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Toolbar(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup(className, sig, std::forward<Ts>(agv)...) {}
		Toolbar(QAndroidJniObject obj) : android::view::ViewGroup(obj) {}
		
		// Constructors
		Toolbar(android::content::Context arg0);
		Toolbar(android::content::Context arg0, JObject arg1);
		Toolbar(android::content::Context arg0, JObject arg1, jint arg2);
		Toolbar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void collapseActionView() const;
		void dismissPopupMenus() const;
		android::widget::Toolbar_LayoutParams generateLayoutParams(JObject arg0) const;
		jint getContentInsetEnd() const;
		jint getContentInsetEndWithActions() const;
		jint getContentInsetLeft() const;
		jint getContentInsetRight() const;
		jint getContentInsetStart() const;
		jint getContentInsetStartWithNavigation() const;
		jint getCurrentContentInsetEnd() const;
		jint getCurrentContentInsetLeft() const;
		jint getCurrentContentInsetRight() const;
		jint getCurrentContentInsetStart() const;
		android::graphics::drawable::Drawable getLogo() const;
		JString getLogoDescription() const;
		JObject getMenu() const;
		JString getNavigationContentDescription() const;
		android::graphics::drawable::Drawable getNavigationIcon() const;
		android::graphics::drawable::Drawable getOverflowIcon() const;
		jint getPopupTheme() const;
		JString getSubtitle() const;
		JString getTitle() const;
		jint getTitleMarginBottom() const;
		jint getTitleMarginEnd() const;
		jint getTitleMarginStart() const;
		jint getTitleMarginTop() const;
		jboolean hasExpandedActionView() const;
		jboolean hideOverflowMenu() const;
		void inflateMenu(jint arg0) const;
		jboolean isOverflowMenuShowing() const;
		void onRtlPropertiesChanged(jint arg0) const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		void setContentInsetEndWithActions(jint arg0) const;
		void setContentInsetStartWithNavigation(jint arg0) const;
		void setContentInsetsAbsolute(jint arg0, jint arg1) const;
		void setContentInsetsRelative(jint arg0, jint arg1) const;
		void setLogo(android::graphics::drawable::Drawable arg0) const;
		void setLogo(jint arg0) const;
		void setLogoDescription(jint arg0) const;
		void setLogoDescription(JString arg0) const;
		void setNavigationContentDescription(jint arg0) const;
		void setNavigationContentDescription(JString arg0) const;
		void setNavigationIcon(android::graphics::drawable::Drawable arg0) const;
		void setNavigationIcon(jint arg0) const;
		void setNavigationOnClickListener(JObject arg0) const;
		void setOnMenuItemClickListener(JObject arg0) const;
		void setOverflowIcon(android::graphics::drawable::Drawable arg0) const;
		void setPopupTheme(jint arg0) const;
		void setSubtitle(jint arg0) const;
		void setSubtitle(JString arg0) const;
		void setSubtitleTextAppearance(android::content::Context arg0, jint arg1) const;
		void setSubtitleTextColor(jint arg0) const;
		void setTitle(jint arg0) const;
		void setTitle(JString arg0) const;
		void setTitleMargin(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setTitleMarginBottom(jint arg0) const;
		void setTitleMarginEnd(jint arg0) const;
		void setTitleMarginStart(jint arg0) const;
		void setTitleMarginTop(jint arg0) const;
		void setTitleTextAppearance(android::content::Context arg0, jint arg1) const;
		void setTitleTextColor(jint arg0) const;
		jboolean showOverflowMenu() const;
	};
} // namespace android::widget

