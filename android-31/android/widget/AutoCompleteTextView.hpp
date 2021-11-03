#pragma once

#include "./EditText.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class Resources_Theme;
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
namespace android::view::inputmethod
{
	class CompletionInfo;
}
namespace android::widget
{
	class Filter;
}
class JString;
class JObject;

namespace android::widget
{
	class AutoCompleteTextView : public android::widget::EditText
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AutoCompleteTextView(const char *className, const char *sig, Ts...agv) : android::widget::EditText(className, sig, std::forward<Ts>(agv)...) {}
		AutoCompleteTextView(QAndroidJniObject obj);
		
		// Constructors
		AutoCompleteTextView(android::content::Context arg0);
		AutoCompleteTextView(android::content::Context arg0, JObject arg1);
		AutoCompleteTextView(android::content::Context arg0, JObject arg1, jint arg2);
		AutoCompleteTextView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		AutoCompleteTextView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, android::content::res::Resources_Theme arg4);
		
		// Methods
		void clearListSelection() const;
		void dismissDropDown() const;
		jboolean enoughToFilter() const;
		JString getAccessibilityClassName() const;
		JObject getAdapter() const;
		JString getCompletionHint() const;
		jint getDropDownAnchor() const;
		android::graphics::drawable::Drawable getDropDownBackground() const;
		jint getDropDownHeight() const;
		jint getDropDownHorizontalOffset() const;
		jint getDropDownVerticalOffset() const;
		jint getDropDownWidth() const;
		jint getInputMethodMode() const;
		JObject getItemClickListener() const;
		JObject getItemSelectedListener() const;
		jint getListSelection() const;
		JObject getOnItemClickListener() const;
		JObject getOnItemSelectedListener() const;
		jint getThreshold() const;
		JObject getValidator() const;
		jboolean isPerformingCompletion() const;
		jboolean isPopupShowing() const;
		void onCommitCompletion(android::view::inputmethod::CompletionInfo arg0) const;
		void onFilterComplete(jint arg0) const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyPreIme(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		void onWindowFocusChanged(jboolean arg0) const;
		void performCompletion() const;
		void performValidation() const;
		void refreshAutoCompleteResults() const;
		void setAdapter(JObject arg0) const;
		void setCompletionHint(JString arg0) const;
		void setDropDownAnchor(jint arg0) const;
		void setDropDownBackgroundDrawable(android::graphics::drawable::Drawable arg0) const;
		void setDropDownBackgroundResource(jint arg0) const;
		void setDropDownHeight(jint arg0) const;
		void setDropDownHorizontalOffset(jint arg0) const;
		void setDropDownVerticalOffset(jint arg0) const;
		void setDropDownWidth(jint arg0) const;
		void setInputMethodMode(jint arg0) const;
		void setListSelection(jint arg0) const;
		void setOnClickListener(JObject arg0) const;
		void setOnDismissListener(JObject arg0) const;
		void setOnItemClickListener(JObject arg0) const;
		void setOnItemSelectedListener(JObject arg0) const;
		void setText(JString arg0, jboolean arg1) const;
		void setThreshold(jint arg0) const;
		void setValidator(JObject arg0) const;
		void showDropDown() const;
	};
} // namespace android::widget

