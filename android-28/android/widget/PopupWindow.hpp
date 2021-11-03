#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::transition
{
	class Transition;
}
namespace android::view
{
	class View;
}

namespace android::widget
{
	class PopupWindow : public JObject
	{
	public:
		// Fields
		static jint INPUT_METHOD_FROM_FOCUSABLE();
		static jint INPUT_METHOD_NEEDED();
		static jint INPUT_METHOD_NOT_NEEDED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PopupWindow(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PopupWindow(QAndroidJniObject obj);
		
		// Constructors
		PopupWindow();
		PopupWindow(android::content::Context arg0);
		PopupWindow(android::view::View arg0);
		PopupWindow(android::content::Context arg0, JObject arg1);
		PopupWindow(jint arg0, jint arg1);
		PopupWindow(android::content::Context arg0, JObject arg1, jint arg2);
		PopupWindow(android::view::View arg0, jint arg1, jint arg2);
		PopupWindow(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		PopupWindow(android::view::View arg0, jint arg1, jint arg2, jboolean arg3);
		
		// Methods
		void dismiss() const;
		jint getAnimationStyle() const;
		android::graphics::drawable::Drawable getBackground() const;
		android::view::View getContentView() const;
		jfloat getElevation() const;
		android::transition::Transition getEnterTransition() const;
		android::transition::Transition getExitTransition() const;
		jint getHeight() const;
		jint getInputMethodMode() const;
		jint getMaxAvailableHeight(android::view::View arg0) const;
		jint getMaxAvailableHeight(android::view::View arg0, jint arg1) const;
		jint getMaxAvailableHeight(android::view::View arg0, jint arg1, jboolean arg2) const;
		jboolean getOverlapAnchor() const;
		jint getSoftInputMode() const;
		jint getWidth() const;
		jint getWindowLayoutType() const;
		jboolean isAboveAnchor() const;
		jboolean isAttachedInDecor() const;
		jboolean isClippingEnabled() const;
		jboolean isFocusable() const;
		jboolean isOutsideTouchable() const;
		jboolean isShowing() const;
		jboolean isSplitTouchEnabled() const;
		jboolean isTouchable() const;
		void setAnimationStyle(jint arg0) const;
		void setAttachedInDecor(jboolean arg0) const;
		void setBackgroundDrawable(android::graphics::drawable::Drawable arg0) const;
		void setClippingEnabled(jboolean arg0) const;
		void setContentView(android::view::View arg0) const;
		void setElevation(jfloat arg0) const;
		void setEnterTransition(android::transition::Transition arg0) const;
		void setExitTransition(android::transition::Transition arg0) const;
		void setFocusable(jboolean arg0) const;
		void setHeight(jint arg0) const;
		void setIgnoreCheekPress() const;
		void setInputMethodMode(jint arg0) const;
		void setOnDismissListener(JObject arg0) const;
		void setOutsideTouchable(jboolean arg0) const;
		void setOverlapAnchor(jboolean arg0) const;
		void setSoftInputMode(jint arg0) const;
		void setSplitTouchEnabled(jboolean arg0) const;
		void setTouchInterceptor(JObject arg0) const;
		void setTouchable(jboolean arg0) const;
		void setWidth(jint arg0) const;
		void setWindowLayoutMode(jint arg0, jint arg1) const;
		void setWindowLayoutType(jint arg0) const;
		void showAsDropDown(android::view::View arg0) const;
		void showAsDropDown(android::view::View arg0, jint arg1, jint arg2) const;
		void showAsDropDown(android::view::View arg0, jint arg1, jint arg2, jint arg3) const;
		void showAtLocation(android::view::View arg0, jint arg1, jint arg2, jint arg3) const;
		void update() const;
		void update(jint arg0, jint arg1) const;
		void update(android::view::View arg0, jint arg1, jint arg2) const;
		void update(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void update(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void update(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4) const;
	};
} // namespace android::widget

