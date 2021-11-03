#include "../content/Context.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/inputmethod/CompletionInfo.hpp"
#include "./Filter.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "./AutoCompleteTextView.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	AutoCompleteTextView::AutoCompleteTextView(QJniObject obj) : android::widget::EditText(obj) {}
	
	// Constructors
	AutoCompleteTextView::AutoCompleteTextView(android::content::Context arg0)
		: android::widget::EditText(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	AutoCompleteTextView::AutoCompleteTextView(android::content::Context arg0, JObject arg1)
		: android::widget::EditText(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	AutoCompleteTextView::AutoCompleteTextView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::EditText(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	AutoCompleteTextView::AutoCompleteTextView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::EditText(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	AutoCompleteTextView::AutoCompleteTextView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, android::content::res::Resources_Theme arg4)
		: android::widget::EditText(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;IILandroid/content/res/Resources$Theme;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4.object()
		) {}
	
	// Methods
	void AutoCompleteTextView::clearListSelection() const
	{
		callMethod<void>(
			"clearListSelection",
			"()V"
		);
	}
	void AutoCompleteTextView::dismissDropDown() const
	{
		callMethod<void>(
			"dismissDropDown",
			"()V"
		);
	}
	jboolean AutoCompleteTextView::enoughToFilter() const
	{
		return callMethod<jboolean>(
			"enoughToFilter",
			"()Z"
		);
	}
	JObject AutoCompleteTextView::getAdapter() const
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	JString AutoCompleteTextView::getCompletionHint() const
	{
		return callObjectMethod(
			"getCompletionHint",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint AutoCompleteTextView::getDropDownAnchor() const
	{
		return callMethod<jint>(
			"getDropDownAnchor",
			"()I"
		);
	}
	android::graphics::drawable::Drawable AutoCompleteTextView::getDropDownBackground() const
	{
		return callObjectMethod(
			"getDropDownBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint AutoCompleteTextView::getDropDownHeight() const
	{
		return callMethod<jint>(
			"getDropDownHeight",
			"()I"
		);
	}
	jint AutoCompleteTextView::getDropDownHorizontalOffset() const
	{
		return callMethod<jint>(
			"getDropDownHorizontalOffset",
			"()I"
		);
	}
	jint AutoCompleteTextView::getDropDownVerticalOffset() const
	{
		return callMethod<jint>(
			"getDropDownVerticalOffset",
			"()I"
		);
	}
	jint AutoCompleteTextView::getDropDownWidth() const
	{
		return callMethod<jint>(
			"getDropDownWidth",
			"()I"
		);
	}
	jint AutoCompleteTextView::getInputMethodMode() const
	{
		return callMethod<jint>(
			"getInputMethodMode",
			"()I"
		);
	}
	JObject AutoCompleteTextView::getItemClickListener() const
	{
		return callObjectMethod(
			"getItemClickListener",
			"()Landroid/widget/AdapterView$OnItemClickListener;"
		);
	}
	JObject AutoCompleteTextView::getItemSelectedListener() const
	{
		return callObjectMethod(
			"getItemSelectedListener",
			"()Landroid/widget/AdapterView$OnItemSelectedListener;"
		);
	}
	jint AutoCompleteTextView::getListSelection() const
	{
		return callMethod<jint>(
			"getListSelection",
			"()I"
		);
	}
	JObject AutoCompleteTextView::getOnItemClickListener() const
	{
		return callObjectMethod(
			"getOnItemClickListener",
			"()Landroid/widget/AdapterView$OnItemClickListener;"
		);
	}
	JObject AutoCompleteTextView::getOnItemSelectedListener() const
	{
		return callObjectMethod(
			"getOnItemSelectedListener",
			"()Landroid/widget/AdapterView$OnItemSelectedListener;"
		);
	}
	jint AutoCompleteTextView::getThreshold() const
	{
		return callMethod<jint>(
			"getThreshold",
			"()I"
		);
	}
	JObject AutoCompleteTextView::getValidator() const
	{
		return callObjectMethod(
			"getValidator",
			"()Landroid/widget/AutoCompleteTextView$Validator;"
		);
	}
	jboolean AutoCompleteTextView::isPerformingCompletion() const
	{
		return callMethod<jboolean>(
			"isPerformingCompletion",
			"()Z"
		);
	}
	jboolean AutoCompleteTextView::isPopupShowing() const
	{
		return callMethod<jboolean>(
			"isPopupShowing",
			"()Z"
		);
	}
	void AutoCompleteTextView::onCommitCompletion(android::view::inputmethod::CompletionInfo arg0) const
	{
		callMethod<void>(
			"onCommitCompletion",
			"(Landroid/view/inputmethod/CompletionInfo;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::onFilterComplete(jint arg0) const
	{
		callMethod<void>(
			"onFilterComplete",
			"(I)V",
			arg0
		);
	}
	jboolean AutoCompleteTextView::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean AutoCompleteTextView::onKeyPreIme(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean AutoCompleteTextView::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	void AutoCompleteTextView::onWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void AutoCompleteTextView::performCompletion() const
	{
		callMethod<void>(
			"performCompletion",
			"()V"
		);
	}
	void AutoCompleteTextView::performValidation() const
	{
		callMethod<void>(
			"performValidation",
			"()V"
		);
	}
	void AutoCompleteTextView::refreshAutoCompleteResults() const
	{
		callMethod<void>(
			"refreshAutoCompleteResults",
			"()V"
		);
	}
	void AutoCompleteTextView::setAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::setCompletionHint(JString arg0) const
	{
		callMethod<void>(
			"setCompletionHint",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void AutoCompleteTextView::setDropDownAnchor(jint arg0) const
	{
		callMethod<void>(
			"setDropDownAnchor",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownBackgroundDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setDropDownBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::setDropDownBackgroundResource(jint arg0) const
	{
		callMethod<void>(
			"setDropDownBackgroundResource",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownHeight(jint arg0) const
	{
		callMethod<void>(
			"setDropDownHeight",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownHorizontalOffset(jint arg0) const
	{
		callMethod<void>(
			"setDropDownHorizontalOffset",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownVerticalOffset(jint arg0) const
	{
		callMethod<void>(
			"setDropDownVerticalOffset",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownWidth(jint arg0) const
	{
		callMethod<void>(
			"setDropDownWidth",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setInputMethodMode(jint arg0) const
	{
		callMethod<void>(
			"setInputMethodMode",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setListSelection(jint arg0) const
	{
		callMethod<void>(
			"setListSelection",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setOnClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::setOnDismissListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDismissListener",
			"(Landroid/widget/AutoCompleteTextView$OnDismissListener;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::setOnItemClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::setOnItemSelectedListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnItemSelectedListener",
			"(Landroid/widget/AdapterView$OnItemSelectedListener;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::setText(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void AutoCompleteTextView::setThreshold(jint arg0) const
	{
		callMethod<void>(
			"setThreshold",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setValidator(JObject arg0) const
	{
		callMethod<void>(
			"setValidator",
			"(Landroid/widget/AutoCompleteTextView$Validator;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::showDropDown() const
	{
		callMethod<void>(
			"showDropDown",
			"()V"
		);
	}
} // namespace android::widget

