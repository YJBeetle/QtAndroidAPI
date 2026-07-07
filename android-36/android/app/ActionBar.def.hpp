#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class ActionBar_LayoutParams;
}
namespace android::app
{
	class ActionBar_Tab;
}
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
	class View;
}
class JString;

namespace android::app
{
	class ActionBar : public JObject
	{
	public:
		// Fields
		static jint DISPLAY_HOME_AS_UP();
		static jint DISPLAY_SHOW_CUSTOM();
		static jint DISPLAY_SHOW_HOME();
		static jint DISPLAY_SHOW_TITLE();
		static jint DISPLAY_USE_LOGO();
		static jint NAVIGATION_MODE_LIST();
		static jint NAVIGATION_MODE_STANDARD();
		static jint NAVIGATION_MODE_TABS();
		
		// QJniObject forward
		template<typename ...Ts> explicit ActionBar(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActionBar(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ActionBar();
		
		// Methods
		void addOnMenuVisibilityListener(JObject arg0) const;
		void addTab(android::app::ActionBar_Tab arg0) const;
		void addTab(android::app::ActionBar_Tab arg0, jboolean arg1) const;
		void addTab(android::app::ActionBar_Tab arg0, jint arg1) const;
		void addTab(android::app::ActionBar_Tab arg0, jint arg1, jboolean arg2) const;
		android::view::View getCustomView() const;
		jint getDisplayOptions() const;
		jfloat getElevation() const;
		jint getHeight() const;
		jint getHideOffset() const;
		jint getNavigationItemCount() const;
		jint getNavigationMode() const;
		jint getSelectedNavigationIndex() const;
		android::app::ActionBar_Tab getSelectedTab() const;
		JString getSubtitle() const;
		android::app::ActionBar_Tab getTabAt(jint arg0) const;
		jint getTabCount() const;
		android::content::Context getThemedContext() const;
		JString getTitle() const;
		void hide() const;
		jboolean isHideOnContentScrollEnabled() const;
		jboolean isShowing() const;
		android::app::ActionBar_Tab newTab() const;
		void removeAllTabs() const;
		void removeOnMenuVisibilityListener(JObject arg0) const;
		void removeTab(android::app::ActionBar_Tab arg0) const;
		void removeTabAt(jint arg0) const;
		void selectTab(android::app::ActionBar_Tab arg0) const;
		void setBackgroundDrawable(android::graphics::drawable::Drawable arg0) const;
		void setCustomView(android::view::View arg0) const;
		void setCustomView(jint arg0) const;
		void setCustomView(android::view::View arg0, android::app::ActionBar_LayoutParams arg1) const;
		void setDisplayHomeAsUpEnabled(jboolean arg0) const;
		void setDisplayOptions(jint arg0) const;
		void setDisplayOptions(jint arg0, jint arg1) const;
		void setDisplayShowCustomEnabled(jboolean arg0) const;
		void setDisplayShowHomeEnabled(jboolean arg0) const;
		void setDisplayShowTitleEnabled(jboolean arg0) const;
		void setDisplayUseLogoEnabled(jboolean arg0) const;
		void setElevation(jfloat arg0) const;
		void setHideOffset(jint arg0) const;
		void setHideOnContentScrollEnabled(jboolean arg0) const;
		void setHomeActionContentDescription(jint arg0) const;
		void setHomeActionContentDescription(JString arg0) const;
		void setHomeAsUpIndicator(android::graphics::drawable::Drawable arg0) const;
		void setHomeAsUpIndicator(jint arg0) const;
		void setHomeButtonEnabled(jboolean arg0) const;
		void setIcon(android::graphics::drawable::Drawable arg0) const;
		void setIcon(jint arg0) const;
		void setListNavigationCallbacks(JObject arg0, JObject arg1) const;
		void setLogo(android::graphics::drawable::Drawable arg0) const;
		void setLogo(jint arg0) const;
		void setNavigationMode(jint arg0) const;
		void setSelectedNavigationItem(jint arg0) const;
		void setSplitBackgroundDrawable(android::graphics::drawable::Drawable arg0) const;
		void setStackedBackgroundDrawable(android::graphics::drawable::Drawable arg0) const;
		void setSubtitle(jint arg0) const;
		void setSubtitle(JString arg0) const;
		void setTitle(jint arg0) const;
		void setTitle(JString arg0) const;
		void show() const;
	};
} // namespace android::app

