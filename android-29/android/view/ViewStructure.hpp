#pragma once

#ifndef ANDROID_VIEW_VIEWSTRUCTURE
#define ANDROID_VIEW_VIEWSTRUCTURE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::graphics
{
	class Matrix;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillValue;
}
namespace __jni_impl::android::os
{
	class LocaleList;
}
namespace __jni_impl::android::view
{
	class ViewStructure_HtmlInfo_Builder;
}
namespace __jni_impl::android::view
{
	class ViewStructure_HtmlInfo;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillId;
}

namespace __jni_impl::android::view
{
	class ViewStructure : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void setOpaque(jboolean arg0);
		void setText(jstring arg0, jint arg1, jint arg2);
		void setText(jstring arg0);
		QAndroidJniObject getText();
		void setAlpha(jfloat arg0);
		void setHint(jstring arg0);
		QAndroidJniObject getHint();
		void setInputType(jint arg0);
		QAndroidJniObject getExtras();
		void setClassName(jstring arg0);
		void setTransformation(__jni_impl::android::graphics::Matrix arg0);
		void setDimens(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void setFocused(jboolean arg0);
		void setAccessibilityFocused(jboolean arg0);
		void setTextStyle(jfloat arg0, jint arg1, jint arg2, jint arg3);
		void setTextLines(jintArray arg0, jintArray arg1);
		void setTextIdEntry(jstring arg0);
		jint getTextSelectionStart();
		jint getTextSelectionEnd();
		jboolean hasExtras();
		void setChildCount(jint arg0);
		jint addChildCount(jint arg0);
		QAndroidJniObject newChild(jint arg0);
		QAndroidJniObject asyncNewChild(jint arg0);
		void setAutofillType(jint arg0);
		void setAutofillValue(__jni_impl::android::view::autofill::AutofillValue arg0);
		void setAutofillOptions(jarray arg0);
		void setDataIsSensitive(jboolean arg0);
		void setMinTextEms(jint arg0);
		void setMaxTextEms(jint arg0);
		void setMaxTextLength(jint arg0);
		void asyncCommit();
		void setWebDomain(jstring arg0);
		void setLocaleList(__jni_impl::android::os::LocaleList arg0);
		QAndroidJniObject newHtmlInfoBuilder(jstring arg0);
		void setHtmlInfo(__jni_impl::android::view::ViewStructure_HtmlInfo arg0);
		jint getChildCount();
		QAndroidJniObject getAutofillId();
		void setAutofillId(__jni_impl::android::view::autofill::AutofillId arg0, jint arg1);
		void setAutofillId(__jni_impl::android::view::autofill::AutofillId arg0);
		void setImportantForAutofill(jint arg0);
		void setContentDescription(jstring arg0);
		void setVisibility(jint arg0);
		void setEnabled(jboolean arg0);
		void setFocusable(jboolean arg0);
		void setAutofillHints(jarray arg0);
		void setClickable(jboolean arg0);
		void setLongClickable(jboolean arg0);
		void setContextClickable(jboolean arg0);
		void setElevation(jfloat arg0);
		void setSelected(jboolean arg0);
		void setActivated(jboolean arg0);
		void setId(jint arg0, jstring arg1, jstring arg2, jstring arg3);
		void setCheckable(jboolean arg0);
		void setChecked(jboolean arg0);
	};
} // namespace __jni_impl::android::view

#include "../os/Bundle.hpp"
#include "../graphics/Matrix.hpp"
#include "autofill/AutofillValue.hpp"
#include "../os/LocaleList.hpp"
#include "ViewStructure_HtmlInfo_Builder.hpp"
#include "ViewStructure_HtmlInfo.hpp"
#include "autofill/AutofillId.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void ViewStructure::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewStructure",
			"()V");
	}
	
	// Methods
	void ViewStructure::setOpaque(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOpaque",
			"(Z)V",
			arg0);
	}
	void ViewStructure::setText(jstring arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;II)V",
			arg0,
			arg1,
			arg2);
	}
	void ViewStructure::setText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	QAndroidJniObject ViewStructure::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;");
	}
	void ViewStructure::setAlpha(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0);
	}
	void ViewStructure::setHint(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setHint",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	QAndroidJniObject ViewStructure::getHint()
	{
		return __thiz.callObjectMethod(
			"getHint",
			"()Ljava/lang/CharSequence;");
	}
	void ViewStructure::setInputType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInputType",
			"(I)V",
			arg0);
	}
	QAndroidJniObject ViewStructure::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	void ViewStructure::setClassName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setClassName",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void ViewStructure::setTransformation(__jni_impl::android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"setTransformation",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object());
	}
	void ViewStructure::setDimens(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"setDimens",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void ViewStructure::setFocused(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFocused",
			"(Z)V",
			arg0);
	}
	void ViewStructure::setAccessibilityFocused(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAccessibilityFocused",
			"(Z)V",
			arg0);
	}
	void ViewStructure::setTextStyle(jfloat arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setTextStyle",
			"(FIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void ViewStructure::setTextLines(jintArray arg0, jintArray arg1)
	{
		__thiz.callMethod<void>(
			"setTextLines",
			"([I[I)V",
			arg0,
			arg1);
	}
	void ViewStructure::setTextIdEntry(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTextIdEntry",
			"(Ljava/lang/String;)V",
			arg0);
	}
	jint ViewStructure::getTextSelectionStart()
	{
		return __thiz.callMethod<jint>(
			"getTextSelectionStart",
			"()I");
	}
	jint ViewStructure::getTextSelectionEnd()
	{
		return __thiz.callMethod<jint>(
			"getTextSelectionEnd",
			"()I");
	}
	jboolean ViewStructure::hasExtras()
	{
		return __thiz.callMethod<jboolean>(
			"hasExtras",
			"()Z");
	}
	void ViewStructure::setChildCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setChildCount",
			"(I)V",
			arg0);
	}
	jint ViewStructure::addChildCount(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"addChildCount",
			"(I)I",
			arg0);
	}
	QAndroidJniObject ViewStructure::newChild(jint arg0)
	{
		return __thiz.callObjectMethod(
			"newChild",
			"(I)Landroid/view/ViewStructure;",
			arg0);
	}
	QAndroidJniObject ViewStructure::asyncNewChild(jint arg0)
	{
		return __thiz.callObjectMethod(
			"asyncNewChild",
			"(I)Landroid/view/ViewStructure;",
			arg0);
	}
	void ViewStructure::setAutofillType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAutofillType",
			"(I)V",
			arg0);
	}
	void ViewStructure::setAutofillValue(__jni_impl::android::view::autofill::AutofillValue arg0)
	{
		__thiz.callMethod<void>(
			"setAutofillValue",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.__jniObject().object());
	}
	void ViewStructure::setAutofillOptions(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setAutofillOptions",
			"([Ljava/lang/CharSequence;)V",
			arg0);
	}
	void ViewStructure::setDataIsSensitive(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDataIsSensitive",
			"(Z)V",
			arg0);
	}
	void ViewStructure::setMinTextEms(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinTextEms",
			"(I)V",
			arg0);
	}
	void ViewStructure::setMaxTextEms(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxTextEms",
			"(I)V",
			arg0);
	}
	void ViewStructure::setMaxTextLength(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxTextLength",
			"(I)V",
			arg0);
	}
	void ViewStructure::asyncCommit()
	{
		__thiz.callMethod<void>(
			"asyncCommit",
			"()V");
	}
	void ViewStructure::setWebDomain(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setWebDomain",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void ViewStructure::setLocaleList(__jni_impl::android::os::LocaleList arg0)
	{
		__thiz.callMethod<void>(
			"setLocaleList",
			"(Landroid/os/LocaleList;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ViewStructure::newHtmlInfoBuilder(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"newHtmlInfoBuilder",
			"(Ljava/lang/String;)Landroid/view/ViewStructure$HtmlInfo$Builder;",
			arg0);
	}
	void ViewStructure::setHtmlInfo(__jni_impl::android::view::ViewStructure_HtmlInfo arg0)
	{
		__thiz.callMethod<void>(
			"setHtmlInfo",
			"(Landroid/view/ViewStructure$HtmlInfo;)V",
			arg0.__jniObject().object());
	}
	jint ViewStructure::getChildCount()
	{
		return __thiz.callMethod<jint>(
			"getChildCount",
			"()I");
	}
	QAndroidJniObject ViewStructure::getAutofillId()
	{
		return __thiz.callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;");
	}
	void ViewStructure::setAutofillId(__jni_impl::android::view::autofill::AutofillId arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setAutofillId",
			"(Landroid/view/autofill/AutofillId;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void ViewStructure::setAutofillId(__jni_impl::android::view::autofill::AutofillId arg0)
	{
		__thiz.callMethod<void>(
			"setAutofillId",
			"(Landroid/view/autofill/AutofillId;)V",
			arg0.__jniObject().object());
	}
	void ViewStructure::setImportantForAutofill(jint arg0)
	{
		__thiz.callMethod<void>(
			"setImportantForAutofill",
			"(I)V",
			arg0);
	}
	void ViewStructure::setContentDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	void ViewStructure::setVisibility(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0);
	}
	void ViewStructure::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0);
	}
	void ViewStructure::setFocusable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0);
	}
	void ViewStructure::setAutofillHints(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setAutofillHints",
			"([Ljava/lang/String;)V",
			arg0);
	}
	void ViewStructure::setClickable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setClickable",
			"(Z)V",
			arg0);
	}
	void ViewStructure::setLongClickable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLongClickable",
			"(Z)V",
			arg0);
	}
	void ViewStructure::setContextClickable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setContextClickable",
			"(Z)V",
			arg0);
	}
	void ViewStructure::setElevation(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setElevation",
			"(F)V",
			arg0);
	}
	void ViewStructure::setSelected(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0);
	}
	void ViewStructure::setActivated(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setActivated",
			"(Z)V",
			arg0);
	}
	void ViewStructure::setId(jint arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		__thiz.callMethod<void>(
			"setId",
			"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void ViewStructure::setCheckable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCheckable",
			"(Z)V",
			arg0);
	}
	void ViewStructure::setChecked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ViewStructure : public __jni_impl::android::view::ViewStructure
	{
	public:
		ViewStructure(QAndroidJniObject obj) { __thiz = obj; }
		ViewStructure()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_VIEWSTRUCTURE

