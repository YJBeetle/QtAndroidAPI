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
	void AutoCompleteTextView::clearListSelection()
	{
		callMethod<void>(
			"clearListSelection",
			"()V"
		);
	}
	void AutoCompleteTextView::dismissDropDown()
	{
		callMethod<void>(
			"dismissDropDown",
			"()V"
		);
	}
	jboolean AutoCompleteTextView::enoughToFilter()
	{
		return callMethod<jboolean>(
			"enoughToFilter",
			"()Z"
		);
	}
	JObject AutoCompleteTextView::getAdapter()
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	JString AutoCompleteTextView::getCompletionHint()
	{
		return callObjectMethod(
			"getCompletionHint",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint AutoCompleteTextView::getDropDownAnchor()
	{
		return callMethod<jint>(
			"getDropDownAnchor",
			"()I"
		);
	}
	android::graphics::drawable::Drawable AutoCompleteTextView::getDropDownBackground()
	{
		return callObjectMethod(
			"getDropDownBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint AutoCompleteTextView::getDropDownHeight()
	{
		return callMethod<jint>(
			"getDropDownHeight",
			"()I"
		);
	}
	jint AutoCompleteTextView::getDropDownHorizontalOffset()
	{
		return callMethod<jint>(
			"getDropDownHorizontalOffset",
			"()I"
		);
	}
	jint AutoCompleteTextView::getDropDownVerticalOffset()
	{
		return callMethod<jint>(
			"getDropDownVerticalOffset",
			"()I"
		);
	}
	jint AutoCompleteTextView::getDropDownWidth()
	{
		return callMethod<jint>(
			"getDropDownWidth",
			"()I"
		);
	}
	JObject AutoCompleteTextView::getItemClickListener()
	{
		return callObjectMethod(
			"getItemClickListener",
			"()Landroid/widget/AdapterView$OnItemClickListener;"
		);
	}
	JObject AutoCompleteTextView::getItemSelectedListener()
	{
		return callObjectMethod(
			"getItemSelectedListener",
			"()Landroid/widget/AdapterView$OnItemSelectedListener;"
		);
	}
	jint AutoCompleteTextView::getListSelection()
	{
		return callMethod<jint>(
			"getListSelection",
			"()I"
		);
	}
	JObject AutoCompleteTextView::getOnItemClickListener()
	{
		return callObjectMethod(
			"getOnItemClickListener",
			"()Landroid/widget/AdapterView$OnItemClickListener;"
		);
	}
	JObject AutoCompleteTextView::getOnItemSelectedListener()
	{
		return callObjectMethod(
			"getOnItemSelectedListener",
			"()Landroid/widget/AdapterView$OnItemSelectedListener;"
		);
	}
	jint AutoCompleteTextView::getThreshold()
	{
		return callMethod<jint>(
			"getThreshold",
			"()I"
		);
	}
	JObject AutoCompleteTextView::getValidator()
	{
		return callObjectMethod(
			"getValidator",
			"()Landroid/widget/AutoCompleteTextView$Validator;"
		);
	}
	jboolean AutoCompleteTextView::isPerformingCompletion()
	{
		return callMethod<jboolean>(
			"isPerformingCompletion",
			"()Z"
		);
	}
	jboolean AutoCompleteTextView::isPopupShowing()
	{
		return callMethod<jboolean>(
			"isPopupShowing",
			"()Z"
		);
	}
	void AutoCompleteTextView::onCommitCompletion(android::view::inputmethod::CompletionInfo arg0)
	{
		callMethod<void>(
			"onCommitCompletion",
			"(Landroid/view/inputmethod/CompletionInfo;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::onFilterComplete(jint arg0)
	{
		callMethod<void>(
			"onFilterComplete",
			"(I)V",
			arg0
		);
	}
	jboolean AutoCompleteTextView::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean AutoCompleteTextView::onKeyPreIme(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean AutoCompleteTextView::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	void AutoCompleteTextView::onWindowFocusChanged(jboolean arg0)
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void AutoCompleteTextView::performCompletion()
	{
		callMethod<void>(
			"performCompletion",
			"()V"
		);
	}
	void AutoCompleteTextView::performValidation()
	{
		callMethod<void>(
			"performValidation",
			"()V"
		);
	}
	void AutoCompleteTextView::setAdapter(JObject arg0)
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::setCompletionHint(JString arg0)
	{
		callMethod<void>(
			"setCompletionHint",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void AutoCompleteTextView::setDropDownAnchor(jint arg0)
	{
		callMethod<void>(
			"setDropDownAnchor",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownBackgroundDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setDropDownBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::setDropDownBackgroundResource(jint arg0)
	{
		callMethod<void>(
			"setDropDownBackgroundResource",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownHeight(jint arg0)
	{
		callMethod<void>(
			"setDropDownHeight",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownHorizontalOffset(jint arg0)
	{
		callMethod<void>(
			"setDropDownHorizontalOffset",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownVerticalOffset(jint arg0)
	{
		callMethod<void>(
			"setDropDownVerticalOffset",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownWidth(jint arg0)
	{
		callMethod<void>(
			"setDropDownWidth",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setListSelection(jint arg0)
	{
		callMethod<void>(
			"setListSelection",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setOnClickListener(JObject arg0)
	{
		callMethod<void>(
			"setOnClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::setOnDismissListener(JObject arg0)
	{
		callMethod<void>(
			"setOnDismissListener",
			"(Landroid/widget/AutoCompleteTextView$OnDismissListener;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::setOnItemClickListener(JObject arg0)
	{
		callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::setOnItemSelectedListener(JObject arg0)
	{
		callMethod<void>(
			"setOnItemSelectedListener",
			"(Landroid/widget/AdapterView$OnItemSelectedListener;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::setText(JString arg0, jboolean arg1)
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void AutoCompleteTextView::setThreshold(jint arg0)
	{
		callMethod<void>(
			"setThreshold",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setValidator(JObject arg0)
	{
		callMethod<void>(
			"setValidator",
			"(Landroid/widget/AutoCompleteTextView$Validator;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::showDropDown()
	{
		callMethod<void>(
			"showDropDown",
			"()V"
		);
	}
} // namespace android::widget

