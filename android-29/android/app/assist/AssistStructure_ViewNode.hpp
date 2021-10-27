#pragma once

#ifndef ANDROID_APP_ASSIST_ASSISTSTRUCTURE_VIEWNODE
#define ANDROID_APP_ASSIST_ASSISTSTRUCTURE_VIEWNODE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Matrix;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class LocaleList;
}
namespace __jni_impl::android::view
{
	class ViewStructure_HtmlInfo;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillId;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillValue;
}

namespace __jni_impl::android::app::assist
{
	class AssistStructure_ViewNode : public __JniBaseClass
	{
	public:
		// Fields
		static jint TEXT_COLOR_UNDEFINED();
		static jint TEXT_STYLE_BOLD();
		static jint TEXT_STYLE_ITALIC();
		static jint TEXT_STYLE_STRIKE_THRU();
		static jint TEXT_STYLE_UNDERLINE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jfloat getAlpha();
		jarray getAutofillHints();
		QAndroidJniObject getAutofillId();
		jarray getAutofillOptions();
		jint getAutofillType();
		QAndroidJniObject getAutofillValue();
		QAndroidJniObject getChildAt(jint arg0);
		jint getChildCount();
		jstring getClassName();
		jstring getContentDescription();
		jfloat getElevation();
		QAndroidJniObject getExtras();
		jint getHeight();
		jstring getHint();
		QAndroidJniObject getHtmlInfo();
		jint getId();
		jstring getIdEntry();
		jstring getIdPackage();
		jstring getIdType();
		jint getImportantForAutofill();
		jint getInputType();
		jint getLeft();
		QAndroidJniObject getLocaleList();
		jint getMaxTextEms();
		jint getMaxTextLength();
		jint getMinTextEms();
		jint getScrollX();
		jint getScrollY();
		jstring getText();
		jint getTextBackgroundColor();
		jint getTextColor();
		jstring getTextIdEntry();
		jintArray getTextLineBaselines();
		jintArray getTextLineCharOffsets();
		jint getTextSelectionEnd();
		jint getTextSelectionStart();
		jfloat getTextSize();
		jint getTextStyle();
		jint getTop();
		QAndroidJniObject getTransformation();
		jint getVisibility();
		jstring getWebDomain();
		jstring getWebScheme();
		jint getWidth();
		jboolean isAccessibilityFocused();
		jboolean isActivated();
		jboolean isAssistBlocked();
		jboolean isCheckable();
		jboolean isChecked();
		jboolean isClickable();
		jboolean isContextClickable();
		jboolean isEnabled();
		jboolean isFocusable();
		jboolean isFocused();
		jboolean isLongClickable();
		jboolean isOpaque();
		jboolean isSelected();
	};
} // namespace __jni_impl::android::app::assist

#include "../../graphics/Matrix.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "../../view/ViewStructure_HtmlInfo.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "../../view/autofill/AutofillValue.hpp"

namespace __jni_impl::android::app::assist
{
	// Fields
	jint AssistStructure_ViewNode::TEXT_COLOR_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_COLOR_UNDEFINED"
		);
	}
	jint AssistStructure_ViewNode::TEXT_STYLE_BOLD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_STYLE_BOLD"
		);
	}
	jint AssistStructure_ViewNode::TEXT_STYLE_ITALIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_STYLE_ITALIC"
		);
	}
	jint AssistStructure_ViewNode::TEXT_STYLE_STRIKE_THRU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_STYLE_STRIKE_THRU"
		);
	}
	jint AssistStructure_ViewNode::TEXT_STYLE_UNDERLINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_STYLE_UNDERLINE"
		);
	}
	
	// Constructors
	void AssistStructure_ViewNode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.assist.AssistStructure$ViewNode",
			"(V)V");
	}
	
	// Methods
	jfloat AssistStructure_ViewNode::getAlpha()
	{
		return __thiz.callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	jarray AssistStructure_ViewNode::getAutofillHints()
	{
		return __thiz.callObjectMethod(
			"getAutofillHints",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject AssistStructure_ViewNode::getAutofillId()
	{
		return __thiz.callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	jarray AssistStructure_ViewNode::getAutofillOptions()
	{
		return __thiz.callObjectMethod(
			"getAutofillOptions",
			"()[Ljava/lang/CharSequence;"
		).object<jarray>();
	}
	jint AssistStructure_ViewNode::getAutofillType()
	{
		return __thiz.callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	QAndroidJniObject AssistStructure_ViewNode::getAutofillValue()
	{
		return __thiz.callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	QAndroidJniObject AssistStructure_ViewNode::getChildAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getChildAt",
			"(I)Landroid/app/assist/AssistStructure$ViewNode;",
			arg0
		);
	}
	jint AssistStructure_ViewNode::getChildCount()
	{
		return __thiz.callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	jstring AssistStructure_ViewNode::getClassName()
	{
		return __thiz.callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AssistStructure_ViewNode::getContentDescription()
	{
		return __thiz.callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jfloat AssistStructure_ViewNode::getElevation()
	{
		return __thiz.callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	QAndroidJniObject AssistStructure_ViewNode::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint AssistStructure_ViewNode::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jstring AssistStructure_ViewNode::getHint()
	{
		return __thiz.callObjectMethod(
			"getHint",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AssistStructure_ViewNode::getHtmlInfo()
	{
		return __thiz.callObjectMethod(
			"getHtmlInfo",
			"()Landroid/view/ViewStructure$HtmlInfo;"
		);
	}
	jint AssistStructure_ViewNode::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jstring AssistStructure_ViewNode::getIdEntry()
	{
		return __thiz.callObjectMethod(
			"getIdEntry",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AssistStructure_ViewNode::getIdPackage()
	{
		return __thiz.callObjectMethod(
			"getIdPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AssistStructure_ViewNode::getIdType()
	{
		return __thiz.callObjectMethod(
			"getIdType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AssistStructure_ViewNode::getImportantForAutofill()
	{
		return __thiz.callMethod<jint>(
			"getImportantForAutofill",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getLeft()
	{
		return __thiz.callMethod<jint>(
			"getLeft",
			"()I"
		);
	}
	QAndroidJniObject AssistStructure_ViewNode::getLocaleList()
	{
		return __thiz.callObjectMethod(
			"getLocaleList",
			"()Landroid/os/LocaleList;"
		);
	}
	jint AssistStructure_ViewNode::getMaxTextEms()
	{
		return __thiz.callMethod<jint>(
			"getMaxTextEms",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getMaxTextLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxTextLength",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getMinTextEms()
	{
		return __thiz.callMethod<jint>(
			"getMinTextEms",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getScrollX()
	{
		return __thiz.callMethod<jint>(
			"getScrollX",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getScrollY()
	{
		return __thiz.callMethod<jint>(
			"getScrollY",
			"()I"
		);
	}
	jstring AssistStructure_ViewNode::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AssistStructure_ViewNode::getTextBackgroundColor()
	{
		return __thiz.callMethod<jint>(
			"getTextBackgroundColor",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getTextColor()
	{
		return __thiz.callMethod<jint>(
			"getTextColor",
			"()I"
		);
	}
	jstring AssistStructure_ViewNode::getTextIdEntry()
	{
		return __thiz.callObjectMethod(
			"getTextIdEntry",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jintArray AssistStructure_ViewNode::getTextLineBaselines()
	{
		return __thiz.callObjectMethod(
			"getTextLineBaselines",
			"()[I"
		).object<jintArray>();
	}
	jintArray AssistStructure_ViewNode::getTextLineCharOffsets()
	{
		return __thiz.callObjectMethod(
			"getTextLineCharOffsets",
			"()[I"
		).object<jintArray>();
	}
	jint AssistStructure_ViewNode::getTextSelectionEnd()
	{
		return __thiz.callMethod<jint>(
			"getTextSelectionEnd",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getTextSelectionStart()
	{
		return __thiz.callMethod<jint>(
			"getTextSelectionStart",
			"()I"
		);
	}
	jfloat AssistStructure_ViewNode::getTextSize()
	{
		return __thiz.callMethod<jfloat>(
			"getTextSize",
			"()F"
		);
	}
	jint AssistStructure_ViewNode::getTextStyle()
	{
		return __thiz.callMethod<jint>(
			"getTextStyle",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getTop()
	{
		return __thiz.callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	QAndroidJniObject AssistStructure_ViewNode::getTransformation()
	{
		return __thiz.callObjectMethod(
			"getTransformation",
			"()Landroid/graphics/Matrix;"
		);
	}
	jint AssistStructure_ViewNode::getVisibility()
	{
		return __thiz.callMethod<jint>(
			"getVisibility",
			"()I"
		);
	}
	jstring AssistStructure_ViewNode::getWebDomain()
	{
		return __thiz.callObjectMethod(
			"getWebDomain",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AssistStructure_ViewNode::getWebScheme()
	{
		return __thiz.callObjectMethod(
			"getWebScheme",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AssistStructure_ViewNode::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean AssistStructure_ViewNode::isAccessibilityFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isActivated()
	{
		return __thiz.callMethod<jboolean>(
			"isActivated",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isAssistBlocked()
	{
		return __thiz.callMethod<jboolean>(
			"isAssistBlocked",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isCheckable()
	{
		return __thiz.callMethod<jboolean>(
			"isCheckable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isChecked()
	{
		return __thiz.callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isClickable()
	{
		return __thiz.callMethod<jboolean>(
			"isClickable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isContextClickable()
	{
		return __thiz.callMethod<jboolean>(
			"isContextClickable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isFocusable()
	{
		return __thiz.callMethod<jboolean>(
			"isFocusable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isLongClickable()
	{
		return __thiz.callMethod<jboolean>(
			"isLongClickable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isSelected()
	{
		return __thiz.callMethod<jboolean>(
			"isSelected",
			"()Z"
		);
	}
} // namespace __jni_impl::android::app::assist

namespace android::app::assist
{
	class AssistStructure_ViewNode : public __jni_impl::android::app::assist::AssistStructure_ViewNode
	{
	public:
		AssistStructure_ViewNode(QAndroidJniObject obj) { __thiz = obj; }
		AssistStructure_ViewNode()
		{
			__constructor();
		}
	};
} // namespace android::app::assist

#endif // ANDROID_APP_ASSIST_ASSISTSTRUCTURE_VIEWNODE

