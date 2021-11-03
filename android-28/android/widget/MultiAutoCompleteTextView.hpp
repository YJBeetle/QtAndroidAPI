#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
#include "./TextView.hpp"
#include "./EditText.hpp"
#include "./AutoCompleteTextView.hpp"

namespace android::content
{
	class Context;
}

namespace android::widget
{
	class MultiAutoCompleteTextView : public android::widget::AutoCompleteTextView
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MultiAutoCompleteTextView(const char *className, const char *sig, Ts...agv) : android::widget::AutoCompleteTextView(className, sig, std::forward<Ts>(agv)...) {}
		MultiAutoCompleteTextView(QAndroidJniObject obj);
		
		// Constructors
		MultiAutoCompleteTextView(android::content::Context arg0);
		MultiAutoCompleteTextView(android::content::Context arg0, JObject arg1);
		MultiAutoCompleteTextView(android::content::Context arg0, JObject arg1, jint arg2);
		MultiAutoCompleteTextView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean enoughToFilter();
		jstring getAccessibilityClassName();
		void performValidation();
		void setTokenizer(JObject arg0);
	};
} // namespace android::widget

