#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "./MultiAutoCompleteTextView.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	MultiAutoCompleteTextView::MultiAutoCompleteTextView(QJniObject obj) : android::widget::AutoCompleteTextView(obj) {}
	
	// Constructors
	MultiAutoCompleteTextView::MultiAutoCompleteTextView(android::content::Context arg0)
		: android::widget::AutoCompleteTextView(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	MultiAutoCompleteTextView::MultiAutoCompleteTextView(android::content::Context arg0, JObject arg1)
		: android::widget::AutoCompleteTextView(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	MultiAutoCompleteTextView::MultiAutoCompleteTextView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AutoCompleteTextView(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	MultiAutoCompleteTextView::MultiAutoCompleteTextView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AutoCompleteTextView(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jboolean MultiAutoCompleteTextView::enoughToFilter() const
	{
		return callMethod<jboolean>(
			"enoughToFilter",
			"()Z"
		);
	}
	JString MultiAutoCompleteTextView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	void MultiAutoCompleteTextView::performValidation() const
	{
		callMethod<void>(
			"performValidation",
			"()V"
		);
	}
	void MultiAutoCompleteTextView::setTokenizer(JObject arg0) const
	{
		callMethod<void>(
			"setTokenizer",
			"(Landroid/widget/MultiAutoCompleteTextView$Tokenizer;)V",
			arg0.object()
		);
	}
} // namespace android::widget

