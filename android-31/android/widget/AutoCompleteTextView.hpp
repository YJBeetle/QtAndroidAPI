#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
#include "./TextView.hpp"
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
		void clearListSelection();
		void dismissDropDown();
		jboolean enoughToFilter();
		jstring getAccessibilityClassName();
		JObject getAdapter();
		jstring getCompletionHint();
		jint getDropDownAnchor();
		android::graphics::drawable::Drawable getDropDownBackground();
		jint getDropDownHeight();
		jint getDropDownHorizontalOffset();
		jint getDropDownVerticalOffset();
		jint getDropDownWidth();
		jint getInputMethodMode();
		JObject getItemClickListener();
		JObject getItemSelectedListener();
		jint getListSelection();
		JObject getOnItemClickListener();
		JObject getOnItemSelectedListener();
		jint getThreshold();
		JObject getValidator();
		jboolean isPerformingCompletion();
		jboolean isPopupShowing();
		void onCommitCompletion(android::view::inputmethod::CompletionInfo arg0);
		void onFilterComplete(jint arg0);
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyPreIme(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		void onWindowFocusChanged(jboolean arg0);
		void performCompletion();
		void performValidation();
		void refreshAutoCompleteResults();
		void setAdapter(JObject arg0);
		void setCompletionHint(jstring arg0);
		void setDropDownAnchor(jint arg0);
		void setDropDownBackgroundDrawable(android::graphics::drawable::Drawable arg0);
		void setDropDownBackgroundResource(jint arg0);
		void setDropDownHeight(jint arg0);
		void setDropDownHorizontalOffset(jint arg0);
		void setDropDownVerticalOffset(jint arg0);
		void setDropDownWidth(jint arg0);
		void setInputMethodMode(jint arg0);
		void setListSelection(jint arg0);
		void setOnClickListener(JObject arg0);
		void setOnDismissListener(JObject arg0);
		void setOnItemClickListener(JObject arg0);
		void setOnItemSelectedListener(JObject arg0);
		void setText(jstring arg0, jboolean arg1);
		void setThreshold(jint arg0);
		void setValidator(JObject arg0);
		void showDropDown();
	};
} // namespace android::widget

