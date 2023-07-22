#pragma once

#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
#include "../../JArray.hpp"
#include "../animation/StateListAnimator.def.hpp"
#include "../content/ClipData.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/res/ColorStateList.def.hpp"
#include "../content/res/Configuration.def.hpp"
#include "../content/res/Resources.def.hpp"
#include "../content/res/TypedArray.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../graphics/BlendMode.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/Matrix.def.hpp"
#include "../graphics/Paint.def.hpp"
#include "../graphics/Point.def.hpp"
#include "../graphics/PorterDuff_Mode.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../graphics/Region.def.hpp"
#include "../graphics/RenderEffect.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Handler.def.hpp"
#include "../util/LongSparseArray.def.hpp"
#include "../util/Property.def.hpp"
#include "../util/SparseArray.def.hpp"
#include "./ActionMode.def.hpp"
#include "./ContentInfo.def.hpp"
#include "./Display.def.hpp"
#include "./DragEvent.def.hpp"
#include "./KeyEvent.def.hpp"
#include "./KeyEvent_DispatcherState.def.hpp"
#include "./MotionEvent.def.hpp"
#include "./PointerIcon.def.hpp"
#include "./TouchDelegate.def.hpp"
#include "./View_AccessibilityDelegate.def.hpp"
#include "./View_DragShadowBuilder.def.hpp"
#include "./ViewGroup.def.hpp"
#include "./ViewGroup_LayoutParams.def.hpp"
#include "./ViewOutlineProvider.def.hpp"
#include "./ViewOverlay.def.hpp"
#include "./ViewPropertyAnimator.def.hpp"
#include "./ViewStructure.def.hpp"
#include "./ViewTreeObserver.def.hpp"
#include "./WindowId.def.hpp"
#include "./WindowInsets.def.hpp"
#include "./WindowInsetsAnimation.def.hpp"
#include "./WindowInsetsAnimation_Bounds.def.hpp"
#include "./WindowInsetsAnimation_Callback.def.hpp"
#include "./accessibility/AccessibilityEvent.def.hpp"
#include "./accessibility/AccessibilityNodeInfo.def.hpp"
#include "./accessibility/AccessibilityNodeProvider.def.hpp"
#include "./animation/Animation.def.hpp"
#include "./autofill/AutofillId.def.hpp"
#include "./autofill/AutofillValue.def.hpp"
#include "./contentcapture/ContentCaptureSession.def.hpp"
#include "./inputmethod/EditorInfo.def.hpp"
#include "./translation/TranslationCapability.def.hpp"
#include "./translation/ViewTranslationResponse.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./View.def.hpp"

namespace android::view
{
	// Fields
	inline jint View::ACCESSIBILITY_LIVE_REGION_ASSERTIVE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"ACCESSIBILITY_LIVE_REGION_ASSERTIVE"
		);
	}
	inline jint View::ACCESSIBILITY_LIVE_REGION_NONE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"ACCESSIBILITY_LIVE_REGION_NONE"
		);
	}
	inline jint View::ACCESSIBILITY_LIVE_REGION_POLITE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"ACCESSIBILITY_LIVE_REGION_POLITE"
		);
	}
	inline android::util::Property View::ALPHA()
	{
		return getStaticObjectField(
			"android.view.View",
			"ALPHA",
			"Landroid/util/Property;"
		);
	}
	inline jint View::AUTOFILL_FLAG_INCLUDE_NOT_IMPORTANT_VIEWS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"AUTOFILL_FLAG_INCLUDE_NOT_IMPORTANT_VIEWS"
		);
	}
	inline JString View::AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_DATE()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_DATE",
			"Ljava/lang/String;"
		);
	}
	inline JString View::AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_DAY()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_DAY",
			"Ljava/lang/String;"
		);
	}
	inline JString View::AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_MONTH()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_MONTH",
			"Ljava/lang/String;"
		);
	}
	inline JString View::AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_YEAR()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_YEAR",
			"Ljava/lang/String;"
		);
	}
	inline JString View::AUTOFILL_HINT_CREDIT_CARD_NUMBER()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_CREDIT_CARD_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString View::AUTOFILL_HINT_CREDIT_CARD_SECURITY_CODE()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_CREDIT_CARD_SECURITY_CODE",
			"Ljava/lang/String;"
		);
	}
	inline JString View::AUTOFILL_HINT_EMAIL_ADDRESS()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_EMAIL_ADDRESS",
			"Ljava/lang/String;"
		);
	}
	inline JString View::AUTOFILL_HINT_NAME()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString View::AUTOFILL_HINT_PASSWORD()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_PASSWORD",
			"Ljava/lang/String;"
		);
	}
	inline JString View::AUTOFILL_HINT_PHONE()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_PHONE",
			"Ljava/lang/String;"
		);
	}
	inline JString View::AUTOFILL_HINT_POSTAL_ADDRESS()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_POSTAL_ADDRESS",
			"Ljava/lang/String;"
		);
	}
	inline JString View::AUTOFILL_HINT_POSTAL_CODE()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_POSTAL_CODE",
			"Ljava/lang/String;"
		);
	}
	inline JString View::AUTOFILL_HINT_USERNAME()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_USERNAME",
			"Ljava/lang/String;"
		);
	}
	inline jint View::AUTOFILL_TYPE_DATE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"AUTOFILL_TYPE_DATE"
		);
	}
	inline jint View::AUTOFILL_TYPE_LIST()
	{
		return getStaticField<jint>(
			"android.view.View",
			"AUTOFILL_TYPE_LIST"
		);
	}
	inline jint View::AUTOFILL_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"AUTOFILL_TYPE_NONE"
		);
	}
	inline jint View::AUTOFILL_TYPE_TEXT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"AUTOFILL_TYPE_TEXT"
		);
	}
	inline jint View::AUTOFILL_TYPE_TOGGLE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"AUTOFILL_TYPE_TOGGLE"
		);
	}
	inline jint View::DRAG_FLAG_ACCESSIBILITY_ACTION()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_ACCESSIBILITY_ACTION"
		);
	}
	inline jint View::DRAG_FLAG_GLOBAL()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_GLOBAL"
		);
	}
	inline jint View::DRAG_FLAG_GLOBAL_PERSISTABLE_URI_PERMISSION()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_GLOBAL_PERSISTABLE_URI_PERMISSION"
		);
	}
	inline jint View::DRAG_FLAG_GLOBAL_PREFIX_URI_PERMISSION()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_GLOBAL_PREFIX_URI_PERMISSION"
		);
	}
	inline jint View::DRAG_FLAG_GLOBAL_URI_READ()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_GLOBAL_URI_READ"
		);
	}
	inline jint View::DRAG_FLAG_GLOBAL_URI_WRITE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_GLOBAL_URI_WRITE"
		);
	}
	inline jint View::DRAG_FLAG_OPAQUE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_OPAQUE"
		);
	}
	inline jint View::DRAWING_CACHE_QUALITY_AUTO()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAWING_CACHE_QUALITY_AUTO"
		);
	}
	inline jint View::DRAWING_CACHE_QUALITY_HIGH()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAWING_CACHE_QUALITY_HIGH"
		);
	}
	inline jint View::DRAWING_CACHE_QUALITY_LOW()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAWING_CACHE_QUALITY_LOW"
		);
	}
	inline jint View::FIND_VIEWS_WITH_CONTENT_DESCRIPTION()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FIND_VIEWS_WITH_CONTENT_DESCRIPTION"
		);
	}
	inline jint View::FIND_VIEWS_WITH_TEXT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FIND_VIEWS_WITH_TEXT"
		);
	}
	inline jint View::FOCUSABLE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUSABLE"
		);
	}
	inline jint View::FOCUSABLES_ALL()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUSABLES_ALL"
		);
	}
	inline jint View::FOCUSABLES_TOUCH_MODE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUSABLES_TOUCH_MODE"
		);
	}
	inline jint View::FOCUSABLE_AUTO()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUSABLE_AUTO"
		);
	}
	inline jint View::FOCUS_BACKWARD()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUS_BACKWARD"
		);
	}
	inline jint View::FOCUS_DOWN()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUS_DOWN"
		);
	}
	inline jint View::FOCUS_FORWARD()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUS_FORWARD"
		);
	}
	inline jint View::FOCUS_LEFT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUS_LEFT"
		);
	}
	inline jint View::FOCUS_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUS_RIGHT"
		);
	}
	inline jint View::FOCUS_UP()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUS_UP"
		);
	}
	inline jint View::GONE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"GONE"
		);
	}
	inline jint View::HAPTIC_FEEDBACK_ENABLED()
	{
		return getStaticField<jint>(
			"android.view.View",
			"HAPTIC_FEEDBACK_ENABLED"
		);
	}
	inline jint View::IMPORTANT_FOR_ACCESSIBILITY_AUTO()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_ACCESSIBILITY_AUTO"
		);
	}
	inline jint View::IMPORTANT_FOR_ACCESSIBILITY_NO()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_ACCESSIBILITY_NO"
		);
	}
	inline jint View::IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS"
		);
	}
	inline jint View::IMPORTANT_FOR_ACCESSIBILITY_YES()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_ACCESSIBILITY_YES"
		);
	}
	inline jint View::IMPORTANT_FOR_AUTOFILL_AUTO()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_AUTOFILL_AUTO"
		);
	}
	inline jint View::IMPORTANT_FOR_AUTOFILL_NO()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_AUTOFILL_NO"
		);
	}
	inline jint View::IMPORTANT_FOR_AUTOFILL_NO_EXCLUDE_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_AUTOFILL_NO_EXCLUDE_DESCENDANTS"
		);
	}
	inline jint View::IMPORTANT_FOR_AUTOFILL_YES()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_AUTOFILL_YES"
		);
	}
	inline jint View::IMPORTANT_FOR_AUTOFILL_YES_EXCLUDE_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_AUTOFILL_YES_EXCLUDE_DESCENDANTS"
		);
	}
	inline jint View::IMPORTANT_FOR_CONTENT_CAPTURE_AUTO()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_CONTENT_CAPTURE_AUTO"
		);
	}
	inline jint View::IMPORTANT_FOR_CONTENT_CAPTURE_NO()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_CONTENT_CAPTURE_NO"
		);
	}
	inline jint View::IMPORTANT_FOR_CONTENT_CAPTURE_NO_EXCLUDE_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_CONTENT_CAPTURE_NO_EXCLUDE_DESCENDANTS"
		);
	}
	inline jint View::IMPORTANT_FOR_CONTENT_CAPTURE_YES()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_CONTENT_CAPTURE_YES"
		);
	}
	inline jint View::IMPORTANT_FOR_CONTENT_CAPTURE_YES_EXCLUDE_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_CONTENT_CAPTURE_YES_EXCLUDE_DESCENDANTS"
		);
	}
	inline jint View::INVISIBLE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"INVISIBLE"
		);
	}
	inline jint View::KEEP_SCREEN_ON()
	{
		return getStaticField<jint>(
			"android.view.View",
			"KEEP_SCREEN_ON"
		);
	}
	inline jint View::LAYER_TYPE_HARDWARE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"LAYER_TYPE_HARDWARE"
		);
	}
	inline jint View::LAYER_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"LAYER_TYPE_NONE"
		);
	}
	inline jint View::LAYER_TYPE_SOFTWARE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"LAYER_TYPE_SOFTWARE"
		);
	}
	inline jint View::LAYOUT_DIRECTION_INHERIT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"LAYOUT_DIRECTION_INHERIT"
		);
	}
	inline jint View::LAYOUT_DIRECTION_LOCALE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"LAYOUT_DIRECTION_LOCALE"
		);
	}
	inline jint View::LAYOUT_DIRECTION_LTR()
	{
		return getStaticField<jint>(
			"android.view.View",
			"LAYOUT_DIRECTION_LTR"
		);
	}
	inline jint View::LAYOUT_DIRECTION_RTL()
	{
		return getStaticField<jint>(
			"android.view.View",
			"LAYOUT_DIRECTION_RTL"
		);
	}
	inline jint View::MEASURED_HEIGHT_STATE_SHIFT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"MEASURED_HEIGHT_STATE_SHIFT"
		);
	}
	inline jint View::MEASURED_SIZE_MASK()
	{
		return getStaticField<jint>(
			"android.view.View",
			"MEASURED_SIZE_MASK"
		);
	}
	inline jint View::MEASURED_STATE_MASK()
	{
		return getStaticField<jint>(
			"android.view.View",
			"MEASURED_STATE_MASK"
		);
	}
	inline jint View::MEASURED_STATE_TOO_SMALL()
	{
		return getStaticField<jint>(
			"android.view.View",
			"MEASURED_STATE_TOO_SMALL"
		);
	}
	inline jint View::NOT_FOCUSABLE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"NOT_FOCUSABLE"
		);
	}
	inline jint View::NO_ID()
	{
		return getStaticField<jint>(
			"android.view.View",
			"NO_ID"
		);
	}
	inline jint View::OVER_SCROLL_ALWAYS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"OVER_SCROLL_ALWAYS"
		);
	}
	inline jint View::OVER_SCROLL_IF_CONTENT_SCROLLS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"OVER_SCROLL_IF_CONTENT_SCROLLS"
		);
	}
	inline jint View::OVER_SCROLL_NEVER()
	{
		return getStaticField<jint>(
			"android.view.View",
			"OVER_SCROLL_NEVER"
		);
	}
	inline android::util::Property View::ROTATION()
	{
		return getStaticObjectField(
			"android.view.View",
			"ROTATION",
			"Landroid/util/Property;"
		);
	}
	inline android::util::Property View::ROTATION_X()
	{
		return getStaticObjectField(
			"android.view.View",
			"ROTATION_X",
			"Landroid/util/Property;"
		);
	}
	inline android::util::Property View::ROTATION_Y()
	{
		return getStaticObjectField(
			"android.view.View",
			"ROTATION_Y",
			"Landroid/util/Property;"
		);
	}
	inline android::util::Property View::SCALE_X()
	{
		return getStaticObjectField(
			"android.view.View",
			"SCALE_X",
			"Landroid/util/Property;"
		);
	}
	inline android::util::Property View::SCALE_Y()
	{
		return getStaticObjectField(
			"android.view.View",
			"SCALE_Y",
			"Landroid/util/Property;"
		);
	}
	inline jint View::SCREEN_STATE_OFF()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCREEN_STATE_OFF"
		);
	}
	inline jint View::SCREEN_STATE_ON()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCREEN_STATE_ON"
		);
	}
	inline jint View::SCROLLBARS_INSIDE_INSET()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLLBARS_INSIDE_INSET"
		);
	}
	inline jint View::SCROLLBARS_INSIDE_OVERLAY()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLLBARS_INSIDE_OVERLAY"
		);
	}
	inline jint View::SCROLLBARS_OUTSIDE_INSET()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLLBARS_OUTSIDE_INSET"
		);
	}
	inline jint View::SCROLLBARS_OUTSIDE_OVERLAY()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLLBARS_OUTSIDE_OVERLAY"
		);
	}
	inline jint View::SCROLLBAR_POSITION_DEFAULT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLLBAR_POSITION_DEFAULT"
		);
	}
	inline jint View::SCROLLBAR_POSITION_LEFT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLLBAR_POSITION_LEFT"
		);
	}
	inline jint View::SCROLLBAR_POSITION_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLLBAR_POSITION_RIGHT"
		);
	}
	inline jint View::SCROLL_AXIS_HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_AXIS_HORIZONTAL"
		);
	}
	inline jint View::SCROLL_AXIS_NONE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_AXIS_NONE"
		);
	}
	inline jint View::SCROLL_AXIS_VERTICAL()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_AXIS_VERTICAL"
		);
	}
	inline jint View::SCROLL_CAPTURE_HINT_AUTO()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_CAPTURE_HINT_AUTO"
		);
	}
	inline jint View::SCROLL_CAPTURE_HINT_EXCLUDE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_CAPTURE_HINT_EXCLUDE"
		);
	}
	inline jint View::SCROLL_CAPTURE_HINT_EXCLUDE_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_CAPTURE_HINT_EXCLUDE_DESCENDANTS"
		);
	}
	inline jint View::SCROLL_CAPTURE_HINT_INCLUDE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_CAPTURE_HINT_INCLUDE"
		);
	}
	inline jint View::SCROLL_INDICATOR_BOTTOM()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_INDICATOR_BOTTOM"
		);
	}
	inline jint View::SCROLL_INDICATOR_END()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_INDICATOR_END"
		);
	}
	inline jint View::SCROLL_INDICATOR_LEFT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_INDICATOR_LEFT"
		);
	}
	inline jint View::SCROLL_INDICATOR_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_INDICATOR_RIGHT"
		);
	}
	inline jint View::SCROLL_INDICATOR_START()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_INDICATOR_START"
		);
	}
	inline jint View::SCROLL_INDICATOR_TOP()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_INDICATOR_TOP"
		);
	}
	inline jint View::SOUND_EFFECTS_ENABLED()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SOUND_EFFECTS_ENABLED"
		);
	}
	inline jint View::STATUS_BAR_HIDDEN()
	{
		return getStaticField<jint>(
			"android.view.View",
			"STATUS_BAR_HIDDEN"
		);
	}
	inline jint View::STATUS_BAR_VISIBLE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"STATUS_BAR_VISIBLE"
		);
	}
	inline jint View::SYSTEM_UI_FLAG_FULLSCREEN()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_FULLSCREEN"
		);
	}
	inline jint View::SYSTEM_UI_FLAG_HIDE_NAVIGATION()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_HIDE_NAVIGATION"
		);
	}
	inline jint View::SYSTEM_UI_FLAG_IMMERSIVE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_IMMERSIVE"
		);
	}
	inline jint View::SYSTEM_UI_FLAG_IMMERSIVE_STICKY()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_IMMERSIVE_STICKY"
		);
	}
	inline jint View::SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN"
		);
	}
	inline jint View::SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION"
		);
	}
	inline jint View::SYSTEM_UI_FLAG_LAYOUT_STABLE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_LAYOUT_STABLE"
		);
	}
	inline jint View::SYSTEM_UI_FLAG_LIGHT_NAVIGATION_BAR()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_LIGHT_NAVIGATION_BAR"
		);
	}
	inline jint View::SYSTEM_UI_FLAG_LIGHT_STATUS_BAR()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_LIGHT_STATUS_BAR"
		);
	}
	inline jint View::SYSTEM_UI_FLAG_LOW_PROFILE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_LOW_PROFILE"
		);
	}
	inline jint View::SYSTEM_UI_FLAG_VISIBLE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_VISIBLE"
		);
	}
	inline jint View::SYSTEM_UI_LAYOUT_FLAGS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_LAYOUT_FLAGS"
		);
	}
	inline jint View::TEXT_ALIGNMENT_CENTER()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_CENTER"
		);
	}
	inline jint View::TEXT_ALIGNMENT_GRAVITY()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_GRAVITY"
		);
	}
	inline jint View::TEXT_ALIGNMENT_INHERIT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_INHERIT"
		);
	}
	inline jint View::TEXT_ALIGNMENT_TEXT_END()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_TEXT_END"
		);
	}
	inline jint View::TEXT_ALIGNMENT_TEXT_START()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_TEXT_START"
		);
	}
	inline jint View::TEXT_ALIGNMENT_VIEW_END()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_VIEW_END"
		);
	}
	inline jint View::TEXT_ALIGNMENT_VIEW_START()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_VIEW_START"
		);
	}
	inline jint View::TEXT_DIRECTION_ANY_RTL()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_ANY_RTL"
		);
	}
	inline jint View::TEXT_DIRECTION_FIRST_STRONG()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_FIRST_STRONG"
		);
	}
	inline jint View::TEXT_DIRECTION_FIRST_STRONG_LTR()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_FIRST_STRONG_LTR"
		);
	}
	inline jint View::TEXT_DIRECTION_FIRST_STRONG_RTL()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_FIRST_STRONG_RTL"
		);
	}
	inline jint View::TEXT_DIRECTION_INHERIT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_INHERIT"
		);
	}
	inline jint View::TEXT_DIRECTION_LOCALE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_LOCALE"
		);
	}
	inline jint View::TEXT_DIRECTION_LTR()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_LTR"
		);
	}
	inline jint View::TEXT_DIRECTION_RTL()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_RTL"
		);
	}
	inline android::util::Property View::TRANSLATION_X()
	{
		return getStaticObjectField(
			"android.view.View",
			"TRANSLATION_X",
			"Landroid/util/Property;"
		);
	}
	inline android::util::Property View::TRANSLATION_Y()
	{
		return getStaticObjectField(
			"android.view.View",
			"TRANSLATION_Y",
			"Landroid/util/Property;"
		);
	}
	inline android::util::Property View::TRANSLATION_Z()
	{
		return getStaticObjectField(
			"android.view.View",
			"TRANSLATION_Z",
			"Landroid/util/Property;"
		);
	}
	inline jint View::VISIBLE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"VISIBLE"
		);
	}
	inline android::util::Property View::X()
	{
		return getStaticObjectField(
			"android.view.View",
			"X",
			"Landroid/util/Property;"
		);
	}
	inline android::util::Property View::Y()
	{
		return getStaticObjectField(
			"android.view.View",
			"Y",
			"Landroid/util/Property;"
		);
	}
	inline android::util::Property View::Z()
	{
		return getStaticObjectField(
			"android.view.View",
			"Z",
			"Landroid/util/Property;"
		);
	}
	
	// Constructors
	inline View::View(android::content::Context arg0)
		: JObject(
			"android.view.View",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline View::View(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.view.View",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline View::View(android::content::Context arg0, JObject arg1, jint arg2)
		: JObject(
			"android.view.View",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline View::View(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: JObject(
			"android.view.View",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint View::combineMeasuredStates(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.view.View",
			"combineMeasuredStates",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint View::generateViewId()
	{
		return callStaticMethod<jint>(
			"android.view.View",
			"generateViewId",
			"()I"
		);
	}
	inline jint View::getDefaultSize(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.view.View",
			"getDefaultSize",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline android::view::View View::inflate(android::content::Context arg0, jint arg1, android::view::ViewGroup arg2)
	{
		return callStaticObjectMethod(
			"android.view.View",
			"inflate",
			"(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline jint View::resolveSize(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.view.View",
			"resolveSize",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint View::resolveSizeAndState(jint arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.view.View",
			"resolveSizeAndState",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	inline void View::addChildrenForAccessibility(java::util::ArrayList arg0) const
	{
		callMethod<void>(
			"addChildrenForAccessibility",
			"(Ljava/util/ArrayList;)V",
			arg0.object()
		);
	}
	inline void View::addExtraDataToAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0, JString arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void View::addFocusables(java::util::ArrayList arg0, jint arg1) const
	{
		callMethod<void>(
			"addFocusables",
			"(Ljava/util/ArrayList;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void View::addFocusables(java::util::ArrayList arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"addFocusables",
			"(Ljava/util/ArrayList;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void View::addKeyboardNavigationClusters(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"addKeyboardNavigationClusters",
			"(Ljava/util/Collection;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void View::addOnAttachStateChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnAttachStateChangeListener",
			"(Landroid/view/View$OnAttachStateChangeListener;)V",
			arg0.object()
		);
	}
	inline void View::addOnLayoutChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnLayoutChangeListener",
			"(Landroid/view/View$OnLayoutChangeListener;)V",
			arg0.object()
		);
	}
	inline void View::addOnUnhandledKeyEventListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnUnhandledKeyEventListener",
			"(Landroid/view/View$OnUnhandledKeyEventListener;)V",
			arg0.object()
		);
	}
	inline void View::addTouchables(java::util::ArrayList arg0) const
	{
		callMethod<void>(
			"addTouchables",
			"(Ljava/util/ArrayList;)V",
			arg0.object()
		);
	}
	inline android::view::ViewPropertyAnimator View::animate() const
	{
		return callObjectMethod(
			"animate",
			"()Landroid/view/ViewPropertyAnimator;"
		);
	}
	inline void View::announceForAccessibility(JString arg0) const
	{
		callMethod<void>(
			"announceForAccessibility",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void View::autofill(android::util::SparseArray arg0) const
	{
		callMethod<void>(
			"autofill",
			"(Landroid/util/SparseArray;)V",
			arg0.object()
		);
	}
	inline void View::autofill(android::view::autofill::AutofillValue arg0) const
	{
		callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	inline void View::bringToFront() const
	{
		callMethod<void>(
			"bringToFront",
			"()V"
		);
	}
	inline void View::buildDrawingCache() const
	{
		callMethod<void>(
			"buildDrawingCache",
			"()V"
		);
	}
	inline void View::buildDrawingCache(jboolean arg0) const
	{
		callMethod<void>(
			"buildDrawingCache",
			"(Z)V",
			arg0
		);
	}
	inline void View::buildLayer() const
	{
		callMethod<void>(
			"buildLayer",
			"()V"
		);
	}
	inline jboolean View::callOnClick() const
	{
		return callMethod<jboolean>(
			"callOnClick",
			"()Z"
		);
	}
	inline jboolean View::canResolveLayoutDirection() const
	{
		return callMethod<jboolean>(
			"canResolveLayoutDirection",
			"()Z"
		);
	}
	inline jboolean View::canResolveTextAlignment() const
	{
		return callMethod<jboolean>(
			"canResolveTextAlignment",
			"()Z"
		);
	}
	inline jboolean View::canResolveTextDirection() const
	{
		return callMethod<jboolean>(
			"canResolveTextDirection",
			"()Z"
		);
	}
	inline jboolean View::canScrollHorizontally(jint arg0) const
	{
		return callMethod<jboolean>(
			"canScrollHorizontally",
			"(I)Z",
			arg0
		);
	}
	inline jboolean View::canScrollVertically(jint arg0) const
	{
		return callMethod<jboolean>(
			"canScrollVertically",
			"(I)Z",
			arg0
		);
	}
	inline void View::cancelDragAndDrop() const
	{
		callMethod<void>(
			"cancelDragAndDrop",
			"()V"
		);
	}
	inline void View::cancelLongPress() const
	{
		callMethod<void>(
			"cancelLongPress",
			"()V"
		);
	}
	inline void View::cancelPendingInputEvents() const
	{
		callMethod<void>(
			"cancelPendingInputEvents",
			"()V"
		);
	}
	inline jboolean View::checkInputConnectionProxy(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"checkInputConnectionProxy",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	inline void View::clearAnimation() const
	{
		callMethod<void>(
			"clearAnimation",
			"()V"
		);
	}
	inline void View::clearFocus() const
	{
		callMethod<void>(
			"clearFocus",
			"()V"
		);
	}
	inline void View::clearViewTranslationCallback() const
	{
		callMethod<void>(
			"clearViewTranslationCallback",
			"()V"
		);
	}
	inline void View::computeScroll() const
	{
		callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	inline android::view::WindowInsets View::computeSystemWindowInsets(android::view::WindowInsets arg0, android::graphics::Rect arg1) const
	{
		return callObjectMethod(
			"computeSystemWindowInsets",
			"(Landroid/view/WindowInsets;Landroid/graphics/Rect;)Landroid/view/WindowInsets;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::view::accessibility::AccessibilityNodeInfo View::createAccessibilityNodeInfo() const
	{
		return callObjectMethod(
			"createAccessibilityNodeInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	inline void View::createContextMenu(JObject arg0) const
	{
		callMethod<void>(
			"createContextMenu",
			"(Landroid/view/ContextMenu;)V",
			arg0.object()
		);
	}
	inline void View::destroyDrawingCache() const
	{
		callMethod<void>(
			"destroyDrawingCache",
			"()V"
		);
	}
	inline android::view::WindowInsets View::dispatchApplyWindowInsets(android::view::WindowInsets arg0) const
	{
		return callObjectMethod(
			"dispatchApplyWindowInsets",
			"(Landroid/view/WindowInsets;)Landroid/view/WindowInsets;",
			arg0.object()
		);
	}
	inline jboolean View::dispatchCapturedPointerEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchCapturedPointerEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void View::dispatchConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"dispatchConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	inline void View::dispatchCreateViewTranslationRequest(JObject arg0, JIntArray arg1, android::view::translation::TranslationCapability arg2, JObject arg3) const
	{
		callMethod<void>(
			"dispatchCreateViewTranslationRequest",
			"(Ljava/util/Map;[ILandroid/view/translation/TranslationCapability;Ljava/util/List;)V",
			arg0.object(),
			arg1.object<jintArray>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void View::dispatchDisplayHint(jint arg0) const
	{
		callMethod<void>(
			"dispatchDisplayHint",
			"(I)V",
			arg0
		);
	}
	inline jboolean View::dispatchDragEvent(android::view::DragEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.object()
		);
	}
	inline void View::dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"dispatchDrawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void View::dispatchFinishTemporaryDetach() const
	{
		callMethod<void>(
			"dispatchFinishTemporaryDetach",
			"()V"
		);
	}
	inline jboolean View::dispatchGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean View::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean View::dispatchKeyEventPreIme(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEventPreIme",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean View::dispatchKeyShortcutEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean View::dispatchNestedFling(jfloat arg0, jfloat arg1, jboolean arg2) const
	{
		return callMethod<jboolean>(
			"dispatchNestedFling",
			"(FFZ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean View::dispatchNestedPreFling(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"dispatchNestedPreFling",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	inline jboolean View::dispatchNestedPrePerformAccessibilityAction(jint arg0, android::os::Bundle arg1) const
	{
		return callMethod<jboolean>(
			"dispatchNestedPrePerformAccessibilityAction",
			"(ILandroid/os/Bundle;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean View::dispatchNestedPreScroll(jint arg0, jint arg1, JIntArray arg2, JIntArray arg3) const
	{
		return callMethod<jboolean>(
			"dispatchNestedPreScroll",
			"(II[I[I)Z",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3.object<jintArray>()
		);
	}
	inline jboolean View::dispatchNestedScroll(jint arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4) const
	{
		return callMethod<jboolean>(
			"dispatchNestedScroll",
			"(IIII[I)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jintArray>()
		);
	}
	inline void View::dispatchPointerCaptureChanged(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchPointerCaptureChanged",
			"(Z)V",
			arg0
		);
	}
	inline jboolean View::dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.object()
		);
	}
	inline void View::dispatchProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"dispatchProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void View::dispatchProvideStructure(android::view::ViewStructure arg0) const
	{
		callMethod<void>(
			"dispatchProvideStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	inline void View::dispatchScrollCaptureSearch(android::graphics::Rect arg0, android::graphics::Point arg1, JObject arg2) const
	{
		callMethod<void>(
			"dispatchScrollCaptureSearch",
			"(Landroid/graphics/Rect;Landroid/graphics/Point;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void View::dispatchStartTemporaryDetach() const
	{
		callMethod<void>(
			"dispatchStartTemporaryDetach",
			"()V"
		);
	}
	inline void View::dispatchSystemUiVisibilityChanged(jint arg0) const
	{
		callMethod<void>(
			"dispatchSystemUiVisibilityChanged",
			"(I)V",
			arg0
		);
	}
	inline jboolean View::dispatchTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean View::dispatchTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean View::dispatchUnhandledMove(android::view::View arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"dispatchUnhandledMove",
			"(Landroid/view/View;I)Z",
			arg0.object(),
			arg1
		);
	}
	inline void View::dispatchWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	inline void View::dispatchWindowInsetsAnimationEnd(android::view::WindowInsetsAnimation arg0) const
	{
		callMethod<void>(
			"dispatchWindowInsetsAnimationEnd",
			"(Landroid/view/WindowInsetsAnimation;)V",
			arg0.object()
		);
	}
	inline void View::dispatchWindowInsetsAnimationPrepare(android::view::WindowInsetsAnimation arg0) const
	{
		callMethod<void>(
			"dispatchWindowInsetsAnimationPrepare",
			"(Landroid/view/WindowInsetsAnimation;)V",
			arg0.object()
		);
	}
	inline android::view::WindowInsets View::dispatchWindowInsetsAnimationProgress(android::view::WindowInsets arg0, JObject arg1) const
	{
		return callObjectMethod(
			"dispatchWindowInsetsAnimationProgress",
			"(Landroid/view/WindowInsets;Ljava/util/List;)Landroid/view/WindowInsets;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::view::WindowInsetsAnimation_Bounds View::dispatchWindowInsetsAnimationStart(android::view::WindowInsetsAnimation arg0, android::view::WindowInsetsAnimation_Bounds arg1) const
	{
		return callObjectMethod(
			"dispatchWindowInsetsAnimationStart",
			"(Landroid/view/WindowInsetsAnimation;Landroid/view/WindowInsetsAnimation$Bounds;)Landroid/view/WindowInsetsAnimation$Bounds;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void View::dispatchWindowSystemUiVisiblityChanged(jint arg0) const
	{
		callMethod<void>(
			"dispatchWindowSystemUiVisiblityChanged",
			"(I)V",
			arg0
		);
	}
	inline void View::dispatchWindowVisibilityChanged(jint arg0) const
	{
		callMethod<void>(
			"dispatchWindowVisibilityChanged",
			"(I)V",
			arg0
		);
	}
	inline void View::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline void View::drawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline android::view::View View::findFocus() const
	{
		return callObjectMethod(
			"findFocus",
			"()Landroid/view/View;"
		);
	}
	inline JObject View::findOnBackInvokedDispatcher() const
	{
		return callObjectMethod(
			"findOnBackInvokedDispatcher",
			"()Landroid/window/OnBackInvokedDispatcher;"
		);
	}
	inline android::view::View View::findViewById(jint arg0) const
	{
		return callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline android::view::View View::findViewWithTag(JObject arg0) const
	{
		return callObjectMethod(
			"findViewWithTag",
			"(Ljava/lang/Object;)Landroid/view/View;",
			arg0.object<jobject>()
		);
	}
	inline void View::findViewsWithText(java::util::ArrayList arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"findViewsWithText",
			"(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline android::view::View View::focusSearch(jint arg0) const
	{
		return callObjectMethod(
			"focusSearch",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline void View::forceHasOverlappingRendering(jboolean arg0) const
	{
		callMethod<void>(
			"forceHasOverlappingRendering",
			"(Z)V",
			arg0
		);
	}
	inline void View::forceLayout() const
	{
		callMethod<void>(
			"forceLayout",
			"()V"
		);
	}
	inline jboolean View::gatherTransparentRegion(android::graphics::Region arg0) const
	{
		return callMethod<jboolean>(
			"gatherTransparentRegion",
			"(Landroid/graphics/Region;)Z",
			arg0.object()
		);
	}
	inline void View::generateDisplayHash(JString arg0, android::graphics::Rect arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"generateDisplayHash",
			"(Ljava/lang/String;Landroid/graphics/Rect;Ljava/util/concurrent/Executor;Landroid/view/displayhash/DisplayHashResultCallback;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline JString View::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::view::View_AccessibilityDelegate View::getAccessibilityDelegate() const
	{
		return callObjectMethod(
			"getAccessibilityDelegate",
			"()Landroid/view/View$AccessibilityDelegate;"
		);
	}
	inline jint View::getAccessibilityLiveRegion() const
	{
		return callMethod<jint>(
			"getAccessibilityLiveRegion",
			"()I"
		);
	}
	inline android::view::accessibility::AccessibilityNodeProvider View::getAccessibilityNodeProvider() const
	{
		return callObjectMethod(
			"getAccessibilityNodeProvider",
			"()Landroid/view/accessibility/AccessibilityNodeProvider;"
		);
	}
	inline JString View::getAccessibilityPaneTitle() const
	{
		return callObjectMethod(
			"getAccessibilityPaneTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint View::getAccessibilityTraversalAfter() const
	{
		return callMethod<jint>(
			"getAccessibilityTraversalAfter",
			"()I"
		);
	}
	inline jint View::getAccessibilityTraversalBefore() const
	{
		return callMethod<jint>(
			"getAccessibilityTraversalBefore",
			"()I"
		);
	}
	inline jfloat View::getAlpha() const
	{
		return callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	inline android::view::animation::Animation View::getAnimation() const
	{
		return callObjectMethod(
			"getAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
	inline android::graphics::Matrix View::getAnimationMatrix() const
	{
		return callObjectMethod(
			"getAnimationMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	inline JObject View::getApplicationWindowToken() const
	{
		return callObjectMethod(
			"getApplicationWindowToken",
			"()Landroid/os/IBinder;"
		);
	}
	inline JIntArray View::getAttributeResolutionStack(jint arg0) const
	{
		return callObjectMethod(
			"getAttributeResolutionStack",
			"(I)[I",
			arg0
		);
	}
	inline JObject View::getAttributeSourceResourceMap() const
	{
		return callObjectMethod(
			"getAttributeSourceResourceMap",
			"()Ljava/util/Map;"
		);
	}
	inline JArray View::getAutofillHints() const
	{
		return callObjectMethod(
			"getAutofillHints",
			"()[Ljava/lang/String;"
		);
	}
	inline android::view::autofill::AutofillId View::getAutofillId() const
	{
		return callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	inline jint View::getAutofillType() const
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	inline android::view::autofill::AutofillValue View::getAutofillValue() const
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	inline android::graphics::drawable::Drawable View::getBackground() const
	{
		return callObjectMethod(
			"getBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::BlendMode View::getBackgroundTintBlendMode() const
	{
		return callObjectMethod(
			"getBackgroundTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	inline android::content::res::ColorStateList View::getBackgroundTintList() const
	{
		return callObjectMethod(
			"getBackgroundTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline android::graphics::PorterDuff_Mode View::getBackgroundTintMode() const
	{
		return callObjectMethod(
			"getBackgroundTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline jint View::getBaseline() const
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	inline jint View::getBottom() const
	{
		return callMethod<jint>(
			"getBottom",
			"()I"
		);
	}
	inline jfloat View::getCameraDistance() const
	{
		return callMethod<jfloat>(
			"getCameraDistance",
			"()F"
		);
	}
	inline android::graphics::Rect View::getClipBounds() const
	{
		return callObjectMethod(
			"getClipBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	inline jboolean View::getClipBounds(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getClipBounds",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline jboolean View::getClipToOutline() const
	{
		return callMethod<jboolean>(
			"getClipToOutline",
			"()Z"
		);
	}
	inline android::view::contentcapture::ContentCaptureSession View::getContentCaptureSession() const
	{
		return callObjectMethod(
			"getContentCaptureSession",
			"()Landroid/view/contentcapture/ContentCaptureSession;"
		);
	}
	inline JString View::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::content::Context View::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	inline jboolean View::getDefaultFocusHighlightEnabled() const
	{
		return callMethod<jboolean>(
			"getDefaultFocusHighlightEnabled",
			"()Z"
		);
	}
	inline android::view::Display View::getDisplay() const
	{
		return callObjectMethod(
			"getDisplay",
			"()Landroid/view/Display;"
		);
	}
	inline JIntArray View::getDrawableState() const
	{
		return callObjectMethod(
			"getDrawableState",
			"()[I"
		);
	}
	inline android::graphics::Bitmap View::getDrawingCache() const
	{
		return callObjectMethod(
			"getDrawingCache",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline android::graphics::Bitmap View::getDrawingCache(jboolean arg0) const
	{
		return callObjectMethod(
			"getDrawingCache",
			"(Z)Landroid/graphics/Bitmap;",
			arg0
		);
	}
	inline jint View::getDrawingCacheBackgroundColor() const
	{
		return callMethod<jint>(
			"getDrawingCacheBackgroundColor",
			"()I"
		);
	}
	inline jint View::getDrawingCacheQuality() const
	{
		return callMethod<jint>(
			"getDrawingCacheQuality",
			"()I"
		);
	}
	inline void View::getDrawingRect(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getDrawingRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline jlong View::getDrawingTime() const
	{
		return callMethod<jlong>(
			"getDrawingTime",
			"()J"
		);
	}
	inline jfloat View::getElevation() const
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	inline jint View::getExplicitStyle() const
	{
		return callMethod<jint>(
			"getExplicitStyle",
			"()I"
		);
	}
	inline jboolean View::getFilterTouchesWhenObscured() const
	{
		return callMethod<jboolean>(
			"getFilterTouchesWhenObscured",
			"()Z"
		);
	}
	inline jboolean View::getFitsSystemWindows() const
	{
		return callMethod<jboolean>(
			"getFitsSystemWindows",
			"()Z"
		);
	}
	inline jint View::getFocusable() const
	{
		return callMethod<jint>(
			"getFocusable",
			"()I"
		);
	}
	inline java::util::ArrayList View::getFocusables(jint arg0) const
	{
		return callObjectMethod(
			"getFocusables",
			"(I)Ljava/util/ArrayList;",
			arg0
		);
	}
	inline void View::getFocusedRect(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getFocusedRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable View::getForeground() const
	{
		return callObjectMethod(
			"getForeground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint View::getForegroundGravity() const
	{
		return callMethod<jint>(
			"getForegroundGravity",
			"()I"
		);
	}
	inline android::graphics::BlendMode View::getForegroundTintBlendMode() const
	{
		return callObjectMethod(
			"getForegroundTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	inline android::content::res::ColorStateList View::getForegroundTintList() const
	{
		return callObjectMethod(
			"getForegroundTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline android::graphics::PorterDuff_Mode View::getForegroundTintMode() const
	{
		return callObjectMethod(
			"getForegroundTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline jboolean View::getGlobalVisibleRect(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getGlobalVisibleRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline jboolean View::getGlobalVisibleRect(android::graphics::Rect arg0, android::graphics::Point arg1) const
	{
		return callMethod<jboolean>(
			"getGlobalVisibleRect",
			"(Landroid/graphics/Rect;Landroid/graphics/Point;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::os::Handler View::getHandler() const
	{
		return callObjectMethod(
			"getHandler",
			"()Landroid/os/Handler;"
		);
	}
	inline jboolean View::getHasOverlappingRendering() const
	{
		return callMethod<jboolean>(
			"getHasOverlappingRendering",
			"()Z"
		);
	}
	inline jint View::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline void View::getHitRect(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getHitRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline jint View::getHorizontalFadingEdgeLength() const
	{
		return callMethod<jint>(
			"getHorizontalFadingEdgeLength",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable View::getHorizontalScrollbarThumbDrawable() const
	{
		return callObjectMethod(
			"getHorizontalScrollbarThumbDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::drawable::Drawable View::getHorizontalScrollbarTrackDrawable() const
	{
		return callObjectMethod(
			"getHorizontalScrollbarTrackDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint View::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline jint View::getImportantForAccessibility() const
	{
		return callMethod<jint>(
			"getImportantForAccessibility",
			"()I"
		);
	}
	inline jint View::getImportantForAutofill() const
	{
		return callMethod<jint>(
			"getImportantForAutofill",
			"()I"
		);
	}
	inline jint View::getImportantForContentCapture() const
	{
		return callMethod<jint>(
			"getImportantForContentCapture",
			"()I"
		);
	}
	inline jboolean View::getKeepScreenOn() const
	{
		return callMethod<jboolean>(
			"getKeepScreenOn",
			"()Z"
		);
	}
	inline android::view::KeyEvent_DispatcherState View::getKeyDispatcherState() const
	{
		return callObjectMethod(
			"getKeyDispatcherState",
			"()Landroid/view/KeyEvent$DispatcherState;"
		);
	}
	inline jint View::getLabelFor() const
	{
		return callMethod<jint>(
			"getLabelFor",
			"()I"
		);
	}
	inline jint View::getLayerType() const
	{
		return callMethod<jint>(
			"getLayerType",
			"()I"
		);
	}
	inline jint View::getLayoutDirection() const
	{
		return callMethod<jint>(
			"getLayoutDirection",
			"()I"
		);
	}
	inline android::view::ViewGroup_LayoutParams View::getLayoutParams() const
	{
		return callObjectMethod(
			"getLayoutParams",
			"()Landroid/view/ViewGroup$LayoutParams;"
		);
	}
	inline jint View::getLeft() const
	{
		return callMethod<jint>(
			"getLeft",
			"()I"
		);
	}
	inline jboolean View::getLocalVisibleRect(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getLocalVisibleRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline void View::getLocationInSurface(JIntArray arg0) const
	{
		callMethod<void>(
			"getLocationInSurface",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	inline void View::getLocationInWindow(JIntArray arg0) const
	{
		callMethod<void>(
			"getLocationInWindow",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	inline void View::getLocationOnScreen(JIntArray arg0) const
	{
		callMethod<void>(
			"getLocationOnScreen",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	inline android::graphics::Matrix View::getMatrix() const
	{
		return callObjectMethod(
			"getMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	inline jint View::getMeasuredHeight() const
	{
		return callMethod<jint>(
			"getMeasuredHeight",
			"()I"
		);
	}
	inline jint View::getMeasuredHeightAndState() const
	{
		return callMethod<jint>(
			"getMeasuredHeightAndState",
			"()I"
		);
	}
	inline jint View::getMeasuredState() const
	{
		return callMethod<jint>(
			"getMeasuredState",
			"()I"
		);
	}
	inline jint View::getMeasuredWidth() const
	{
		return callMethod<jint>(
			"getMeasuredWidth",
			"()I"
		);
	}
	inline jint View::getMeasuredWidthAndState() const
	{
		return callMethod<jint>(
			"getMeasuredWidthAndState",
			"()I"
		);
	}
	inline jint View::getMinimumHeight() const
	{
		return callMethod<jint>(
			"getMinimumHeight",
			"()I"
		);
	}
	inline jint View::getMinimumWidth() const
	{
		return callMethod<jint>(
			"getMinimumWidth",
			"()I"
		);
	}
	inline jint View::getNextClusterForwardId() const
	{
		return callMethod<jint>(
			"getNextClusterForwardId",
			"()I"
		);
	}
	inline jint View::getNextFocusDownId() const
	{
		return callMethod<jint>(
			"getNextFocusDownId",
			"()I"
		);
	}
	inline jint View::getNextFocusForwardId() const
	{
		return callMethod<jint>(
			"getNextFocusForwardId",
			"()I"
		);
	}
	inline jint View::getNextFocusLeftId() const
	{
		return callMethod<jint>(
			"getNextFocusLeftId",
			"()I"
		);
	}
	inline jint View::getNextFocusRightId() const
	{
		return callMethod<jint>(
			"getNextFocusRightId",
			"()I"
		);
	}
	inline jint View::getNextFocusUpId() const
	{
		return callMethod<jint>(
			"getNextFocusUpId",
			"()I"
		);
	}
	inline JObject View::getOnFocusChangeListener() const
	{
		return callObjectMethod(
			"getOnFocusChangeListener",
			"()Landroid/view/View$OnFocusChangeListener;"
		);
	}
	inline jint View::getOutlineAmbientShadowColor() const
	{
		return callMethod<jint>(
			"getOutlineAmbientShadowColor",
			"()I"
		);
	}
	inline android::view::ViewOutlineProvider View::getOutlineProvider() const
	{
		return callObjectMethod(
			"getOutlineProvider",
			"()Landroid/view/ViewOutlineProvider;"
		);
	}
	inline jint View::getOutlineSpotShadowColor() const
	{
		return callMethod<jint>(
			"getOutlineSpotShadowColor",
			"()I"
		);
	}
	inline jint View::getOverScrollMode() const
	{
		return callMethod<jint>(
			"getOverScrollMode",
			"()I"
		);
	}
	inline android::view::ViewOverlay View::getOverlay() const
	{
		return callObjectMethod(
			"getOverlay",
			"()Landroid/view/ViewOverlay;"
		);
	}
	inline jint View::getPaddingBottom() const
	{
		return callMethod<jint>(
			"getPaddingBottom",
			"()I"
		);
	}
	inline jint View::getPaddingEnd() const
	{
		return callMethod<jint>(
			"getPaddingEnd",
			"()I"
		);
	}
	inline jint View::getPaddingLeft() const
	{
		return callMethod<jint>(
			"getPaddingLeft",
			"()I"
		);
	}
	inline jint View::getPaddingRight() const
	{
		return callMethod<jint>(
			"getPaddingRight",
			"()I"
		);
	}
	inline jint View::getPaddingStart() const
	{
		return callMethod<jint>(
			"getPaddingStart",
			"()I"
		);
	}
	inline jint View::getPaddingTop() const
	{
		return callMethod<jint>(
			"getPaddingTop",
			"()I"
		);
	}
	inline JObject View::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Landroid/view/ViewParent;"
		);
	}
	inline JObject View::getParentForAccessibility() const
	{
		return callObjectMethod(
			"getParentForAccessibility",
			"()Landroid/view/ViewParent;"
		);
	}
	inline jfloat View::getPivotX() const
	{
		return callMethod<jfloat>(
			"getPivotX",
			"()F"
		);
	}
	inline jfloat View::getPivotY() const
	{
		return callMethod<jfloat>(
			"getPivotY",
			"()F"
		);
	}
	inline android::view::PointerIcon View::getPointerIcon() const
	{
		return callObjectMethod(
			"getPointerIcon",
			"()Landroid/view/PointerIcon;"
		);
	}
	inline JObject View::getPreferKeepClearRects() const
	{
		return callObjectMethod(
			"getPreferKeepClearRects",
			"()Ljava/util/List;"
		);
	}
	inline JArray View::getReceiveContentMimeTypes() const
	{
		return callObjectMethod(
			"getReceiveContentMimeTypes",
			"()[Ljava/lang/String;"
		);
	}
	inline android::content::res::Resources View::getResources() const
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	inline jboolean View::getRevealOnFocusHint() const
	{
		return callMethod<jboolean>(
			"getRevealOnFocusHint",
			"()Z"
		);
	}
	inline jint View::getRight() const
	{
		return callMethod<jint>(
			"getRight",
			"()I"
		);
	}
	inline JObject View::getRootSurfaceControl() const
	{
		return callObjectMethod(
			"getRootSurfaceControl",
			"()Landroid/view/AttachedSurfaceControl;"
		);
	}
	inline android::view::View View::getRootView() const
	{
		return callObjectMethod(
			"getRootView",
			"()Landroid/view/View;"
		);
	}
	inline android::view::WindowInsets View::getRootWindowInsets() const
	{
		return callObjectMethod(
			"getRootWindowInsets",
			"()Landroid/view/WindowInsets;"
		);
	}
	inline jfloat View::getRotation() const
	{
		return callMethod<jfloat>(
			"getRotation",
			"()F"
		);
	}
	inline jfloat View::getRotationX() const
	{
		return callMethod<jfloat>(
			"getRotationX",
			"()F"
		);
	}
	inline jfloat View::getRotationY() const
	{
		return callMethod<jfloat>(
			"getRotationY",
			"()F"
		);
	}
	inline jfloat View::getScaleX() const
	{
		return callMethod<jfloat>(
			"getScaleX",
			"()F"
		);
	}
	inline jfloat View::getScaleY() const
	{
		return callMethod<jfloat>(
			"getScaleY",
			"()F"
		);
	}
	inline jint View::getScrollBarDefaultDelayBeforeFade() const
	{
		return callMethod<jint>(
			"getScrollBarDefaultDelayBeforeFade",
			"()I"
		);
	}
	inline jint View::getScrollBarFadeDuration() const
	{
		return callMethod<jint>(
			"getScrollBarFadeDuration",
			"()I"
		);
	}
	inline jint View::getScrollBarSize() const
	{
		return callMethod<jint>(
			"getScrollBarSize",
			"()I"
		);
	}
	inline jint View::getScrollBarStyle() const
	{
		return callMethod<jint>(
			"getScrollBarStyle",
			"()I"
		);
	}
	inline jint View::getScrollCaptureHint() const
	{
		return callMethod<jint>(
			"getScrollCaptureHint",
			"()I"
		);
	}
	inline jint View::getScrollIndicators() const
	{
		return callMethod<jint>(
			"getScrollIndicators",
			"()I"
		);
	}
	inline jint View::getScrollX() const
	{
		return callMethod<jint>(
			"getScrollX",
			"()I"
		);
	}
	inline jint View::getScrollY() const
	{
		return callMethod<jint>(
			"getScrollY",
			"()I"
		);
	}
	inline jint View::getSolidColor() const
	{
		return callMethod<jint>(
			"getSolidColor",
			"()I"
		);
	}
	inline jint View::getSourceLayoutResId() const
	{
		return callMethod<jint>(
			"getSourceLayoutResId",
			"()I"
		);
	}
	inline JString View::getStateDescription() const
	{
		return callObjectMethod(
			"getStateDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::animation::StateListAnimator View::getStateListAnimator() const
	{
		return callObjectMethod(
			"getStateListAnimator",
			"()Landroid/animation/StateListAnimator;"
		);
	}
	inline JObject View::getSystemGestureExclusionRects() const
	{
		return callObjectMethod(
			"getSystemGestureExclusionRects",
			"()Ljava/util/List;"
		);
	}
	inline jint View::getSystemUiVisibility() const
	{
		return callMethod<jint>(
			"getSystemUiVisibility",
			"()I"
		);
	}
	inline JObject View::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject View::getTag(jint arg0) const
	{
		return callObjectMethod(
			"getTag",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline jint View::getTextAlignment() const
	{
		return callMethod<jint>(
			"getTextAlignment",
			"()I"
		);
	}
	inline jint View::getTextDirection() const
	{
		return callMethod<jint>(
			"getTextDirection",
			"()I"
		);
	}
	inline JString View::getTooltipText() const
	{
		return callObjectMethod(
			"getTooltipText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint View::getTop() const
	{
		return callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	inline android::view::TouchDelegate View::getTouchDelegate() const
	{
		return callObjectMethod(
			"getTouchDelegate",
			"()Landroid/view/TouchDelegate;"
		);
	}
	inline java::util::ArrayList View::getTouchables() const
	{
		return callObjectMethod(
			"getTouchables",
			"()Ljava/util/ArrayList;"
		);
	}
	inline jfloat View::getTransitionAlpha() const
	{
		return callMethod<jfloat>(
			"getTransitionAlpha",
			"()F"
		);
	}
	inline JString View::getTransitionName() const
	{
		return callObjectMethod(
			"getTransitionName",
			"()Ljava/lang/String;"
		);
	}
	inline jfloat View::getTranslationX() const
	{
		return callMethod<jfloat>(
			"getTranslationX",
			"()F"
		);
	}
	inline jfloat View::getTranslationY() const
	{
		return callMethod<jfloat>(
			"getTranslationY",
			"()F"
		);
	}
	inline jfloat View::getTranslationZ() const
	{
		return callMethod<jfloat>(
			"getTranslationZ",
			"()F"
		);
	}
	inline jlong View::getUniqueDrawingId() const
	{
		return callMethod<jlong>(
			"getUniqueDrawingId",
			"()J"
		);
	}
	inline jint View::getVerticalFadingEdgeLength() const
	{
		return callMethod<jint>(
			"getVerticalFadingEdgeLength",
			"()I"
		);
	}
	inline jint View::getVerticalScrollbarPosition() const
	{
		return callMethod<jint>(
			"getVerticalScrollbarPosition",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable View::getVerticalScrollbarThumbDrawable() const
	{
		return callObjectMethod(
			"getVerticalScrollbarThumbDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::drawable::Drawable View::getVerticalScrollbarTrackDrawable() const
	{
		return callObjectMethod(
			"getVerticalScrollbarTrackDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint View::getVerticalScrollbarWidth() const
	{
		return callMethod<jint>(
			"getVerticalScrollbarWidth",
			"()I"
		);
	}
	inline android::view::translation::ViewTranslationResponse View::getViewTranslationResponse() const
	{
		return callObjectMethod(
			"getViewTranslationResponse",
			"()Landroid/view/translation/ViewTranslationResponse;"
		);
	}
	inline android::view::ViewTreeObserver View::getViewTreeObserver() const
	{
		return callObjectMethod(
			"getViewTreeObserver",
			"()Landroid/view/ViewTreeObserver;"
		);
	}
	inline jint View::getVisibility() const
	{
		return callMethod<jint>(
			"getVisibility",
			"()I"
		);
	}
	inline jint View::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline android::view::WindowId View::getWindowId() const
	{
		return callObjectMethod(
			"getWindowId",
			"()Landroid/view/WindowId;"
		);
	}
	inline JObject View::getWindowInsetsController() const
	{
		return callObjectMethod(
			"getWindowInsetsController",
			"()Landroid/view/WindowInsetsController;"
		);
	}
	inline jint View::getWindowSystemUiVisibility() const
	{
		return callMethod<jint>(
			"getWindowSystemUiVisibility",
			"()I"
		);
	}
	inline JObject View::getWindowToken() const
	{
		return callObjectMethod(
			"getWindowToken",
			"()Landroid/os/IBinder;"
		);
	}
	inline jint View::getWindowVisibility() const
	{
		return callMethod<jint>(
			"getWindowVisibility",
			"()I"
		);
	}
	inline void View::getWindowVisibleDisplayFrame(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getWindowVisibleDisplayFrame",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline jfloat View::getX() const
	{
		return callMethod<jfloat>(
			"getX",
			"()F"
		);
	}
	inline jfloat View::getY() const
	{
		return callMethod<jfloat>(
			"getY",
			"()F"
		);
	}
	inline jfloat View::getZ() const
	{
		return callMethod<jfloat>(
			"getZ",
			"()F"
		);
	}
	inline jboolean View::hasExplicitFocusable() const
	{
		return callMethod<jboolean>(
			"hasExplicitFocusable",
			"()Z"
		);
	}
	inline jboolean View::hasFocus() const
	{
		return callMethod<jboolean>(
			"hasFocus",
			"()Z"
		);
	}
	inline jboolean View::hasFocusable() const
	{
		return callMethod<jboolean>(
			"hasFocusable",
			"()Z"
		);
	}
	inline jboolean View::hasNestedScrollingParent() const
	{
		return callMethod<jboolean>(
			"hasNestedScrollingParent",
			"()Z"
		);
	}
	inline jboolean View::hasOnClickListeners() const
	{
		return callMethod<jboolean>(
			"hasOnClickListeners",
			"()Z"
		);
	}
	inline jboolean View::hasOnLongClickListeners() const
	{
		return callMethod<jboolean>(
			"hasOnLongClickListeners",
			"()Z"
		);
	}
	inline jboolean View::hasOverlappingRendering() const
	{
		return callMethod<jboolean>(
			"hasOverlappingRendering",
			"()Z"
		);
	}
	inline jboolean View::hasPointerCapture() const
	{
		return callMethod<jboolean>(
			"hasPointerCapture",
			"()Z"
		);
	}
	inline jboolean View::hasTransientState() const
	{
		return callMethod<jboolean>(
			"hasTransientState",
			"()Z"
		);
	}
	inline jboolean View::hasWindowFocus() const
	{
		return callMethod<jboolean>(
			"hasWindowFocus",
			"()Z"
		);
	}
	inline void View::invalidate() const
	{
		callMethod<void>(
			"invalidate",
			"()V"
		);
	}
	inline void View::invalidate(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"invalidate",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void View::invalidate(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"invalidate",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void View::invalidateDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void View::invalidateOutline() const
	{
		callMethod<void>(
			"invalidateOutline",
			"()V"
		);
	}
	inline jboolean View::isAccessibilityFocused() const
	{
		return callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z"
		);
	}
	inline jboolean View::isAccessibilityHeading() const
	{
		return callMethod<jboolean>(
			"isAccessibilityHeading",
			"()Z"
		);
	}
	inline jboolean View::isActivated() const
	{
		return callMethod<jboolean>(
			"isActivated",
			"()Z"
		);
	}
	inline jboolean View::isAttachedToWindow() const
	{
		return callMethod<jboolean>(
			"isAttachedToWindow",
			"()Z"
		);
	}
	inline jboolean View::isAutoHandwritingEnabled() const
	{
		return callMethod<jboolean>(
			"isAutoHandwritingEnabled",
			"()Z"
		);
	}
	inline jboolean View::isClickable() const
	{
		return callMethod<jboolean>(
			"isClickable",
			"()Z"
		);
	}
	inline jboolean View::isContextClickable() const
	{
		return callMethod<jboolean>(
			"isContextClickable",
			"()Z"
		);
	}
	inline jboolean View::isDirty() const
	{
		return callMethod<jboolean>(
			"isDirty",
			"()Z"
		);
	}
	inline jboolean View::isDrawingCacheEnabled() const
	{
		return callMethod<jboolean>(
			"isDrawingCacheEnabled",
			"()Z"
		);
	}
	inline jboolean View::isDuplicateParentStateEnabled() const
	{
		return callMethod<jboolean>(
			"isDuplicateParentStateEnabled",
			"()Z"
		);
	}
	inline jboolean View::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean View::isFocusable() const
	{
		return callMethod<jboolean>(
			"isFocusable",
			"()Z"
		);
	}
	inline jboolean View::isFocusableInTouchMode() const
	{
		return callMethod<jboolean>(
			"isFocusableInTouchMode",
			"()Z"
		);
	}
	inline jboolean View::isFocused() const
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	inline jboolean View::isFocusedByDefault() const
	{
		return callMethod<jboolean>(
			"isFocusedByDefault",
			"()Z"
		);
	}
	inline jboolean View::isForceDarkAllowed() const
	{
		return callMethod<jboolean>(
			"isForceDarkAllowed",
			"()Z"
		);
	}
	inline jboolean View::isHapticFeedbackEnabled() const
	{
		return callMethod<jboolean>(
			"isHapticFeedbackEnabled",
			"()Z"
		);
	}
	inline jboolean View::isHardwareAccelerated() const
	{
		return callMethod<jboolean>(
			"isHardwareAccelerated",
			"()Z"
		);
	}
	inline jboolean View::isHorizontalFadingEdgeEnabled() const
	{
		return callMethod<jboolean>(
			"isHorizontalFadingEdgeEnabled",
			"()Z"
		);
	}
	inline jboolean View::isHorizontalScrollBarEnabled() const
	{
		return callMethod<jboolean>(
			"isHorizontalScrollBarEnabled",
			"()Z"
		);
	}
	inline jboolean View::isHovered() const
	{
		return callMethod<jboolean>(
			"isHovered",
			"()Z"
		);
	}
	inline jboolean View::isImportantForAccessibility() const
	{
		return callMethod<jboolean>(
			"isImportantForAccessibility",
			"()Z"
		);
	}
	inline jboolean View::isImportantForAutofill() const
	{
		return callMethod<jboolean>(
			"isImportantForAutofill",
			"()Z"
		);
	}
	inline jboolean View::isImportantForContentCapture() const
	{
		return callMethod<jboolean>(
			"isImportantForContentCapture",
			"()Z"
		);
	}
	inline jboolean View::isInEditMode() const
	{
		return callMethod<jboolean>(
			"isInEditMode",
			"()Z"
		);
	}
	inline jboolean View::isInLayout() const
	{
		return callMethod<jboolean>(
			"isInLayout",
			"()Z"
		);
	}
	inline jboolean View::isInTouchMode() const
	{
		return callMethod<jboolean>(
			"isInTouchMode",
			"()Z"
		);
	}
	inline jboolean View::isKeyboardNavigationCluster() const
	{
		return callMethod<jboolean>(
			"isKeyboardNavigationCluster",
			"()Z"
		);
	}
	inline jboolean View::isLaidOut() const
	{
		return callMethod<jboolean>(
			"isLaidOut",
			"()Z"
		);
	}
	inline jboolean View::isLayoutDirectionResolved() const
	{
		return callMethod<jboolean>(
			"isLayoutDirectionResolved",
			"()Z"
		);
	}
	inline jboolean View::isLayoutRequested() const
	{
		return callMethod<jboolean>(
			"isLayoutRequested",
			"()Z"
		);
	}
	inline jboolean View::isLongClickable() const
	{
		return callMethod<jboolean>(
			"isLongClickable",
			"()Z"
		);
	}
	inline jboolean View::isNestedScrollingEnabled() const
	{
		return callMethod<jboolean>(
			"isNestedScrollingEnabled",
			"()Z"
		);
	}
	inline jboolean View::isOpaque() const
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	inline jboolean View::isPaddingRelative() const
	{
		return callMethod<jboolean>(
			"isPaddingRelative",
			"()Z"
		);
	}
	inline jboolean View::isPivotSet() const
	{
		return callMethod<jboolean>(
			"isPivotSet",
			"()Z"
		);
	}
	inline jboolean View::isPreferKeepClear() const
	{
		return callMethod<jboolean>(
			"isPreferKeepClear",
			"()Z"
		);
	}
	inline jboolean View::isPressed() const
	{
		return callMethod<jboolean>(
			"isPressed",
			"()Z"
		);
	}
	inline jboolean View::isSaveEnabled() const
	{
		return callMethod<jboolean>(
			"isSaveEnabled",
			"()Z"
		);
	}
	inline jboolean View::isSaveFromParentEnabled() const
	{
		return callMethod<jboolean>(
			"isSaveFromParentEnabled",
			"()Z"
		);
	}
	inline jboolean View::isScreenReaderFocusable() const
	{
		return callMethod<jboolean>(
			"isScreenReaderFocusable",
			"()Z"
		);
	}
	inline jboolean View::isScrollContainer() const
	{
		return callMethod<jboolean>(
			"isScrollContainer",
			"()Z"
		);
	}
	inline jboolean View::isScrollbarFadingEnabled() const
	{
		return callMethod<jboolean>(
			"isScrollbarFadingEnabled",
			"()Z"
		);
	}
	inline jboolean View::isSelected() const
	{
		return callMethod<jboolean>(
			"isSelected",
			"()Z"
		);
	}
	inline jboolean View::isShowingLayoutBounds() const
	{
		return callMethod<jboolean>(
			"isShowingLayoutBounds",
			"()Z"
		);
	}
	inline jboolean View::isShown() const
	{
		return callMethod<jboolean>(
			"isShown",
			"()Z"
		);
	}
	inline jboolean View::isSoundEffectsEnabled() const
	{
		return callMethod<jboolean>(
			"isSoundEffectsEnabled",
			"()Z"
		);
	}
	inline jboolean View::isTemporarilyDetached() const
	{
		return callMethod<jboolean>(
			"isTemporarilyDetached",
			"()Z"
		);
	}
	inline jboolean View::isTextAlignmentResolved() const
	{
		return callMethod<jboolean>(
			"isTextAlignmentResolved",
			"()Z"
		);
	}
	inline jboolean View::isTextDirectionResolved() const
	{
		return callMethod<jboolean>(
			"isTextDirectionResolved",
			"()Z"
		);
	}
	inline jboolean View::isVerticalFadingEdgeEnabled() const
	{
		return callMethod<jboolean>(
			"isVerticalFadingEdgeEnabled",
			"()Z"
		);
	}
	inline jboolean View::isVerticalScrollBarEnabled() const
	{
		return callMethod<jboolean>(
			"isVerticalScrollBarEnabled",
			"()Z"
		);
	}
	inline jboolean View::isVisibleToUserForAutofill(jint arg0) const
	{
		return callMethod<jboolean>(
			"isVisibleToUserForAutofill",
			"(I)Z",
			arg0
		);
	}
	inline void View::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	inline android::view::View View::keyboardNavigationClusterSearch(android::view::View arg0, jint arg1) const
	{
		return callObjectMethod(
			"keyboardNavigationClusterSearch",
			"(Landroid/view/View;I)Landroid/view/View;",
			arg0.object(),
			arg1
		);
	}
	inline void View::layout(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"layout",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void View::measure(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"measure",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void View::offsetLeftAndRight(jint arg0) const
	{
		callMethod<void>(
			"offsetLeftAndRight",
			"(I)V",
			arg0
		);
	}
	inline void View::offsetTopAndBottom(jint arg0) const
	{
		callMethod<void>(
			"offsetTopAndBottom",
			"(I)V",
			arg0
		);
	}
	inline android::view::WindowInsets View::onApplyWindowInsets(android::view::WindowInsets arg0) const
	{
		return callObjectMethod(
			"onApplyWindowInsets",
			"(Landroid/view/WindowInsets;)Landroid/view/WindowInsets;",
			arg0.object()
		);
	}
	inline void View::onCancelPendingInputEvents() const
	{
		callMethod<void>(
			"onCancelPendingInputEvents",
			"()V"
		);
	}
	inline jboolean View::onCapturedPointerEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onCapturedPointerEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean View::onCheckIsTextEditor() const
	{
		return callMethod<jboolean>(
			"onCheckIsTextEditor",
			"()Z"
		);
	}
	inline JObject View::onCreateInputConnection(android::view::inputmethod::EditorInfo arg0) const
	{
		return callObjectMethod(
			"onCreateInputConnection",
			"(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",
			arg0.object()
		);
	}
	inline void View::onCreateViewTranslationRequest(JIntArray arg0, JObject arg1) const
	{
		callMethod<void>(
			"onCreateViewTranslationRequest",
			"([ILjava/util/function/Consumer;)V",
			arg0.object<jintArray>(),
			arg1.object()
		);
	}
	inline void View::onCreateVirtualViewTranslationRequests(JLongArray arg0, JIntArray arg1, JObject arg2) const
	{
		callMethod<void>(
			"onCreateVirtualViewTranslationRequests",
			"([J[ILjava/util/function/Consumer;)V",
			arg0.object<jlongArray>(),
			arg1.object<jintArray>(),
			arg2.object()
		);
	}
	inline jboolean View::onDragEvent(android::view::DragEvent arg0) const
	{
		return callMethod<jboolean>(
			"onDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.object()
		);
	}
	inline void View::onDrawForeground(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"onDrawForeground",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jboolean View::onFilterTouchEventForSecurity(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onFilterTouchEventForSecurity",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void View::onFinishTemporaryDetach() const
	{
		callMethod<void>(
			"onFinishTemporaryDetach",
			"()V"
		);
	}
	inline jboolean View::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void View::onHoverChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onHoverChanged",
			"(Z)V",
			arg0
		);
	}
	inline jboolean View::onHoverEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void View::onInitializeAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const
	{
		callMethod<void>(
			"onInitializeAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object()
		);
	}
	inline void View::onInitializeAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0) const
	{
		callMethod<void>(
			"onInitializeAccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.object()
		);
	}
	inline jboolean View::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean View::onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean View::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jboolean View::onKeyPreIme(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean View::onKeyShortcut(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyShortcut",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean View::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void View::onPointerCaptureChange(jboolean arg0) const
	{
		callMethod<void>(
			"onPointerCaptureChange",
			"(Z)V",
			arg0
		);
	}
	inline void View::onPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const
	{
		callMethod<void>(
			"onPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object()
		);
	}
	inline void View::onProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"onProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void View::onProvideAutofillVirtualStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"onProvideAutofillVirtualStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void View::onProvideContentCaptureStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"onProvideContentCaptureStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void View::onProvideStructure(android::view::ViewStructure arg0) const
	{
		callMethod<void>(
			"onProvideStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	inline void View::onProvideVirtualStructure(android::view::ViewStructure arg0) const
	{
		callMethod<void>(
			"onProvideVirtualStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	inline android::view::ContentInfo View::onReceiveContent(android::view::ContentInfo arg0) const
	{
		return callObjectMethod(
			"onReceiveContent",
			"(Landroid/view/ContentInfo;)Landroid/view/ContentInfo;",
			arg0.object()
		);
	}
	inline android::view::PointerIcon View::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const
	{
		return callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
	inline void View::onRtlPropertiesChanged(jint arg0) const
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	inline void View::onScreenStateChanged(jint arg0) const
	{
		callMethod<void>(
			"onScreenStateChanged",
			"(I)V",
			arg0
		);
	}
	inline void View::onScrollCaptureSearch(android::graphics::Rect arg0, android::graphics::Point arg1, JObject arg2) const
	{
		callMethod<void>(
			"onScrollCaptureSearch",
			"(Landroid/graphics/Rect;Landroid/graphics/Point;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void View::onStartTemporaryDetach() const
	{
		callMethod<void>(
			"onStartTemporaryDetach",
			"()V"
		);
	}
	inline jboolean View::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean View::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void View::onViewTranslationResponse(android::view::translation::ViewTranslationResponse arg0) const
	{
		callMethod<void>(
			"onViewTranslationResponse",
			"(Landroid/view/translation/ViewTranslationResponse;)V",
			arg0.object()
		);
	}
	inline void View::onVirtualViewTranslationResponses(android::util::LongSparseArray arg0) const
	{
		callMethod<void>(
			"onVirtualViewTranslationResponses",
			"(Landroid/util/LongSparseArray;)V",
			arg0.object()
		);
	}
	inline void View::onVisibilityAggregated(jboolean arg0) const
	{
		callMethod<void>(
			"onVisibilityAggregated",
			"(Z)V",
			arg0
		);
	}
	inline void View::onWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	inline void View::onWindowSystemUiVisibilityChanged(jint arg0) const
	{
		callMethod<void>(
			"onWindowSystemUiVisibilityChanged",
			"(I)V",
			arg0
		);
	}
	inline jboolean View::performAccessibilityAction(jint arg0, android::os::Bundle arg1) const
	{
		return callMethod<jboolean>(
			"performAccessibilityAction",
			"(ILandroid/os/Bundle;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean View::performClick() const
	{
		return callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	inline jboolean View::performContextClick() const
	{
		return callMethod<jboolean>(
			"performContextClick",
			"()Z"
		);
	}
	inline jboolean View::performContextClick(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"performContextClick",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	inline jboolean View::performHapticFeedback(jint arg0) const
	{
		return callMethod<jboolean>(
			"performHapticFeedback",
			"(I)Z",
			arg0
		);
	}
	inline jboolean View::performHapticFeedback(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"performHapticFeedback",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean View::performLongClick() const
	{
		return callMethod<jboolean>(
			"performLongClick",
			"()Z"
		);
	}
	inline jboolean View::performLongClick(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"performLongClick",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	inline android::view::ContentInfo View::performReceiveContent(android::view::ContentInfo arg0) const
	{
		return callObjectMethod(
			"performReceiveContent",
			"(Landroid/view/ContentInfo;)Landroid/view/ContentInfo;",
			arg0.object()
		);
	}
	inline void View::playSoundEffect(jint arg0) const
	{
		callMethod<void>(
			"playSoundEffect",
			"(I)V",
			arg0
		);
	}
	inline jboolean View::post(JObject arg0) const
	{
		return callMethod<jboolean>(
			"post",
			"(Ljava/lang/Runnable;)Z",
			arg0.object()
		);
	}
	inline jboolean View::postDelayed(JObject arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"postDelayed",
			"(Ljava/lang/Runnable;J)Z",
			arg0.object(),
			arg1
		);
	}
	inline void View::postInvalidate() const
	{
		callMethod<void>(
			"postInvalidate",
			"()V"
		);
	}
	inline void View::postInvalidate(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"postInvalidate",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void View::postInvalidateDelayed(jlong arg0) const
	{
		callMethod<void>(
			"postInvalidateDelayed",
			"(J)V",
			arg0
		);
	}
	inline void View::postInvalidateDelayed(jlong arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"postInvalidateDelayed",
			"(JIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void View::postInvalidateOnAnimation() const
	{
		callMethod<void>(
			"postInvalidateOnAnimation",
			"()V"
		);
	}
	inline void View::postInvalidateOnAnimation(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"postInvalidateOnAnimation",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void View::postOnAnimation(JObject arg0) const
	{
		callMethod<void>(
			"postOnAnimation",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	inline void View::postOnAnimationDelayed(JObject arg0, jlong arg1) const
	{
		callMethod<void>(
			"postOnAnimationDelayed",
			"(Ljava/lang/Runnable;J)V",
			arg0.object(),
			arg1
		);
	}
	inline void View::refreshDrawableState() const
	{
		callMethod<void>(
			"refreshDrawableState",
			"()V"
		);
	}
	inline void View::releasePointerCapture() const
	{
		callMethod<void>(
			"releasePointerCapture",
			"()V"
		);
	}
	inline jboolean View::removeCallbacks(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeCallbacks",
			"(Ljava/lang/Runnable;)Z",
			arg0.object()
		);
	}
	inline void View::removeOnAttachStateChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnAttachStateChangeListener",
			"(Landroid/view/View$OnAttachStateChangeListener;)V",
			arg0.object()
		);
	}
	inline void View::removeOnLayoutChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnLayoutChangeListener",
			"(Landroid/view/View$OnLayoutChangeListener;)V",
			arg0.object()
		);
	}
	inline void View::removeOnUnhandledKeyEventListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnUnhandledKeyEventListener",
			"(Landroid/view/View$OnUnhandledKeyEventListener;)V",
			arg0.object()
		);
	}
	inline void View::requestApplyInsets() const
	{
		callMethod<void>(
			"requestApplyInsets",
			"()V"
		);
	}
	inline void View::requestFitSystemWindows() const
	{
		callMethod<void>(
			"requestFitSystemWindows",
			"()V"
		);
	}
	inline jboolean View::requestFocus() const
	{
		return callMethod<jboolean>(
			"requestFocus",
			"()Z"
		);
	}
	inline jboolean View::requestFocus(jint arg0) const
	{
		return callMethod<jboolean>(
			"requestFocus",
			"(I)Z",
			arg0
		);
	}
	inline jboolean View::requestFocus(jint arg0, android::graphics::Rect arg1) const
	{
		return callMethod<jboolean>(
			"requestFocus",
			"(ILandroid/graphics/Rect;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean View::requestFocusFromTouch() const
	{
		return callMethod<jboolean>(
			"requestFocusFromTouch",
			"()Z"
		);
	}
	inline void View::requestLayout() const
	{
		callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	inline void View::requestPointerCapture() const
	{
		callMethod<void>(
			"requestPointerCapture",
			"()V"
		);
	}
	inline jboolean View::requestRectangleOnScreen(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"requestRectangleOnScreen",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline jboolean View::requestRectangleOnScreen(android::graphics::Rect arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"requestRectangleOnScreen",
			"(Landroid/graphics/Rect;Z)Z",
			arg0.object(),
			arg1
		);
	}
	inline void View::requestUnbufferedDispatch(android::view::MotionEvent arg0) const
	{
		callMethod<void>(
			"requestUnbufferedDispatch",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
	inline void View::requestUnbufferedDispatch(jint arg0) const
	{
		callMethod<void>(
			"requestUnbufferedDispatch",
			"(I)V",
			arg0
		);
	}
	inline android::view::View View::requireViewById(jint arg0) const
	{
		return callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline void View::resetPivot() const
	{
		callMethod<void>(
			"resetPivot",
			"()V"
		);
	}
	inline jboolean View::restoreDefaultFocus() const
	{
		return callMethod<jboolean>(
			"restoreDefaultFocus",
			"()Z"
		);
	}
	inline void View::restoreHierarchyState(android::util::SparseArray arg0) const
	{
		callMethod<void>(
			"restoreHierarchyState",
			"(Landroid/util/SparseArray;)V",
			arg0.object()
		);
	}
	inline void View::saveAttributeDataForStyleable(android::content::Context arg0, JIntArray arg1, JObject arg2, android::content::res::TypedArray arg3, jint arg4, jint arg5) const
	{
		callMethod<void>(
			"saveAttributeDataForStyleable",
			"(Landroid/content/Context;[ILandroid/util/AttributeSet;Landroid/content/res/TypedArray;II)V",
			arg0.object(),
			arg1.object<jintArray>(),
			arg2.object(),
			arg3.object(),
			arg4,
			arg5
		);
	}
	inline void View::saveHierarchyState(android::util::SparseArray arg0) const
	{
		callMethod<void>(
			"saveHierarchyState",
			"(Landroid/util/SparseArray;)V",
			arg0.object()
		);
	}
	inline void View::scheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1, jlong arg2) const
	{
		callMethod<void>(
			"scheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void View::scrollBy(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"scrollBy",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void View::scrollTo(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"scrollTo",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void View::sendAccessibilityEvent(jint arg0) const
	{
		callMethod<void>(
			"sendAccessibilityEvent",
			"(I)V",
			arg0
		);
	}
	inline void View::sendAccessibilityEventUnchecked(android::view::accessibility::AccessibilityEvent arg0) const
	{
		callMethod<void>(
			"sendAccessibilityEventUnchecked",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object()
		);
	}
	inline void View::setAccessibilityDelegate(android::view::View_AccessibilityDelegate arg0) const
	{
		callMethod<void>(
			"setAccessibilityDelegate",
			"(Landroid/view/View$AccessibilityDelegate;)V",
			arg0.object()
		);
	}
	inline void View::setAccessibilityHeading(jboolean arg0) const
	{
		callMethod<void>(
			"setAccessibilityHeading",
			"(Z)V",
			arg0
		);
	}
	inline void View::setAccessibilityLiveRegion(jint arg0) const
	{
		callMethod<void>(
			"setAccessibilityLiveRegion",
			"(I)V",
			arg0
		);
	}
	inline void View::setAccessibilityPaneTitle(JString arg0) const
	{
		callMethod<void>(
			"setAccessibilityPaneTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void View::setAccessibilityTraversalAfter(jint arg0) const
	{
		callMethod<void>(
			"setAccessibilityTraversalAfter",
			"(I)V",
			arg0
		);
	}
	inline void View::setAccessibilityTraversalBefore(jint arg0) const
	{
		callMethod<void>(
			"setAccessibilityTraversalBefore",
			"(I)V",
			arg0
		);
	}
	inline void View::setActivated(jboolean arg0) const
	{
		callMethod<void>(
			"setActivated",
			"(Z)V",
			arg0
		);
	}
	inline void View::setAllowClickWhenDisabled(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowClickWhenDisabled",
			"(Z)V",
			arg0
		);
	}
	inline void View::setAlpha(jfloat arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
	inline void View::setAnimation(android::view::animation::Animation arg0) const
	{
		callMethod<void>(
			"setAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		);
	}
	inline void View::setAnimationMatrix(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"setAnimationMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	inline void View::setAutoHandwritingEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoHandwritingEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void View::setAutofillHints(JArray arg0) const
	{
		callMethod<void>(
			"setAutofillHints",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void View::setAutofillId(android::view::autofill::AutofillId arg0) const
	{
		callMethod<void>(
			"setAutofillId",
			"(Landroid/view/autofill/AutofillId;)V",
			arg0.object()
		);
	}
	inline void View::setBackground(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setBackground",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void View::setBackgroundColor(jint arg0) const
	{
		callMethod<void>(
			"setBackgroundColor",
			"(I)V",
			arg0
		);
	}
	inline void View::setBackgroundDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void View::setBackgroundResource(jint arg0) const
	{
		callMethod<void>(
			"setBackgroundResource",
			"(I)V",
			arg0
		);
	}
	inline void View::setBackgroundTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setBackgroundTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	inline void View::setBackgroundTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setBackgroundTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void View::setBackgroundTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setBackgroundTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	inline void View::setBottom(jint arg0) const
	{
		callMethod<void>(
			"setBottom",
			"(I)V",
			arg0
		);
	}
	inline void View::setCameraDistance(jfloat arg0) const
	{
		callMethod<void>(
			"setCameraDistance",
			"(F)V",
			arg0
		);
	}
	inline void View::setClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setClickable",
			"(Z)V",
			arg0
		);
	}
	inline void View::setClipBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setClipBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void View::setClipToOutline(jboolean arg0) const
	{
		callMethod<void>(
			"setClipToOutline",
			"(Z)V",
			arg0
		);
	}
	inline void View::setContentCaptureSession(android::view::contentcapture::ContentCaptureSession arg0) const
	{
		callMethod<void>(
			"setContentCaptureSession",
			"(Landroid/view/contentcapture/ContentCaptureSession;)V",
			arg0.object()
		);
	}
	inline void View::setContentDescription(JString arg0) const
	{
		callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void View::setContextClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setContextClickable",
			"(Z)V",
			arg0
		);
	}
	inline void View::setDefaultFocusHighlightEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setDefaultFocusHighlightEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void View::setDrawingCacheBackgroundColor(jint arg0) const
	{
		callMethod<void>(
			"setDrawingCacheBackgroundColor",
			"(I)V",
			arg0
		);
	}
	inline void View::setDrawingCacheEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setDrawingCacheEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void View::setDrawingCacheQuality(jint arg0) const
	{
		callMethod<void>(
			"setDrawingCacheQuality",
			"(I)V",
			arg0
		);
	}
	inline void View::setDuplicateParentStateEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setDuplicateParentStateEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void View::setElevation(jfloat arg0) const
	{
		callMethod<void>(
			"setElevation",
			"(F)V",
			arg0
		);
	}
	inline void View::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void View::setFadingEdgeLength(jint arg0) const
	{
		callMethod<void>(
			"setFadingEdgeLength",
			"(I)V",
			arg0
		);
	}
	inline void View::setFilterTouchesWhenObscured(jboolean arg0) const
	{
		callMethod<void>(
			"setFilterTouchesWhenObscured",
			"(Z)V",
			arg0
		);
	}
	inline void View::setFitsSystemWindows(jboolean arg0) const
	{
		callMethod<void>(
			"setFitsSystemWindows",
			"(Z)V",
			arg0
		);
	}
	inline void View::setFocusable(jboolean arg0) const
	{
		callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	inline void View::setFocusable(jint arg0) const
	{
		callMethod<void>(
			"setFocusable",
			"(I)V",
			arg0
		);
	}
	inline void View::setFocusableInTouchMode(jboolean arg0) const
	{
		callMethod<void>(
			"setFocusableInTouchMode",
			"(Z)V",
			arg0
		);
	}
	inline void View::setFocusedByDefault(jboolean arg0) const
	{
		callMethod<void>(
			"setFocusedByDefault",
			"(Z)V",
			arg0
		);
	}
	inline void View::setForceDarkAllowed(jboolean arg0) const
	{
		callMethod<void>(
			"setForceDarkAllowed",
			"(Z)V",
			arg0
		);
	}
	inline void View::setForeground(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setForeground",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void View::setForegroundGravity(jint arg0) const
	{
		callMethod<void>(
			"setForegroundGravity",
			"(I)V",
			arg0
		);
	}
	inline void View::setForegroundTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setForegroundTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	inline void View::setForegroundTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setForegroundTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void View::setForegroundTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setForegroundTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	inline void View::setHapticFeedbackEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setHapticFeedbackEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void View::setHasTransientState(jboolean arg0) const
	{
		callMethod<void>(
			"setHasTransientState",
			"(Z)V",
			arg0
		);
	}
	inline void View::setHorizontalFadingEdgeEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setHorizontalFadingEdgeEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void View::setHorizontalScrollBarEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setHorizontalScrollBarEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void View::setHorizontalScrollbarThumbDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setHorizontalScrollbarThumbDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void View::setHorizontalScrollbarTrackDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setHorizontalScrollbarTrackDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void View::setHovered(jboolean arg0) const
	{
		callMethod<void>(
			"setHovered",
			"(Z)V",
			arg0
		);
	}
	inline void View::setId(jint arg0) const
	{
		callMethod<void>(
			"setId",
			"(I)V",
			arg0
		);
	}
	inline void View::setImportantForAccessibility(jint arg0) const
	{
		callMethod<void>(
			"setImportantForAccessibility",
			"(I)V",
			arg0
		);
	}
	inline void View::setImportantForAutofill(jint arg0) const
	{
		callMethod<void>(
			"setImportantForAutofill",
			"(I)V",
			arg0
		);
	}
	inline void View::setImportantForContentCapture(jint arg0) const
	{
		callMethod<void>(
			"setImportantForContentCapture",
			"(I)V",
			arg0
		);
	}
	inline void View::setKeepScreenOn(jboolean arg0) const
	{
		callMethod<void>(
			"setKeepScreenOn",
			"(Z)V",
			arg0
		);
	}
	inline void View::setKeyboardNavigationCluster(jboolean arg0) const
	{
		callMethod<void>(
			"setKeyboardNavigationCluster",
			"(Z)V",
			arg0
		);
	}
	inline void View::setLabelFor(jint arg0) const
	{
		callMethod<void>(
			"setLabelFor",
			"(I)V",
			arg0
		);
	}
	inline void View::setLayerPaint(android::graphics::Paint arg0) const
	{
		callMethod<void>(
			"setLayerPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.object()
		);
	}
	inline void View::setLayerType(jint arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"setLayerType",
			"(ILandroid/graphics/Paint;)V",
			arg0,
			arg1.object()
		);
	}
	inline void View::setLayoutDirection(jint arg0) const
	{
		callMethod<void>(
			"setLayoutDirection",
			"(I)V",
			arg0
		);
	}
	inline void View::setLayoutParams(android::view::ViewGroup_LayoutParams arg0) const
	{
		callMethod<void>(
			"setLayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		);
	}
	inline void View::setLeft(jint arg0) const
	{
		callMethod<void>(
			"setLeft",
			"(I)V",
			arg0
		);
	}
	inline void View::setLeftTopRightBottom(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setLeftTopRightBottom",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void View::setLongClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setLongClickable",
			"(Z)V",
			arg0
		);
	}
	inline void View::setMinimumHeight(jint arg0) const
	{
		callMethod<void>(
			"setMinimumHeight",
			"(I)V",
			arg0
		);
	}
	inline void View::setMinimumWidth(jint arg0) const
	{
		callMethod<void>(
			"setMinimumWidth",
			"(I)V",
			arg0
		);
	}
	inline void View::setNestedScrollingEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setNestedScrollingEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void View::setNextClusterForwardId(jint arg0) const
	{
		callMethod<void>(
			"setNextClusterForwardId",
			"(I)V",
			arg0
		);
	}
	inline void View::setNextFocusDownId(jint arg0) const
	{
		callMethod<void>(
			"setNextFocusDownId",
			"(I)V",
			arg0
		);
	}
	inline void View::setNextFocusForwardId(jint arg0) const
	{
		callMethod<void>(
			"setNextFocusForwardId",
			"(I)V",
			arg0
		);
	}
	inline void View::setNextFocusLeftId(jint arg0) const
	{
		callMethod<void>(
			"setNextFocusLeftId",
			"(I)V",
			arg0
		);
	}
	inline void View::setNextFocusRightId(jint arg0) const
	{
		callMethod<void>(
			"setNextFocusRightId",
			"(I)V",
			arg0
		);
	}
	inline void View::setNextFocusUpId(jint arg0) const
	{
		callMethod<void>(
			"setNextFocusUpId",
			"(I)V",
			arg0
		);
	}
	inline void View::setOnApplyWindowInsetsListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnApplyWindowInsetsListener",
			"(Landroid/view/View$OnApplyWindowInsetsListener;)V",
			arg0.object()
		);
	}
	inline void View::setOnCapturedPointerListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnCapturedPointerListener",
			"(Landroid/view/View$OnCapturedPointerListener;)V",
			arg0.object()
		);
	}
	inline void View::setOnClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	inline void View::setOnContextClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnContextClickListener",
			"(Landroid/view/View$OnContextClickListener;)V",
			arg0.object()
		);
	}
	inline void View::setOnCreateContextMenuListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnCreateContextMenuListener",
			"(Landroid/view/View$OnCreateContextMenuListener;)V",
			arg0.object()
		);
	}
	inline void View::setOnDragListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDragListener",
			"(Landroid/view/View$OnDragListener;)V",
			arg0.object()
		);
	}
	inline void View::setOnFocusChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnFocusChangeListener",
			"(Landroid/view/View$OnFocusChangeListener;)V",
			arg0.object()
		);
	}
	inline void View::setOnGenericMotionListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnGenericMotionListener",
			"(Landroid/view/View$OnGenericMotionListener;)V",
			arg0.object()
		);
	}
	inline void View::setOnHoverListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnHoverListener",
			"(Landroid/view/View$OnHoverListener;)V",
			arg0.object()
		);
	}
	inline void View::setOnKeyListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnKeyListener",
			"(Landroid/view/View$OnKeyListener;)V",
			arg0.object()
		);
	}
	inline void View::setOnLongClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnLongClickListener",
			"(Landroid/view/View$OnLongClickListener;)V",
			arg0.object()
		);
	}
	inline void View::setOnReceiveContentListener(JArray arg0, JObject arg1) const
	{
		callMethod<void>(
			"setOnReceiveContentListener",
			"([Ljava/lang/String;Landroid/view/OnReceiveContentListener;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	inline void View::setOnScrollChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnScrollChangeListener",
			"(Landroid/view/View$OnScrollChangeListener;)V",
			arg0.object()
		);
	}
	inline void View::setOnSystemUiVisibilityChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnSystemUiVisibilityChangeListener",
			"(Landroid/view/View$OnSystemUiVisibilityChangeListener;)V",
			arg0.object()
		);
	}
	inline void View::setOnTouchListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnTouchListener",
			"(Landroid/view/View$OnTouchListener;)V",
			arg0.object()
		);
	}
	inline void View::setOutlineAmbientShadowColor(jint arg0) const
	{
		callMethod<void>(
			"setOutlineAmbientShadowColor",
			"(I)V",
			arg0
		);
	}
	inline void View::setOutlineProvider(android::view::ViewOutlineProvider arg0) const
	{
		callMethod<void>(
			"setOutlineProvider",
			"(Landroid/view/ViewOutlineProvider;)V",
			arg0.object()
		);
	}
	inline void View::setOutlineSpotShadowColor(jint arg0) const
	{
		callMethod<void>(
			"setOutlineSpotShadowColor",
			"(I)V",
			arg0
		);
	}
	inline void View::setOverScrollMode(jint arg0) const
	{
		callMethod<void>(
			"setOverScrollMode",
			"(I)V",
			arg0
		);
	}
	inline void View::setPadding(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void View::setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void View::setPivotX(jfloat arg0) const
	{
		callMethod<void>(
			"setPivotX",
			"(F)V",
			arg0
		);
	}
	inline void View::setPivotY(jfloat arg0) const
	{
		callMethod<void>(
			"setPivotY",
			"(F)V",
			arg0
		);
	}
	inline void View::setPointerIcon(android::view::PointerIcon arg0) const
	{
		callMethod<void>(
			"setPointerIcon",
			"(Landroid/view/PointerIcon;)V",
			arg0.object()
		);
	}
	inline void View::setPreferKeepClear(jboolean arg0) const
	{
		callMethod<void>(
			"setPreferKeepClear",
			"(Z)V",
			arg0
		);
	}
	inline void View::setPreferKeepClearRects(JObject arg0) const
	{
		callMethod<void>(
			"setPreferKeepClearRects",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void View::setPressed(jboolean arg0) const
	{
		callMethod<void>(
			"setPressed",
			"(Z)V",
			arg0
		);
	}
	inline void View::setRenderEffect(android::graphics::RenderEffect arg0) const
	{
		callMethod<void>(
			"setRenderEffect",
			"(Landroid/graphics/RenderEffect;)V",
			arg0.object()
		);
	}
	inline void View::setRevealOnFocusHint(jboolean arg0) const
	{
		callMethod<void>(
			"setRevealOnFocusHint",
			"(Z)V",
			arg0
		);
	}
	inline void View::setRight(jint arg0) const
	{
		callMethod<void>(
			"setRight",
			"(I)V",
			arg0
		);
	}
	inline void View::setRotation(jfloat arg0) const
	{
		callMethod<void>(
			"setRotation",
			"(F)V",
			arg0
		);
	}
	inline void View::setRotationX(jfloat arg0) const
	{
		callMethod<void>(
			"setRotationX",
			"(F)V",
			arg0
		);
	}
	inline void View::setRotationY(jfloat arg0) const
	{
		callMethod<void>(
			"setRotationY",
			"(F)V",
			arg0
		);
	}
	inline void View::setSaveEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setSaveEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void View::setSaveFromParentEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setSaveFromParentEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void View::setScaleX(jfloat arg0) const
	{
		callMethod<void>(
			"setScaleX",
			"(F)V",
			arg0
		);
	}
	inline void View::setScaleY(jfloat arg0) const
	{
		callMethod<void>(
			"setScaleY",
			"(F)V",
			arg0
		);
	}
	inline void View::setScreenReaderFocusable(jboolean arg0) const
	{
		callMethod<void>(
			"setScreenReaderFocusable",
			"(Z)V",
			arg0
		);
	}
	inline void View::setScrollBarDefaultDelayBeforeFade(jint arg0) const
	{
		callMethod<void>(
			"setScrollBarDefaultDelayBeforeFade",
			"(I)V",
			arg0
		);
	}
	inline void View::setScrollBarFadeDuration(jint arg0) const
	{
		callMethod<void>(
			"setScrollBarFadeDuration",
			"(I)V",
			arg0
		);
	}
	inline void View::setScrollBarSize(jint arg0) const
	{
		callMethod<void>(
			"setScrollBarSize",
			"(I)V",
			arg0
		);
	}
	inline void View::setScrollBarStyle(jint arg0) const
	{
		callMethod<void>(
			"setScrollBarStyle",
			"(I)V",
			arg0
		);
	}
	inline void View::setScrollCaptureCallback(JObject arg0) const
	{
		callMethod<void>(
			"setScrollCaptureCallback",
			"(Landroid/view/ScrollCaptureCallback;)V",
			arg0.object()
		);
	}
	inline void View::setScrollCaptureHint(jint arg0) const
	{
		callMethod<void>(
			"setScrollCaptureHint",
			"(I)V",
			arg0
		);
	}
	inline void View::setScrollContainer(jboolean arg0) const
	{
		callMethod<void>(
			"setScrollContainer",
			"(Z)V",
			arg0
		);
	}
	inline void View::setScrollIndicators(jint arg0) const
	{
		callMethod<void>(
			"setScrollIndicators",
			"(I)V",
			arg0
		);
	}
	inline void View::setScrollIndicators(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setScrollIndicators",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void View::setScrollX(jint arg0) const
	{
		callMethod<void>(
			"setScrollX",
			"(I)V",
			arg0
		);
	}
	inline void View::setScrollY(jint arg0) const
	{
		callMethod<void>(
			"setScrollY",
			"(I)V",
			arg0
		);
	}
	inline void View::setScrollbarFadingEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setScrollbarFadingEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void View::setSelected(jboolean arg0) const
	{
		callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	inline void View::setSoundEffectsEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setSoundEffectsEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void View::setStateDescription(JString arg0) const
	{
		callMethod<void>(
			"setStateDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void View::setStateListAnimator(android::animation::StateListAnimator arg0) const
	{
		callMethod<void>(
			"setStateListAnimator",
			"(Landroid/animation/StateListAnimator;)V",
			arg0.object()
		);
	}
	inline void View::setSystemGestureExclusionRects(JObject arg0) const
	{
		callMethod<void>(
			"setSystemGestureExclusionRects",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void View::setSystemUiVisibility(jint arg0) const
	{
		callMethod<void>(
			"setSystemUiVisibility",
			"(I)V",
			arg0
		);
	}
	inline void View::setTag(JObject arg0) const
	{
		callMethod<void>(
			"setTag",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void View::setTag(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"setTag",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline void View::setTextAlignment(jint arg0) const
	{
		callMethod<void>(
			"setTextAlignment",
			"(I)V",
			arg0
		);
	}
	inline void View::setTextDirection(jint arg0) const
	{
		callMethod<void>(
			"setTextDirection",
			"(I)V",
			arg0
		);
	}
	inline void View::setTooltipText(JString arg0) const
	{
		callMethod<void>(
			"setTooltipText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void View::setTop(jint arg0) const
	{
		callMethod<void>(
			"setTop",
			"(I)V",
			arg0
		);
	}
	inline void View::setTouchDelegate(android::view::TouchDelegate arg0) const
	{
		callMethod<void>(
			"setTouchDelegate",
			"(Landroid/view/TouchDelegate;)V",
			arg0.object()
		);
	}
	inline void View::setTransitionAlpha(jfloat arg0) const
	{
		callMethod<void>(
			"setTransitionAlpha",
			"(F)V",
			arg0
		);
	}
	inline void View::setTransitionName(JString arg0) const
	{
		callMethod<void>(
			"setTransitionName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void View::setTransitionVisibility(jint arg0) const
	{
		callMethod<void>(
			"setTransitionVisibility",
			"(I)V",
			arg0
		);
	}
	inline void View::setTranslationX(jfloat arg0) const
	{
		callMethod<void>(
			"setTranslationX",
			"(F)V",
			arg0
		);
	}
	inline void View::setTranslationY(jfloat arg0) const
	{
		callMethod<void>(
			"setTranslationY",
			"(F)V",
			arg0
		);
	}
	inline void View::setTranslationZ(jfloat arg0) const
	{
		callMethod<void>(
			"setTranslationZ",
			"(F)V",
			arg0
		);
	}
	inline void View::setVerticalFadingEdgeEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setVerticalFadingEdgeEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void View::setVerticalScrollBarEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setVerticalScrollBarEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void View::setVerticalScrollbarPosition(jint arg0) const
	{
		callMethod<void>(
			"setVerticalScrollbarPosition",
			"(I)V",
			arg0
		);
	}
	inline void View::setVerticalScrollbarThumbDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setVerticalScrollbarThumbDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void View::setVerticalScrollbarTrackDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setVerticalScrollbarTrackDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void View::setViewTranslationCallback(JObject arg0) const
	{
		callMethod<void>(
			"setViewTranslationCallback",
			"(Landroid/view/translation/ViewTranslationCallback;)V",
			arg0.object()
		);
	}
	inline void View::setVisibility(jint arg0) const
	{
		callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
	inline void View::setWillNotCacheDrawing(jboolean arg0) const
	{
		callMethod<void>(
			"setWillNotCacheDrawing",
			"(Z)V",
			arg0
		);
	}
	inline void View::setWillNotDraw(jboolean arg0) const
	{
		callMethod<void>(
			"setWillNotDraw",
			"(Z)V",
			arg0
		);
	}
	inline void View::setWindowInsetsAnimationCallback(android::view::WindowInsetsAnimation_Callback arg0) const
	{
		callMethod<void>(
			"setWindowInsetsAnimationCallback",
			"(Landroid/view/WindowInsetsAnimation$Callback;)V",
			arg0.object()
		);
	}
	inline void View::setX(jfloat arg0) const
	{
		callMethod<void>(
			"setX",
			"(F)V",
			arg0
		);
	}
	inline void View::setY(jfloat arg0) const
	{
		callMethod<void>(
			"setY",
			"(F)V",
			arg0
		);
	}
	inline void View::setZ(jfloat arg0) const
	{
		callMethod<void>(
			"setZ",
			"(F)V",
			arg0
		);
	}
	inline jboolean View::showContextMenu() const
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"()Z"
		);
	}
	inline jboolean View::showContextMenu(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	inline android::view::ActionMode View::startActionMode(JObject arg0) const
	{
		return callObjectMethod(
			"startActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.object()
		);
	}
	inline android::view::ActionMode View::startActionMode(JObject arg0, jint arg1) const
	{
		return callObjectMethod(
			"startActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.object(),
			arg1
		);
	}
	inline void View::startAnimation(android::view::animation::Animation arg0) const
	{
		callMethod<void>(
			"startAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		);
	}
	inline jboolean View::startDrag(android::content::ClipData arg0, android::view::View_DragShadowBuilder arg1, JObject arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"startDrag",
			"(Landroid/content/ClipData;Landroid/view/View$DragShadowBuilder;Ljava/lang/Object;I)Z",
			arg0.object(),
			arg1.object(),
			arg2.object<jobject>(),
			arg3
		);
	}
	inline jboolean View::startDragAndDrop(android::content::ClipData arg0, android::view::View_DragShadowBuilder arg1, JObject arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"startDragAndDrop",
			"(Landroid/content/ClipData;Landroid/view/View$DragShadowBuilder;Ljava/lang/Object;I)Z",
			arg0.object(),
			arg1.object(),
			arg2.object<jobject>(),
			arg3
		);
	}
	inline jboolean View::startNestedScroll(jint arg0) const
	{
		return callMethod<jboolean>(
			"startNestedScroll",
			"(I)Z",
			arg0
		);
	}
	inline void View::stopNestedScroll() const
	{
		callMethod<void>(
			"stopNestedScroll",
			"()V"
		);
	}
	inline JString View::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void View::transformMatrixToGlobal(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"transformMatrixToGlobal",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	inline void View::transformMatrixToLocal(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"transformMatrixToLocal",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	inline void View::unscheduleDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void View::unscheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1) const
	{
		callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void View::updateDragShadow(android::view::View_DragShadowBuilder arg0) const
	{
		callMethod<void>(
			"updateDragShadow",
			"(Landroid/view/View$DragShadowBuilder;)V",
			arg0.object()
		);
	}
	inline jboolean View::willNotCacheDrawing() const
	{
		return callMethod<jboolean>(
			"willNotCacheDrawing",
			"()Z"
		);
	}
	inline jboolean View::willNotDraw() const
	{
		return callMethod<jboolean>(
			"willNotDraw",
			"()Z"
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
