#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		MultiAutoCompleteTextView(QAndroidJniObject obj);
		// Constructors
		MultiAutoCompleteTextView(android::content::Context &arg0);
		MultiAutoCompleteTextView(android::content::Context &arg0, __JniBaseClass &arg1);
		MultiAutoCompleteTextView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		MultiAutoCompleteTextView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		MultiAutoCompleteTextView() = default;
		
		// Methods
		jboolean enoughToFilter();
		jstring getAccessibilityClassName();
		void performValidation();
		void setTokenizer(__JniBaseClass arg0);
	};
} // namespace android::widget

