#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "AdapterView.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::util
{
	class SparseArray;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillValue;
}

namespace __jni_impl::android::widget
{
	class AbsSpinner : public __jni_impl::android::widget::AdapterView
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void autofill(__jni_impl::android::view::autofill::AutofillValue arg0);
		jstring getAccessibilityClassName();
		QAndroidJniObject getAdapter();
		jint getAutofillType();
		QAndroidJniObject getAutofillValue();
		jint getCount();
		QAndroidJniObject getSelectedView();
		void onRestoreInstanceState(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject onSaveInstanceState();
		jint pointToPosition(jint arg0, jint arg1);
		void requestLayout();
		void setAdapter(__jni_impl::__JniBaseClass arg0);
		void setSelection(jint arg0);
		void setSelection(jint arg0, jboolean arg1);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../util/SparseArray.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/autofill/AutofillValue.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void AbsSpinner::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsSpinner",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsSpinner::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsSpinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AbsSpinner::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsSpinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void AbsSpinner::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsSpinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void AbsSpinner::autofill(__jni_impl::android::view::autofill::AutofillValue arg0)
	{
		__thiz.callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.__jniObject().object()
		);
	}
	jstring AbsSpinner::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject AbsSpinner::getAdapter()
	{
		return __thiz.callObjectMethod(
			"getAdapter",
			"()Landroid/widget/SpinnerAdapter;"
		);
	}
	jint AbsSpinner::getAutofillType()
	{
		return __thiz.callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	QAndroidJniObject AbsSpinner::getAutofillValue()
	{
		return __thiz.callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	jint AbsSpinner::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	QAndroidJniObject AbsSpinner::getSelectedView()
	{
		return __thiz.callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;"
		);
	}
	void AbsSpinner::onRestoreInstanceState(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AbsSpinner::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	jint AbsSpinner::pointToPosition(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"pointToPosition",
			"(II)I",
			arg0,
			arg1
		);
	}
	void AbsSpinner::requestLayout()
	{
		__thiz.callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	void AbsSpinner::setAdapter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsSpinner::setSelection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	void AbsSpinner::setSelection(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(IZ)V",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class AbsSpinner : public __jni_impl::android::widget::AbsSpinner
	{
	public:
		AbsSpinner(QAndroidJniObject obj) { __thiz = obj; }
		AbsSpinner(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		AbsSpinner(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AbsSpinner(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		AbsSpinner(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

