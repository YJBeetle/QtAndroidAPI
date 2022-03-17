#pragma once

#include "../../JCharArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../content/Context.def.hpp"
#include "../content/res/ColorStateList.def.hpp"
#include "../content/res/Configuration.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/PorterDuff_Mode.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../graphics/Typeface.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/LocaleList.def.hpp"
#include "../text/Editable_Factory.def.hpp"
#include "../text/Layout.def.hpp"
#include "../text/PrecomputedText_Params.def.hpp"
#include "../text/Spannable_Factory.def.hpp"
#include "../text/TextPaint.def.hpp"
#include "../text/TextUtils_TruncateAt.def.hpp"
#include "../view/DragEvent.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/PointerIcon.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewStructure.def.hpp"
#include "../view/accessibility/AccessibilityEvent.def.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.def.hpp"
#include "../view/autofill/AutofillValue.def.hpp"
#include "../view/inputmethod/CompletionInfo.def.hpp"
#include "../view/inputmethod/CorrectionInfo.def.hpp"
#include "../view/inputmethod/EditorInfo.def.hpp"
#include "../view/inputmethod/ExtractedText.def.hpp"
#include "../view/inputmethod/ExtractedTextRequest.def.hpp"
#include "./Scroller.def.hpp"
#include "./TextView_BufferType.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "../../java/util/Locale.def.hpp"
#include "./TextView.def.hpp"

namespace android::widget
{
	// Fields
	inline jint TextView::AUTO_SIZE_TEXT_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.widget.TextView",
			"AUTO_SIZE_TEXT_TYPE_NONE"
		);
	}
	inline jint TextView::AUTO_SIZE_TEXT_TYPE_UNIFORM()
	{
		return getStaticField<jint>(
			"android.widget.TextView",
			"AUTO_SIZE_TEXT_TYPE_UNIFORM"
		);
	}
	
	// Constructors
	inline TextView::TextView(android::content::Context arg0)
		: android::view::View(
			"android.widget.TextView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline TextView::TextView(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.widget.TextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline TextView::TextView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.widget.TextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline TextView::TextView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.widget.TextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void TextView::addExtraDataToAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0, JString arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void TextView::addTextChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"addTextChangedListener",
			"(Landroid/text/TextWatcher;)V",
			arg0.object()
		);
	}
	inline void TextView::append(JString arg0) const
	{
		callMethod<void>(
			"append",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void TextView::append(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"append",
			"(Ljava/lang/CharSequence;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void TextView::autofill(android::view::autofill::AutofillValue arg0) const
	{
		callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	inline void TextView::beginBatchEdit() const
	{
		callMethod<void>(
			"beginBatchEdit",
			"()V"
		);
	}
	inline jboolean TextView::bringPointIntoView(jint arg0) const
	{
		return callMethod<jboolean>(
			"bringPointIntoView",
			"(I)Z",
			arg0
		);
	}
	inline void TextView::cancelLongPress() const
	{
		callMethod<void>(
			"cancelLongPress",
			"()V"
		);
	}
	inline void TextView::clearComposingText() const
	{
		callMethod<void>(
			"clearComposingText",
			"()V"
		);
	}
	inline void TextView::computeScroll() const
	{
		callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	inline void TextView::debug(jint arg0) const
	{
		callMethod<void>(
			"debug",
			"(I)V",
			arg0
		);
	}
	inline jboolean TextView::didTouchFocusSelect() const
	{
		return callMethod<jboolean>(
			"didTouchFocusSelect",
			"()Z"
		);
	}
	inline void TextView::drawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void TextView::endBatchEdit() const
	{
		callMethod<void>(
			"endBatchEdit",
			"()V"
		);
	}
	inline jboolean TextView::extractText(android::view::inputmethod::ExtractedTextRequest arg0, android::view::inputmethod::ExtractedText arg1) const
	{
		return callMethod<jboolean>(
			"extractText",
			"(Landroid/view/inputmethod/ExtractedTextRequest;Landroid/view/inputmethod/ExtractedText;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TextView::findViewsWithText(java::util::ArrayList arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"findViewsWithText",
			"(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline JString TextView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint TextView::getAutoLinkMask() const
	{
		return callMethod<jint>(
			"getAutoLinkMask",
			"()I"
		);
	}
	inline jint TextView::getAutoSizeMaxTextSize() const
	{
		return callMethod<jint>(
			"getAutoSizeMaxTextSize",
			"()I"
		);
	}
	inline jint TextView::getAutoSizeMinTextSize() const
	{
		return callMethod<jint>(
			"getAutoSizeMinTextSize",
			"()I"
		);
	}
	inline jint TextView::getAutoSizeStepGranularity() const
	{
		return callMethod<jint>(
			"getAutoSizeStepGranularity",
			"()I"
		);
	}
	inline JIntArray TextView::getAutoSizeTextAvailableSizes() const
	{
		return callObjectMethod(
			"getAutoSizeTextAvailableSizes",
			"()[I"
		);
	}
	inline jint TextView::getAutoSizeTextType() const
	{
		return callMethod<jint>(
			"getAutoSizeTextType",
			"()I"
		);
	}
	inline jint TextView::getAutofillType() const
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	inline android::view::autofill::AutofillValue TextView::getAutofillValue() const
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	inline jint TextView::getBaseline() const
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	inline jint TextView::getBreakStrategy() const
	{
		return callMethod<jint>(
			"getBreakStrategy",
			"()I"
		);
	}
	inline jint TextView::getCompoundDrawablePadding() const
	{
		return callMethod<jint>(
			"getCompoundDrawablePadding",
			"()I"
		);
	}
	inline android::content::res::ColorStateList TextView::getCompoundDrawableTintList() const
	{
		return callObjectMethod(
			"getCompoundDrawableTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline android::graphics::PorterDuff_Mode TextView::getCompoundDrawableTintMode() const
	{
		return callObjectMethod(
			"getCompoundDrawableTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline JArray TextView::getCompoundDrawables() const
	{
		return callObjectMethod(
			"getCompoundDrawables",
			"()[Landroid/graphics/drawable/Drawable;"
		);
	}
	inline JArray TextView::getCompoundDrawablesRelative() const
	{
		return callObjectMethod(
			"getCompoundDrawablesRelative",
			"()[Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint TextView::getCompoundPaddingBottom() const
	{
		return callMethod<jint>(
			"getCompoundPaddingBottom",
			"()I"
		);
	}
	inline jint TextView::getCompoundPaddingEnd() const
	{
		return callMethod<jint>(
			"getCompoundPaddingEnd",
			"()I"
		);
	}
	inline jint TextView::getCompoundPaddingLeft() const
	{
		return callMethod<jint>(
			"getCompoundPaddingLeft",
			"()I"
		);
	}
	inline jint TextView::getCompoundPaddingRight() const
	{
		return callMethod<jint>(
			"getCompoundPaddingRight",
			"()I"
		);
	}
	inline jint TextView::getCompoundPaddingStart() const
	{
		return callMethod<jint>(
			"getCompoundPaddingStart",
			"()I"
		);
	}
	inline jint TextView::getCompoundPaddingTop() const
	{
		return callMethod<jint>(
			"getCompoundPaddingTop",
			"()I"
		);
	}
	inline jint TextView::getCurrentHintTextColor() const
	{
		return callMethod<jint>(
			"getCurrentHintTextColor",
			"()I"
		);
	}
	inline jint TextView::getCurrentTextColor() const
	{
		return callMethod<jint>(
			"getCurrentTextColor",
			"()I"
		);
	}
	inline JObject TextView::getCustomInsertionActionModeCallback() const
	{
		return callObjectMethod(
			"getCustomInsertionActionModeCallback",
			"()Landroid/view/ActionMode$Callback;"
		);
	}
	inline JObject TextView::getCustomSelectionActionModeCallback() const
	{
		return callObjectMethod(
			"getCustomSelectionActionModeCallback",
			"()Landroid/view/ActionMode$Callback;"
		);
	}
	inline JObject TextView::getEditableText() const
	{
		return callObjectMethod(
			"getEditableText",
			"()Landroid/text/Editable;"
		);
	}
	inline android::text::TextUtils_TruncateAt TextView::getEllipsize() const
	{
		return callObjectMethod(
			"getEllipsize",
			"()Landroid/text/TextUtils$TruncateAt;"
		);
	}
	inline JString TextView::getError() const
	{
		return callObjectMethod(
			"getError",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint TextView::getExtendedPaddingBottom() const
	{
		return callMethod<jint>(
			"getExtendedPaddingBottom",
			"()I"
		);
	}
	inline jint TextView::getExtendedPaddingTop() const
	{
		return callMethod<jint>(
			"getExtendedPaddingTop",
			"()I"
		);
	}
	inline JArray TextView::getFilters() const
	{
		return callObjectMethod(
			"getFilters",
			"()[Landroid/text/InputFilter;"
		);
	}
	inline jint TextView::getFirstBaselineToTopHeight() const
	{
		return callMethod<jint>(
			"getFirstBaselineToTopHeight",
			"()I"
		);
	}
	inline void TextView::getFocusedRect(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getFocusedRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline JString TextView::getFontFeatureSettings() const
	{
		return callObjectMethod(
			"getFontFeatureSettings",
			"()Ljava/lang/String;"
		);
	}
	inline JString TextView::getFontVariationSettings() const
	{
		return callObjectMethod(
			"getFontVariationSettings",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean TextView::getFreezesText() const
	{
		return callMethod<jboolean>(
			"getFreezesText",
			"()Z"
		);
	}
	inline jint TextView::getGravity() const
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	inline jint TextView::getHighlightColor() const
	{
		return callMethod<jint>(
			"getHighlightColor",
			"()I"
		);
	}
	inline JString TextView::getHint() const
	{
		return callObjectMethod(
			"getHint",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::content::res::ColorStateList TextView::getHintTextColors() const
	{
		return callObjectMethod(
			"getHintTextColors",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline jint TextView::getHyphenationFrequency() const
	{
		return callMethod<jint>(
			"getHyphenationFrequency",
			"()I"
		);
	}
	inline jint TextView::getImeActionId() const
	{
		return callMethod<jint>(
			"getImeActionId",
			"()I"
		);
	}
	inline JString TextView::getImeActionLabel() const
	{
		return callObjectMethod(
			"getImeActionLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::os::LocaleList TextView::getImeHintLocales() const
	{
		return callObjectMethod(
			"getImeHintLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	inline jint TextView::getImeOptions() const
	{
		return callMethod<jint>(
			"getImeOptions",
			"()I"
		);
	}
	inline jboolean TextView::getIncludeFontPadding() const
	{
		return callMethod<jboolean>(
			"getIncludeFontPadding",
			"()Z"
		);
	}
	inline android::os::Bundle TextView::getInputExtras(jboolean arg0) const
	{
		return callObjectMethod(
			"getInputExtras",
			"(Z)Landroid/os/Bundle;",
			arg0
		);
	}
	inline jint TextView::getInputType() const
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	inline jint TextView::getJustificationMode() const
	{
		return callMethod<jint>(
			"getJustificationMode",
			"()I"
		);
	}
	inline JObject TextView::getKeyListener() const
	{
		return callObjectMethod(
			"getKeyListener",
			"()Landroid/text/method/KeyListener;"
		);
	}
	inline jint TextView::getLastBaselineToBottomHeight() const
	{
		return callMethod<jint>(
			"getLastBaselineToBottomHeight",
			"()I"
		);
	}
	inline android::text::Layout TextView::getLayout() const
	{
		return callObjectMethod(
			"getLayout",
			"()Landroid/text/Layout;"
		);
	}
	inline jfloat TextView::getLetterSpacing() const
	{
		return callMethod<jfloat>(
			"getLetterSpacing",
			"()F"
		);
	}
	inline jint TextView::getLineBounds(jint arg0, android::graphics::Rect arg1) const
	{
		return callMethod<jint>(
			"getLineBounds",
			"(ILandroid/graphics/Rect;)I",
			arg0,
			arg1.object()
		);
	}
	inline jint TextView::getLineCount() const
	{
		return callMethod<jint>(
			"getLineCount",
			"()I"
		);
	}
	inline jint TextView::getLineHeight() const
	{
		return callMethod<jint>(
			"getLineHeight",
			"()I"
		);
	}
	inline jfloat TextView::getLineSpacingExtra() const
	{
		return callMethod<jfloat>(
			"getLineSpacingExtra",
			"()F"
		);
	}
	inline jfloat TextView::getLineSpacingMultiplier() const
	{
		return callMethod<jfloat>(
			"getLineSpacingMultiplier",
			"()F"
		);
	}
	inline android::content::res::ColorStateList TextView::getLinkTextColors() const
	{
		return callObjectMethod(
			"getLinkTextColors",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline jboolean TextView::getLinksClickable() const
	{
		return callMethod<jboolean>(
			"getLinksClickable",
			"()Z"
		);
	}
	inline jint TextView::getMarqueeRepeatLimit() const
	{
		return callMethod<jint>(
			"getMarqueeRepeatLimit",
			"()I"
		);
	}
	inline jint TextView::getMaxEms() const
	{
		return callMethod<jint>(
			"getMaxEms",
			"()I"
		);
	}
	inline jint TextView::getMaxHeight() const
	{
		return callMethod<jint>(
			"getMaxHeight",
			"()I"
		);
	}
	inline jint TextView::getMaxLines() const
	{
		return callMethod<jint>(
			"getMaxLines",
			"()I"
		);
	}
	inline jint TextView::getMaxWidth() const
	{
		return callMethod<jint>(
			"getMaxWidth",
			"()I"
		);
	}
	inline jint TextView::getMinEms() const
	{
		return callMethod<jint>(
			"getMinEms",
			"()I"
		);
	}
	inline jint TextView::getMinHeight() const
	{
		return callMethod<jint>(
			"getMinHeight",
			"()I"
		);
	}
	inline jint TextView::getMinLines() const
	{
		return callMethod<jint>(
			"getMinLines",
			"()I"
		);
	}
	inline jint TextView::getMinWidth() const
	{
		return callMethod<jint>(
			"getMinWidth",
			"()I"
		);
	}
	inline JObject TextView::getMovementMethod() const
	{
		return callObjectMethod(
			"getMovementMethod",
			"()Landroid/text/method/MovementMethod;"
		);
	}
	inline jint TextView::getOffsetForPosition(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jint>(
			"getOffsetForPosition",
			"(FF)I",
			arg0,
			arg1
		);
	}
	inline android::text::TextPaint TextView::getPaint() const
	{
		return callObjectMethod(
			"getPaint",
			"()Landroid/text/TextPaint;"
		);
	}
	inline jint TextView::getPaintFlags() const
	{
		return callMethod<jint>(
			"getPaintFlags",
			"()I"
		);
	}
	inline JString TextView::getPrivateImeOptions() const
	{
		return callObjectMethod(
			"getPrivateImeOptions",
			"()Ljava/lang/String;"
		);
	}
	inline jint TextView::getSelectionEnd() const
	{
		return callMethod<jint>(
			"getSelectionEnd",
			"()I"
		);
	}
	inline jint TextView::getSelectionStart() const
	{
		return callMethod<jint>(
			"getSelectionStart",
			"()I"
		);
	}
	inline jint TextView::getShadowColor() const
	{
		return callMethod<jint>(
			"getShadowColor",
			"()I"
		);
	}
	inline jfloat TextView::getShadowDx() const
	{
		return callMethod<jfloat>(
			"getShadowDx",
			"()F"
		);
	}
	inline jfloat TextView::getShadowDy() const
	{
		return callMethod<jfloat>(
			"getShadowDy",
			"()F"
		);
	}
	inline jfloat TextView::getShadowRadius() const
	{
		return callMethod<jfloat>(
			"getShadowRadius",
			"()F"
		);
	}
	inline jboolean TextView::getShowSoftInputOnFocus() const
	{
		return callMethod<jboolean>(
			"getShowSoftInputOnFocus",
			"()Z"
		);
	}
	inline JString TextView::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JObject TextView::getTextClassifier() const
	{
		return callObjectMethod(
			"getTextClassifier",
			"()Landroid/view/textclassifier/TextClassifier;"
		);
	}
	inline android::content::res::ColorStateList TextView::getTextColors() const
	{
		return callObjectMethod(
			"getTextColors",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline java::util::Locale TextView::getTextLocale() const
	{
		return callObjectMethod(
			"getTextLocale",
			"()Ljava/util/Locale;"
		);
	}
	inline android::os::LocaleList TextView::getTextLocales() const
	{
		return callObjectMethod(
			"getTextLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	inline android::text::PrecomputedText_Params TextView::getTextMetricsParams() const
	{
		return callObjectMethod(
			"getTextMetricsParams",
			"()Landroid/text/PrecomputedText$Params;"
		);
	}
	inline jfloat TextView::getTextScaleX() const
	{
		return callMethod<jfloat>(
			"getTextScaleX",
			"()F"
		);
	}
	inline jfloat TextView::getTextSize() const
	{
		return callMethod<jfloat>(
			"getTextSize",
			"()F"
		);
	}
	inline jint TextView::getTotalPaddingBottom() const
	{
		return callMethod<jint>(
			"getTotalPaddingBottom",
			"()I"
		);
	}
	inline jint TextView::getTotalPaddingEnd() const
	{
		return callMethod<jint>(
			"getTotalPaddingEnd",
			"()I"
		);
	}
	inline jint TextView::getTotalPaddingLeft() const
	{
		return callMethod<jint>(
			"getTotalPaddingLeft",
			"()I"
		);
	}
	inline jint TextView::getTotalPaddingRight() const
	{
		return callMethod<jint>(
			"getTotalPaddingRight",
			"()I"
		);
	}
	inline jint TextView::getTotalPaddingStart() const
	{
		return callMethod<jint>(
			"getTotalPaddingStart",
			"()I"
		);
	}
	inline jint TextView::getTotalPaddingTop() const
	{
		return callMethod<jint>(
			"getTotalPaddingTop",
			"()I"
		);
	}
	inline JObject TextView::getTransformationMethod() const
	{
		return callObjectMethod(
			"getTransformationMethod",
			"()Landroid/text/method/TransformationMethod;"
		);
	}
	inline android::graphics::Typeface TextView::getTypeface() const
	{
		return callObjectMethod(
			"getTypeface",
			"()Landroid/graphics/Typeface;"
		);
	}
	inline JArray TextView::getUrls() const
	{
		return callObjectMethod(
			"getUrls",
			"()[Landroid/text/style/URLSpan;"
		);
	}
	inline jboolean TextView::hasOverlappingRendering() const
	{
		return callMethod<jboolean>(
			"hasOverlappingRendering",
			"()Z"
		);
	}
	inline jboolean TextView::hasSelection() const
	{
		return callMethod<jboolean>(
			"hasSelection",
			"()Z"
		);
	}
	inline void TextView::invalidateDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline jboolean TextView::isAllCaps() const
	{
		return callMethod<jboolean>(
			"isAllCaps",
			"()Z"
		);
	}
	inline jboolean TextView::isCursorVisible() const
	{
		return callMethod<jboolean>(
			"isCursorVisible",
			"()Z"
		);
	}
	inline jboolean TextView::isElegantTextHeight() const
	{
		return callMethod<jboolean>(
			"isElegantTextHeight",
			"()Z"
		);
	}
	inline jboolean TextView::isFallbackLineSpacing() const
	{
		return callMethod<jboolean>(
			"isFallbackLineSpacing",
			"()Z"
		);
	}
	inline jboolean TextView::isInputMethodTarget() const
	{
		return callMethod<jboolean>(
			"isInputMethodTarget",
			"()Z"
		);
	}
	inline jboolean TextView::isSuggestionsEnabled() const
	{
		return callMethod<jboolean>(
			"isSuggestionsEnabled",
			"()Z"
		);
	}
	inline jboolean TextView::isTextSelectable() const
	{
		return callMethod<jboolean>(
			"isTextSelectable",
			"()Z"
		);
	}
	inline void TextView::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	inline jint TextView::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	inline jboolean TextView::moveCursorToVisibleOffset() const
	{
		return callMethod<jboolean>(
			"moveCursorToVisibleOffset",
			"()Z"
		);
	}
	inline void TextView::onBeginBatchEdit() const
	{
		callMethod<void>(
			"onBeginBatchEdit",
			"()V"
		);
	}
	inline jboolean TextView::onCheckIsTextEditor() const
	{
		return callMethod<jboolean>(
			"onCheckIsTextEditor",
			"()Z"
		);
	}
	inline void TextView::onCommitCompletion(android::view::inputmethod::CompletionInfo arg0) const
	{
		callMethod<void>(
			"onCommitCompletion",
			"(Landroid/view/inputmethod/CompletionInfo;)V",
			arg0.object()
		);
	}
	inline void TextView::onCommitCorrection(android::view::inputmethod::CorrectionInfo arg0) const
	{
		callMethod<void>(
			"onCommitCorrection",
			"(Landroid/view/inputmethod/CorrectionInfo;)V",
			arg0.object()
		);
	}
	inline JObject TextView::onCreateInputConnection(android::view::inputmethod::EditorInfo arg0) const
	{
		return callObjectMethod(
			"onCreateInputConnection",
			"(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",
			arg0.object()
		);
	}
	inline jboolean TextView::onDragEvent(android::view::DragEvent arg0) const
	{
		return callMethod<jboolean>(
			"onDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.object()
		);
	}
	inline void TextView::onEditorAction(jint arg0) const
	{
		callMethod<void>(
			"onEditorAction",
			"(I)V",
			arg0
		);
	}
	inline void TextView::onEndBatchEdit() const
	{
		callMethod<void>(
			"onEndBatchEdit",
			"()V"
		);
	}
	inline jboolean TextView::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean TextView::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean TextView::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jboolean TextView::onKeyPreIme(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean TextView::onKeyShortcut(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyShortcut",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean TextView::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean TextView::onPreDraw() const
	{
		return callMethod<jboolean>(
			"onPreDraw",
			"()Z"
		);
	}
	inline jboolean TextView::onPrivateIMECommand(JString arg0, android::os::Bundle arg1) const
	{
		return callMethod<jboolean>(
			"onPrivateIMECommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TextView::onProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"onProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void TextView::onProvideStructure(android::view::ViewStructure arg0) const
	{
		callMethod<void>(
			"onProvideStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	inline android::view::PointerIcon TextView::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const
	{
		return callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
	inline void TextView::onRestoreInstanceState(JObject arg0) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	inline void TextView::onRtlPropertiesChanged(jint arg0) const
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	inline JObject TextView::onSaveInstanceState() const
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	inline void TextView::onScreenStateChanged(jint arg0) const
	{
		callMethod<void>(
			"onScreenStateChanged",
			"(I)V",
			arg0
		);
	}
	inline jboolean TextView::onTextContextMenuItem(jint arg0) const
	{
		return callMethod<jboolean>(
			"onTextContextMenuItem",
			"(I)Z",
			arg0
		);
	}
	inline jboolean TextView::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean TextView::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void TextView::onWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	inline jboolean TextView::performLongClick() const
	{
		return callMethod<jboolean>(
			"performLongClick",
			"()Z"
		);
	}
	inline void TextView::removeTextChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeTextChangedListener",
			"(Landroid/text/TextWatcher;)V",
			arg0.object()
		);
	}
	inline void TextView::sendAccessibilityEventUnchecked(android::view::accessibility::AccessibilityEvent arg0) const
	{
		callMethod<void>(
			"sendAccessibilityEventUnchecked",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object()
		);
	}
	inline void TextView::setAllCaps(jboolean arg0) const
	{
		callMethod<void>(
			"setAllCaps",
			"(Z)V",
			arg0
		);
	}
	inline void TextView::setAutoLinkMask(jint arg0) const
	{
		callMethod<void>(
			"setAutoLinkMask",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setAutoSizeTextTypeUniformWithConfiguration(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void TextView::setAutoSizeTextTypeUniformWithPresetSizes(JIntArray arg0, jint arg1) const
	{
		callMethod<void>(
			"setAutoSizeTextTypeUniformWithPresetSizes",
			"([II)V",
			arg0.object<jintArray>(),
			arg1
		);
	}
	inline void TextView::setAutoSizeTextTypeWithDefaults(jint arg0) const
	{
		callMethod<void>(
			"setAutoSizeTextTypeWithDefaults",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setBreakStrategy(jint arg0) const
	{
		callMethod<void>(
			"setBreakStrategy",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setCompoundDrawablePadding(jint arg0) const
	{
		callMethod<void>(
			"setCompoundDrawablePadding",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setCompoundDrawableTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setCompoundDrawableTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void TextView::setCompoundDrawableTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setCompoundDrawableTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	inline void TextView::setCompoundDrawables(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3) const
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
	inline void TextView::setCompoundDrawablesRelative(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3) const
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
	inline void TextView::setCompoundDrawablesRelativeWithIntrinsicBounds(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3) const
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
	inline void TextView::setCompoundDrawablesRelativeWithIntrinsicBounds(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void TextView::setCompoundDrawablesWithIntrinsicBounds(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3) const
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
	inline void TextView::setCompoundDrawablesWithIntrinsicBounds(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void TextView::setCursorVisible(jboolean arg0) const
	{
		callMethod<void>(
			"setCursorVisible",
			"(Z)V",
			arg0
		);
	}
	inline void TextView::setCustomInsertionActionModeCallback(JObject arg0) const
	{
		callMethod<void>(
			"setCustomInsertionActionModeCallback",
			"(Landroid/view/ActionMode$Callback;)V",
			arg0.object()
		);
	}
	inline void TextView::setCustomSelectionActionModeCallback(JObject arg0) const
	{
		callMethod<void>(
			"setCustomSelectionActionModeCallback",
			"(Landroid/view/ActionMode$Callback;)V",
			arg0.object()
		);
	}
	inline void TextView::setEditableFactory(android::text::Editable_Factory arg0) const
	{
		callMethod<void>(
			"setEditableFactory",
			"(Landroid/text/Editable$Factory;)V",
			arg0.object()
		);
	}
	inline void TextView::setElegantTextHeight(jboolean arg0) const
	{
		callMethod<void>(
			"setElegantTextHeight",
			"(Z)V",
			arg0
		);
	}
	inline void TextView::setEllipsize(android::text::TextUtils_TruncateAt arg0) const
	{
		callMethod<void>(
			"setEllipsize",
			"(Landroid/text/TextUtils$TruncateAt;)V",
			arg0.object()
		);
	}
	inline void TextView::setEms(jint arg0) const
	{
		callMethod<void>(
			"setEms",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void TextView::setError(JString arg0) const
	{
		callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void TextView::setError(JString arg0, android::graphics::drawable::Drawable arg1) const
	{
		callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Drawable;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TextView::setExtractedText(android::view::inputmethod::ExtractedText arg0) const
	{
		callMethod<void>(
			"setExtractedText",
			"(Landroid/view/inputmethod/ExtractedText;)V",
			arg0.object()
		);
	}
	inline void TextView::setFallbackLineSpacing(jboolean arg0) const
	{
		callMethod<void>(
			"setFallbackLineSpacing",
			"(Z)V",
			arg0
		);
	}
	inline void TextView::setFilters(JArray arg0) const
	{
		callMethod<void>(
			"setFilters",
			"([Landroid/text/InputFilter;)V",
			arg0.object<jarray>()
		);
	}
	inline void TextView::setFirstBaselineToTopHeight(jint arg0) const
	{
		callMethod<void>(
			"setFirstBaselineToTopHeight",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setFontFeatureSettings(JString arg0) const
	{
		callMethod<void>(
			"setFontFeatureSettings",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jboolean TextView::setFontVariationSettings(JString arg0) const
	{
		return callMethod<jboolean>(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline void TextView::setFreezesText(jboolean arg0) const
	{
		callMethod<void>(
			"setFreezesText",
			"(Z)V",
			arg0
		);
	}
	inline void TextView::setGravity(jint arg0) const
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setHeight(jint arg0) const
	{
		callMethod<void>(
			"setHeight",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setHighlightColor(jint arg0) const
	{
		callMethod<void>(
			"setHighlightColor",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setHint(jint arg0) const
	{
		callMethod<void>(
			"setHint",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setHint(JString arg0) const
	{
		callMethod<void>(
			"setHint",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void TextView::setHintTextColor(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setHintTextColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void TextView::setHintTextColor(jint arg0) const
	{
		callMethod<void>(
			"setHintTextColor",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setHorizontallyScrolling(jboolean arg0) const
	{
		callMethod<void>(
			"setHorizontallyScrolling",
			"(Z)V",
			arg0
		);
	}
	inline void TextView::setHyphenationFrequency(jint arg0) const
	{
		callMethod<void>(
			"setHyphenationFrequency",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setImeActionLabel(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"setImeActionLabel",
			"(Ljava/lang/CharSequence;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void TextView::setImeHintLocales(android::os::LocaleList arg0) const
	{
		callMethod<void>(
			"setImeHintLocales",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		);
	}
	inline void TextView::setImeOptions(jint arg0) const
	{
		callMethod<void>(
			"setImeOptions",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setIncludeFontPadding(jboolean arg0) const
	{
		callMethod<void>(
			"setIncludeFontPadding",
			"(Z)V",
			arg0
		);
	}
	inline void TextView::setInputExtras(jint arg0) const
	{
		callMethod<void>(
			"setInputExtras",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setInputType(jint arg0) const
	{
		callMethod<void>(
			"setInputType",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setJustificationMode(jint arg0) const
	{
		callMethod<void>(
			"setJustificationMode",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setKeyListener(JObject arg0) const
	{
		callMethod<void>(
			"setKeyListener",
			"(Landroid/text/method/KeyListener;)V",
			arg0.object()
		);
	}
	inline void TextView::setLastBaselineToBottomHeight(jint arg0) const
	{
		callMethod<void>(
			"setLastBaselineToBottomHeight",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setLetterSpacing(jfloat arg0) const
	{
		callMethod<void>(
			"setLetterSpacing",
			"(F)V",
			arg0
		);
	}
	inline void TextView::setLineHeight(jint arg0) const
	{
		callMethod<void>(
			"setLineHeight",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setLineSpacing(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setLineSpacing",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void TextView::setLines(jint arg0) const
	{
		callMethod<void>(
			"setLines",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setLinkTextColor(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setLinkTextColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void TextView::setLinkTextColor(jint arg0) const
	{
		callMethod<void>(
			"setLinkTextColor",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setLinksClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setLinksClickable",
			"(Z)V",
			arg0
		);
	}
	inline void TextView::setMarqueeRepeatLimit(jint arg0) const
	{
		callMethod<void>(
			"setMarqueeRepeatLimit",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setMaxEms(jint arg0) const
	{
		callMethod<void>(
			"setMaxEms",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setMaxHeight(jint arg0) const
	{
		callMethod<void>(
			"setMaxHeight",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setMaxLines(jint arg0) const
	{
		callMethod<void>(
			"setMaxLines",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setMaxWidth(jint arg0) const
	{
		callMethod<void>(
			"setMaxWidth",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setMinEms(jint arg0) const
	{
		callMethod<void>(
			"setMinEms",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setMinHeight(jint arg0) const
	{
		callMethod<void>(
			"setMinHeight",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setMinLines(jint arg0) const
	{
		callMethod<void>(
			"setMinLines",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setMinWidth(jint arg0) const
	{
		callMethod<void>(
			"setMinWidth",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setMovementMethod(JObject arg0) const
	{
		callMethod<void>(
			"setMovementMethod",
			"(Landroid/text/method/MovementMethod;)V",
			arg0.object()
		);
	}
	inline void TextView::setOnEditorActionListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnEditorActionListener",
			"(Landroid/widget/TextView$OnEditorActionListener;)V",
			arg0.object()
		);
	}
	inline void TextView::setPadding(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void TextView::setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void TextView::setPaintFlags(jint arg0) const
	{
		callMethod<void>(
			"setPaintFlags",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setPrivateImeOptions(JString arg0) const
	{
		callMethod<void>(
			"setPrivateImeOptions",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TextView::setRawInputType(jint arg0) const
	{
		callMethod<void>(
			"setRawInputType",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setScroller(android::widget::Scroller arg0) const
	{
		callMethod<void>(
			"setScroller",
			"(Landroid/widget/Scroller;)V",
			arg0.object()
		);
	}
	inline void TextView::setSelectAllOnFocus(jboolean arg0) const
	{
		callMethod<void>(
			"setSelectAllOnFocus",
			"(Z)V",
			arg0
		);
	}
	inline void TextView::setSelected(jboolean arg0) const
	{
		callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	inline void TextView::setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3) const
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
	inline void TextView::setShowSoftInputOnFocus(jboolean arg0) const
	{
		callMethod<void>(
			"setShowSoftInputOnFocus",
			"(Z)V",
			arg0
		);
	}
	inline void TextView::setSingleLine() const
	{
		callMethod<void>(
			"setSingleLine",
			"()V"
		);
	}
	inline void TextView::setSingleLine(jboolean arg0) const
	{
		callMethod<void>(
			"setSingleLine",
			"(Z)V",
			arg0
		);
	}
	inline void TextView::setSpannableFactory(android::text::Spannable_Factory arg0) const
	{
		callMethod<void>(
			"setSpannableFactory",
			"(Landroid/text/Spannable$Factory;)V",
			arg0.object()
		);
	}
	inline void TextView::setText(jint arg0) const
	{
		callMethod<void>(
			"setText",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setText(JString arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void TextView::setText(jint arg0, android::widget::TextView_BufferType arg1) const
	{
		callMethod<void>(
			"setText",
			"(ILandroid/widget/TextView$BufferType;)V",
			arg0,
			arg1.object()
		);
	}
	inline void TextView::setText(JString arg0, android::widget::TextView_BufferType arg1) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TextView::setText(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setText",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void TextView::setTextAppearance(jint arg0) const
	{
		callMethod<void>(
			"setTextAppearance",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setTextAppearance(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void TextView::setTextClassifier(JObject arg0) const
	{
		callMethod<void>(
			"setTextClassifier",
			"(Landroid/view/textclassifier/TextClassifier;)V",
			arg0.object()
		);
	}
	inline void TextView::setTextColor(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setTextColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void TextView::setTextColor(jint arg0) const
	{
		callMethod<void>(
			"setTextColor",
			"(I)V",
			arg0
		);
	}
	inline void TextView::setTextIsSelectable(jboolean arg0) const
	{
		callMethod<void>(
			"setTextIsSelectable",
			"(Z)V",
			arg0
		);
	}
	inline void TextView::setTextKeepState(JString arg0) const
	{
		callMethod<void>(
			"setTextKeepState",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void TextView::setTextKeepState(JString arg0, android::widget::TextView_BufferType arg1) const
	{
		callMethod<void>(
			"setTextKeepState",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TextView::setTextLocale(java::util::Locale arg0) const
	{
		callMethod<void>(
			"setTextLocale",
			"(Ljava/util/Locale;)V",
			arg0.object()
		);
	}
	inline void TextView::setTextLocales(android::os::LocaleList arg0) const
	{
		callMethod<void>(
			"setTextLocales",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		);
	}
	inline void TextView::setTextMetricsParams(android::text::PrecomputedText_Params arg0) const
	{
		callMethod<void>(
			"setTextMetricsParams",
			"(Landroid/text/PrecomputedText$Params;)V",
			arg0.object()
		);
	}
	inline void TextView::setTextScaleX(jfloat arg0) const
	{
		callMethod<void>(
			"setTextScaleX",
			"(F)V",
			arg0
		);
	}
	inline void TextView::setTextSize(jfloat arg0) const
	{
		callMethod<void>(
			"setTextSize",
			"(F)V",
			arg0
		);
	}
	inline void TextView::setTextSize(jint arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setTextSize",
			"(IF)V",
			arg0,
			arg1
		);
	}
	inline void TextView::setTransformationMethod(JObject arg0) const
	{
		callMethod<void>(
			"setTransformationMethod",
			"(Landroid/text/method/TransformationMethod;)V",
			arg0.object()
		);
	}
	inline void TextView::setTypeface(android::graphics::Typeface arg0) const
	{
		callMethod<void>(
			"setTypeface",
			"(Landroid/graphics/Typeface;)V",
			arg0.object()
		);
	}
	inline void TextView::setTypeface(android::graphics::Typeface arg0, jint arg1) const
	{
		callMethod<void>(
			"setTypeface",
			"(Landroid/graphics/Typeface;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void TextView::setWidth(jint arg0) const
	{
		callMethod<void>(
			"setWidth",
			"(I)V",
			arg0
		);
	}
	inline jboolean TextView::showContextMenu() const
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"()Z"
		);
	}
	inline jboolean TextView::showContextMenu(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"(FF)Z",
			arg0,
			arg1
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
