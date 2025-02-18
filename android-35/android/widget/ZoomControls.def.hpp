#pragma once

#include "./LinearLayout.def.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class MotionEvent;
}
class JString;

namespace android::widget
{
	class ZoomControls : public android::widget::LinearLayout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ZoomControls(const char *className, const char *sig, Ts...agv) : android::widget::LinearLayout(className, sig, std::forward<Ts>(agv)...) {}
		ZoomControls(QJniObject obj) : android::widget::LinearLayout(obj) {}
		
		// Constructors
		ZoomControls(android::content::Context arg0);
		ZoomControls(android::content::Context arg0, JObject arg1);
		
		// Methods
		JString getAccessibilityClassName() const;
		jboolean hasFocus() const;
		void hide() const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		void setIsZoomInEnabled(jboolean arg0) const;
		void setIsZoomOutEnabled(jboolean arg0) const;
		void setOnZoomInClickListener(JObject arg0) const;
		void setOnZoomOutClickListener(JObject arg0) const;
		void setZoomSpeed(jlong arg0) const;
		void show() const;
	};
} // namespace android::widget

