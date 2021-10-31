#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./LinearLayout.hpp"

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
		
		ActionMenuView(QAndroidJniObject obj);
		// Constructors
		ActionMenuView(android::content::Context arg0);
		ActionMenuView(android::content::Context arg0, __JniBaseClass arg1);
		ActionMenuView() = default;
		
		// Methods
		void dismissPopupMenus();
		QAndroidJniObject generateLayoutParams(__JniBaseClass arg0);
		QAndroidJniObject getMenu();
		QAndroidJniObject getOverflowIcon();
		jint getPopupTheme();
		jboolean hideOverflowMenu();
		jboolean isOverflowMenuShowing();
		void onConfigurationChanged(android::content::res::Configuration arg0);
		void onDetachedFromWindow();
		void setOnMenuItemClickListener(__JniBaseClass arg0);
		void setOverflowIcon(android::graphics::drawable::Drawable arg0);
		void setPopupTheme(jint arg0);
		jboolean showOverflowMenu();
	};
} // namespace android::widget

