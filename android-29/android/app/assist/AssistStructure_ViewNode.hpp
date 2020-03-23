#pragma once

#ifndef ANDROID_APP_ASSIST_ASSISTSTRUCTURE_VIEWNODE
#define ANDROID_APP_ASSIST_ASSISTSTRUCTURE_VIEWNODE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view
{
	class ViewStructure_HtmlInfo;
}
namespace __jni_impl::android::os
{
	class LocaleList;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillId;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillValue;
}
namespace __jni_impl::android::graphics
{
	class Matrix;
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
		jint getId();
		jboolean isOpaque();
		QAndroidJniObject getClassName();
		jboolean isEnabled();
		QAndroidJniObject getText();
		QAndroidJniObject getHint();
		jint getInputType();
		jint getWidth();
		jint getHeight();
		QAndroidJniObject getExtras();
		QAndroidJniObject getIdPackage();
		QAndroidJniObject getIdType();
		QAndroidJniObject getIdEntry();
		jboolean isAssistBlocked();
		QAndroidJniObject getWebDomain();
		QAndroidJniObject getWebScheme();
		QAndroidJniObject getHtmlInfo();
		QAndroidJniObject getLocaleList();
		jint getTextBackgroundColor();
		QAndroidJniObject getTextLineCharOffsets();
		QAndroidJniObject getTextLineBaselines();
		QAndroidJniObject getTextIdEntry();
		jint getMinTextEms();
		jint getMaxTextEms();
		jint getMaxTextLength();
		jint getTextColor();
		jint getTextStyle();
		jfloat getTextSize();
		jint getTextSelectionStart();
		jint getTextSelectionEnd();
		jint getChildCount();
		QAndroidJniObject getChildAt(jint arg0);
		QAndroidJniObject getAutofillId();
		jint getAutofillType();
		QAndroidJniObject getAutofillHints();
		QAndroidJniObject getAutofillValue();
		jint getImportantForAutofill();
		QAndroidJniObject getContentDescription();
		jboolean isFocused();
		jint getVisibility();
		jboolean isClickable();
		jboolean isLongClickable();
		jboolean isContextClickable();
		jboolean isFocusable();
		jboolean isAccessibilityFocused();
		jint getScrollX();
		jint getScrollY();
		jfloat getAlpha();
		jint getTop();
		jint getLeft();
		jfloat getElevation();
		jboolean isSelected();
		jboolean isActivated();
		jboolean isCheckable();
		QAndroidJniObject getTransformation();
		jboolean isChecked();
		QAndroidJniObject getAutofillOptions();
	};
} // namespace __jni_impl::android::app::assist

#include "../../os/Bundle.hpp"
#include "../../view/ViewStructure_HtmlInfo.hpp"
#include "../../os/LocaleList.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "../../view/autofill/AutofillValue.hpp"
#include "../../graphics/Matrix.hpp"

namespace __jni_impl::android::app::assist
{
	// Fields
	jint AssistStructure_ViewNode::TEXT_COLOR_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_COLOR_UNDEFINED");
	}
	jint AssistStructure_ViewNode::TEXT_STYLE_BOLD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_STYLE_BOLD");
	}
	jint AssistStructure_ViewNode::TEXT_STYLE_ITALIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_STYLE_ITALIC");
	}
	jint AssistStructure_ViewNode::TEXT_STYLE_STRIKE_THRU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_STYLE_STRIKE_THRU");
	}
	jint AssistStructure_ViewNode::TEXT_STYLE_UNDERLINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.assist.AssistStructure$ViewNode",
			"TEXT_STYLE_UNDERLINE");
	}
	
	// Constructors
	void AssistStructure_ViewNode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.assist.AssistStructure$ViewNode",
			"(V)V");
	}
	
	// Methods
	jint AssistStructure_ViewNode::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I");
	}
	jboolean AssistStructure_ViewNode::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z");
	}
	QAndroidJniObject AssistStructure_ViewNode::getClassName()
	{
		return __thiz.callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;");
	}
	jboolean AssistStructure_ViewNode::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z");
	}
	QAndroidJniObject AssistStructure_ViewNode::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject AssistStructure_ViewNode::getHint()
	{
		return __thiz.callObjectMethod(
			"getHint",
			"()Ljava/lang/String;");
	}
	jint AssistStructure_ViewNode::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I");
	}
	jint AssistStructure_ViewNode::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I");
	}
	jint AssistStructure_ViewNode::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I");
	}
	QAndroidJniObject AssistStructure_ViewNode::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	QAndroidJniObject AssistStructure_ViewNode::getIdPackage()
	{
		return __thiz.callObjectMethod(
			"getIdPackage",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject AssistStructure_ViewNode::getIdType()
	{
		return __thiz.callObjectMethod(
			"getIdType",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject AssistStructure_ViewNode::getIdEntry()
	{
		return __thiz.callObjectMethod(
			"getIdEntry",
			"()Ljava/lang/String;");
	}
	jboolean AssistStructure_ViewNode::isAssistBlocked()
	{
		return __thiz.callMethod<jboolean>(
			"isAssistBlocked",
			"()Z");
	}
	QAndroidJniObject AssistStructure_ViewNode::getWebDomain()
	{
		return __thiz.callObjectMethod(
			"getWebDomain",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject AssistStructure_ViewNode::getWebScheme()
	{
		return __thiz.callObjectMethod(
			"getWebScheme",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject AssistStructure_ViewNode::getHtmlInfo()
	{
		return __thiz.callObjectMethod(
			"getHtmlInfo",
			"()Landroid/view/ViewStructure$HtmlInfo;");
	}
	QAndroidJniObject AssistStructure_ViewNode::getLocaleList()
	{
		return __thiz.callObjectMethod(
			"getLocaleList",
			"()Landroid/os/LocaleList;");
	}
	jint AssistStructure_ViewNode::getTextBackgroundColor()
	{
		return __thiz.callMethod<jint>(
			"getTextBackgroundColor",
			"()I");
	}
	QAndroidJniObject AssistStructure_ViewNode::getTextLineCharOffsets()
	{
		return __thiz.callObjectMethod(
			"getTextLineCharOffsets",
			"()[I");
	}
	QAndroidJniObject AssistStructure_ViewNode::getTextLineBaselines()
	{
		return __thiz.callObjectMethod(
			"getTextLineBaselines",
			"()[I");
	}
	QAndroidJniObject AssistStructure_ViewNode::getTextIdEntry()
	{
		return __thiz.callObjectMethod(
			"getTextIdEntry",
			"()Ljava/lang/String;");
	}
	jint AssistStructure_ViewNode::getMinTextEms()
	{
		return __thiz.callMethod<jint>(
			"getMinTextEms",
			"()I");
	}
	jint AssistStructure_ViewNode::getMaxTextEms()
	{
		return __thiz.callMethod<jint>(
			"getMaxTextEms",
			"()I");
	}
	jint AssistStructure_ViewNode::getMaxTextLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxTextLength",
			"()I");
	}
	jint AssistStructure_ViewNode::getTextColor()
	{
		return __thiz.callMethod<jint>(
			"getTextColor",
			"()I");
	}
	jint AssistStructure_ViewNode::getTextStyle()
	{
		return __thiz.callMethod<jint>(
			"getTextStyle",
			"()I");
	}
	jfloat AssistStructure_ViewNode::getTextSize()
	{
		return __thiz.callMethod<jfloat>(
			"getTextSize",
			"()F");
	}
	jint AssistStructure_ViewNode::getTextSelectionStart()
	{
		return __thiz.callMethod<jint>(
			"getTextSelectionStart",
			"()I");
	}
	jint AssistStructure_ViewNode::getTextSelectionEnd()
	{
		return __thiz.callMethod<jint>(
			"getTextSelectionEnd",
			"()I");
	}
	jint AssistStructure_ViewNode::getChildCount()
	{
		return __thiz.callMethod<jint>(
			"getChildCount",
			"()I");
	}
	QAndroidJniObject AssistStructure_ViewNode::getChildAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getChildAt",
			"(I)Landroid/app/assist/AssistStructure$ViewNode;",
			arg0);
	}
	QAndroidJniObject AssistStructure_ViewNode::getAutofillId()
	{
		return __thiz.callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;");
	}
	jint AssistStructure_ViewNode::getAutofillType()
	{
		return __thiz.callMethod<jint>(
			"getAutofillType",
			"()I");
	}
	QAndroidJniObject AssistStructure_ViewNode::getAutofillHints()
	{
		return __thiz.callObjectMethod(
			"getAutofillHints",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject AssistStructure_ViewNode::getAutofillValue()
	{
		return __thiz.callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;");
	}
	jint AssistStructure_ViewNode::getImportantForAutofill()
	{
		return __thiz.callMethod<jint>(
			"getImportantForAutofill",
			"()I");
	}
	QAndroidJniObject AssistStructure_ViewNode::getContentDescription()
	{
		return __thiz.callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;");
	}
	jboolean AssistStructure_ViewNode::isFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isFocused",
			"()Z");
	}
	jint AssistStructure_ViewNode::getVisibility()
	{
		return __thiz.callMethod<jint>(
			"getVisibility",
			"()I");
	}
	jboolean AssistStructure_ViewNode::isClickable()
	{
		return __thiz.callMethod<jboolean>(
			"isClickable",
			"()Z");
	}
	jboolean AssistStructure_ViewNode::isLongClickable()
	{
		return __thiz.callMethod<jboolean>(
			"isLongClickable",
			"()Z");
	}
	jboolean AssistStructure_ViewNode::isContextClickable()
	{
		return __thiz.callMethod<jboolean>(
			"isContextClickable",
			"()Z");
	}
	jboolean AssistStructure_ViewNode::isFocusable()
	{
		return __thiz.callMethod<jboolean>(
			"isFocusable",
			"()Z");
	}
	jboolean AssistStructure_ViewNode::isAccessibilityFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z");
	}
	jint AssistStructure_ViewNode::getScrollX()
	{
		return __thiz.callMethod<jint>(
			"getScrollX",
			"()I");
	}
	jint AssistStructure_ViewNode::getScrollY()
	{
		return __thiz.callMethod<jint>(
			"getScrollY",
			"()I");
	}
	jfloat AssistStructure_ViewNode::getAlpha()
	{
		return __thiz.callMethod<jfloat>(
			"getAlpha",
			"()F");
	}
	jint AssistStructure_ViewNode::getTop()
	{
		return __thiz.callMethod<jint>(
			"getTop",
			"()I");
	}
	jint AssistStructure_ViewNode::getLeft()
	{
		return __thiz.callMethod<jint>(
			"getLeft",
			"()I");
	}
	jfloat AssistStructure_ViewNode::getElevation()
	{
		return __thiz.callMethod<jfloat>(
			"getElevation",
			"()F");
	}
	jboolean AssistStructure_ViewNode::isSelected()
	{
		return __thiz.callMethod<jboolean>(
			"isSelected",
			"()Z");
	}
	jboolean AssistStructure_ViewNode::isActivated()
	{
		return __thiz.callMethod<jboolean>(
			"isActivated",
			"()Z");
	}
	jboolean AssistStructure_ViewNode::isCheckable()
	{
		return __thiz.callMethod<jboolean>(
			"isCheckable",
			"()Z");
	}
	QAndroidJniObject AssistStructure_ViewNode::getTransformation()
	{
		return __thiz.callObjectMethod(
			"getTransformation",
			"()Landroid/graphics/Matrix;");
	}
	jboolean AssistStructure_ViewNode::isChecked()
	{
		return __thiz.callMethod<jboolean>(
			"isChecked",
			"()Z");
	}
	QAndroidJniObject AssistStructure_ViewNode::getAutofillOptions()
	{
		return __thiz.callObjectMethod(
			"getAutofillOptions",
			"()[Ljava/lang/CharSequence;");
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
