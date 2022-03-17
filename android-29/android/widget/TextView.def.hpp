#pragma once

#include "../view/View.def.hpp"

class JCharArray;
class JIntArray;
class JArray;
class JArray;
class JArray;
namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::graphics
{
	class BlendMode;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class PorterDuff_Mode;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class Typeface;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class LocaleList;
}
namespace android::text
{
	class Editable_Factory;
}
namespace android::text
{
	class Layout;
}
namespace android::text
{
	class PrecomputedText_Params;
}
namespace android::text
{
	class Spannable_Factory;
}
namespace android::text
{
	class TextPaint;
}
namespace android::text
{
	class TextUtils_TruncateAt;
}
namespace android::view
{
	class DragEvent;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class PointerIcon;
}
namespace android::view
{
	class View;
}
namespace android::view::accessibility
{
	class AccessibilityEvent;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}
namespace android::view::autofill
{
	class AutofillValue;
}
namespace android::view::inputmethod
{
	class CompletionInfo;
}
namespace android::view::inputmethod
{
	class CorrectionInfo;
}
namespace android::view::inputmethod
{
	class EditorInfo;
}
namespace android::view::inputmethod
{
	class ExtractedText;
}
namespace android::view::inputmethod
{
	class ExtractedTextRequest;
}
namespace android::widget
{
	class Scroller;
}
namespace android::widget
{
	class TextView_BufferType;
}
class JString;
class JString;
namespace java::util
{
	class ArrayList;
}
namespace java::util
{
	class Locale;
}

namespace android::widget
{
	class TextView : public android::view::View
	{
	public:
		// Fields
		static jint AUTO_SIZE_TEXT_TYPE_NONE();
		static jint AUTO_SIZE_TEXT_TYPE_UNIFORM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextView(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		TextView(QAndroidJniObject obj) : android::view::View(obj) {}
		
		// Constructors
		TextView(android::content::Context arg0);
		TextView(android::content::Context arg0, JObject arg1);
		TextView(android::content::Context arg0, JObject arg1, jint arg2);
		TextView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void addExtraDataToAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0, JString arg1, android::os::Bundle arg2) const;
		void addTextChangedListener(JObject arg0) const;
		void append(JString arg0) const;
		void append(JString arg0, jint arg1, jint arg2) const;
		void autofill(android::view::autofill::AutofillValue arg0) const;
		void beginBatchEdit() const;
		jboolean bringPointIntoView(jint arg0) const;
		void cancelLongPress() const;
		void clearComposingText() const;
		void computeScroll() const;
		void debug(jint arg0) const;
		jboolean didTouchFocusSelect() const;
		void drawableHotspotChanged(jfloat arg0, jfloat arg1) const;
		void endBatchEdit() const;
		jboolean extractText(android::view::inputmethod::ExtractedTextRequest arg0, android::view::inputmethod::ExtractedText arg1) const;
		void findViewsWithText(java::util::ArrayList arg0, JString arg1, jint arg2) const;
		JString getAccessibilityClassName() const;
		jint getAutoLinkMask() const;
		jint getAutoSizeMaxTextSize() const;
		jint getAutoSizeMinTextSize() const;
		jint getAutoSizeStepGranularity() const;
		JIntArray getAutoSizeTextAvailableSizes() const;
		jint getAutoSizeTextType() const;
		jint getAutofillType() const;
		android::view::autofill::AutofillValue getAutofillValue() const;
		jint getBaseline() const;
		jint getBreakStrategy() const;
		jint getCompoundDrawablePadding() const;
		android::graphics::BlendMode getCompoundDrawableTintBlendMode() const;
		android::content::res::ColorStateList getCompoundDrawableTintList() const;
		android::graphics::PorterDuff_Mode getCompoundDrawableTintMode() const;
		JArray getCompoundDrawables() const;
		JArray getCompoundDrawablesRelative() const;
		jint getCompoundPaddingBottom() const;
		jint getCompoundPaddingEnd() const;
		jint getCompoundPaddingLeft() const;
		jint getCompoundPaddingRight() const;
		jint getCompoundPaddingStart() const;
		jint getCompoundPaddingTop() const;
		jint getCurrentHintTextColor() const;
		jint getCurrentTextColor() const;
		JObject getCustomInsertionActionModeCallback() const;
		JObject getCustomSelectionActionModeCallback() const;
		JObject getEditableText() const;
		android::text::TextUtils_TruncateAt getEllipsize() const;
		JString getError() const;
		jint getExtendedPaddingBottom() const;
		jint getExtendedPaddingTop() const;
		JArray getFilters() const;
		jint getFirstBaselineToTopHeight() const;
		void getFocusedRect(android::graphics::Rect arg0) const;
		JString getFontFeatureSettings() const;
		JString getFontVariationSettings() const;
		jboolean getFreezesText() const;
		jint getGravity() const;
		jint getHighlightColor() const;
		JString getHint() const;
		android::content::res::ColorStateList getHintTextColors() const;
		jint getHyphenationFrequency() const;
		jint getImeActionId() const;
		JString getImeActionLabel() const;
		android::os::LocaleList getImeHintLocales() const;
		jint getImeOptions() const;
		jboolean getIncludeFontPadding() const;
		android::os::Bundle getInputExtras(jboolean arg0) const;
		jint getInputType() const;
		jint getJustificationMode() const;
		JObject getKeyListener() const;
		jint getLastBaselineToBottomHeight() const;
		android::text::Layout getLayout() const;
		jfloat getLetterSpacing() const;
		jint getLineBounds(jint arg0, android::graphics::Rect arg1) const;
		jint getLineCount() const;
		jint getLineHeight() const;
		jfloat getLineSpacingExtra() const;
		jfloat getLineSpacingMultiplier() const;
		android::content::res::ColorStateList getLinkTextColors() const;
		jboolean getLinksClickable() const;
		jint getMarqueeRepeatLimit() const;
		jint getMaxEms() const;
		jint getMaxHeight() const;
		jint getMaxLines() const;
		jint getMaxWidth() const;
		jint getMinEms() const;
		jint getMinHeight() const;
		jint getMinLines() const;
		jint getMinWidth() const;
		JObject getMovementMethod() const;
		jint getOffsetForPosition(jfloat arg0, jfloat arg1) const;
		android::text::TextPaint getPaint() const;
		jint getPaintFlags() const;
		JString getPrivateImeOptions() const;
		jint getSelectionEnd() const;
		jint getSelectionStart() const;
		jint getShadowColor() const;
		jfloat getShadowDx() const;
		jfloat getShadowDy() const;
		jfloat getShadowRadius() const;
		jboolean getShowSoftInputOnFocus() const;
		JString getText() const;
		JObject getTextClassifier() const;
		android::content::res::ColorStateList getTextColors() const;
		android::graphics::drawable::Drawable getTextCursorDrawable() const;
		JObject getTextDirectionHeuristic() const;
		java::util::Locale getTextLocale() const;
		android::os::LocaleList getTextLocales() const;
		android::text::PrecomputedText_Params getTextMetricsParams() const;
		jfloat getTextScaleX() const;
		android::graphics::drawable::Drawable getTextSelectHandle() const;
		android::graphics::drawable::Drawable getTextSelectHandleLeft() const;
		android::graphics::drawable::Drawable getTextSelectHandleRight() const;
		jfloat getTextSize() const;
		jint getTotalPaddingBottom() const;
		jint getTotalPaddingEnd() const;
		jint getTotalPaddingLeft() const;
		jint getTotalPaddingRight() const;
		jint getTotalPaddingStart() const;
		jint getTotalPaddingTop() const;
		JObject getTransformationMethod() const;
		android::graphics::Typeface getTypeface() const;
		JArray getUrls() const;
		jboolean hasOverlappingRendering() const;
		jboolean hasSelection() const;
		void invalidateDrawable(android::graphics::drawable::Drawable arg0) const;
		jboolean isAllCaps() const;
		jboolean isCursorVisible() const;
		jboolean isElegantTextHeight() const;
		jboolean isFallbackLineSpacing() const;
		jboolean isHorizontallyScrollable() const;
		jboolean isInputMethodTarget() const;
		jboolean isSingleLine() const;
		jboolean isSuggestionsEnabled() const;
		jboolean isTextSelectable() const;
		void jumpDrawablesToCurrentState() const;
		jint length() const;
		jboolean moveCursorToVisibleOffset() const;
		void onBeginBatchEdit() const;
		jboolean onCheckIsTextEditor() const;
		void onCommitCompletion(android::view::inputmethod::CompletionInfo arg0) const;
		void onCommitCorrection(android::view::inputmethod::CorrectionInfo arg0) const;
		JObject onCreateInputConnection(android::view::inputmethod::EditorInfo arg0) const;
		jboolean onDragEvent(android::view::DragEvent arg0) const;
		void onEditorAction(jint arg0) const;
		void onEndBatchEdit() const;
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0) const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const;
		jboolean onKeyPreIme(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyShortcut(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onPreDraw() const;
		jboolean onPrivateIMECommand(JString arg0, android::os::Bundle arg1) const;
		android::view::PointerIcon onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const;
		void onRestoreInstanceState(JObject arg0) const;
		void onRtlPropertiesChanged(jint arg0) const;
		JObject onSaveInstanceState() const;
		void onScreenStateChanged(jint arg0) const;
		jboolean onTextContextMenuItem(jint arg0) const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		jboolean onTrackballEvent(android::view::MotionEvent arg0) const;
		void onWindowFocusChanged(jboolean arg0) const;
		jboolean performLongClick() const;
		void removeTextChangedListener(JObject arg0) const;
		void sendAccessibilityEventUnchecked(android::view::accessibility::AccessibilityEvent arg0) const;
		void setAllCaps(jboolean arg0) const;
		void setAutoLinkMask(jint arg0) const;
		void setAutoSizeTextTypeUniformWithConfiguration(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setAutoSizeTextTypeUniformWithPresetSizes(JIntArray arg0, jint arg1) const;
		void setAutoSizeTextTypeWithDefaults(jint arg0) const;
		void setBreakStrategy(jint arg0) const;
		void setCompoundDrawablePadding(jint arg0) const;
		void setCompoundDrawableTintBlendMode(android::graphics::BlendMode arg0) const;
		void setCompoundDrawableTintList(android::content::res::ColorStateList arg0) const;
		void setCompoundDrawableTintMode(android::graphics::PorterDuff_Mode arg0) const;
		void setCompoundDrawables(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3) const;
		void setCompoundDrawablesRelative(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3) const;
		void setCompoundDrawablesRelativeWithIntrinsicBounds(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3) const;
		void setCompoundDrawablesRelativeWithIntrinsicBounds(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setCompoundDrawablesWithIntrinsicBounds(android::graphics::drawable::Drawable arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2, android::graphics::drawable::Drawable arg3) const;
		void setCompoundDrawablesWithIntrinsicBounds(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setCursorVisible(jboolean arg0) const;
		void setCustomInsertionActionModeCallback(JObject arg0) const;
		void setCustomSelectionActionModeCallback(JObject arg0) const;
		void setEditableFactory(android::text::Editable_Factory arg0) const;
		void setElegantTextHeight(jboolean arg0) const;
		void setEllipsize(android::text::TextUtils_TruncateAt arg0) const;
		void setEms(jint arg0) const;
		void setEnabled(jboolean arg0) const;
		void setError(JString arg0) const;
		void setError(JString arg0, android::graphics::drawable::Drawable arg1) const;
		void setExtractedText(android::view::inputmethod::ExtractedText arg0) const;
		void setFallbackLineSpacing(jboolean arg0) const;
		void setFilters(JArray arg0) const;
		void setFirstBaselineToTopHeight(jint arg0) const;
		void setFontFeatureSettings(JString arg0) const;
		jboolean setFontVariationSettings(JString arg0) const;
		void setFreezesText(jboolean arg0) const;
		void setGravity(jint arg0) const;
		void setHeight(jint arg0) const;
		void setHighlightColor(jint arg0) const;
		void setHint(jint arg0) const;
		void setHint(JString arg0) const;
		void setHintTextColor(android::content::res::ColorStateList arg0) const;
		void setHintTextColor(jint arg0) const;
		void setHorizontallyScrolling(jboolean arg0) const;
		void setHyphenationFrequency(jint arg0) const;
		void setImeActionLabel(JString arg0, jint arg1) const;
		void setImeHintLocales(android::os::LocaleList arg0) const;
		void setImeOptions(jint arg0) const;
		void setIncludeFontPadding(jboolean arg0) const;
		void setInputExtras(jint arg0) const;
		void setInputType(jint arg0) const;
		void setJustificationMode(jint arg0) const;
		void setKeyListener(JObject arg0) const;
		void setLastBaselineToBottomHeight(jint arg0) const;
		void setLetterSpacing(jfloat arg0) const;
		void setLineHeight(jint arg0) const;
		void setLineSpacing(jfloat arg0, jfloat arg1) const;
		void setLines(jint arg0) const;
		void setLinkTextColor(android::content::res::ColorStateList arg0) const;
		void setLinkTextColor(jint arg0) const;
		void setLinksClickable(jboolean arg0) const;
		void setMarqueeRepeatLimit(jint arg0) const;
		void setMaxEms(jint arg0) const;
		void setMaxHeight(jint arg0) const;
		void setMaxLines(jint arg0) const;
		void setMaxWidth(jint arg0) const;
		void setMinEms(jint arg0) const;
		void setMinHeight(jint arg0) const;
		void setMinLines(jint arg0) const;
		void setMinWidth(jint arg0) const;
		void setMovementMethod(JObject arg0) const;
		void setOnEditorActionListener(JObject arg0) const;
		void setPadding(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setPaintFlags(jint arg0) const;
		void setPrivateImeOptions(JString arg0) const;
		void setRawInputType(jint arg0) const;
		void setScroller(android::widget::Scroller arg0) const;
		void setSelectAllOnFocus(jboolean arg0) const;
		void setSelected(jboolean arg0) const;
		void setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3) const;
		void setShowSoftInputOnFocus(jboolean arg0) const;
		void setSingleLine() const;
		void setSingleLine(jboolean arg0) const;
		void setSpannableFactory(android::text::Spannable_Factory arg0) const;
		void setText(jint arg0) const;
		void setText(JString arg0) const;
		void setText(jint arg0, android::widget::TextView_BufferType arg1) const;
		void setText(JString arg0, android::widget::TextView_BufferType arg1) const;
		void setText(JCharArray arg0, jint arg1, jint arg2) const;
		void setTextAppearance(jint arg0) const;
		void setTextAppearance(android::content::Context arg0, jint arg1) const;
		void setTextClassifier(JObject arg0) const;
		void setTextColor(android::content::res::ColorStateList arg0) const;
		void setTextColor(jint arg0) const;
		void setTextCursorDrawable(android::graphics::drawable::Drawable arg0) const;
		void setTextCursorDrawable(jint arg0) const;
		void setTextIsSelectable(jboolean arg0) const;
		void setTextKeepState(JString arg0) const;
		void setTextKeepState(JString arg0, android::widget::TextView_BufferType arg1) const;
		void setTextLocale(java::util::Locale arg0) const;
		void setTextLocales(android::os::LocaleList arg0) const;
		void setTextMetricsParams(android::text::PrecomputedText_Params arg0) const;
		void setTextScaleX(jfloat arg0) const;
		void setTextSelectHandle(android::graphics::drawable::Drawable arg0) const;
		void setTextSelectHandle(jint arg0) const;
		void setTextSelectHandleLeft(android::graphics::drawable::Drawable arg0) const;
		void setTextSelectHandleLeft(jint arg0) const;
		void setTextSelectHandleRight(android::graphics::drawable::Drawable arg0) const;
		void setTextSelectHandleRight(jint arg0) const;
		void setTextSize(jfloat arg0) const;
		void setTextSize(jint arg0, jfloat arg1) const;
		void setTransformationMethod(JObject arg0) const;
		void setTypeface(android::graphics::Typeface arg0) const;
		void setTypeface(android::graphics::Typeface arg0, jint arg1) const;
		void setWidth(jint arg0) const;
		jboolean showContextMenu() const;
		jboolean showContextMenu(jfloat arg0, jfloat arg1) const;
	};
} // namespace android::widget

