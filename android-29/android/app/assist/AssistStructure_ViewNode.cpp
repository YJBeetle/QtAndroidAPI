#include "../../graphics/Matrix.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "../../view/ViewStructure_HtmlInfo.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "../../view/autofill/AutofillValue.hpp"
#include "./AssistStructure_ViewNode.hpp"

namespace android::app::assist
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
	
	// QAndroidJniObject forward
	AssistStructure_ViewNode::AssistStructure_ViewNode(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jfloat AssistStructure_ViewNode::getAlpha()
	{
		return callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	jarray AssistStructure_ViewNode::getAutofillHints()
	{
		return callObjectMethod(
			"getAutofillHints",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject AssistStructure_ViewNode::getAutofillId()
	{
		return callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	jarray AssistStructure_ViewNode::getAutofillOptions()
	{
		return callObjectMethod(
			"getAutofillOptions",
			"()[Ljava/lang/CharSequence;"
		).object<jarray>();
	}
	jint AssistStructure_ViewNode::getAutofillType()
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	QAndroidJniObject AssistStructure_ViewNode::getAutofillValue()
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	QAndroidJniObject AssistStructure_ViewNode::getChildAt(jint arg0)
	{
		return callObjectMethod(
			"getChildAt",
			"(I)Landroid/app/assist/AssistStructure$ViewNode;",
			arg0
		);
	}
	jint AssistStructure_ViewNode::getChildCount()
	{
		return callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	jstring AssistStructure_ViewNode::getClassName()
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AssistStructure_ViewNode::getContentDescription()
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jfloat AssistStructure_ViewNode::getElevation()
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	QAndroidJniObject AssistStructure_ViewNode::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint AssistStructure_ViewNode::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jstring AssistStructure_ViewNode::getHint()
	{
		return callObjectMethod(
			"getHint",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AssistStructure_ViewNode::getHtmlInfo()
	{
		return callObjectMethod(
			"getHtmlInfo",
			"()Landroid/view/ViewStructure$HtmlInfo;"
		);
	}
	jint AssistStructure_ViewNode::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jstring AssistStructure_ViewNode::getIdEntry()
	{
		return callObjectMethod(
			"getIdEntry",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AssistStructure_ViewNode::getIdPackage()
	{
		return callObjectMethod(
			"getIdPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AssistStructure_ViewNode::getIdType()
	{
		return callObjectMethod(
			"getIdType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AssistStructure_ViewNode::getImportantForAutofill()
	{
		return callMethod<jint>(
			"getImportantForAutofill",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getInputType()
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getLeft()
	{
		return callMethod<jint>(
			"getLeft",
			"()I"
		);
	}
	QAndroidJniObject AssistStructure_ViewNode::getLocaleList()
	{
		return callObjectMethod(
			"getLocaleList",
			"()Landroid/os/LocaleList;"
		);
	}
	jint AssistStructure_ViewNode::getMaxTextEms()
	{
		return callMethod<jint>(
			"getMaxTextEms",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getMaxTextLength()
	{
		return callMethod<jint>(
			"getMaxTextLength",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getMinTextEms()
	{
		return callMethod<jint>(
			"getMinTextEms",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getScrollX()
	{
		return callMethod<jint>(
			"getScrollX",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getScrollY()
	{
		return callMethod<jint>(
			"getScrollY",
			"()I"
		);
	}
	jstring AssistStructure_ViewNode::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AssistStructure_ViewNode::getTextBackgroundColor()
	{
		return callMethod<jint>(
			"getTextBackgroundColor",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getTextColor()
	{
		return callMethod<jint>(
			"getTextColor",
			"()I"
		);
	}
	jstring AssistStructure_ViewNode::getTextIdEntry()
	{
		return callObjectMethod(
			"getTextIdEntry",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jintArray AssistStructure_ViewNode::getTextLineBaselines()
	{
		return callObjectMethod(
			"getTextLineBaselines",
			"()[I"
		).object<jintArray>();
	}
	jintArray AssistStructure_ViewNode::getTextLineCharOffsets()
	{
		return callObjectMethod(
			"getTextLineCharOffsets",
			"()[I"
		).object<jintArray>();
	}
	jint AssistStructure_ViewNode::getTextSelectionEnd()
	{
		return callMethod<jint>(
			"getTextSelectionEnd",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getTextSelectionStart()
	{
		return callMethod<jint>(
			"getTextSelectionStart",
			"()I"
		);
	}
	jfloat AssistStructure_ViewNode::getTextSize()
	{
		return callMethod<jfloat>(
			"getTextSize",
			"()F"
		);
	}
	jint AssistStructure_ViewNode::getTextStyle()
	{
		return callMethod<jint>(
			"getTextStyle",
			"()I"
		);
	}
	jint AssistStructure_ViewNode::getTop()
	{
		return callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	QAndroidJniObject AssistStructure_ViewNode::getTransformation()
	{
		return callObjectMethod(
			"getTransformation",
			"()Landroid/graphics/Matrix;"
		);
	}
	jint AssistStructure_ViewNode::getVisibility()
	{
		return callMethod<jint>(
			"getVisibility",
			"()I"
		);
	}
	jstring AssistStructure_ViewNode::getWebDomain()
	{
		return callObjectMethod(
			"getWebDomain",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AssistStructure_ViewNode::getWebScheme()
	{
		return callObjectMethod(
			"getWebScheme",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AssistStructure_ViewNode::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean AssistStructure_ViewNode::isAccessibilityFocused()
	{
		return callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isActivated()
	{
		return callMethod<jboolean>(
			"isActivated",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isAssistBlocked()
	{
		return callMethod<jboolean>(
			"isAssistBlocked",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isCheckable()
	{
		return callMethod<jboolean>(
			"isCheckable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isChecked()
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isClickable()
	{
		return callMethod<jboolean>(
			"isClickable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isContextClickable()
	{
		return callMethod<jboolean>(
			"isContextClickable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isFocusable()
	{
		return callMethod<jboolean>(
			"isFocusable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isFocused()
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isLongClickable()
	{
		return callMethod<jboolean>(
			"isLongClickable",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isOpaque()
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	jboolean AssistStructure_ViewNode::isSelected()
	{
		return callMethod<jboolean>(
			"isSelected",
			"()Z"
		);
	}
} // namespace android::app::assist
