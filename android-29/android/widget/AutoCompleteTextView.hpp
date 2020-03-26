#pragma once

#ifndef ANDROID_WIDGET_AUTOCOMPLETETEXTVIEW
#define ANDROID_WIDGET_AUTOCOMPLETETEXTVIEW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "TextView.hpp"
#include "EditText.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}
namespace __jni_impl::android::widget
{
	class Filter;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view::inputmethod
{
	class CompletionInfo;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}

namespace __jni_impl::android::widget
{
	class AutoCompleteTextView : public __jni_impl::android::widget::EditText
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, __jni_impl::android::content::res::Resources_Theme arg4);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject getAdapter();
		void setThreshold(jint arg0);
		void setText(jstring arg0, jboolean arg1);
		void onFilterComplete(jint arg0);
		void setOnDismissListener(__jni_impl::__JniBaseClass arg0);
		void setOnItemClickListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getOnItemClickListener();
		void setOnItemSelectedListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getOnItemSelectedListener();
		void setAdapter(__jni_impl::__JniBaseClass arg0);
		void setValidator(__jni_impl::__JniBaseClass arg0);
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		void onWindowFocusChanged(jboolean arg0);
		void onCommitCompletion(__jni_impl::android::view::inputmethod::CompletionInfo arg0);
		jstring getCompletionHint();
		jint getDropDownWidth();
		void setDropDownWidth(jint arg0);
		jint getDropDownHeight();
		void setDropDownHeight(jint arg0);
		void setCompletionHint(jstring arg0);
		jint getDropDownAnchor();
		void setDropDownAnchor(jint arg0);
		QAndroidJniObject getDropDownBackground();
		void setDropDownBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setDropDownBackgroundResource(jint arg0);
		void setDropDownVerticalOffset(jint arg0);
		jint getDropDownVerticalOffset();
		void setDropDownHorizontalOffset(jint arg0);
		jint getDropDownHorizontalOffset();
		QAndroidJniObject getItemClickListener();
		QAndroidJniObject getItemSelectedListener();
		jboolean enoughToFilter();
		void refreshAutoCompleteResults();
		jboolean isPopupShowing();
		void clearListSelection();
		void setListSelection(jint arg0);
		jint getListSelection();
		void performCompletion();
		jboolean isPerformingCompletion();
		void dismissDropDown();
		jint getInputMethodMode();
		void setInputMethodMode(jint arg0);
		void showDropDown();
		QAndroidJniObject getValidator();
		void performValidation();
		void setOnClickListener(__jni_impl::__JniBaseClass arg0);
		jboolean onKeyPreIme(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jint getThreshold();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "Filter.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/inputmethod/CompletionInfo.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../graphics/Rect.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void AutoCompleteTextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, __jni_impl::android::content::res::Resources_Theme arg4)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;IILandroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	void AutoCompleteTextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void AutoCompleteTextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void AutoCompleteTextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void AutoCompleteTextView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject AutoCompleteTextView::getAdapter()
	{
		return __thiz.callObjectMethod(
			"getAdapter",
			"()Landroid/widget/ListAdapter;"
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
	void AutoCompleteTextView::setText(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Z)V",
			arg0,
			arg1
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
	void AutoCompleteTextView::setOnDismissListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDismissListener",
			"(Landroid/widget/AutoCompleteTextView$OnDismissListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AutoCompleteTextView::setOnItemClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AutoCompleteTextView::getOnItemClickListener()
	{
		return __thiz.callObjectMethod(
			"getOnItemClickListener",
			"()Landroid/widget/AdapterView$OnItemClickListener;"
		);
	}
	void AutoCompleteTextView::setOnItemSelectedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnItemSelectedListener",
			"(Landroid/widget/AdapterView$OnItemSelectedListener;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AutoCompleteTextView::getOnItemSelectedListener()
	{
		return __thiz.callObjectMethod(
			"getOnItemSelectedListener",
			"()Landroid/widget/AdapterView$OnItemSelectedListener;"
		);
	}
	void AutoCompleteTextView::setAdapter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.__jniObject().object()
		);
	}
	void AutoCompleteTextView::setValidator(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setValidator",
			"(Landroid/widget/AutoCompleteTextView$Validator;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AutoCompleteTextView::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AutoCompleteTextView::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
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
	void AutoCompleteTextView::onCommitCompletion(__jni_impl::android::view::inputmethod::CompletionInfo arg0)
	{
		__thiz.callMethod<void>(
			"onCommitCompletion",
			"(Landroid/view/inputmethod/CompletionInfo;)V",
			arg0.__jniObject().object()
		);
	}
	jstring AutoCompleteTextView::getCompletionHint()
	{
		return __thiz.callObjectMethod(
			"getCompletionHint",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AutoCompleteTextView::getDropDownWidth()
	{
		return __thiz.callMethod<jint>(
			"getDropDownWidth",
			"()I"
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
	jint AutoCompleteTextView::getDropDownHeight()
	{
		return __thiz.callMethod<jint>(
			"getDropDownHeight",
			"()I"
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
	void AutoCompleteTextView::setCompletionHint(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCompletionHint",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	jint AutoCompleteTextView::getDropDownAnchor()
	{
		return __thiz.callMethod<jint>(
			"getDropDownAnchor",
			"()I"
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
	QAndroidJniObject AutoCompleteTextView::getDropDownBackground()
	{
		return __thiz.callObjectMethod(
			"getDropDownBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void AutoCompleteTextView::setDropDownBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
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
	void AutoCompleteTextView::setDropDownVerticalOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownVerticalOffset",
			"(I)V",
			arg0
		);
	}
	jint AutoCompleteTextView::getDropDownVerticalOffset()
	{
		return __thiz.callMethod<jint>(
			"getDropDownVerticalOffset",
			"()I"
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
	jint AutoCompleteTextView::getDropDownHorizontalOffset()
	{
		return __thiz.callMethod<jint>(
			"getDropDownHorizontalOffset",
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
	jboolean AutoCompleteTextView::enoughToFilter()
	{
		return __thiz.callMethod<jboolean>(
			"enoughToFilter",
			"()Z"
		);
	}
	void AutoCompleteTextView::refreshAutoCompleteResults()
	{
		__thiz.callMethod<void>(
			"refreshAutoCompleteResults",
			"()V"
		);
	}
	jboolean AutoCompleteTextView::isPopupShowing()
	{
		return __thiz.callMethod<jboolean>(
			"isPopupShowing",
			"()Z"
		);
	}
	void AutoCompleteTextView::clearListSelection()
	{
		__thiz.callMethod<void>(
			"clearListSelection",
			"()V"
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
	jint AutoCompleteTextView::getListSelection()
	{
		return __thiz.callMethod<jint>(
			"getListSelection",
			"()I"
		);
	}
	void AutoCompleteTextView::performCompletion()
	{
		__thiz.callMethod<void>(
			"performCompletion",
			"()V"
		);
	}
	jboolean AutoCompleteTextView::isPerformingCompletion()
	{
		return __thiz.callMethod<jboolean>(
			"isPerformingCompletion",
			"()Z"
		);
	}
	void AutoCompleteTextView::dismissDropDown()
	{
		__thiz.callMethod<void>(
			"dismissDropDown",
			"()V"
		);
	}
	jint AutoCompleteTextView::getInputMethodMode()
	{
		return __thiz.callMethod<jint>(
			"getInputMethodMode",
			"()I"
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
	void AutoCompleteTextView::showDropDown()
	{
		__thiz.callMethod<void>(
			"showDropDown",
			"()V"
		);
	}
	QAndroidJniObject AutoCompleteTextView::getValidator()
	{
		return __thiz.callObjectMethod(
			"getValidator",
			"()Landroid/widget/AutoCompleteTextView$Validator;"
		);
	}
	void AutoCompleteTextView::performValidation()
	{
		__thiz.callMethod<void>(
			"performValidation",
			"()V"
		);
	}
	void AutoCompleteTextView::setOnClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AutoCompleteTextView::onKeyPreIme(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint AutoCompleteTextView::getThreshold()
	{
		return __thiz.callMethod<jint>(
			"getThreshold",
			"()I"
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class AutoCompleteTextView : public __jni_impl::android::widget::AutoCompleteTextView
	{
	public:
		AutoCompleteTextView(QAndroidJniObject obj) { __thiz = obj; }
		AutoCompleteTextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, __jni_impl::android::content::res::Resources_Theme arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		AutoCompleteTextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		AutoCompleteTextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		AutoCompleteTextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AutoCompleteTextView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_AUTOCOMPLETETEXTVIEW

