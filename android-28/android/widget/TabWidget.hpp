#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./LinearLayout.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
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
	class PointerIcon;
}
namespace android::view
{
	class View;
}

namespace android::widget
{
	class TabWidget : public android::widget::LinearLayout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TabWidget(const char *className, const char *sig, Ts...agv) : android::widget::LinearLayout(className, sig, std::forward<Ts>(agv)...) {}
		TabWidget(QJniObject obj);
		
		// Constructors
		TabWidget(android::content::Context arg0);
		TabWidget(android::content::Context arg0, JObject arg1);
		TabWidget(android::content::Context arg0, JObject arg1, jint arg2);
		TabWidget(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void addView(android::view::View arg0);
		void childDrawableStateChanged(android::view::View arg0);
		void dispatchDraw(android::graphics::Canvas arg0);
		void focusCurrentTab(jint arg0);
		jstring getAccessibilityClassName();
		android::view::View getChildTabViewAt(jint arg0);
		android::graphics::drawable::Drawable getLeftStripDrawable();
		android::graphics::drawable::Drawable getRightStripDrawable();
		jint getTabCount();
		jboolean isStripEnabled();
		void onFocusChange(android::view::View arg0, jboolean arg1);
		android::view::PointerIcon onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1);
		void removeAllViews();
		void setCurrentTab(jint arg0);
		void setDividerDrawable(android::graphics::drawable::Drawable arg0);
		void setDividerDrawable(jint arg0);
		void setEnabled(jboolean arg0);
		void setLeftStripDrawable(android::graphics::drawable::Drawable arg0);
		void setLeftStripDrawable(jint arg0);
		void setRightStripDrawable(android::graphics::drawable::Drawable arg0);
		void setRightStripDrawable(jint arg0);
		void setStripEnabled(jboolean arg0);
	};
} // namespace android::widget

