#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Rect;
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
	class PopupWindow : public __JniBaseClass
	{
	public:
		// Fields
		static jint INPUT_METHOD_FROM_FOCUSABLE();
		static jint INPUT_METHOD_NEEDED();
		static jint INPUT_METHOD_NOT_NEEDED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PopupWindow(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PopupWindow(QAndroidJniObject obj);
		
		// Constructors
		PopupWindow();
		PopupWindow(android::content::Context arg0);
		PopupWindow(android::view::View arg0);
		PopupWindow(android::content::Context arg0, __JniBaseClass arg1);
		PopupWindow(jint arg0, jint arg1);
		PopupWindow(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		PopupWindow(android::view::View arg0, jint arg1, jint arg2);
		PopupWindow(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		PopupWindow(android::view::View arg0, jint arg1, jint arg2, jboolean arg3);
		
		// Methods
		void dismiss();
		jint getAnimationStyle();
		QAndroidJniObject getBackground();
		QAndroidJniObject getContentView();
		jfloat getElevation();
		QAndroidJniObject getEnterTransition();
		QAndroidJniObject getEpicenterBounds();
		QAndroidJniObject getExitTransition();
		jint getHeight();
		jint getInputMethodMode();
		jint getMaxAvailableHeight(android::view::View arg0);
		jint getMaxAvailableHeight(android::view::View arg0, jint arg1);
		jint getMaxAvailableHeight(android::view::View arg0, jint arg1, jboolean arg2);
		jboolean getOverlapAnchor();
		jint getSoftInputMode();
		jint getWidth();
		jint getWindowLayoutType();
		jboolean isAboveAnchor();
		jboolean isAttachedInDecor();
		jboolean isClippedToScreen();
		jboolean isClippingEnabled();
		jboolean isFocusable();
		jboolean isLaidOutInScreen();
		jboolean isOutsideTouchable();
		jboolean isShowing();
		jboolean isSplitTouchEnabled();
		jboolean isTouchModal();
		jboolean isTouchable();
		void setAnimationStyle(jint arg0);
		void setAttachedInDecor(jboolean arg0);
		void setBackgroundDrawable(android::graphics::drawable::Drawable arg0);
		void setClippingEnabled(jboolean arg0);
		void setContentView(android::view::View arg0);
		void setElevation(jfloat arg0);
		void setEnterTransition(android::transition::Transition arg0);
		void setEpicenterBounds(android::graphics::Rect arg0);
		void setExitTransition(android::transition::Transition arg0);
		void setFocusable(jboolean arg0);
		void setHeight(jint arg0);
		void setIgnoreCheekPress();
		void setInputMethodMode(jint arg0);
		void setIsClippedToScreen(jboolean arg0);
		void setIsLaidOutInScreen(jboolean arg0);
		void setOnDismissListener(__JniBaseClass arg0);
		void setOutsideTouchable(jboolean arg0);
		void setOverlapAnchor(jboolean arg0);
		void setSoftInputMode(jint arg0);
		void setSplitTouchEnabled(jboolean arg0);
		void setTouchInterceptor(__JniBaseClass arg0);
		void setTouchModal(jboolean arg0);
		void setTouchable(jboolean arg0);
		void setWidth(jint arg0);
		void setWindowLayoutMode(jint arg0, jint arg1);
		void setWindowLayoutType(jint arg0);
		void showAsDropDown(android::view::View arg0);
		void showAsDropDown(android::view::View arg0, jint arg1, jint arg2);
		void showAsDropDown(android::view::View arg0, jint arg1, jint arg2, jint arg3);
		void showAtLocation(android::view::View arg0, jint arg1, jint arg2, jint arg3);
		void update();
		void update(jint arg0, jint arg1);
		void update(android::view::View arg0, jint arg1, jint arg2);
		void update(jint arg0, jint arg1, jint arg2, jint arg3);
		void update(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void update(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4);
	};
} // namespace android::widget

