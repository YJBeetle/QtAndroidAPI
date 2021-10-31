#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../content/res/Configuration.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/Typeface.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Bundle.hpp"
#include "../os/LocaleList.hpp"
#include "../text/Editable_Factory.hpp"
#include "../text/Layout.hpp"
#include "../text/PrecomputedText_Params.hpp"
#include "../text/Spannable_Factory.hpp"
#include "../text/TextPaint.hpp"
#include "../text/TextUtils_TruncateAt.hpp"
#include "../view/DragEvent.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/PointerIcon.hpp"
#include "../view/View.hpp"
#include "../view/accessibility/AccessibilityEvent.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.hpp"
#include "../view/autofill/AutofillValue.hpp"
#include "../view/inputmethod/CompletionInfo.hpp"
#include "../view/inputmethod/CorrectionInfo.hpp"
#include "../view/inputmethod/EditorInfo.hpp"
#include "../view/inputmethod/ExtractedText.hpp"
#include "../view/inputmethod/ExtractedTextRequest.hpp"
#include "./Scroller.hpp"
#include "./TextView_BufferType.hpp"
#include "../../java/util/ArrayList.hpp"
#include "../../java/util/Locale.hpp"
#include "./TextView.hpp"

namespace android::widget
{
	// Fields
	jint TextView::AUTO_SIZE_TEXT_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.widget.TextView",
			"AUTO_SIZE_TEXT_TYPE_NONE"
		);
	}
	jint TextView::AUTO_SIZE_TEXT_TYPE_UNIFORM()
	{
		return getStaticField<jint>(
			"android.widget.TextView",
			"AUTO_SIZE_TEXT_TYPE_UNIFORM"
		);
	}
	
	// QAndroidJniObject forward
	TextView::TextView(QAndroidJniObject obj) : android::view::View(obj) {}
	
	// Constructors
	TextView::TextView(android::content::Context arg0)
		: android::view::View(
			"android.widget.TextView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	TextView::TextView(android::content::Context arg0, __JniBaseClass arg1)
		: android::view::View(
			"android.widget.TextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	TextView::TextView(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::view::View(
			"android.widget.TextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	TextView::TextView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.widget.TextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void TextView::addExtraDataToAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0, jstring arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void TextView::addTextChangedListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"addTextChangedListener",
			"(Landroid/text/TextWatcher;)V",
			arg0.object()
		);
	}
	void TextView::append(jstring arg0)
	{
		callMethod<void>(
			"append",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextView::append(jstring arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"append",
			"(Ljava/lang/CharSequence;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void TextView::autofill(android::view::autofill::AutofillValue arg0)
	{
		callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	void TextView::beginBatchEdit()
	{
		callMethod<void>(
			"beginBatchEdit",
			"()V"
		);
	}
	jboolean TextView::bringPointIntoView(jint arg0)
	{
		return callMethod<jboolean>(
			"bringPointIntoView",
			"(I)Z",
			arg0
		);
	}
	void TextView::cancelLongPress()
	{
		callMethod<void>(
			"cancelLongPress",
			"()V"
		);
	}
	void TextView::clearComposingText()
	{
		callMethod<void>(
			"clearComposingText",
			"()V"
		);
	}
	void TextView::computeScroll()
	{
		callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	void TextView::debug(jint arg0)
	{
		callMethod<void>(
			"debug",
			"(I)V",
			arg0
		);
	}
	jboolean TextView::didTouchFocusSelect()
	{
		return callMethod<jboolean>(
			"didTouchFocusSelect",
			"()Z"
		);
	}
	void TextView::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void TextView::endBatchEdit()
	{
		callMethod<void>(
			"endBatchEdit",
			"()V"
		);
	}
	jboolean TextView::extractText(android::view::inputmethod::ExtractedTextRequest arg0, android::view::inputmethod::ExtractedText arg1)
	{
		return callMethod<jboolean>(
			"extractText",
			"(Landroid/view/inputmethod/ExtractedTextRequest;Landroid/view/inputmethod/ExtractedText;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void TextView::findViewsWithText(java::util::ArrayList arg0, jstring arg1, jint arg2)
	{
		callMethod<void>(
			"findViewsWithText",
			"(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jstring TextView::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint TextView::getAutoLinkMask()
	{
		return callMethod<jint>(
			"getAutoLinkMask",
			"()I"
		);
	}
	jint TextView::getAutoSizeMaxTextSize()
	{
		return callMethod<jint>(
			"getAutoSizeMaxTextSize",
			"()I"
		);
	}
	jint TextView::getAutoSizeMinTextSize()
	{
		return callMethod<jint>(
			"getAutoSizeMinTextSize",
			"()I"
		);
	}
	jint TextView::getAutoSizeStepGranularity()
	{
		return callMethod<jint>(
			"getAutoSizeStepGranularity",
			"()I"
		);
	}
	jintArray TextView::getAutoSizeTextAvailableSizes()
	{
		return callObjectMethod(
			"getAutoSizeTextAvailableSizes",
			"()[I"
		).object<jintArray>();
	}
	jint TextView::getAutoSizeTextType()
	{
		return callMethod<jint>(
			"getAutoSizeTextType",
			"()I"
		);
	}
	jint TextView::getAutofillType()
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	android::view::autofill::AutofillValue TextView::getAutofillValue()
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	jint TextView::getBaseline()
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	jint TextView::getBreakStrategy()
	{
		return callMethod<jint>(
			"getBreakStrategy",
			"()I"
		);
	}
	jint TextView::getCompoundDrawablePadding()
	{
		return callMethod<jint>(
			"getCompoundDrawablePadding",
			"()I"
		);
	}
	android::graphics::BlendMode TextView::getCompoundDrawableTintBlendMode()
	{
		return callObjectMethod(
			"getCompoundDrawableTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList TextView::getCompoundDrawableTintList()
	{
		return callObjectMethod(
			"getCompoundDrawableTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode TextView::getCompoundDrawableTintMode()
	{
		return callObjectMethod(
			"getCompoundDrawableTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	jarray TextView::getCompoundDrawables()
	{
		return callObjectMethod(
			"getCompoundDrawables",
			"()[Landroid/graphics/drawable/Drawable;"
		).object<jarray>();
	}
	jarray TextView::getCompoundDrawablesRelative()
	{
		return callObjectMethod(
			"getCompoundDrawablesRelative",
			"()[Landroid/graphics/drawable/Drawable;"
		).object<jarray>();
	}
	jint TextView::getCompoundPaddingBottom()
	{
		return callMethod<jint>(
			"getCompoundPaddingBottom",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingEnd()
	{
		return callMethod<jint>(
			"getCompoundPaddingEnd",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingLeft()
	{
		return callMethod<jint>(
			"getCompoundPaddingLeft",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingRight()
	{
		return callMethod<jint>(
			"getCompoundPaddingRight",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingStart()
	{
		return callMethod<jint>(
			"getCompoundPaddingStart",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingTop()
	{
		return callMethod<jint>(
			"getCompoundPaddingTop",
			"()I"
		);
	}
	jint TextView::getCurrentHintTextColor()
	{
		return callMethod<jint>(
			"getCurrentHintTextColor",
			"()I"
		);
	}
	jint TextView::getCurrentTextColor()
	{
		return callMethod<jint>(
			"getCurrentTextColor",
			"()I"
		);
	}
	__JniBaseClass TextView::getCustomInsertionActionModeCallback()
	{
		return callObjectMethod(
			"getCustomInsertionActionModeCallback",
			"()Landroid/view/ActionMode$Callback;"
		);
	}
	__JniBaseClass TextView::getCustomSelectionActionModeCallback()
	{
		return callObjectMethod(
			"getCustomSelectionActionModeCallback",
			"()Landroid/view/ActionMode$Callback;"
		);
	}
	__JniBaseClass TextView::getEditableText()
	{
		return callObjectMethod(
			"getEditableText",
			"()Landroid/text/Editable;"
		);
	}
	android::text::TextUtils_TruncateAt TextView::getEllipsize()
	{
		return callObjectMethod(
			"getEllipsize",
			"()Landroid/text/TextUtils$TruncateAt;"
		);
	}
	jstring TextView::getError()
	{
		return callObjectMethod(
			"getError",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint TextView::getExtendedPaddingBottom()
	{
		return callMethod<jint>(
			"getExtendedPaddingBottom",
			"()I"
		);
	}
	jint TextView::getExtendedPaddingTop()
	{
		return callMethod<jint>(
			"getExtendedPaddingTop",
			"()I"
		);
	}
	jarray TextView::getFilters()
	{
		return callObjectMethod(
			"getFilters",
			"()[Landroid/text/InputFilter;"
		).object<jarray>();
	}
	jint TextView::getFirstBaselineToTopHeight()
	{
		return callMethod<jint>(
			"getFirstBaselineToTopHeight",
			"()I"
		);
	}
	void TextView::getFocusedRect(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"getFocusedRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jstring TextView::getFontFeatureSettings()
	{
		return callObjectMethod(
			"getFontFeatureSettings",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextView::getFontVariationSettings()
	{
		return callObjectMethod(
			"getFontVariationSettings",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean TextView::getFreezesText()
	{
		return callMethod<jboolean>(
			"getFreezesText",
			"()Z"
		);
	}
	jint TextView::getGravity()
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	jint TextView::getHighlightColor()
	{
		return callMethod<jint>(
			"getHighlightColor",
			"()I"
		);
	}
	jstring TextView::getHint()
	{
		return callObjectMethod(
			"getHint",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::content::res::ColorStateList TextView::getHintTextColors()
	{
		return callObjectMethod(
			"getHintTextColors",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	jint TextView::getHyphenationFrequency()
	{
		return callMethod<jint>(
			"getHyphenationFrequency",
			"()I"
		);
	}
	jint TextView::getImeActionId()
	{
		return callMethod<jint>(
			"getImeActionId",
			"()I"
		);
	}
	jstring TextView::getImeActionLabel()
	{
		return callObjectMethod(
			"getImeActionLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::os::LocaleList TextView::getImeHintLocales()
	{
		return callObjectMethod(
			"getImeHintLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	jint TextView::getImeOptions()
	{
		return callMethod<jint>(
			"getImeOptions",
			"()I"
		);
	}
	jboolean TextView::getIncludeFontPadding()
	{
		return callMethod<jboolean>(
			"getIncludeFontPadding",
			"()Z"
		);
	}
	android::os::Bundle TextView::getInputExtras(jboolean arg0)
	{
		return callObjectMethod(
			"getInputExtras",
			"(Z)Landroid/os/Bundle;",
			arg0
		);
	}
	jint TextView::getInputType()
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	jint TextView::getJustificationMode()
	{
		return callMethod<jint>(
			"getJustificationMode",
			"()I"
		);
	}
	__JniBaseClass TextView::getKeyListener()
	{
		return callObjectMethod(
			"getKeyListener",
			"()Landroid/text/method/KeyListener;"
		);
	}
	jint TextView::getLastBaselineToBottomHeight()
	{
		return callMethod<jint>(
			"getLastBaselineToBottomHeight",
			"()I"
		);
	}
	android::text::Layout TextView::getLayout()
	{
		return callObjectMethod(
			"getLayout",
			"()Landroid/text/Layout;"
		);
	}
	jfloat TextView::getLetterSpacing()
	{
		return callMethod<jfloat>(
			"getLetterSpacing",
			"()F"
		);
	}
	jint TextView::getLineBounds(jint arg0, android::graphics::Rect arg1)
	{
		return callMethod<jint>(
			"getLineBounds",
			"(ILandroid/graphics/Rect;)I",
			arg0,
			arg1.object()
		);
	}
	jint TextView::getLineCount()
	{
		return callMethod<jint>(
			"getLineCount",
			"()I"
		);
	}
	jint TextView::getLineHeight()
	{
		return callMethod<jint>(
			"getLineHeight",
			"()I"
		);
	}
	jfloat TextView::getLineSpacingExtra()
	{
		return callMethod<jfloat>(
			"getLineSpacingExtra",
			"()F"
		);
	}
	jfloat TextView::getLineSpacingMultiplier()
	{
		return callMethod<jfloat>(
			"getLineSpacingMultiplier",
			"()F"
		);
	}
	android::content::res::ColorStateList TextView::getLinkTextColors()
	{
		return callObjectMethod(
			"getLinkTextColors",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	jboolean TextView::getLinksClickable()
	{
		return callMethod<jboolean>(
			"getLinksClickable",
			"()Z"
		);
	}
	jint TextView::getMarqueeRepeatLimit()
	{
		return callMethod<jint>(
			"getMarqueeRepeatLimit",
			"()I"
		);
	}
	jint TextView::getMaxEms()
	{
		return callMethod<jint>(
			"getMaxEms",
			"()I"
		);
	}
	jint TextView::getMaxHeight()
	{
		return callMethod<jint>(
			"getMaxHeight",
			"()I"
		);
	}
	jint TextView::getMaxLines()
	{
		return callMethod<jint>(
			"getMaxLines",
			"()I"
		);
	}
	jint TextView::getMaxWidth()
	{
		return callMethod<jint>(
			"getMaxWidth",
			"()I"
		);
	}
	jint TextView::getMinEms()
	{
		return callMethod<jint>(
			"getMinEms",
			"()I"
		);
	}
	jint TextView::getMinHeight()
	{
		return callMethod<jint>(
			"getMinHeight",
			"()I"
		);
	}
	jint TextView::getMinLines()
	{
		return callMethod<jint>(
			"getMinLines",
			"()I"
		);
	}
	jint TextView::getMinWidth()
	{
		return callMethod<jint>(
			"getMinWidth",
			"()I"
		);
	}
	__JniBaseClass TextView::getMovementMethod()
	{
		return callObjectMethod(
			"getMovementMethod",
			"()Landroid/text/method/MovementMethod;"
		);
	}
	jint TextView::getOffsetForPosition(jfloat arg0, jfloat arg1)
	{
		return callMethod<jint>(
			"getOffsetForPosition",
			"(FF)I",
			arg0,
			arg1
		);
	}
	android::text::TextPaint TextView::getPaint()
	{
		return callObjectMethod(
			"getPaint",
			"()Landroid/text/TextPaint;"
		);
	}
	jint TextView::getPaintFlags()
	{
		return callMethod<jint>(
			"getPaintFlags",
			"()I"
		);
	}
	jstring TextView::getPrivateImeOptions()
	{
		return callObjectMethod(
			"getPrivateImeOptions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint TextView::getSelectionEnd()
	{
		return callMethod<jint>(
			"getSelectionEnd",
			"()I"
		);
	}
	jint TextView::getSelectionStart()
	{
		return callMethod<jint>(
			"getSelectionStart",
			"()I"
		);
	}
	jint TextView::getShadowColor()
	{
		return callMethod<jint>(
			"getShadowColor",
			"()I"
		);
	}
	jfloat TextView::getShadowDx()
	{
		return callMethod<jfloat>(
			"getShadowDx",
			"()F"
		);
	}
	jfloat TextView::getShadowDy()
	{
		return callMethod<jfloat>(
			"getShadowDy",
			"()F"
		);
	}
	jfloat TextView::getShadowRadius()
	{
		return callMethod<jfloat>(
			"getShadowRadius",
			"()F"
		);
	}
	jboolean TextView::getShowSoftInputOnFocus()
	{
		return callMethod<jboolean>(
			"getShowSoftInputOnFocus",
			"()Z"
		);
	}
	jstring TextView::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	__JniBaseClass TextView::getTextClassifier()
	{
		return callObjectMethod(
			"getTextClassifier",
			"()Landroid/view/textclassifier/TextClassifier;"
		);
	}
	android::content::res::ColorStateList TextView::getTextColors()
	{
		return callObjectMethod(
			"getTextColors",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::drawable::Drawable TextView::getTextCursorDrawable()
	{
		return callObjectMethod(
			"getTextCursorDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	__JniBaseClass TextView::getTextDirectionHeuristic()
	{
		return callObjectMethod(
			"getTextDirectionHeuristic",
			"()Landroid/text/TextDirectionHeuristic;"
		);
	}
	java::util::Locale TextView::getTextLocale()
	{
		return callObjectMethod(
			"getTextLocale",
			"()Ljava/util/Locale;"
		);
	}
	android::os::LocaleList TextView::getTextLocales()
	{
		return callObjectMethod(
			"getTextLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	android::text::PrecomputedText_Params TextView::getTextMetricsParams()
	{
		return callObjectMethod(
			"getTextMetricsParams",
			"()Landroid/text/PrecomputedText$Params;"
		);
	}
	jfloat TextView::getTextScaleX()
	{
		return callMethod<jfloat>(
			"getTextScaleX",
			"()F"
		);
	}
	android::graphics::drawable::Drawable TextView::getTextSelectHandle()
	{
		return callObjectMethod(
			"getTextSelectHandle",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::drawable::Drawable TextView::getTextSelectHandleLeft()
	{
		return callObjectMethod(
			"getTextSelectHandleLeft",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::drawable::Drawable TextView::getTextSelectHandleRight()
	{
		return callObjectMethod(
			"getTextSelectHandleRight",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jfloat TextView::getTextSize()
	{
		return callMethod<jfloat>(
			"getTextSize",
			"()F"
		);
	}
	jint TextView::getTextSizeUnit()
	{
		return callMethod<jint>(
			"getTextSizeUnit",
			"()I"
		);
	}
	jint TextView::getTotalPaddingBottom()
	{
		return callMethod<jint>(
			"getTotalPaddingBottom",
			"()I"
		);
	}
	jint TextView::getTotalPaddingEnd()
	{
		return callMethod<jint>(
			"getTotalPaddingEnd",
			"()I"
		);
	}
	jint TextView::getTotalPaddingLeft()
	{
		return callMethod<jint>(
			"getTotalPaddingLeft",
			"()I"
		);
	}
	jint TextView::getTotalPaddingRight()
	{
		return callMethod<jint>(
			"getTotalPaddingRight",
			"()I"
		);
	}
	jint TextView::getTotalPaddingStart()
	{
		return callMethod<jint>(
			"getTotalPaddingStart",
			"()I"
		);
	}
	jint TextView::getTotalPaddingTop()
	{
		return callMethod<jint>(
			"getTotalPaddingTop",
			"()I"
		);
	}
	__JniBaseClass TextView::getTransformationMethod()
	{
		return callObjectMethod(
			"getTransformationMethod",
			"()Landroid/text/method/TransformationMethod;"
		);
	}
	android::graphics::Typeface TextView::getTypeface()
	{
		return callObjectMethod(
			"getTypeface",
			"()Landroid/graphics/Typeface;"
		);
	}
	jarray TextView::getUrls()
	{
		return callObjectMethod(
			"getUrls",
			"()[Landroid/text/style/URLSpan;"
		).object<jarray>();
	}
	jboolean TextView::hasOverlappingRendering()
	{
		return callMethod<jboolean>(
			"hasOverlappingRendering",
			"()Z"
		);
	}
	jboolean TextView::hasSelection()
	{
		return callMethod<jboolean>(
			"hasSelection",
			"()Z"
		);
	}
	void TextView::invalidateDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	jboolean TextView::isAllCaps()
	{
		return callMethod<jboolean>(
			"isAllCaps",
			"()Z"
		);
	}
	jboolean TextView::isCursorVisible()
	{
		return callMethod<jboolean>(
			"isCursorVisible",
			"()Z"
		);
	}
	jboolean TextView::isElegantTextHeight()
	{
		return callMethod<jboolean>(
			"isElegantTextHeight",
			"()Z"
		);
	}
	jboolean TextView::isFallbackLineSpacing()
	{
		return callMethod<jboolean>(
			"isFallbackLineSpacing",
			"()Z"
		);
	}
	jboolean TextView::isHorizontallyScrollable()
	{
		return callMethod<jboolean>(
			"isHorizontallyScrollable",
			"()Z"
		);
	}
	jboolean TextView::isInputMethodTarget()
	{
		return callMethod<jboolean>(
			"isInputMethodTarget",
			"()Z"
		);
	}
	jboolean TextView::isSingleLine()
	{
		return callMethod<jboolean>(
			"isSingleLine",
			"()Z"
		);
	}
	jboolean TextView::isSuggestionsEnabled()
	{
		return callMethod<jboolean>(
			"isSuggestionsEnabled",
			"()Z"
		);
	}
	jboolean TextView::isTextSelectable()
	{
		return callMethod<jboolean>(
			"isTextSelectable",
			"()Z"
		);
	}
	void TextView::jumpDrawablesToCurrentState()
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	jint TextView::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jboolean TextView::moveCursorToVisibleOffset()
	{
		return callMethod<jboolean>(
			"moveCursorToVisibleOffset",
			"()Z"
		);
	}
	void TextView::onBeginBatchEdit()
	{
		callMethod<void>(
			"onBeginBatchEdit",
			"()V"
		);
	}
	jboolean TextView::onCheckIsTextEditor()
	{
		return callMethod<jboolean>(
			"onCheckIsTextEditor",
			"()Z"
		);
	}
	void TextView::onCommitCompletion(android::view::inputmethod::CompletionInfo arg0)
	{
		callMethod<void>(
			"onCommitCompletion",
			"(Landroid/view/inputmethod/CompletionInfo;)V",
			arg0.object()
		);
	}
	void TextView::onCommitCorrection(android::view::inputmethod::CorrectionInfo arg0)
	{
		callMethod<void>(
			"onCommitCorrection",
			"(Landroid/view/inputmethod/CorrectionInfo;)V",
			arg0.object()
		);
	}
	__JniBaseClass TextView::onCreateInputConnection(android::view::inputmethod::EditorInfo arg0)
	{
		return callObjectMethod(
			"onCreateInputConnection",
			"(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",
			arg0.object()
		);
	}
	jboolean TextView::onDragEvent(android::view::DragEvent arg0)
	{
		return callMethod<jboolean>(
			"onDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.object()
		);
	}
	void TextView::onEditorAction(jint arg0)
	{
		callMethod<void>(
			"onEditorAction",
			"(I)V",
			arg0
		);
	}
	void TextView::onEndBatchEdit()
	{
		callMethod<void>(
			"onEndBatchEdit",
			"()V"
		);
	}
	jboolean TextView::onGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean TextView::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean TextView::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean TextView::onKeyPreIme(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean TextView::onKeyShortcut(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyShortcut",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean TextView::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean TextView::onPreDraw()
	{
		return callMethod<jboolean>(
			"onPreDraw",
			"()Z"
		);
	}
	jboolean TextView::onPrivateIMECommand(jstring arg0, android::os::Bundle arg1)
	{
		return callMethod<jboolean>(
			"onPrivateIMECommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0,
			arg1.object()
		);
	}
	android::view::PointerIcon TextView::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1)
	{
		return callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
	void TextView::onRestoreInstanceState(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	void TextView::onRtlPropertiesChanged(jint arg0)
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	__JniBaseClass TextView::onSaveInstanceState()
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	void TextView::onScreenStateChanged(jint arg0)
	{
		callMethod<void>(
			"onScreenStateChanged",
			"(I)V",
			arg0
		);
	}
	jboolean TextView::onTextContextMenuItem(jint arg0)
	{
		return callMethod<jboolean>(
			"onTextContextMenuItem",
			"(I)Z",
			arg0
		);
	}
	jboolean TextView::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean TextView::onTrackballEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void TextView::onWindowFocusChanged(jboolean arg0)
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean TextView::performLongClick()
	{
		return callMethod<jboolean>(
			"performLongClick",
			"()Z"
		);
	}
	void TextView::removeTextChangedListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeTextChangedListener",
			"(Landroid/text/TextWatcher;)V",
			arg0.object()
		);
	}
	void TextView::sendAccessibilityEventUnchecked(android::view::accessibility::AccessibilityEvent arg0)
	{
		callMethod<void>(
			"sendAccessibilityEventUnchecked",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object()
		);
	}
	void TextView::setAllCaps(jboolean arg0)
	{
		callMethod<void>(
			"setAllCaps",
			"(Z)V",
			arg0
		);
	}
	void TextView::setAutoLinkMask(jint arg0)
	{
		callMethod<void>(
			"setAutoLinkMask",
			"(I)V",
			arg0
		);
	}
	void TextView::setAutoSizeTextTypeUniformWithConfiguration(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"setAutoSizeTextTypeUniformWithConfiguration",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setAutoSizeTextTypeUniformWithPresetSizes(jintArray arg0, jint arg1)
	{
		callMethod<void>(
			"setAutoSizeTextTypeUniformWithPresetSizes",
			"([II)V",
			arg0,
			arg1
		);
	}
	void TextView::setAutoSizeTextTypeWithDefaults(jint arg0)
	{
		callMethod<void>(
			"setAutoSizeTextTypeWithDefaults",
			"(I)V",
			arg0
		);
	}
	void TextView::setBreakStrategy(jint arg0)
	{
		callMethod<void>(
			"setBreakStrategy",
			"(I)V",
			arg0
		);
	}
	void TextView::setCompoundDrawablePadding(jint arg0)
	{
		callMethod<void>(
			"setCompoundDrawablePadding",
			"(I)V",
			arg0
		);
	}
	void TextView::setCompoundDrawableTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setCompoundDrawableTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void TextView::setCompoundDrawableTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setCompoundDrawableTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void TextView::setCompoundDrawableTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		callMethod<void>(
			"setCompoundDrawableTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void TextView::setCompoundDrawables(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3)
	{
		callMethod<void>(
			"setCompoundDrawables",
			"(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void TextView::setCompoundDrawablesRelative(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3)
	{
		callMethod<void>(
			"setCompoundDrawablesRelative",
			"(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void TextView::setCompoundDrawablesRelativeWithIntrinsicBounds(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3)
	{
		callMethod<void>(
			"setCompoundDrawablesRelativeWithIntrinsicBounds",
			"(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void TextView::setCompoundDrawablesRelativeWithIntrinsicBounds(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"setCompoundDrawablesRelativeWithIntrinsicBounds",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setCompoundDrawablesWithIntrinsicBounds(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3)
	{
		callMethod<void>(
			"setCompoundDrawablesWithIntrinsicBounds",
			"(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void TextView::setCompoundDrawablesWithIntrinsicBounds(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"setCompoundDrawablesWithIntrinsicBounds",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setCursorVisible(jboolean arg0)
	{
		callMethod<void>(
			"setCursorVisible",
			"(Z)V",
			arg0
		);
	}
	void TextView::setCustomInsertionActionModeCallback(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setCustomInsertionActionModeCallback",
			"(Landroid/view/ActionMode$Callback;)V",
			arg0.object()
		);
	}
	void TextView::setCustomSelectionActionModeCallback(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setCustomSelectionActionModeCallback",
			"(Landroid/view/ActionMode$Callback;)V",
			arg0.object()
		);
	}
	void TextView::setEditableFactory(android::text::Editable_Factory arg0)
	{
		callMethod<void>(
			"setEditableFactory",
			"(Landroid/text/Editable$Factory;)V",
			arg0.object()
		);
	}
	void TextView::setElegantTextHeight(jboolean arg0)
	{
		callMethod<void>(
			"setElegantTextHeight",
			"(Z)V",
			arg0
		);
	}
	void TextView::setEllipsize(android::text::TextUtils_TruncateAt arg0)
	{
		callMethod<void>(
			"setEllipsize",
			"(Landroid/text/TextUtils$TruncateAt;)V",
			arg0.object()
		);
	}
	void TextView::setEms(jint arg0)
	{
		callMethod<void>(
			"setEms",
			"(I)V",
			arg0
		);
	}
	void TextView::setEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void TextView::setError(jstring arg0)
	{
		callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextView::setError(jstring arg0, android::graphics::drawable::Drawable arg1)
	{
		callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.object()
		);
	}
	void TextView::setExtractedText(android::view::inputmethod::ExtractedText arg0)
	{
		callMethod<void>(
			"setExtractedText",
			"(Landroid/view/inputmethod/ExtractedText;)V",
			arg0.object()
		);
	}
	void TextView::setFallbackLineSpacing(jboolean arg0)
	{
		callMethod<void>(
			"setFallbackLineSpacing",
			"(Z)V",
			arg0
		);
	}
	void TextView::setFilters(jarray arg0)
	{
		callMethod<void>(
			"setFilters",
			"([Landroid/text/InputFilter;)V",
			arg0
		);
	}
	void TextView::setFirstBaselineToTopHeight(jint arg0)
	{
		callMethod<void>(
			"setFirstBaselineToTopHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setFontFeatureSettings(jstring arg0)
	{
		callMethod<void>(
			"setFontFeatureSettings",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jboolean TextView::setFontVariationSettings(jstring arg0)
	{
		return callMethod<jboolean>(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void TextView::setFreezesText(jboolean arg0)
	{
		callMethod<void>(
			"setFreezesText",
			"(Z)V",
			arg0
		);
	}
	void TextView::setGravity(jint arg0)
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void TextView::setHeight(jint arg0)
	{
		callMethod<void>(
			"setHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setHighlightColor(jint arg0)
	{
		callMethod<void>(
			"setHighlightColor",
			"(I)V",
			arg0
		);
	}
	void TextView::setHint(jint arg0)
	{
		callMethod<void>(
			"setHint",
			"(I)V",
			arg0
		);
	}
	void TextView::setHint(jstring arg0)
	{
		callMethod<void>(
			"setHint",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextView::setHintTextColor(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setHintTextColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void TextView::setHintTextColor(jint arg0)
	{
		callMethod<void>(
			"setHintTextColor",
			"(I)V",
			arg0
		);
	}
	void TextView::setHorizontallyScrolling(jboolean arg0)
	{
		callMethod<void>(
			"setHorizontallyScrolling",
			"(Z)V",
			arg0
		);
	}
	void TextView::setHyphenationFrequency(jint arg0)
	{
		callMethod<void>(
			"setHyphenationFrequency",
			"(I)V",
			arg0
		);
	}
	void TextView::setImeActionLabel(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"setImeActionLabel",
			"(Ljava/lang/CharSequence;I)V",
			arg0,
			arg1
		);
	}
	void TextView::setImeHintLocales(android::os::LocaleList arg0)
	{
		callMethod<void>(
			"setImeHintLocales",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		);
	}
	void TextView::setImeOptions(jint arg0)
	{
		callMethod<void>(
			"setImeOptions",
			"(I)V",
			arg0
		);
	}
	void TextView::setIncludeFontPadding(jboolean arg0)
	{
		callMethod<void>(
			"setIncludeFontPadding",
			"(Z)V",
			arg0
		);
	}
	void TextView::setInputExtras(jint arg0)
	{
		callMethod<void>(
			"setInputExtras",
			"(I)V",
			arg0
		);
	}
	void TextView::setInputType(jint arg0)
	{
		callMethod<void>(
			"setInputType",
			"(I)V",
			arg0
		);
	}
	void TextView::setJustificationMode(jint arg0)
	{
		callMethod<void>(
			"setJustificationMode",
			"(I)V",
			arg0
		);
	}
	void TextView::setKeyListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setKeyListener",
			"(Landroid/text/method/KeyListener;)V",
			arg0.object()
		);
	}
	void TextView::setLastBaselineToBottomHeight(jint arg0)
	{
		callMethod<void>(
			"setLastBaselineToBottomHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setLetterSpacing(jfloat arg0)
	{
		callMethod<void>(
			"setLetterSpacing",
			"(F)V",
			arg0
		);
	}
	void TextView::setLineHeight(jint arg0)
	{
		callMethod<void>(
			"setLineHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setLineSpacing(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"setLineSpacing",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void TextView::setLines(jint arg0)
	{
		callMethod<void>(
			"setLines",
			"(I)V",
			arg0
		);
	}
	void TextView::setLinkTextColor(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setLinkTextColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void TextView::setLinkTextColor(jint arg0)
	{
		callMethod<void>(
			"setLinkTextColor",
			"(I)V",
			arg0
		);
	}
	void TextView::setLinksClickable(jboolean arg0)
	{
		callMethod<void>(
			"setLinksClickable",
			"(Z)V",
			arg0
		);
	}
	void TextView::setMarqueeRepeatLimit(jint arg0)
	{
		callMethod<void>(
			"setMarqueeRepeatLimit",
			"(I)V",
			arg0
		);
	}
	void TextView::setMaxEms(jint arg0)
	{
		callMethod<void>(
			"setMaxEms",
			"(I)V",
			arg0
		);
	}
	void TextView::setMaxHeight(jint arg0)
	{
		callMethod<void>(
			"setMaxHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setMaxLines(jint arg0)
	{
		callMethod<void>(
			"setMaxLines",
			"(I)V",
			arg0
		);
	}
	void TextView::setMaxWidth(jint arg0)
	{
		callMethod<void>(
			"setMaxWidth",
			"(I)V",
			arg0
		);
	}
	void TextView::setMinEms(jint arg0)
	{
		callMethod<void>(
			"setMinEms",
			"(I)V",
			arg0
		);
	}
	void TextView::setMinHeight(jint arg0)
	{
		callMethod<void>(
			"setMinHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setMinLines(jint arg0)
	{
		callMethod<void>(
			"setMinLines",
			"(I)V",
			arg0
		);
	}
	void TextView::setMinWidth(jint arg0)
	{
		callMethod<void>(
			"setMinWidth",
			"(I)V",
			arg0
		);
	}
	void TextView::setMovementMethod(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setMovementMethod",
			"(Landroid/text/method/MovementMethod;)V",
			arg0.object()
		);
	}
	void TextView::setOnEditorActionListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnEditorActionListener",
			"(Landroid/widget/TextView$OnEditorActionListener;)V",
			arg0.object()
		);
	}
	void TextView::setPadding(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"setPadding",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"setPaddingRelative",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setPaintFlags(jint arg0)
	{
		callMethod<void>(
			"setPaintFlags",
			"(I)V",
			arg0
		);
	}
	void TextView::setPrivateImeOptions(jstring arg0)
	{
		callMethod<void>(
			"setPrivateImeOptions",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TextView::setRawInputType(jint arg0)
	{
		callMethod<void>(
			"setRawInputType",
			"(I)V",
			arg0
		);
	}
	void TextView::setScroller(android::widget::Scroller arg0)
	{
		callMethod<void>(
			"setScroller",
			"(Landroid/widget/Scroller;)V",
			arg0.object()
		);
	}
	void TextView::setSelectAllOnFocus(jboolean arg0)
	{
		callMethod<void>(
			"setSelectAllOnFocus",
			"(Z)V",
			arg0
		);
	}
	void TextView::setSelected(jboolean arg0)
	{
		callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	void TextView::setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3)
	{
		callMethod<void>(
			"setShadowLayer",
			"(FFFI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setShowSoftInputOnFocus(jboolean arg0)
	{
		callMethod<void>(
			"setShowSoftInputOnFocus",
			"(Z)V",
			arg0
		);
	}
	void TextView::setSingleLine()
	{
		callMethod<void>(
			"setSingleLine",
			"()V"
		);
	}
	void TextView::setSingleLine(jboolean arg0)
	{
		callMethod<void>(
			"setSingleLine",
			"(Z)V",
			arg0
		);
	}
	void TextView::setSpannableFactory(android::text::Spannable_Factory arg0)
	{
		callMethod<void>(
			"setSpannableFactory",
			"(Landroid/text/Spannable$Factory;)V",
			arg0.object()
		);
	}
	void TextView::setText(jint arg0)
	{
		callMethod<void>(
			"setText",
			"(I)V",
			arg0
		);
	}
	void TextView::setText(jstring arg0)
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextView::setText(jint arg0, android::widget::TextView_BufferType arg1)
	{
		callMethod<void>(
			"setText",
			"(ILandroid/widget/TextView$BufferType;)V",
			arg0,
			arg1.object()
		);
	}
	void TextView::setText(jstring arg0, android::widget::TextView_BufferType arg1)
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			arg0,
			arg1.object()
		);
	}
	void TextView::setText(jcharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setText",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void TextView::setTextAppearance(jint arg0)
	{
		callMethod<void>(
			"setTextAppearance",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextAppearance(android::content::Context arg0, jint arg1)
	{
		callMethod<void>(
			"setTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void TextView::setTextClassifier(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setTextClassifier",
			"(Landroid/view/textclassifier/TextClassifier;)V",
			arg0.object()
		);
	}
	void TextView::setTextColor(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setTextColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void TextView::setTextColor(jint arg0)
	{
		callMethod<void>(
			"setTextColor",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextCursorDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setTextCursorDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void TextView::setTextCursorDrawable(jint arg0)
	{
		callMethod<void>(
			"setTextCursorDrawable",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextIsSelectable(jboolean arg0)
	{
		callMethod<void>(
			"setTextIsSelectable",
			"(Z)V",
			arg0
		);
	}
	void TextView::setTextKeepState(jstring arg0)
	{
		callMethod<void>(
			"setTextKeepState",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextView::setTextKeepState(jstring arg0, android::widget::TextView_BufferType arg1)
	{
		callMethod<void>(
			"setTextKeepState",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			arg0,
			arg1.object()
		);
	}
	void TextView::setTextLocale(java::util::Locale arg0)
	{
		callMethod<void>(
			"setTextLocale",
			"(Ljava/util/Locale;)V",
			arg0.object()
		);
	}
	void TextView::setTextLocales(android::os::LocaleList arg0)
	{
		callMethod<void>(
			"setTextLocales",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		);
	}
	void TextView::setTextMetricsParams(android::text::PrecomputedText_Params arg0)
	{
		callMethod<void>(
			"setTextMetricsParams",
			"(Landroid/text/PrecomputedText$Params;)V",
			arg0.object()
		);
	}
	void TextView::setTextScaleX(jfloat arg0)
	{
		callMethod<void>(
			"setTextScaleX",
			"(F)V",
			arg0
		);
	}
	void TextView::setTextSelectHandle(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setTextSelectHandle",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void TextView::setTextSelectHandle(jint arg0)
	{
		callMethod<void>(
			"setTextSelectHandle",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextSelectHandleLeft(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setTextSelectHandleLeft",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void TextView::setTextSelectHandleLeft(jint arg0)
	{
		callMethod<void>(
			"setTextSelectHandleLeft",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextSelectHandleRight(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setTextSelectHandleRight",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void TextView::setTextSelectHandleRight(jint arg0)
	{
		callMethod<void>(
			"setTextSelectHandleRight",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextSize(jfloat arg0)
	{
		callMethod<void>(
			"setTextSize",
			"(F)V",
			arg0
		);
	}
	void TextView::setTextSize(jint arg0, jfloat arg1)
	{
		callMethod<void>(
			"setTextSize",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void TextView::setTransformationMethod(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setTransformationMethod",
			"(Landroid/text/method/TransformationMethod;)V",
			arg0.object()
		);
	}
	void TextView::setTypeface(android::graphics::Typeface arg0)
	{
		callMethod<void>(
			"setTypeface",
			"(Landroid/graphics/Typeface;)V",
			arg0.object()
		);
	}
	void TextView::setTypeface(android::graphics::Typeface arg0, jint arg1)
	{
		callMethod<void>(
			"setTypeface",
			"(Landroid/graphics/Typeface;I)V",
			arg0.object(),
			arg1
		);
	}
	void TextView::setWidth(jint arg0)
	{
		callMethod<void>(
			"setWidth",
			"(I)V",
			arg0
		);
	}
	jboolean TextView::showContextMenu()
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"()Z"
		);
	}
	jboolean TextView::showContextMenu(jfloat arg0, jfloat arg1)
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"(FF)Z",
			arg0,
			arg1
		);
	}
} // namespace android::widget

