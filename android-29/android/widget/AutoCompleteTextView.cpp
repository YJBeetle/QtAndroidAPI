#include "../content/Context.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/inputmethod/CompletionInfo.hpp"
#include "./Filter.hpp"
#include "./AutoCompleteTextView.hpp"

namespace android::widget
{
	// Fields
	
	AutoCompleteTextView::AutoCompleteTextView(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AutoCompleteTextView::AutoCompleteTextView(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	AutoCompleteTextView::AutoCompleteTextView(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	AutoCompleteTextView::AutoCompleteTextView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	AutoCompleteTextView::AutoCompleteTextView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	AutoCompleteTextView::AutoCompleteTextView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3, android::content::res::Resources_Theme &arg4)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;IILandroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	
	// Methods
	void AutoCompleteTextView::clearListSelection()
	{
		__thiz.callMethod<void>(
			"clearListSelection",
			"()V"
		);
	}
	void AutoCompleteTextView::dismissDropDown()
	{
		__thiz.callMethod<void>(
			"dismissDropDown",
			"()V"
		);
	}
	jboolean AutoCompleteTextView::enoughToFilter()
	{
		return __thiz.callMethod<jboolean>(
			"enoughToFilter",
			"()Z"
		);
	}
	QAndroidJniObject AutoCompleteTextView::getAdapter()
	{
		return __thiz.callObjectMethod(
			"getAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	jstring AutoCompleteTextView::getCompletionHint()
	{
		return __thiz.callObjectMethod(
			"getCompletionHint",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AutoCompleteTextView::getDropDownAnchor()
	{
		return __thiz.callMethod<jint>(
			"getDropDownAnchor",
			"()I"
		);
	}
	QAndroidJniObject AutoCompleteTextView::getDropDownBackground()
	{
		return __thiz.callObjectMethod(
			"getDropDownBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint AutoCompleteTextView::getDropDownHeight()
	{
		return __thiz.callMethod<jint>(
			"getDropDownHeight",
			"()I"
		);
	}
	jint AutoCompleteTextView::getDropDownHorizontalOffset()
	{
		return __thiz.callMethod<jint>(
			"getDropDownHorizontalOffset",
			"()I"
		);
	}
	jint AutoCompleteTextView::getDropDownVerticalOffset()
	{
		return __thiz.callMethod<jint>(
			"getDropDownVerticalOffset",
			"()I"
		);
	}
	jint AutoCompleteTextView::getDropDownWidth()
	{
		return __thiz.callMethod<jint>(
			"getDropDownWidth",
			"()I"
		);
	}
	jint AutoCompleteTextView::getInputMethodMode()
	{
		return __thiz.callMethod<jint>(
			"getInputMethodMode",
			"()I"
		);
	}
	QAndroidJniObject AutoCompleteTextView::getItemClickListener()
	{
		return __thiz.callObjectMethod(
			"getItemClickListener",
			"()Landroid/widget/AdapterView$OnItemClickListener;"
		);
	}
	QAndroidJniObject AutoCompleteTextView::getItemSelectedListener()
	{
		return __thiz.callObjectMethod(
			"getItemSelectedListener",
			"()Landroid/widget/AdapterView$OnItemSelectedListener;"
		);
	}
	jint AutoCompleteTextView::getListSelection()
	{
		return __thiz.callMethod<jint>(
			"getListSelection",
			"()I"
		);
	}
	QAndroidJniObject AutoCompleteTextView::getOnItemClickListener()
	{
		return __thiz.callObjectMethod(
			"getOnItemClickListener",
			"()Landroid/widget/AdapterView$OnItemClickListener;"
		);
	}
	QAndroidJniObject AutoCompleteTextView::getOnItemSelectedListener()
	{
		return __thiz.callObjectMethod(
			"getOnItemSelectedListener",
			"()Landroid/widget/AdapterView$OnItemSelectedListener;"
		);
	}
	jint AutoCompleteTextView::getThreshold()
	{
		return __thiz.callMethod<jint>(
			"getThreshold",
			"()I"
		);
	}
	QAndroidJniObject AutoCompleteTextView::getValidator()
	{
		return __thiz.callObjectMethod(
			"getValidator",
			"()Landroid/widget/AutoCompleteTextView$Validator;"
		);
	}
	jboolean AutoCompleteTextView::isPerformingCompletion()
	{
		return __thiz.callMethod<jboolean>(
			"isPerformingCompletion",
			"()Z"
		);
	}
	jboolean AutoCompleteTextView::isPopupShowing()
	{
		return __thiz.callMethod<jboolean>(
			"isPopupShowing",
			"()Z"
		);
	}
	void AutoCompleteTextView::onCommitCompletion(android::view::inputmethod::CompletionInfo arg0)
	{
		__thiz.callMethod<void>(
			"onCommitCompletion",
			"(Landroid/view/inputmethod/CompletionInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void AutoCompleteTextView::onFilterComplete(jint arg0)
	{
		__thiz.callMethod<void>(
			"onFilterComplete",
			"(I)V",
			arg0
		);
	}
	jboolean AutoCompleteTextView::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AutoCompleteTextView::onKeyPreIme(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AutoCompleteTextView::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AutoCompleteTextView::onWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void AutoCompleteTextView::performCompletion()
	{
		__thiz.callMethod<void>(
			"performCompletion",
			"()V"
		);
	}
	void AutoCompleteTextView::performValidation()
	{
		__thiz.callMethod<void>(
			"performValidation",
			"()V"
		);
	}
	void AutoCompleteTextView::refreshAutoCompleteResults()
	{
		__thiz.callMethod<void>(
			"refreshAutoCompleteResults",
			"()V"
		);
	}
	void AutoCompleteTextView::setAdapter(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.__jniObject().object()
		);
	}
	void AutoCompleteTextView::setCompletionHint(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCompletionHint",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AutoCompleteTextView::setCompletionHint(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setCompletionHint",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AutoCompleteTextView::setDropDownAnchor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownAnchor",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownBackgroundDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void AutoCompleteTextView::setDropDownBackgroundResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownBackgroundResource",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownHeight",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownHorizontalOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownHorizontalOffset",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownVerticalOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownVerticalOffset",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownWidth",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setInputMethodMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInputMethodMode",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setListSelection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setListSelection",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setOnClickListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AutoCompleteTextView::setOnDismissListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDismissListener",
			"(Landroid/widget/AutoCompleteTextView$OnDismissListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AutoCompleteTextView::setOnItemClickListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AutoCompleteTextView::setOnItemSelectedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnItemSelectedListener",
			"(Landroid/widget/AdapterView$OnItemSelectedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AutoCompleteTextView::setText(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Z)V",
			arg0,
			arg1
		);
	}
	void AutoCompleteTextView::setText(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void AutoCompleteTextView::setThreshold(jint arg0)
	{
		__thiz.callMethod<void>(
			"setThreshold",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setValidator(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setValidator",
			"(Landroid/widget/AutoCompleteTextView$Validator;)V",
			arg0.__jniObject().object()
		);
	}
	void AutoCompleteTextView::showDropDown()
	{
		__thiz.callMethod<void>(
			"showDropDown",
			"()V"
		);
	}
} // namespace android::widget

