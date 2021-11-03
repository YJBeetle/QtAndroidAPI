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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActionBar(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActionBar(QAndroidJniObject obj);
		
		// Constructors
		ActionBar();
		
		// Methods
		void addOnMenuVisibilityListener(JObject arg0);
		void addTab(android::app::ActionBar_Tab arg0);
		void addTab(android::app::ActionBar_Tab arg0, jboolean arg1);
		void addTab(android::app::ActionBar_Tab arg0, jint arg1);
		void addTab(android::app::ActionBar_Tab arg0, jint arg1, jboolean arg2);
		android::view::View getCustomView();
		jint getDisplayOptions();
		jfloat getElevation();
		jint getHeight();
		jint getHideOffset();
		jint getNavigationItemCount();
		jint getNavigationMode();
		jint getSelectedNavigationIndex();
		android::app::ActionBar_Tab getSelectedTab();
		jstring getSubtitle();
		android::app::ActionBar_Tab getTabAt(jint arg0);
		jint getTabCount();
		android::content::Context getThemedContext();
		jstring getTitle();
		void hide();
		jboolean isHideOnContentScrollEnabled();
		jboolean isShowing();
		android::app::ActionBar_Tab newTab();
		void removeAllTabs();
		void removeOnMenuVisibilityListener(JObject arg0);
		void removeTab(android::app::ActionBar_Tab arg0);
		void removeTabAt(jint arg0);
		void selectTab(android::app::ActionBar_Tab arg0);
		void setBackgroundDrawable(android::graphics::drawable::Drawable arg0);
		void setCustomView(android::view::View arg0);
		void setCustomView(jint arg0);
		void setCustomView(android::view::View arg0, android::app::ActionBar_LayoutParams arg1);
		void setDisplayHomeAsUpEnabled(jboolean arg0);
		void setDisplayOptions(jint arg0);
		void setDisplayOptions(jint arg0, jint arg1);
		void setDisplayShowCustomEnabled(jboolean arg0);
		void setDisplayShowHomeEnabled(jboolean arg0);
		void setDisplayShowTitleEnabled(jboolean arg0);
		void setDisplayUseLogoEnabled(jboolean arg0);
		void setElevation(jfloat arg0);
		void setHideOffset(jint arg0);
		void setHideOnContentScrollEnabled(jboolean arg0);
		void setHomeActionContentDescription(jint arg0);
		void setHomeActionContentDescription(jstring arg0);
		void setHomeAsUpIndicator(android::graphics::drawable::Drawable arg0);
		void setHomeAsUpIndicator(jint arg0);
		void setHomeButtonEnabled(jboolean arg0);
		void setIcon(android::graphics::drawable::Drawable arg0);
		void setIcon(jint arg0);
		void setListNavigationCallbacks(JObject arg0, JObject arg1);
		void setLogo(android::graphics::drawable::Drawable arg0);
		void setLogo(jint arg0);
		void setNavigationMode(jint arg0);
		void setSelectedNavigationItem(jint arg0);
		void setSplitBackgroundDrawable(android::graphics::drawable::Drawable arg0);
		void setStackedBackgroundDrawable(android::graphics::drawable::Drawable arg0);
		void setSubtitle(jint arg0);
		void setSubtitle(jstring arg0);
		void setTitle(jint arg0);
		void setTitle(jstring arg0);
		void show();
	};
} // namespace android::app

