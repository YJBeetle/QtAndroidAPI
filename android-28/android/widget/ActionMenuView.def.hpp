#pragma once

#include "./LinearLayout.def.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::widget
{
	class ActionMenuView_LayoutParams;
}
namespace android::widget
{
	class LinearLayout_LayoutParams;
}

namespace android::widget
{
	class ActionMenuView : public android::widget::LinearLayout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ActionMenuView(const char *className, const char *sig, Ts...agv) : android::widget::LinearLayout(className, sig, std::forward<Ts>(agv)...) {}
		ActionMenuView(QJniObject obj) : android::widget::LinearLayout(obj) {}
		
		// Constructors
		ActionMenuView(android::content::Context arg0);
		ActionMenuView(android::content::Context arg0, JObject arg1);
		
		// Methods
		void dismissPopupMenus() const;
		android::widget::ActionMenuView_LayoutParams generateLayoutParams(JObject arg0) const;
		JObject getMenu() const;
		android::graphics::drawable::Drawable getOverflowIcon() const;
		jint getPopupTheme() const;
		jboolean hideOverflowMenu() const;
		jboolean isOverflowMenuShowing() const;
		void onConfigurationChanged(android::content::res::Configuration arg0) const;
		void onDetachedFromWindow() const;
		void setOnMenuItemClickListener(JObject arg0) const;
		void setOverflowIcon(android::graphics::drawable::Drawable arg0) const;
		void setPopupTheme(jint arg0) const;
		jboolean showOverflowMenu() const;
	};
} // namespace android::widget

