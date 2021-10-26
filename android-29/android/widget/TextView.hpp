#pragma once

#ifndef ANDROID_WIDGET_TEXTVIEW
#define ANDROID_WIDGET_TEXTVIEW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::widget
{
	class TextView_BufferType;
}
namespace __jni_impl::android::graphics
{
	class Typeface;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::os
{
	class LocaleList;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}
namespace __jni_impl::android::view
{
	class PointerIcon;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityEvent;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillValue;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view::inputmethod
{
	class EditorInfo;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::view
{
	class DragEvent;
}
namespace __jni_impl::android::text
{
	class Layout;
}
namespace __jni_impl::android::text
{
	class TextPaint;
}
namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
namespace __jni_impl::android::graphics
{
	class PorterDuff_Mode;
}
namespace __jni_impl::android::graphics
{
	class BlendMode;
}
namespace __jni_impl::android::text
{
	class PrecomputedText_Params;
}
namespace __jni_impl::android::text
{
	class Editable_Factory;
}
namespace __jni_impl::android::text
{
	class Spannable_Factory;
}
namespace __jni_impl::android::view::inputmethod
{
	class ExtractedTextRequest;
}
namespace __jni_impl::android::view::inputmethod
{
	class ExtractedText;
}
namespace __jni_impl::android::view::inputmethod
{
	class CompletionInfo;
}
namespace __jni_impl::android::view::inputmethod
{
	class CorrectionInfo;
}
namespace __jni_impl::android::text
{
	class TextUtils_TruncateAt;
}
namespace __jni_impl::android::widget
{
	class Scroller;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}

namespace __jni_impl::android::widget
{
	class TextView : public __jni_impl::android::view::View
	{
	public:
		// Fields
		static jint AUTO_SIZE_TEXT_TYPE_NONE();
		static jint AUTO_SIZE_TEXT_TYPE_UNIFORM();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jint length();
		void append(jstring arg0);
		void append(const QString &arg0);
		void append(jstring arg0, jint arg1, jint arg2);
		void append(const QString &arg0, jint arg1, jint arg2);
		void debug(jint arg0);
		void setError(jstring arg0);
		void setError(const QString &arg0);
		void setError(jstring arg0, __jni_impl::android::graphics::drawable::Drawable arg1);
		void setError(const QString &arg0, __jni_impl::android::graphics::drawable::Drawable arg1);
		void setText(jstring arg0);
		void setText(const QString &arg0);
		void setText(jint arg0);
		void setText(jint arg0, __jni_impl::android::widget::TextView_BufferType arg1);
		void setText(jcharArray arg0, jint arg1, jint arg2);
		void setText(jstring arg0, __jni_impl::android::widget::TextView_BufferType arg1);
		void setText(const QString &arg0, __jni_impl::android::widget::TextView_BufferType arg1);
		jstring getText();
		void setBreakStrategy(jint arg0);
		void setHyphenationFrequency(jint arg0);
		QAndroidJniObject getTypeface();
		void setTypeface(__jni_impl::android::graphics::Typeface arg0);
		void setTypeface(__jni_impl::android::graphics::Typeface arg0, jint arg1);
		void setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3);
		QAndroidJniObject getTextLocale();
		QAndroidJniObject getTextLocales();
		void setTextLocale(__jni_impl::java::util::Locale arg0);
		void setTextLocales(__jni_impl::android::os::LocaleList arg0);
		jboolean isElegantTextHeight();
		void setElegantTextHeight(jboolean arg0);
		jfloat getTextSize();
		void setTextSize(jint arg0, jfloat arg1);
		void setTextSize(jfloat arg0);
		jfloat getTextScaleX();
		void setTextScaleX(jfloat arg0);
		jfloat getLetterSpacing();
		void setLetterSpacing(jfloat arg0);
		jstring getFontFeatureSettings();
		void setFontFeatureSettings(jstring arg0);
		void setFontFeatureSettings(const QString &arg0);
		jstring getFontVariationSettings();
		jboolean setFontVariationSettings(jstring arg0);
		jboolean setFontVariationSettings(const QString &arg0);
		jint getBreakStrategy();
		jint getHyphenationFrequency();
		void findViewsWithText(__jni_impl::java::util::ArrayList arg0, jstring arg1, jint arg2);
		void findViewsWithText(__jni_impl::java::util::ArrayList arg0, const QString &arg1, jint arg2);
		QAndroidJniObject onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1);
		jstring getAccessibilityClassName();
		void jumpDrawablesToCurrentState();
		jboolean performLongClick();
		jboolean showContextMenu();
		jboolean showContextMenu(jfloat arg0, jfloat arg1);
		void sendAccessibilityEventUnchecked(__jni_impl::android::view::accessibility::AccessibilityEvent arg0);
		void autofill(__jni_impl::android::view::autofill::AutofillValue arg0);
		jint getAutofillType();
		QAndroidJniObject getAutofillValue();
		void addExtraDataToAccessibilityNodeInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		void addExtraDataToAccessibilityNodeInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2);
		void setEnabled(jboolean arg0);
		jboolean onKeyPreIme(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onCheckIsTextEditor();
		QAndroidJniObject onCreateInputConnection(__jni_impl::android::view::inputmethod::EditorInfo arg0);
		void cancelLongPress();
		jboolean hasOverlappingRendering();
		void getFocusedRect(__jni_impl::android::graphics::Rect arg0);
		void computeScroll();
		void onScreenStateChanged(jint arg0);
		void onRtlPropertiesChanged(jint arg0);
		void invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		void setPadding(jint arg0, jint arg1, jint arg2, jint arg3);
		void setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3);
		void setSelected(jboolean arg0);
		jint getBaseline();
		jboolean onDragEvent(__jni_impl::android::view::DragEvent arg0);
		void setWidth(jint arg0);
		void setHeight(jint arg0);
		QAndroidJniObject getLayout();
		void setHighlightColor(jint arg0);
		jint getHighlightColor();
		jint getLineCount();
		QAndroidJniObject getPaint();
		jint getLineBounds(jint arg0, __jni_impl::android::graphics::Rect arg1);
		void setAutoSizeTextTypeWithDefaults(jint arg0);
		void setAutoSizeTextTypeUniformWithConfiguration(jint arg0, jint arg1, jint arg2, jint arg3);
		void setAutoSizeTextTypeUniformWithPresetSizes(jintArray arg0, jint arg1);
		jint getAutoSizeTextType();
		jint getAutoSizeStepGranularity();
		jint getAutoSizeMinTextSize();
		jint getAutoSizeMaxTextSize();
		jintArray getAutoSizeTextAvailableSizes();
		QAndroidJniObject getEditableText();
		jint getLineHeight();
		QAndroidJniObject getKeyListener();
		void setKeyListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getMovementMethod();
		void setMovementMethod(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getTransformationMethod();
		void setTransformationMethod(__jni_impl::__JniBaseClass arg0);
		jint getCompoundPaddingTop();
		jint getCompoundPaddingBottom();
		jint getCompoundPaddingLeft();
		jint getCompoundPaddingRight();
		jint getCompoundPaddingStart();
		jint getCompoundPaddingEnd();
		jint getExtendedPaddingTop();
		jint getExtendedPaddingBottom();
		jint getTotalPaddingLeft();
		jint getTotalPaddingRight();
		jint getTotalPaddingStart();
		jint getTotalPaddingEnd();
		jint getTotalPaddingTop();
		jint getTotalPaddingBottom();
		void setCompoundDrawables(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2, __jni_impl::android::graphics::drawable::Drawable arg3);
		void setCompoundDrawablesWithIntrinsicBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void setCompoundDrawablesWithIntrinsicBounds(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2, __jni_impl::android::graphics::drawable::Drawable arg3);
		void setCompoundDrawablesRelative(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2, __jni_impl::android::graphics::drawable::Drawable arg3);
		void setCompoundDrawablesRelativeWithIntrinsicBounds(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2, __jni_impl::android::graphics::drawable::Drawable arg3);
		void setCompoundDrawablesRelativeWithIntrinsicBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		jarray getCompoundDrawables();
		jarray getCompoundDrawablesRelative();
		void setCompoundDrawablePadding(jint arg0);
		jint getCompoundDrawablePadding();
		void setCompoundDrawableTintList(__jni_impl::android::content::res::ColorStateList arg0);
		QAndroidJniObject getCompoundDrawableTintList();
		void setCompoundDrawableTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		void setCompoundDrawableTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		QAndroidJniObject getCompoundDrawableTintMode();
		QAndroidJniObject getCompoundDrawableTintBlendMode();
		void setFirstBaselineToTopHeight(jint arg0);
		void setLastBaselineToBottomHeight(jint arg0);
		jint getFirstBaselineToTopHeight();
		jint getLastBaselineToBottomHeight();
		jint getAutoLinkMask();
		void setTextSelectHandle(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setTextSelectHandle(jint arg0);
		QAndroidJniObject getTextSelectHandle();
		void setTextSelectHandleLeft(jint arg0);
		void setTextSelectHandleLeft(__jni_impl::android::graphics::drawable::Drawable arg0);
		QAndroidJniObject getTextSelectHandleLeft();
		void setTextSelectHandleRight(jint arg0);
		void setTextSelectHandleRight(__jni_impl::android::graphics::drawable::Drawable arg0);
		QAndroidJniObject getTextSelectHandleRight();
		void setTextCursorDrawable(jint arg0);
		void setTextCursorDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		QAndroidJniObject getTextCursorDrawable();
		void setTextAppearance(__jni_impl::android::content::Context arg0, jint arg1);
		void setTextAppearance(jint arg0);
		void setFallbackLineSpacing(jboolean arg0);
		jboolean isFallbackLineSpacing();
		QAndroidJniObject getTextMetricsParams();
		void setTextMetricsParams(__jni_impl::android::text::PrecomputedText_Params arg0);
		void setJustificationMode(jint arg0);
		jint getJustificationMode();
		void setTextColor(__jni_impl::android::content::res::ColorStateList arg0);
		void setTextColor(jint arg0);
		QAndroidJniObject getTextColors();
		jint getCurrentTextColor();
		void setShowSoftInputOnFocus(jboolean arg0);
		jboolean getShowSoftInputOnFocus();
		jfloat getShadowRadius();
		jfloat getShadowDx();
		jfloat getShadowDy();
		jint getShadowColor();
		void setAutoLinkMask(jint arg0);
		void setLinksClickable(jboolean arg0);
		jboolean getLinksClickable();
		jarray getUrls();
		void setHintTextColor(__jni_impl::android::content::res::ColorStateList arg0);
		void setHintTextColor(jint arg0);
		QAndroidJniObject getHintTextColors();
		jint getCurrentHintTextColor();
		void setLinkTextColor(jint arg0);
		void setLinkTextColor(__jni_impl::android::content::res::ColorStateList arg0);
		QAndroidJniObject getLinkTextColors();
		void setGravity(jint arg0);
		jint getGravity();
		jint getPaintFlags();
		void setPaintFlags(jint arg0);
		void setHorizontallyScrolling(jboolean arg0);
		jboolean isHorizontallyScrollable();
		void setMinLines(jint arg0);
		jint getMinLines();
		void setMinHeight(jint arg0);
		jint getMinHeight();
		void setMaxLines(jint arg0);
		jint getMaxLines();
		void setMaxHeight(jint arg0);
		jint getMaxHeight();
		void setLines(jint arg0);
		void setMinEms(jint arg0);
		jint getMinEms();
		void setMinWidth(jint arg0);
		jint getMinWidth();
		void setMaxEms(jint arg0);
		jint getMaxEms();
		void setMaxWidth(jint arg0);
		jint getMaxWidth();
		void setEms(jint arg0);
		void setLineSpacing(jfloat arg0, jfloat arg1);
		jfloat getLineSpacingMultiplier();
		jfloat getLineSpacingExtra();
		void setLineHeight(jint arg0);
		void setFreezesText(jboolean arg0);
		jboolean getFreezesText();
		void setEditableFactory(__jni_impl::android::text::Editable_Factory arg0);
		void setSpannableFactory(__jni_impl::android::text::Spannable_Factory arg0);
		void setTextKeepState(jstring arg0);
		void setTextKeepState(const QString &arg0);
		void setTextKeepState(jstring arg0, __jni_impl::android::widget::TextView_BufferType arg1);
		void setTextKeepState(const QString &arg0, __jni_impl::android::widget::TextView_BufferType arg1);
		void setHint(jint arg0);
		void setHint(jstring arg0);
		void setHint(const QString &arg0);
		jstring getHint();
		jboolean isSingleLine();
		void setInputType(jint arg0);
		void setRawInputType(jint arg0);
		jint getInputType();
		void setImeOptions(jint arg0);
		jint getImeOptions();
		void setImeActionLabel(jstring arg0, jint arg1);
		void setImeActionLabel(const QString &arg0, jint arg1);
		jstring getImeActionLabel();
		jint getImeActionId();
		void setOnEditorActionListener(__jni_impl::__JniBaseClass arg0);
		void onEditorAction(jint arg0);
		void setPrivateImeOptions(jstring arg0);
		void setPrivateImeOptions(const QString &arg0);
		jstring getPrivateImeOptions();
		void setInputExtras(jint arg0);
		QAndroidJniObject getInputExtras(jboolean arg0);
		void setImeHintLocales(__jni_impl::android::os::LocaleList arg0);
		QAndroidJniObject getImeHintLocales();
		jstring getError();
		void setFilters(jarray arg0);
		jarray getFilters();
		jboolean onPreDraw();
		jboolean isTextSelectable();
		void setTextIsSelectable(jboolean arg0);
		jboolean extractText(__jni_impl::android::view::inputmethod::ExtractedTextRequest arg0, __jni_impl::android::view::inputmethod::ExtractedText arg1);
		void setExtractedText(__jni_impl::android::view::inputmethod::ExtractedText arg0);
		void onCommitCompletion(__jni_impl::android::view::inputmethod::CompletionInfo arg0);
		void onCommitCorrection(__jni_impl::android::view::inputmethod::CorrectionInfo arg0);
		void beginBatchEdit();
		void endBatchEdit();
		void onBeginBatchEdit();
		void onEndBatchEdit();
		jboolean onPrivateIMECommand(jstring arg0, __jni_impl::android::os::Bundle arg1);
		jboolean onPrivateIMECommand(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		void setIncludeFontPadding(jboolean arg0);
		jboolean getIncludeFontPadding();
		jboolean bringPointIntoView(jint arg0);
		jboolean moveCursorToVisibleOffset();
		jint getSelectionStart();
		jint getSelectionEnd();
		jboolean hasSelection();
		void setSingleLine(jboolean arg0);
		void setSingleLine();
		void setAllCaps(jboolean arg0);
		jboolean isAllCaps();
		void setEllipsize(__jni_impl::android::text::TextUtils_TruncateAt arg0);
		void setMarqueeRepeatLimit(jint arg0);
		jint getMarqueeRepeatLimit();
		QAndroidJniObject getEllipsize();
		void setSelectAllOnFocus(jboolean arg0);
		void setCursorVisible(jboolean arg0);
		jboolean isCursorVisible();
		void addTextChangedListener(__jni_impl::__JniBaseClass arg0);
		void removeTextChangedListener(__jni_impl::__JniBaseClass arg0);
		void clearComposingText();
		jboolean didTouchFocusSelect();
		void setScroller(__jni_impl::android::widget::Scroller arg0);
		jboolean isInputMethodTarget();
		jboolean onTextContextMenuItem(jint arg0);
		jboolean isSuggestionsEnabled();
		void setCustomSelectionActionModeCallback(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getCustomSelectionActionModeCallback();
		void setCustomInsertionActionModeCallback(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getCustomInsertionActionModeCallback();
		void setTextClassifier(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getTextClassifier();
		jint getOffsetForPosition(jfloat arg0, jfloat arg1);
		QAndroidJniObject getTextDirectionHeuristic();
		void onRestoreInstanceState(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject onSaveInstanceState();
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2);
		jboolean onKeyShortcut(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		void onWindowFocusChanged(jboolean arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "TextView_BufferType.hpp"
#include "../graphics/Typeface.hpp"
#include "../../java/util/Locale.hpp"
#include "../os/LocaleList.hpp"
#include "../../java/util/ArrayList.hpp"
#include "../view/PointerIcon.hpp"
#include "../view/MotionEvent.hpp"
#include "../graphics/Rect.hpp"
#include "../view/accessibility/AccessibilityEvent.hpp"
#include "../view/autofill/AutofillValue.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.hpp"
#include "../os/Bundle.hpp"
#include "../view/View.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/inputmethod/EditorInfo.hpp"
#include "../graphics/Canvas.hpp"
#include "../view/DragEvent.hpp"
#include "../text/Layout.hpp"
#include "../text/TextPaint.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/BlendMode.hpp"
#include "../text/PrecomputedText_Params.hpp"
#include "../text/Editable_Factory.hpp"
#include "../text/Spannable_Factory.hpp"
#include "../view/inputmethod/ExtractedTextRequest.hpp"
#include "../view/inputmethod/ExtractedText.hpp"
#include "../view/inputmethod/CompletionInfo.hpp"
#include "../view/inputmethod/CorrectionInfo.hpp"
#include "../text/TextUtils_TruncateAt.hpp"
#include "Scroller.hpp"
#include "../content/res/Configuration.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint TextView::AUTO_SIZE_TEXT_TYPE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.TextView",
			"AUTO_SIZE_TEXT_TYPE_NONE"
		);
	}
	jint TextView::AUTO_SIZE_TEXT_TYPE_UNIFORM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.TextView",
			"AUTO_SIZE_TEXT_TYPE_UNIFORM"
		);
	}
	
	// Constructors
	void TextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void TextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void TextView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TextView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint TextView::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	void TextView::append(jstring arg0)
	{
		__thiz.callMethod<void>(
			"append",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextView::append(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"append",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TextView::append(jstring arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"append",
			"(Ljava/lang/CharSequence;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void TextView::append(const QString &arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"append",
			"(Ljava/lang/CharSequence;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void TextView::debug(jint arg0)
	{
		__thiz.callMethod<void>(
			"debug",
			"(I)V",
			arg0
		);
	}
	void TextView::setError(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextView::setError(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TextView::setError(jstring arg0, __jni_impl::android::graphics::drawable::Drawable arg1)
	{
		__thiz.callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TextView::setError(const QString &arg0, __jni_impl::android::graphics::drawable::Drawable arg1)
	{
		__thiz.callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Drawable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void TextView::setText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextView::setText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TextView::setText(jint arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(I)V",
			arg0
		);
	}
	void TextView::setText(jint arg0, __jni_impl::android::widget::TextView_BufferType arg1)
	{
		__thiz.callMethod<void>(
			"setText",
			"(ILandroid/widget/TextView$BufferType;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TextView::setText(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setText",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void TextView::setText(jstring arg0, __jni_impl::android::widget::TextView_BufferType arg1)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TextView::setText(const QString &arg0, __jni_impl::android::widget::TextView_BufferType arg1)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jstring TextView::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void TextView::setBreakStrategy(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBreakStrategy",
			"(I)V",
			arg0
		);
	}
	void TextView::setHyphenationFrequency(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHyphenationFrequency",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject TextView::getTypeface()
	{
		return __thiz.callObjectMethod(
			"getTypeface",
			"()Landroid/graphics/Typeface;"
		);
	}
	void TextView::setTypeface(__jni_impl::android::graphics::Typeface arg0)
	{
		__thiz.callMethod<void>(
			"setTypeface",
			"(Landroid/graphics/Typeface;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setTypeface(__jni_impl::android::graphics::Typeface arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setTypeface",
			"(Landroid/graphics/Typeface;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void TextView::setShadowLayer(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setShadowLayer",
			"(FFFI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject TextView::getTextLocale()
	{
		return __thiz.callObjectMethod(
			"getTextLocale",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject TextView::getTextLocales()
	{
		return __thiz.callObjectMethod(
			"getTextLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	void TextView::setTextLocale(__jni_impl::java::util::Locale arg0)
	{
		__thiz.callMethod<void>(
			"setTextLocale",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setTextLocales(__jni_impl::android::os::LocaleList arg0)
	{
		__thiz.callMethod<void>(
			"setTextLocales",
			"(Landroid/os/LocaleList;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean TextView::isElegantTextHeight()
	{
		return __thiz.callMethod<jboolean>(
			"isElegantTextHeight",
			"()Z"
		);
	}
	void TextView::setElegantTextHeight(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setElegantTextHeight",
			"(Z)V",
			arg0
		);
	}
	jfloat TextView::getTextSize()
	{
		return __thiz.callMethod<jfloat>(
			"getTextSize",
			"()F"
		);
	}
	void TextView::setTextSize(jint arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setTextSize",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void TextView::setTextSize(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setTextSize",
			"(F)V",
			arg0
		);
	}
	jfloat TextView::getTextScaleX()
	{
		return __thiz.callMethod<jfloat>(
			"getTextScaleX",
			"()F"
		);
	}
	void TextView::setTextScaleX(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setTextScaleX",
			"(F)V",
			arg0
		);
	}
	jfloat TextView::getLetterSpacing()
	{
		return __thiz.callMethod<jfloat>(
			"getLetterSpacing",
			"()F"
		);
	}
	void TextView::setLetterSpacing(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setLetterSpacing",
			"(F)V",
			arg0
		);
	}
	jstring TextView::getFontFeatureSettings()
	{
		return __thiz.callObjectMethod(
			"getFontFeatureSettings",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TextView::setFontFeatureSettings(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFontFeatureSettings",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TextView::setFontFeatureSettings(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setFontFeatureSettings",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring TextView::getFontVariationSettings()
	{
		return __thiz.callObjectMethod(
			"getFontVariationSettings",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean TextView::setFontVariationSettings(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean TextView::setFontVariationSettings(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint TextView::getBreakStrategy()
	{
		return __thiz.callMethod<jint>(
			"getBreakStrategy",
			"()I"
		);
	}
	jint TextView::getHyphenationFrequency()
	{
		return __thiz.callMethod<jint>(
			"getHyphenationFrequency",
			"()I"
		);
	}
	void TextView::findViewsWithText(__jni_impl::java::util::ArrayList arg0, jstring arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"findViewsWithText",
			"(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void TextView::findViewsWithText(__jni_impl::java::util::ArrayList arg0, const QString &arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"findViewsWithText",
			"(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject TextView::onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring TextView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void TextView::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	jboolean TextView::performLongClick()
	{
		return __thiz.callMethod<jboolean>(
			"performLongClick",
			"()Z"
		);
	}
	jboolean TextView::showContextMenu()
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenu",
			"()Z"
		);
	}
	jboolean TextView::showContextMenu(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenu",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	void TextView::sendAccessibilityEventUnchecked(__jni_impl::android::view::accessibility::AccessibilityEvent arg0)
	{
		__thiz.callMethod<void>(
			"sendAccessibilityEventUnchecked",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::autofill(__jni_impl::android::view::autofill::AutofillValue arg0)
	{
		__thiz.callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.__jniObject().object()
		);
	}
	jint TextView::getAutofillType()
	{
		return __thiz.callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	QAndroidJniObject TextView::getAutofillValue()
	{
		return __thiz.callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	void TextView::addExtraDataToAccessibilityNodeInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void TextView::addExtraDataToAccessibilityNodeInfo(__jni_impl::android::view::accessibility::AccessibilityNodeInfo arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void TextView::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	jboolean TextView::onKeyPreIme(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean TextView::onCheckIsTextEditor()
	{
		return __thiz.callMethod<jboolean>(
			"onCheckIsTextEditor",
			"()Z"
		);
	}
	QAndroidJniObject TextView::onCreateInputConnection(__jni_impl::android::view::inputmethod::EditorInfo arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateInputConnection",
			"(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",
			arg0.__jniObject().object()
		);
	}
	void TextView::cancelLongPress()
	{
		__thiz.callMethod<void>(
			"cancelLongPress",
			"()V"
		);
	}
	jboolean TextView::hasOverlappingRendering()
	{
		return __thiz.callMethod<jboolean>(
			"hasOverlappingRendering",
			"()Z"
		);
	}
	void TextView::getFocusedRect(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getFocusedRect",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::computeScroll()
	{
		__thiz.callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	void TextView::onScreenStateChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onScreenStateChanged",
			"(I)V",
			arg0
		);
	}
	void TextView::onRtlPropertiesChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	void TextView::invalidateDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void TextView::setPadding(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
			"setPaddingRelative",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setSelected(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	jint TextView::getBaseline()
	{
		return __thiz.callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	jboolean TextView::onDragEvent(__jni_impl::android::view::DragEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void TextView::setWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setWidth",
			"(I)V",
			arg0
		);
	}
	void TextView::setHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHeight",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject TextView::getLayout()
	{
		return __thiz.callObjectMethod(
			"getLayout",
			"()Landroid/text/Layout;"
		);
	}
	void TextView::setHighlightColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHighlightColor",
			"(I)V",
			arg0
		);
	}
	jint TextView::getHighlightColor()
	{
		return __thiz.callMethod<jint>(
			"getHighlightColor",
			"()I"
		);
	}
	jint TextView::getLineCount()
	{
		return __thiz.callMethod<jint>(
			"getLineCount",
			"()I"
		);
	}
	QAndroidJniObject TextView::getPaint()
	{
		return __thiz.callObjectMethod(
			"getPaint",
			"()Landroid/text/TextPaint;"
		);
	}
	jint TextView::getLineBounds(jint arg0, __jni_impl::android::graphics::Rect arg1)
	{
		return __thiz.callMethod<jint>(
			"getLineBounds",
			"(ILandroid/graphics/Rect;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TextView::setAutoSizeTextTypeWithDefaults(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAutoSizeTextTypeWithDefaults",
			"(I)V",
			arg0
		);
	}
	void TextView::setAutoSizeTextTypeUniformWithConfiguration(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
			"setAutoSizeTextTypeUniformWithPresetSizes",
			"([II)V",
			arg0,
			arg1
		);
	}
	jint TextView::getAutoSizeTextType()
	{
		return __thiz.callMethod<jint>(
			"getAutoSizeTextType",
			"()I"
		);
	}
	jint TextView::getAutoSizeStepGranularity()
	{
		return __thiz.callMethod<jint>(
			"getAutoSizeStepGranularity",
			"()I"
		);
	}
	jint TextView::getAutoSizeMinTextSize()
	{
		return __thiz.callMethod<jint>(
			"getAutoSizeMinTextSize",
			"()I"
		);
	}
	jint TextView::getAutoSizeMaxTextSize()
	{
		return __thiz.callMethod<jint>(
			"getAutoSizeMaxTextSize",
			"()I"
		);
	}
	jintArray TextView::getAutoSizeTextAvailableSizes()
	{
		return __thiz.callObjectMethod(
			"getAutoSizeTextAvailableSizes",
			"()[I"
		).object<jintArray>();
	}
	QAndroidJniObject TextView::getEditableText()
	{
		return __thiz.callObjectMethod(
			"getEditableText",
			"()Landroid/text/Editable;"
		);
	}
	jint TextView::getLineHeight()
	{
		return __thiz.callMethod<jint>(
			"getLineHeight",
			"()I"
		);
	}
	QAndroidJniObject TextView::getKeyListener()
	{
		return __thiz.callObjectMethod(
			"getKeyListener",
			"()Landroid/text/method/KeyListener;"
		);
	}
	void TextView::setKeyListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setKeyListener",
			"(Landroid/text/method/KeyListener;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextView::getMovementMethod()
	{
		return __thiz.callObjectMethod(
			"getMovementMethod",
			"()Landroid/text/method/MovementMethod;"
		);
	}
	void TextView::setMovementMethod(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setMovementMethod",
			"(Landroid/text/method/MovementMethod;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextView::getTransformationMethod()
	{
		return __thiz.callObjectMethod(
			"getTransformationMethod",
			"()Landroid/text/method/TransformationMethod;"
		);
	}
	void TextView::setTransformationMethod(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTransformationMethod",
			"(Landroid/text/method/TransformationMethod;)V",
			arg0.__jniObject().object()
		);
	}
	jint TextView::getCompoundPaddingTop()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingTop",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingBottom()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingBottom",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingLeft()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingLeft",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingRight()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingRight",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingStart()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingStart",
			"()I"
		);
	}
	jint TextView::getCompoundPaddingEnd()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingEnd",
			"()I"
		);
	}
	jint TextView::getExtendedPaddingTop()
	{
		return __thiz.callMethod<jint>(
			"getExtendedPaddingTop",
			"()I"
		);
	}
	jint TextView::getExtendedPaddingBottom()
	{
		return __thiz.callMethod<jint>(
			"getExtendedPaddingBottom",
			"()I"
		);
	}
	jint TextView::getTotalPaddingLeft()
	{
		return __thiz.callMethod<jint>(
			"getTotalPaddingLeft",
			"()I"
		);
	}
	jint TextView::getTotalPaddingRight()
	{
		return __thiz.callMethod<jint>(
			"getTotalPaddingRight",
			"()I"
		);
	}
	jint TextView::getTotalPaddingStart()
	{
		return __thiz.callMethod<jint>(
			"getTotalPaddingStart",
			"()I"
		);
	}
	jint TextView::getTotalPaddingEnd()
	{
		return __thiz.callMethod<jint>(
			"getTotalPaddingEnd",
			"()I"
		);
	}
	jint TextView::getTotalPaddingTop()
	{
		return __thiz.callMethod<jint>(
			"getTotalPaddingTop",
			"()I"
		);
	}
	jint TextView::getTotalPaddingBottom()
	{
		return __thiz.callMethod<jint>(
			"getTotalPaddingBottom",
			"()I"
		);
	}
	void TextView::setCompoundDrawables(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2, __jni_impl::android::graphics::drawable::Drawable arg3)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawables",
			"(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void TextView::setCompoundDrawablesWithIntrinsicBounds(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawablesWithIntrinsicBounds",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void TextView::setCompoundDrawablesWithIntrinsicBounds(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2, __jni_impl::android::graphics::drawable::Drawable arg3)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawablesWithIntrinsicBounds",
			"(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void TextView::setCompoundDrawablesRelative(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2, __jni_impl::android::graphics::drawable::Drawable arg3)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawablesRelative",
			"(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void TextView::setCompoundDrawablesRelativeWithIntrinsicBounds(__jni_impl::android::graphics::drawable::Drawable arg0, __jni_impl::android::graphics::drawable::Drawable arg1, __jni_impl::android::graphics::drawable::Drawable arg2, __jni_impl::android::graphics::drawable::Drawable arg3)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawablesRelativeWithIntrinsicBounds",
			"(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void TextView::setCompoundDrawablesRelativeWithIntrinsicBounds(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawablesRelativeWithIntrinsicBounds",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jarray TextView::getCompoundDrawables()
	{
		return __thiz.callObjectMethod(
			"getCompoundDrawables",
			"()[Landroid/graphics/drawable/Drawable;"
		).object<jarray>();
	}
	jarray TextView::getCompoundDrawablesRelative()
	{
		return __thiz.callObjectMethod(
			"getCompoundDrawablesRelative",
			"()[Landroid/graphics/drawable/Drawable;"
		).object<jarray>();
	}
	void TextView::setCompoundDrawablePadding(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawablePadding",
			"(I)V",
			arg0
		);
	}
	jint TextView::getCompoundDrawablePadding()
	{
		return __thiz.callMethod<jint>(
			"getCompoundDrawablePadding",
			"()I"
		);
	}
	void TextView::setCompoundDrawableTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawableTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextView::getCompoundDrawableTintList()
	{
		return __thiz.callObjectMethod(
			"getCompoundDrawableTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	void TextView::setCompoundDrawableTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawableTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setCompoundDrawableTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setCompoundDrawableTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextView::getCompoundDrawableTintMode()
	{
		return __thiz.callObjectMethod(
			"getCompoundDrawableTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject TextView::getCompoundDrawableTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getCompoundDrawableTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	void TextView::setFirstBaselineToTopHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFirstBaselineToTopHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setLastBaselineToBottomHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLastBaselineToBottomHeight",
			"(I)V",
			arg0
		);
	}
	jint TextView::getFirstBaselineToTopHeight()
	{
		return __thiz.callMethod<jint>(
			"getFirstBaselineToTopHeight",
			"()I"
		);
	}
	jint TextView::getLastBaselineToBottomHeight()
	{
		return __thiz.callMethod<jint>(
			"getLastBaselineToBottomHeight",
			"()I"
		);
	}
	jint TextView::getAutoLinkMask()
	{
		return __thiz.callMethod<jint>(
			"getAutoLinkMask",
			"()I"
		);
	}
	void TextView::setTextSelectHandle(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setTextSelectHandle",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setTextSelectHandle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTextSelectHandle",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject TextView::getTextSelectHandle()
	{
		return __thiz.callObjectMethod(
			"getTextSelectHandle",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void TextView::setTextSelectHandleLeft(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTextSelectHandleLeft",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextSelectHandleLeft(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setTextSelectHandleLeft",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextView::getTextSelectHandleLeft()
	{
		return __thiz.callObjectMethod(
			"getTextSelectHandleLeft",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void TextView::setTextSelectHandleRight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTextSelectHandleRight",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextSelectHandleRight(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setTextSelectHandleRight",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextView::getTextSelectHandleRight()
	{
		return __thiz.callObjectMethod(
			"getTextSelectHandleRight",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void TextView::setTextCursorDrawable(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTextCursorDrawable",
			"(I)V",
			arg0
		);
	}
	void TextView::setTextCursorDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setTextCursorDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextView::getTextCursorDrawable()
	{
		return __thiz.callObjectMethod(
			"getTextCursorDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void TextView::setTextAppearance(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void TextView::setTextAppearance(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTextAppearance",
			"(I)V",
			arg0
		);
	}
	void TextView::setFallbackLineSpacing(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFallbackLineSpacing",
			"(Z)V",
			arg0
		);
	}
	jboolean TextView::isFallbackLineSpacing()
	{
		return __thiz.callMethod<jboolean>(
			"isFallbackLineSpacing",
			"()Z"
		);
	}
	QAndroidJniObject TextView::getTextMetricsParams()
	{
		return __thiz.callObjectMethod(
			"getTextMetricsParams",
			"()Landroid/text/PrecomputedText$Params;"
		);
	}
	void TextView::setTextMetricsParams(__jni_impl::android::text::PrecomputedText_Params arg0)
	{
		__thiz.callMethod<void>(
			"setTextMetricsParams",
			"(Landroid/text/PrecomputedText$Params;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setJustificationMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setJustificationMode",
			"(I)V",
			arg0
		);
	}
	jint TextView::getJustificationMode()
	{
		return __thiz.callMethod<jint>(
			"getJustificationMode",
			"()I"
		);
	}
	void TextView::setTextColor(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTextColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setTextColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTextColor",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject TextView::getTextColors()
	{
		return __thiz.callObjectMethod(
			"getTextColors",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	jint TextView::getCurrentTextColor()
	{
		return __thiz.callMethod<jint>(
			"getCurrentTextColor",
			"()I"
		);
	}
	void TextView::setShowSoftInputOnFocus(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShowSoftInputOnFocus",
			"(Z)V",
			arg0
		);
	}
	jboolean TextView::getShowSoftInputOnFocus()
	{
		return __thiz.callMethod<jboolean>(
			"getShowSoftInputOnFocus",
			"()Z"
		);
	}
	jfloat TextView::getShadowRadius()
	{
		return __thiz.callMethod<jfloat>(
			"getShadowRadius",
			"()F"
		);
	}
	jfloat TextView::getShadowDx()
	{
		return __thiz.callMethod<jfloat>(
			"getShadowDx",
			"()F"
		);
	}
	jfloat TextView::getShadowDy()
	{
		return __thiz.callMethod<jfloat>(
			"getShadowDy",
			"()F"
		);
	}
	jint TextView::getShadowColor()
	{
		return __thiz.callMethod<jint>(
			"getShadowColor",
			"()I"
		);
	}
	void TextView::setAutoLinkMask(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAutoLinkMask",
			"(I)V",
			arg0
		);
	}
	void TextView::setLinksClickable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLinksClickable",
			"(Z)V",
			arg0
		);
	}
	jboolean TextView::getLinksClickable()
	{
		return __thiz.callMethod<jboolean>(
			"getLinksClickable",
			"()Z"
		);
	}
	jarray TextView::getUrls()
	{
		return __thiz.callObjectMethod(
			"getUrls",
			"()[Landroid/text/style/URLSpan;"
		).object<jarray>();
	}
	void TextView::setHintTextColor(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setHintTextColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setHintTextColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHintTextColor",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject TextView::getHintTextColors()
	{
		return __thiz.callObjectMethod(
			"getHintTextColors",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	jint TextView::getCurrentHintTextColor()
	{
		return __thiz.callMethod<jint>(
			"getCurrentHintTextColor",
			"()I"
		);
	}
	void TextView::setLinkTextColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLinkTextColor",
			"(I)V",
			arg0
		);
	}
	void TextView::setLinkTextColor(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setLinkTextColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextView::getLinkTextColors()
	{
		return __thiz.callObjectMethod(
			"getLinkTextColors",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	void TextView::setGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	jint TextView::getGravity()
	{
		return __thiz.callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	jint TextView::getPaintFlags()
	{
		return __thiz.callMethod<jint>(
			"getPaintFlags",
			"()I"
		);
	}
	void TextView::setPaintFlags(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPaintFlags",
			"(I)V",
			arg0
		);
	}
	void TextView::setHorizontallyScrolling(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHorizontallyScrolling",
			"(Z)V",
			arg0
		);
	}
	jboolean TextView::isHorizontallyScrollable()
	{
		return __thiz.callMethod<jboolean>(
			"isHorizontallyScrollable",
			"()Z"
		);
	}
	void TextView::setMinLines(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinLines",
			"(I)V",
			arg0
		);
	}
	jint TextView::getMinLines()
	{
		return __thiz.callMethod<jint>(
			"getMinLines",
			"()I"
		);
	}
	void TextView::setMinHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinHeight",
			"(I)V",
			arg0
		);
	}
	jint TextView::getMinHeight()
	{
		return __thiz.callMethod<jint>(
			"getMinHeight",
			"()I"
		);
	}
	void TextView::setMaxLines(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxLines",
			"(I)V",
			arg0
		);
	}
	jint TextView::getMaxLines()
	{
		return __thiz.callMethod<jint>(
			"getMaxLines",
			"()I"
		);
	}
	void TextView::setMaxHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxHeight",
			"(I)V",
			arg0
		);
	}
	jint TextView::getMaxHeight()
	{
		return __thiz.callMethod<jint>(
			"getMaxHeight",
			"()I"
		);
	}
	void TextView::setLines(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLines",
			"(I)V",
			arg0
		);
	}
	void TextView::setMinEms(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinEms",
			"(I)V",
			arg0
		);
	}
	jint TextView::getMinEms()
	{
		return __thiz.callMethod<jint>(
			"getMinEms",
			"()I"
		);
	}
	void TextView::setMinWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinWidth",
			"(I)V",
			arg0
		);
	}
	jint TextView::getMinWidth()
	{
		return __thiz.callMethod<jint>(
			"getMinWidth",
			"()I"
		);
	}
	void TextView::setMaxEms(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxEms",
			"(I)V",
			arg0
		);
	}
	jint TextView::getMaxEms()
	{
		return __thiz.callMethod<jint>(
			"getMaxEms",
			"()I"
		);
	}
	void TextView::setMaxWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxWidth",
			"(I)V",
			arg0
		);
	}
	jint TextView::getMaxWidth()
	{
		return __thiz.callMethod<jint>(
			"getMaxWidth",
			"()I"
		);
	}
	void TextView::setEms(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEms",
			"(I)V",
			arg0
		);
	}
	void TextView::setLineSpacing(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setLineSpacing",
			"(FF)V",
			arg0,
			arg1
		);
	}
	jfloat TextView::getLineSpacingMultiplier()
	{
		return __thiz.callMethod<jfloat>(
			"getLineSpacingMultiplier",
			"()F"
		);
	}
	jfloat TextView::getLineSpacingExtra()
	{
		return __thiz.callMethod<jfloat>(
			"getLineSpacingExtra",
			"()F"
		);
	}
	void TextView::setLineHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLineHeight",
			"(I)V",
			arg0
		);
	}
	void TextView::setFreezesText(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFreezesText",
			"(Z)V",
			arg0
		);
	}
	jboolean TextView::getFreezesText()
	{
		return __thiz.callMethod<jboolean>(
			"getFreezesText",
			"()Z"
		);
	}
	void TextView::setEditableFactory(__jni_impl::android::text::Editable_Factory arg0)
	{
		__thiz.callMethod<void>(
			"setEditableFactory",
			"(Landroid/text/Editable$Factory;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setSpannableFactory(__jni_impl::android::text::Spannable_Factory arg0)
	{
		__thiz.callMethod<void>(
			"setSpannableFactory",
			"(Landroid/text/Spannable$Factory;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setTextKeepState(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTextKeepState",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextView::setTextKeepState(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTextKeepState",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TextView::setTextKeepState(jstring arg0, __jni_impl::android::widget::TextView_BufferType arg1)
	{
		__thiz.callMethod<void>(
			"setTextKeepState",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TextView::setTextKeepState(const QString &arg0, __jni_impl::android::widget::TextView_BufferType arg1)
	{
		__thiz.callMethod<void>(
			"setTextKeepState",
			"(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void TextView::setHint(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHint",
			"(I)V",
			arg0
		);
	}
	void TextView::setHint(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setHint",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void TextView::setHint(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setHint",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring TextView::getHint()
	{
		return __thiz.callObjectMethod(
			"getHint",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean TextView::isSingleLine()
	{
		return __thiz.callMethod<jboolean>(
			"isSingleLine",
			"()Z"
		);
	}
	void TextView::setInputType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInputType",
			"(I)V",
			arg0
		);
	}
	void TextView::setRawInputType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRawInputType",
			"(I)V",
			arg0
		);
	}
	jint TextView::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	void TextView::setImeOptions(jint arg0)
	{
		__thiz.callMethod<void>(
			"setImeOptions",
			"(I)V",
			arg0
		);
	}
	jint TextView::getImeOptions()
	{
		return __thiz.callMethod<jint>(
			"getImeOptions",
			"()I"
		);
	}
	void TextView::setImeActionLabel(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setImeActionLabel",
			"(Ljava/lang/CharSequence;I)V",
			arg0,
			arg1
		);
	}
	void TextView::setImeActionLabel(const QString &arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setImeActionLabel",
			"(Ljava/lang/CharSequence;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jstring TextView::getImeActionLabel()
	{
		return __thiz.callObjectMethod(
			"getImeActionLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint TextView::getImeActionId()
	{
		return __thiz.callMethod<jint>(
			"getImeActionId",
			"()I"
		);
	}
	void TextView::setOnEditorActionListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnEditorActionListener",
			"(Landroid/widget/TextView$OnEditorActionListener;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::onEditorAction(jint arg0)
	{
		__thiz.callMethod<void>(
			"onEditorAction",
			"(I)V",
			arg0
		);
	}
	void TextView::setPrivateImeOptions(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPrivateImeOptions",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TextView::setPrivateImeOptions(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPrivateImeOptions",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring TextView::getPrivateImeOptions()
	{
		return __thiz.callObjectMethod(
			"getPrivateImeOptions",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TextView::setInputExtras(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInputExtras",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject TextView::getInputExtras(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"getInputExtras",
			"(Z)Landroid/os/Bundle;",
			arg0
		);
	}
	void TextView::setImeHintLocales(__jni_impl::android::os::LocaleList arg0)
	{
		__thiz.callMethod<void>(
			"setImeHintLocales",
			"(Landroid/os/LocaleList;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextView::getImeHintLocales()
	{
		return __thiz.callObjectMethod(
			"getImeHintLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	jstring TextView::getError()
	{
		return __thiz.callObjectMethod(
			"getError",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void TextView::setFilters(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setFilters",
			"([Landroid/text/InputFilter;)V",
			arg0
		);
	}
	jarray TextView::getFilters()
	{
		return __thiz.callObjectMethod(
			"getFilters",
			"()[Landroid/text/InputFilter;"
		).object<jarray>();
	}
	jboolean TextView::onPreDraw()
	{
		return __thiz.callMethod<jboolean>(
			"onPreDraw",
			"()Z"
		);
	}
	jboolean TextView::isTextSelectable()
	{
		return __thiz.callMethod<jboolean>(
			"isTextSelectable",
			"()Z"
		);
	}
	void TextView::setTextIsSelectable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setTextIsSelectable",
			"(Z)V",
			arg0
		);
	}
	jboolean TextView::extractText(__jni_impl::android::view::inputmethod::ExtractedTextRequest arg0, __jni_impl::android::view::inputmethod::ExtractedText arg1)
	{
		return __thiz.callMethod<jboolean>(
			"extractText",
			"(Landroid/view/inputmethod/ExtractedTextRequest;Landroid/view/inputmethod/ExtractedText;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TextView::setExtractedText(__jni_impl::android::view::inputmethod::ExtractedText arg0)
	{
		__thiz.callMethod<void>(
			"setExtractedText",
			"(Landroid/view/inputmethod/ExtractedText;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::onCommitCompletion(__jni_impl::android::view::inputmethod::CompletionInfo arg0)
	{
		__thiz.callMethod<void>(
			"onCommitCompletion",
			"(Landroid/view/inputmethod/CompletionInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::onCommitCorrection(__jni_impl::android::view::inputmethod::CorrectionInfo arg0)
	{
		__thiz.callMethod<void>(
			"onCommitCorrection",
			"(Landroid/view/inputmethod/CorrectionInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::beginBatchEdit()
	{
		__thiz.callMethod<void>(
			"beginBatchEdit",
			"()V"
		);
	}
	void TextView::endBatchEdit()
	{
		__thiz.callMethod<void>(
			"endBatchEdit",
			"()V"
		);
	}
	void TextView::onBeginBatchEdit()
	{
		__thiz.callMethod<void>(
			"onBeginBatchEdit",
			"()V"
		);
	}
	void TextView::onEndBatchEdit()
	{
		__thiz.callMethod<void>(
			"onEndBatchEdit",
			"()V"
		);
	}
	jboolean TextView::onPrivateIMECommand(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onPrivateIMECommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean TextView::onPrivateIMECommand(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onPrivateIMECommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void TextView::setIncludeFontPadding(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIncludeFontPadding",
			"(Z)V",
			arg0
		);
	}
	jboolean TextView::getIncludeFontPadding()
	{
		return __thiz.callMethod<jboolean>(
			"getIncludeFontPadding",
			"()Z"
		);
	}
	jboolean TextView::bringPointIntoView(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"bringPointIntoView",
			"(I)Z",
			arg0
		);
	}
	jboolean TextView::moveCursorToVisibleOffset()
	{
		return __thiz.callMethod<jboolean>(
			"moveCursorToVisibleOffset",
			"()Z"
		);
	}
	jint TextView::getSelectionStart()
	{
		return __thiz.callMethod<jint>(
			"getSelectionStart",
			"()I"
		);
	}
	jint TextView::getSelectionEnd()
	{
		return __thiz.callMethod<jint>(
			"getSelectionEnd",
			"()I"
		);
	}
	jboolean TextView::hasSelection()
	{
		return __thiz.callMethod<jboolean>(
			"hasSelection",
			"()Z"
		);
	}
	void TextView::setSingleLine(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSingleLine",
			"(Z)V",
			arg0
		);
	}
	void TextView::setSingleLine()
	{
		__thiz.callMethod<void>(
			"setSingleLine",
			"()V"
		);
	}
	void TextView::setAllCaps(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllCaps",
			"(Z)V",
			arg0
		);
	}
	jboolean TextView::isAllCaps()
	{
		return __thiz.callMethod<jboolean>(
			"isAllCaps",
			"()Z"
		);
	}
	void TextView::setEllipsize(__jni_impl::android::text::TextUtils_TruncateAt arg0)
	{
		__thiz.callMethod<void>(
			"setEllipsize",
			"(Landroid/text/TextUtils$TruncateAt;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::setMarqueeRepeatLimit(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMarqueeRepeatLimit",
			"(I)V",
			arg0
		);
	}
	jint TextView::getMarqueeRepeatLimit()
	{
		return __thiz.callMethod<jint>(
			"getMarqueeRepeatLimit",
			"()I"
		);
	}
	QAndroidJniObject TextView::getEllipsize()
	{
		return __thiz.callObjectMethod(
			"getEllipsize",
			"()Landroid/text/TextUtils$TruncateAt;"
		);
	}
	void TextView::setSelectAllOnFocus(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSelectAllOnFocus",
			"(Z)V",
			arg0
		);
	}
	void TextView::setCursorVisible(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCursorVisible",
			"(Z)V",
			arg0
		);
	}
	jboolean TextView::isCursorVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isCursorVisible",
			"()Z"
		);
	}
	void TextView::addTextChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addTextChangedListener",
			"(Landroid/text/TextWatcher;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::removeTextChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeTextChangedListener",
			"(Landroid/text/TextWatcher;)V",
			arg0.__jniObject().object()
		);
	}
	void TextView::clearComposingText()
	{
		__thiz.callMethod<void>(
			"clearComposingText",
			"()V"
		);
	}
	jboolean TextView::didTouchFocusSelect()
	{
		return __thiz.callMethod<jboolean>(
			"didTouchFocusSelect",
			"()Z"
		);
	}
	void TextView::setScroller(__jni_impl::android::widget::Scroller arg0)
	{
		__thiz.callMethod<void>(
			"setScroller",
			"(Landroid/widget/Scroller;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean TextView::isInputMethodTarget()
	{
		return __thiz.callMethod<jboolean>(
			"isInputMethodTarget",
			"()Z"
		);
	}
	jboolean TextView::onTextContextMenuItem(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTextContextMenuItem",
			"(I)Z",
			arg0
		);
	}
	jboolean TextView::isSuggestionsEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isSuggestionsEnabled",
			"()Z"
		);
	}
	void TextView::setCustomSelectionActionModeCallback(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCustomSelectionActionModeCallback",
			"(Landroid/view/ActionMode$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextView::getCustomSelectionActionModeCallback()
	{
		return __thiz.callObjectMethod(
			"getCustomSelectionActionModeCallback",
			"()Landroid/view/ActionMode$Callback;"
		);
	}
	void TextView::setCustomInsertionActionModeCallback(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCustomInsertionActionModeCallback",
			"(Landroid/view/ActionMode$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextView::getCustomInsertionActionModeCallback()
	{
		return __thiz.callObjectMethod(
			"getCustomInsertionActionModeCallback",
			"()Landroid/view/ActionMode$Callback;"
		);
	}
	void TextView::setTextClassifier(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTextClassifier",
			"(Landroid/view/textclassifier/TextClassifier;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextView::getTextClassifier()
	{
		return __thiz.callObjectMethod(
			"getTextClassifier",
			"()Landroid/view/textclassifier/TextClassifier;"
		);
	}
	jint TextView::getOffsetForPosition(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jint>(
			"getOffsetForPosition",
			"(FF)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TextView::getTextDirectionHeuristic()
	{
		return __thiz.callObjectMethod(
			"getTextDirectionHeuristic",
			"()Landroid/text/TextDirectionHeuristic;"
		);
	}
	void TextView::onRestoreInstanceState(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextView::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	jboolean TextView::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean TextView::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean TextView::onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean TextView::onKeyShortcut(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyShortcut",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean TextView::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TextView::onTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TextView::onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void TextView::onWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class TextView : public __jni_impl::android::widget::TextView
	{
	public:
		TextView(QAndroidJniObject obj) { __thiz = obj; }
		TextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		TextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		TextView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TextView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_TEXTVIEW

