#pragma once

#include "./LinearLayout.def.hpp"

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
class JString;

namespace android::widget
{
	class TabWidget : public android::widget::LinearLayout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TabWidget(const char *className, const char *sig, Ts...agv) : android::widget::LinearLayout(className, sig, std::forward<Ts>(agv)...) {}
		TabWidget(QJniObject obj) : android::widget::LinearLayout(obj) {}
		
		// Constructors
		TabWidget(android::content::Context arg0);
		TabWidget(android::content::Context arg0, JObject arg1);
		TabWidget(android::content::Context arg0, JObject arg1, jint arg2);
		TabWidget(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void addView(android::view::View arg0) const;
		void childDrawableStateChanged(android::view::View arg0) const;
		void dispatchDraw(android::graphics::Canvas arg0) const;
		void focusCurrentTab(jint arg0) const;
		JString getAccessibilityClassName() const;
		android::view::View getChildTabViewAt(jint arg0) const;
		android::graphics::drawable::Drawable getLeftStripDrawable() const;
		android::graphics::drawable::Drawable getRightStripDrawable() const;
		jint getTabCount() const;
		jboolean isStripEnabled() const;
		void onFocusChange(android::view::View arg0, jboolean arg1) const;
		android::view::PointerIcon onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const;
		void removeAllViews() const;
		void setCurrentTab(jint arg0) const;
		void setDividerDrawable(android::graphics::drawable::Drawable arg0) const;
		void setDividerDrawable(jint arg0) const;
		void setEnabled(jboolean arg0) const;
		void setLeftStripDrawable(android::graphics::drawable::Drawable arg0) const;
		void setLeftStripDrawable(jint arg0) const;
		void setRightStripDrawable(android::graphics::drawable::Drawable arg0) const;
		void setRightStripDrawable(jint arg0) const;
		void setStripEnabled(jboolean arg0) const;
	};
} // namespace android::widget

