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
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class View;
}
namespace android::widget
{
	class ListView;
}

namespace android::widget
{
	class ListPopupWindow : public __JniBaseClass
	{
	public:
		// Fields
		static jint INPUT_METHOD_FROM_FOCUSABLE();
		static jint INPUT_METHOD_NEEDED();
		static jint INPUT_METHOD_NOT_NEEDED();
		static jint MATCH_PARENT();
		static jint POSITION_PROMPT_ABOVE();
		static jint POSITION_PROMPT_BELOW();
		static jint WRAP_CONTENT();
		
		ListPopupWindow(QAndroidJniObject obj);
		// Constructors
		ListPopupWindow(android::content::Context arg0);
		ListPopupWindow(android::content::Context arg0, __JniBaseClass arg1);
		ListPopupWindow(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		ListPopupWindow(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		ListPopupWindow() = default;
		
		// Methods
		void clearListSelection();
		QAndroidJniObject createDragToOpenListener(android::view::View arg0);
		void dismiss();
		QAndroidJniObject getAnchorView();
		jint getAnimationStyle();
		QAndroidJniObject getBackground();
		QAndroidJniObject getEpicenterBounds();
		jint getHeight();
		jint getHorizontalOffset();
		jint getInputMethodMode();
		QAndroidJniObject getListView();
		jint getPromptPosition();
		jobject getSelectedItem();
		jlong getSelectedItemId();
		jint getSelectedItemPosition();
		QAndroidJniObject getSelectedView();
		jint getSoftInputMode();
		jint getVerticalOffset();
		jint getWidth();
		jboolean isInputMethodNotNeeded();
		jboolean isModal();
		jboolean isShowing();
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyPreIme(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		jboolean performItemClick(jint arg0);
		void postShow();
		void setAdapter(__JniBaseClass arg0);
		void setAnchorView(android::view::View arg0);
		void setAnimationStyle(jint arg0);
		void setBackgroundDrawable(android::graphics::drawable::Drawable arg0);
		void setContentWidth(jint arg0);
		void setDropDownGravity(jint arg0);
		void setEpicenterBounds(android::graphics::Rect arg0);
		void setHeight(jint arg0);
		void setHorizontalOffset(jint arg0);
		void setInputMethodMode(jint arg0);
		void setListSelector(android::graphics::drawable::Drawable arg0);
		void setModal(jboolean arg0);
		void setOnDismissListener(__JniBaseClass arg0);
		void setOnItemClickListener(__JniBaseClass arg0);
		void setOnItemSelectedListener(__JniBaseClass arg0);
		void setPromptPosition(jint arg0);
		void setPromptView(android::view::View arg0);
		void setSelection(jint arg0);
		void setSoftInputMode(jint arg0);
		void setVerticalOffset(jint arg0);
		void setWidth(jint arg0);
		void setWindowLayoutType(jint arg0);
		void show();
	};
} // namespace android::widget

