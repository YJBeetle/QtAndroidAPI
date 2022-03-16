#pragma once

#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "./MultiAutoCompleteTextView.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline MultiAutoCompleteTextView::MultiAutoCompleteTextView(android::content::Context arg0)
		: android::widget::AutoCompleteTextView(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline MultiAutoCompleteTextView::MultiAutoCompleteTextView(android::content::Context arg0, JObject arg1)
		: android::widget::AutoCompleteTextView(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline MultiAutoCompleteTextView::MultiAutoCompleteTextView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AutoCompleteTextView(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline MultiAutoCompleteTextView::MultiAutoCompleteTextView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AutoCompleteTextView(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline jboolean MultiAutoCompleteTextView::enoughToFilter() const
	{
		return callMethod<jboolean>(
			"enoughToFilter",
			"()Z"
		);
	}
	inline JString MultiAutoCompleteTextView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void MultiAutoCompleteTextView::performValidation() const
	{
		callMethod<void>(
			"performValidation",
			"()V"
		);
	}
	inline void MultiAutoCompleteTextView::setTokenizer(JObject arg0) const
	{
		callMethod<void>(
			"setTokenizer",
			"(Landroid/widget/MultiAutoCompleteTextView$Tokenizer;)V",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "./TextView.hpp"
#include "./EditText.hpp"
#include "./AutoCompleteTextView.hpp"

