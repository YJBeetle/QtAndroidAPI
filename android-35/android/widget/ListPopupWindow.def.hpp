#pragma once

#include "../../JObject.hpp"

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
class JObject;

namespace android::widget
{
	class ListPopupWindow : public JObject
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ListPopupWindow(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ListPopupWindow(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ListPopupWindow(android::content::Context arg0);
		ListPopupWindow(android::content::Context arg0, JObject arg1);
		ListPopupWindow(android::content::Context arg0, JObject arg1, jint arg2);
		ListPopupWindow(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void clearListSelection() const;
		JObject createDragToOpenListener(android::view::View arg0) const;
		void dismiss() const;
		android::view::View getAnchorView() const;
		jint getAnimationStyle() const;
		android::graphics::drawable::Drawable getBackground() const;
		android::graphics::Rect getEpicenterBounds() const;
		jint getHeight() const;
		jint getHorizontalOffset() const;
		jint getInputMethodMode() const;
		android::widget::ListView getListView() const;
		jint getPromptPosition() const;
		JObject getSelectedItem() const;
		jlong getSelectedItemId() const;
		jint getSelectedItemPosition() const;
		android::view::View getSelectedView() const;
		jint getSoftInputMode() const;
		jint getVerticalOffset() const;
		jint getWidth() const;
		jboolean isInputMethodNotNeeded() const;
		jboolean isModal() const;
		jboolean isShowing() const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyPreIme(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		jboolean performItemClick(jint arg0) const;
		void postShow() const;
		void setAdapter(JObject arg0) const;
		void setAnchorView(android::view::View arg0) const;
		void setAnimationStyle(jint arg0) const;
		void setBackgroundDrawable(android::graphics::drawable::Drawable arg0) const;
		void setContentWidth(jint arg0) const;
		void setDropDownGravity(jint arg0) const;
		void setEpicenterBounds(android::graphics::Rect arg0) const;
		void setHeight(jint arg0) const;
		void setHorizontalOffset(jint arg0) const;
		void setInputMethodMode(jint arg0) const;
		void setListSelector(android::graphics::drawable::Drawable arg0) const;
		void setModal(jboolean arg0) const;
		void setOnDismissListener(JObject arg0) const;
		void setOnItemClickListener(JObject arg0) const;
		void setOnItemSelectedListener(JObject arg0) const;
		void setPromptPosition(jint arg0) const;
		void setPromptView(android::view::View arg0) const;
		void setSelection(jint arg0) const;
		void setSoftInputMode(jint arg0) const;
		void setVerticalOffset(jint arg0) const;
		void setWidth(jint arg0) const;
		void setWindowLayoutType(jint arg0) const;
		void show() const;
	};
} // namespace android::widget

