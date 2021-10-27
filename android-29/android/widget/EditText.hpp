#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "./TextView.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::text
{
	class TextUtils_TruncateAt;
}
namespace __jni_impl::android::widget
{
	class TextView_BufferType;
}

namespace __jni_impl::android::widget
{
	class EditText : public __jni_impl::android::widget::TextView
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void extendSelection(jint arg0);
		jstring getAccessibilityClassName();
		jboolean getFreezesText();
		QAndroidJniObject getText();
		void selectAll();
		void setEllipsize(__jni_impl::android::text::TextUtils_TruncateAt arg0);
		void setSelection(jint arg0);
		void setSelection(jint arg0, jint arg1);
		void setText(jstring arg0, __jni_impl::android::widget::TextView_BufferType arg1);
		void setText(const QString &arg0, __jni_impl::android::widget::TextView_BufferType arg1);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../text/TextUtils_TruncateAt.hpp"
#include "./TextView_BufferType.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void EditText::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.EditText",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void EditText::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.EditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void EditText::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.EditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void EditText::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.EditText",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void EditText::extendSelection(jint arg0)
	{
		__thiz.callMethod<void>(
			"extendSelection",
			"(I)V",
			arg0
		);
	}
	jstring EditText::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean EditText::getFreezesText()
	{
		return __thiz.callMethod<jboolean>(
			"getFreezesText",
			"()Z"
		);
	}
	QAndroidJniObject EditText::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Landroid/text/Editable;"
		);
	}
	void EditText::selectAll()
	{
		__thiz.callMethod<void>(
			"selectAll",
			"()V"
		);
	}
	void EditText::setEllipsize(__jni_impl::android::text::TextUtils_TruncateAt arg0)
	{
		__thiz.callMethod<void>(
			"setEllipsize",
			"(Landroid/text/TextUtils$TruncateAt;)V",
			arg0.__jniObject().object()
		);
	}
	void EditText::setSelection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	void EditText::setSelection(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(II)V",
			arg0,
			arg1
		);
	}
	void EditText::setText(jstring arg0, __jni_impl::android::widget::TextView_BufferType arg1)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void EditText::setText(const QString &arg0, __jni_impl::android::widget::TextView_BufferType arg1)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class EditText : public __jni_impl::android::widget::EditText
	{
	public:
		EditText(QAndroidJniObject obj) { __thiz = obj; }
		EditText(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		EditText(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		EditText(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		EditText(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

