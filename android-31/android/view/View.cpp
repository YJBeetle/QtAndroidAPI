#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
#include "../../JArray.hpp"
#include "../animation/StateListAnimator.hpp"
#include "../content/ClipData.hpp"
#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../content/res/Configuration.hpp"
#include "../content/res/Resources.hpp"
#include "../content/res/TypedArray.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Matrix.hpp"
#include "../graphics/Paint.hpp"
#include "../graphics/Point.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/Region.hpp"
#include "../graphics/RenderEffect.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../util/LongSparseArray.hpp"
#include "../util/Property.hpp"
#include "../util/SparseArray.hpp"
#include "./ActionMode.hpp"
#include "./ContentInfo.hpp"
#include "./Display.hpp"
#include "./DragEvent.hpp"
#include "./KeyEvent.hpp"
#include "./KeyEvent_DispatcherState.hpp"
#include "./MotionEvent.hpp"
#include "./PointerIcon.hpp"
#include "./TouchDelegate.hpp"
#include "./View_AccessibilityDelegate.hpp"
#include "./View_DragShadowBuilder.hpp"
#include "./ViewGroup.hpp"
#include "./ViewGroup_LayoutParams.hpp"
#include "./ViewOutlineProvider.hpp"
#include "./ViewOverlay.hpp"
#include "./ViewPropertyAnimator.hpp"
#include "./ViewStructure.hpp"
#include "./ViewTreeObserver.hpp"
#include "./WindowId.hpp"
#include "./WindowInsets.hpp"
#include "./WindowInsetsAnimation.hpp"
#include "./WindowInsetsAnimation_Bounds.hpp"
#include "./WindowInsetsAnimation_Callback.hpp"
#include "./accessibility/AccessibilityEvent.hpp"
#include "./accessibility/AccessibilityNodeInfo.hpp"
#include "./accessibility/AccessibilityNodeProvider.hpp"
#include "./animation/Animation.hpp"
#include "./autofill/AutofillId.hpp"
#include "./autofill/AutofillValue.hpp"
#include "./contentcapture/ContentCaptureSession.hpp"
#include "./inputmethod/EditorInfo.hpp"
#include "./translation/TranslationCapability.hpp"
#include "./translation/ViewTranslationResponse.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./View.hpp"

namespace android::view
{
	// Fields
	jint View::ACCESSIBILITY_LIVE_REGION_ASSERTIVE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"ACCESSIBILITY_LIVE_REGION_ASSERTIVE"
		);
	}
	jint View::ACCESSIBILITY_LIVE_REGION_NONE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"ACCESSIBILITY_LIVE_REGION_NONE"
		);
	}
	jint View::ACCESSIBILITY_LIVE_REGION_POLITE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"ACCESSIBILITY_LIVE_REGION_POLITE"
		);
	}
	android::util::Property View::ALPHA()
	{
		return getStaticObjectField(
			"android.view.View",
			"ALPHA",
			"Landroid/util/Property;"
		);
	}
	jint View::AUTOFILL_FLAG_INCLUDE_NOT_IMPORTANT_VIEWS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"AUTOFILL_FLAG_INCLUDE_NOT_IMPORTANT_VIEWS"
		);
	}
	JString View::AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_DATE()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_DATE",
			"Ljava/lang/String;"
		);
	}
	JString View::AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_DAY()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_DAY",
			"Ljava/lang/String;"
		);
	}
	JString View::AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_MONTH()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_MONTH",
			"Ljava/lang/String;"
		);
	}
	JString View::AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_YEAR()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_CREDIT_CARD_EXPIRATION_YEAR",
			"Ljava/lang/String;"
		);
	}
	JString View::AUTOFILL_HINT_CREDIT_CARD_NUMBER()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_CREDIT_CARD_NUMBER",
			"Ljava/lang/String;"
		);
	}
	JString View::AUTOFILL_HINT_CREDIT_CARD_SECURITY_CODE()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_CREDIT_CARD_SECURITY_CODE",
			"Ljava/lang/String;"
		);
	}
	JString View::AUTOFILL_HINT_EMAIL_ADDRESS()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_EMAIL_ADDRESS",
			"Ljava/lang/String;"
		);
	}
	JString View::AUTOFILL_HINT_NAME()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_NAME",
			"Ljava/lang/String;"
		);
	}
	JString View::AUTOFILL_HINT_PASSWORD()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_PASSWORD",
			"Ljava/lang/String;"
		);
	}
	JString View::AUTOFILL_HINT_PHONE()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_PHONE",
			"Ljava/lang/String;"
		);
	}
	JString View::AUTOFILL_HINT_POSTAL_ADDRESS()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_POSTAL_ADDRESS",
			"Ljava/lang/String;"
		);
	}
	JString View::AUTOFILL_HINT_POSTAL_CODE()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_POSTAL_CODE",
			"Ljava/lang/String;"
		);
	}
	JString View::AUTOFILL_HINT_USERNAME()
	{
		return getStaticObjectField(
			"android.view.View",
			"AUTOFILL_HINT_USERNAME",
			"Ljava/lang/String;"
		);
	}
	jint View::AUTOFILL_TYPE_DATE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"AUTOFILL_TYPE_DATE"
		);
	}
	jint View::AUTOFILL_TYPE_LIST()
	{
		return getStaticField<jint>(
			"android.view.View",
			"AUTOFILL_TYPE_LIST"
		);
	}
	jint View::AUTOFILL_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"AUTOFILL_TYPE_NONE"
		);
	}
	jint View::AUTOFILL_TYPE_TEXT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"AUTOFILL_TYPE_TEXT"
		);
	}
	jint View::AUTOFILL_TYPE_TOGGLE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"AUTOFILL_TYPE_TOGGLE"
		);
	}
	jint View::DRAG_FLAG_GLOBAL()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_GLOBAL"
		);
	}
	jint View::DRAG_FLAG_GLOBAL_PERSISTABLE_URI_PERMISSION()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_GLOBAL_PERSISTABLE_URI_PERMISSION"
		);
	}
	jint View::DRAG_FLAG_GLOBAL_PREFIX_URI_PERMISSION()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_GLOBAL_PREFIX_URI_PERMISSION"
		);
	}
	jint View::DRAG_FLAG_GLOBAL_URI_READ()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_GLOBAL_URI_READ"
		);
	}
	jint View::DRAG_FLAG_GLOBAL_URI_WRITE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_GLOBAL_URI_WRITE"
		);
	}
	jint View::DRAG_FLAG_OPAQUE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAG_FLAG_OPAQUE"
		);
	}
	jint View::DRAWING_CACHE_QUALITY_AUTO()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAWING_CACHE_QUALITY_AUTO"
		);
	}
	jint View::DRAWING_CACHE_QUALITY_HIGH()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAWING_CACHE_QUALITY_HIGH"
		);
	}
	jint View::DRAWING_CACHE_QUALITY_LOW()
	{
		return getStaticField<jint>(
			"android.view.View",
			"DRAWING_CACHE_QUALITY_LOW"
		);
	}
	jint View::FIND_VIEWS_WITH_CONTENT_DESCRIPTION()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FIND_VIEWS_WITH_CONTENT_DESCRIPTION"
		);
	}
	jint View::FIND_VIEWS_WITH_TEXT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FIND_VIEWS_WITH_TEXT"
		);
	}
	jint View::FOCUSABLE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUSABLE"
		);
	}
	jint View::FOCUSABLES_ALL()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUSABLES_ALL"
		);
	}
	jint View::FOCUSABLES_TOUCH_MODE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUSABLES_TOUCH_MODE"
		);
	}
	jint View::FOCUSABLE_AUTO()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUSABLE_AUTO"
		);
	}
	jint View::FOCUS_BACKWARD()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUS_BACKWARD"
		);
	}
	jint View::FOCUS_DOWN()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUS_DOWN"
		);
	}
	jint View::FOCUS_FORWARD()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUS_FORWARD"
		);
	}
	jint View::FOCUS_LEFT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUS_LEFT"
		);
	}
	jint View::FOCUS_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUS_RIGHT"
		);
	}
	jint View::FOCUS_UP()
	{
		return getStaticField<jint>(
			"android.view.View",
			"FOCUS_UP"
		);
	}
	jint View::GONE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"GONE"
		);
	}
	jint View::HAPTIC_FEEDBACK_ENABLED()
	{
		return getStaticField<jint>(
			"android.view.View",
			"HAPTIC_FEEDBACK_ENABLED"
		);
	}
	jint View::IMPORTANT_FOR_ACCESSIBILITY_AUTO()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_ACCESSIBILITY_AUTO"
		);
	}
	jint View::IMPORTANT_FOR_ACCESSIBILITY_NO()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_ACCESSIBILITY_NO"
		);
	}
	jint View::IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS"
		);
	}
	jint View::IMPORTANT_FOR_ACCESSIBILITY_YES()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_ACCESSIBILITY_YES"
		);
	}
	jint View::IMPORTANT_FOR_AUTOFILL_AUTO()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_AUTOFILL_AUTO"
		);
	}
	jint View::IMPORTANT_FOR_AUTOFILL_NO()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_AUTOFILL_NO"
		);
	}
	jint View::IMPORTANT_FOR_AUTOFILL_NO_EXCLUDE_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_AUTOFILL_NO_EXCLUDE_DESCENDANTS"
		);
	}
	jint View::IMPORTANT_FOR_AUTOFILL_YES()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_AUTOFILL_YES"
		);
	}
	jint View::IMPORTANT_FOR_AUTOFILL_YES_EXCLUDE_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_AUTOFILL_YES_EXCLUDE_DESCENDANTS"
		);
	}
	jint View::IMPORTANT_FOR_CONTENT_CAPTURE_AUTO()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_CONTENT_CAPTURE_AUTO"
		);
	}
	jint View::IMPORTANT_FOR_CONTENT_CAPTURE_NO()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_CONTENT_CAPTURE_NO"
		);
	}
	jint View::IMPORTANT_FOR_CONTENT_CAPTURE_NO_EXCLUDE_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_CONTENT_CAPTURE_NO_EXCLUDE_DESCENDANTS"
		);
	}
	jint View::IMPORTANT_FOR_CONTENT_CAPTURE_YES()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_CONTENT_CAPTURE_YES"
		);
	}
	jint View::IMPORTANT_FOR_CONTENT_CAPTURE_YES_EXCLUDE_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"IMPORTANT_FOR_CONTENT_CAPTURE_YES_EXCLUDE_DESCENDANTS"
		);
	}
	jint View::INVISIBLE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"INVISIBLE"
		);
	}
	jint View::KEEP_SCREEN_ON()
	{
		return getStaticField<jint>(
			"android.view.View",
			"KEEP_SCREEN_ON"
		);
	}
	jint View::LAYER_TYPE_HARDWARE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"LAYER_TYPE_HARDWARE"
		);
	}
	jint View::LAYER_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"LAYER_TYPE_NONE"
		);
	}
	jint View::LAYER_TYPE_SOFTWARE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"LAYER_TYPE_SOFTWARE"
		);
	}
	jint View::LAYOUT_DIRECTION_INHERIT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"LAYOUT_DIRECTION_INHERIT"
		);
	}
	jint View::LAYOUT_DIRECTION_LOCALE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"LAYOUT_DIRECTION_LOCALE"
		);
	}
	jint View::LAYOUT_DIRECTION_LTR()
	{
		return getStaticField<jint>(
			"android.view.View",
			"LAYOUT_DIRECTION_LTR"
		);
	}
	jint View::LAYOUT_DIRECTION_RTL()
	{
		return getStaticField<jint>(
			"android.view.View",
			"LAYOUT_DIRECTION_RTL"
		);
	}
	jint View::MEASURED_HEIGHT_STATE_SHIFT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"MEASURED_HEIGHT_STATE_SHIFT"
		);
	}
	jint View::MEASURED_SIZE_MASK()
	{
		return getStaticField<jint>(
			"android.view.View",
			"MEASURED_SIZE_MASK"
		);
	}
	jint View::MEASURED_STATE_MASK()
	{
		return getStaticField<jint>(
			"android.view.View",
			"MEASURED_STATE_MASK"
		);
	}
	jint View::MEASURED_STATE_TOO_SMALL()
	{
		return getStaticField<jint>(
			"android.view.View",
			"MEASURED_STATE_TOO_SMALL"
		);
	}
	jint View::NOT_FOCUSABLE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"NOT_FOCUSABLE"
		);
	}
	jint View::NO_ID()
	{
		return getStaticField<jint>(
			"android.view.View",
			"NO_ID"
		);
	}
	jint View::OVER_SCROLL_ALWAYS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"OVER_SCROLL_ALWAYS"
		);
	}
	jint View::OVER_SCROLL_IF_CONTENT_SCROLLS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"OVER_SCROLL_IF_CONTENT_SCROLLS"
		);
	}
	jint View::OVER_SCROLL_NEVER()
	{
		return getStaticField<jint>(
			"android.view.View",
			"OVER_SCROLL_NEVER"
		);
	}
	android::util::Property View::ROTATION()
	{
		return getStaticObjectField(
			"android.view.View",
			"ROTATION",
			"Landroid/util/Property;"
		);
	}
	android::util::Property View::ROTATION_X()
	{
		return getStaticObjectField(
			"android.view.View",
			"ROTATION_X",
			"Landroid/util/Property;"
		);
	}
	android::util::Property View::ROTATION_Y()
	{
		return getStaticObjectField(
			"android.view.View",
			"ROTATION_Y",
			"Landroid/util/Property;"
		);
	}
	android::util::Property View::SCALE_X()
	{
		return getStaticObjectField(
			"android.view.View",
			"SCALE_X",
			"Landroid/util/Property;"
		);
	}
	android::util::Property View::SCALE_Y()
	{
		return getStaticObjectField(
			"android.view.View",
			"SCALE_Y",
			"Landroid/util/Property;"
		);
	}
	jint View::SCREEN_STATE_OFF()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCREEN_STATE_OFF"
		);
	}
	jint View::SCREEN_STATE_ON()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCREEN_STATE_ON"
		);
	}
	jint View::SCROLLBARS_INSIDE_INSET()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLLBARS_INSIDE_INSET"
		);
	}
	jint View::SCROLLBARS_INSIDE_OVERLAY()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLLBARS_INSIDE_OVERLAY"
		);
	}
	jint View::SCROLLBARS_OUTSIDE_INSET()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLLBARS_OUTSIDE_INSET"
		);
	}
	jint View::SCROLLBARS_OUTSIDE_OVERLAY()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLLBARS_OUTSIDE_OVERLAY"
		);
	}
	jint View::SCROLLBAR_POSITION_DEFAULT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLLBAR_POSITION_DEFAULT"
		);
	}
	jint View::SCROLLBAR_POSITION_LEFT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLLBAR_POSITION_LEFT"
		);
	}
	jint View::SCROLLBAR_POSITION_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLLBAR_POSITION_RIGHT"
		);
	}
	jint View::SCROLL_AXIS_HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_AXIS_HORIZONTAL"
		);
	}
	jint View::SCROLL_AXIS_NONE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_AXIS_NONE"
		);
	}
	jint View::SCROLL_AXIS_VERTICAL()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_AXIS_VERTICAL"
		);
	}
	jint View::SCROLL_CAPTURE_HINT_AUTO()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_CAPTURE_HINT_AUTO"
		);
	}
	jint View::SCROLL_CAPTURE_HINT_EXCLUDE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_CAPTURE_HINT_EXCLUDE"
		);
	}
	jint View::SCROLL_CAPTURE_HINT_EXCLUDE_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_CAPTURE_HINT_EXCLUDE_DESCENDANTS"
		);
	}
	jint View::SCROLL_CAPTURE_HINT_INCLUDE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_CAPTURE_HINT_INCLUDE"
		);
	}
	jint View::SCROLL_INDICATOR_BOTTOM()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_INDICATOR_BOTTOM"
		);
	}
	jint View::SCROLL_INDICATOR_END()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_INDICATOR_END"
		);
	}
	jint View::SCROLL_INDICATOR_LEFT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_INDICATOR_LEFT"
		);
	}
	jint View::SCROLL_INDICATOR_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_INDICATOR_RIGHT"
		);
	}
	jint View::SCROLL_INDICATOR_START()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_INDICATOR_START"
		);
	}
	jint View::SCROLL_INDICATOR_TOP()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SCROLL_INDICATOR_TOP"
		);
	}
	jint View::SOUND_EFFECTS_ENABLED()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SOUND_EFFECTS_ENABLED"
		);
	}
	jint View::STATUS_BAR_HIDDEN()
	{
		return getStaticField<jint>(
			"android.view.View",
			"STATUS_BAR_HIDDEN"
		);
	}
	jint View::STATUS_BAR_VISIBLE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"STATUS_BAR_VISIBLE"
		);
	}
	jint View::SYSTEM_UI_FLAG_FULLSCREEN()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_FULLSCREEN"
		);
	}
	jint View::SYSTEM_UI_FLAG_HIDE_NAVIGATION()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_HIDE_NAVIGATION"
		);
	}
	jint View::SYSTEM_UI_FLAG_IMMERSIVE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_IMMERSIVE"
		);
	}
	jint View::SYSTEM_UI_FLAG_IMMERSIVE_STICKY()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_IMMERSIVE_STICKY"
		);
	}
	jint View::SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN"
		);
	}
	jint View::SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION"
		);
	}
	jint View::SYSTEM_UI_FLAG_LAYOUT_STABLE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_LAYOUT_STABLE"
		);
	}
	jint View::SYSTEM_UI_FLAG_LIGHT_NAVIGATION_BAR()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_LIGHT_NAVIGATION_BAR"
		);
	}
	jint View::SYSTEM_UI_FLAG_LIGHT_STATUS_BAR()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_LIGHT_STATUS_BAR"
		);
	}
	jint View::SYSTEM_UI_FLAG_LOW_PROFILE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_LOW_PROFILE"
		);
	}
	jint View::SYSTEM_UI_FLAG_VISIBLE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_FLAG_VISIBLE"
		);
	}
	jint View::SYSTEM_UI_LAYOUT_FLAGS()
	{
		return getStaticField<jint>(
			"android.view.View",
			"SYSTEM_UI_LAYOUT_FLAGS"
		);
	}
	jint View::TEXT_ALIGNMENT_CENTER()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_CENTER"
		);
	}
	jint View::TEXT_ALIGNMENT_GRAVITY()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_GRAVITY"
		);
	}
	jint View::TEXT_ALIGNMENT_INHERIT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_INHERIT"
		);
	}
	jint View::TEXT_ALIGNMENT_TEXT_END()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_TEXT_END"
		);
	}
	jint View::TEXT_ALIGNMENT_TEXT_START()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_TEXT_START"
		);
	}
	jint View::TEXT_ALIGNMENT_VIEW_END()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_VIEW_END"
		);
	}
	jint View::TEXT_ALIGNMENT_VIEW_START()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_ALIGNMENT_VIEW_START"
		);
	}
	jint View::TEXT_DIRECTION_ANY_RTL()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_ANY_RTL"
		);
	}
	jint View::TEXT_DIRECTION_FIRST_STRONG()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_FIRST_STRONG"
		);
	}
	jint View::TEXT_DIRECTION_FIRST_STRONG_LTR()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_FIRST_STRONG_LTR"
		);
	}
	jint View::TEXT_DIRECTION_FIRST_STRONG_RTL()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_FIRST_STRONG_RTL"
		);
	}
	jint View::TEXT_DIRECTION_INHERIT()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_INHERIT"
		);
	}
	jint View::TEXT_DIRECTION_LOCALE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_LOCALE"
		);
	}
	jint View::TEXT_DIRECTION_LTR()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_LTR"
		);
	}
	jint View::TEXT_DIRECTION_RTL()
	{
		return getStaticField<jint>(
			"android.view.View",
			"TEXT_DIRECTION_RTL"
		);
	}
	android::util::Property View::TRANSLATION_X()
	{
		return getStaticObjectField(
			"android.view.View",
			"TRANSLATION_X",
			"Landroid/util/Property;"
		);
	}
	android::util::Property View::TRANSLATION_Y()
	{
		return getStaticObjectField(
			"android.view.View",
			"TRANSLATION_Y",
			"Landroid/util/Property;"
		);
	}
	android::util::Property View::TRANSLATION_Z()
	{
		return getStaticObjectField(
			"android.view.View",
			"TRANSLATION_Z",
			"Landroid/util/Property;"
		);
	}
	jint View::VISIBLE()
	{
		return getStaticField<jint>(
			"android.view.View",
			"VISIBLE"
		);
	}
	android::util::Property View::X()
	{
		return getStaticObjectField(
			"android.view.View",
			"X",
			"Landroid/util/Property;"
		);
	}
	android::util::Property View::Y()
	{
		return getStaticObjectField(
			"android.view.View",
			"Y",
			"Landroid/util/Property;"
		);
	}
	android::util::Property View::Z()
	{
		return getStaticObjectField(
			"android.view.View",
			"Z",
			"Landroid/util/Property;"
		);
	}
	
	// QAndroidJniObject forward
	View::View(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	View::View(android::content::Context arg0)
		: JObject(
			"android.view.View",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	View::View(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.view.View",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	View::View(android::content::Context arg0, JObject arg1, jint arg2)
		: JObject(
			"android.view.View",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	View::View(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: JObject(
			"android.view.View",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jint View::combineMeasuredStates(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.view.View",
			"combineMeasuredStates",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint View::generateViewId()
	{
		return callStaticMethod<jint>(
			"android.view.View",
			"generateViewId",
			"()I"
		);
	}
	jint View::getDefaultSize(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.view.View",
			"getDefaultSize",
			"(II)I",
			arg0,
			arg1
		);
	}
	android::view::View View::inflate(android::content::Context arg0, jint arg1, android::view::ViewGroup arg2)
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
	jint View::resolveSize(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.view.View",
			"resolveSize",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint View::resolveSizeAndState(jint arg0, jint arg1, jint arg2)
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
	void View::addChildrenForAccessibility(java::util::ArrayList arg0)
	{
		callMethod<void>(
			"addChildrenForAccessibility",
			"(Ljava/util/ArrayList;)V",
			arg0.object()
		);
	}
	void View::addExtraDataToAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0, JString arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void View::addFocusables(java::util::ArrayList arg0, jint arg1)
	{
		callMethod<void>(
			"addFocusables",
			"(Ljava/util/ArrayList;I)V",
			arg0.object(),
			arg1
		);
	}
	void View::addFocusables(java::util::ArrayList arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"addFocusables",
			"(Ljava/util/ArrayList;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void View::addKeyboardNavigationClusters(JObject arg0, jint arg1)
	{
		callMethod<void>(
			"addKeyboardNavigationClusters",
			"(Ljava/util/Collection;I)V",
			arg0.object(),
			arg1
		);
	}
	void View::addOnAttachStateChangeListener(JObject arg0)
	{
		callMethod<void>(
			"addOnAttachStateChangeListener",
			"(Landroid/view/View$OnAttachStateChangeListener;)V",
			arg0.object()
		);
	}
	void View::addOnLayoutChangeListener(JObject arg0)
	{
		callMethod<void>(
			"addOnLayoutChangeListener",
			"(Landroid/view/View$OnLayoutChangeListener;)V",
			arg0.object()
		);
	}
	void View::addOnUnhandledKeyEventListener(JObject arg0)
	{
		callMethod<void>(
			"addOnUnhandledKeyEventListener",
			"(Landroid/view/View$OnUnhandledKeyEventListener;)V",
			arg0.object()
		);
	}
	void View::addTouchables(java::util::ArrayList arg0)
	{
		callMethod<void>(
			"addTouchables",
			"(Ljava/util/ArrayList;)V",
			arg0.object()
		);
	}
	android::view::ViewPropertyAnimator View::animate()
	{
		return callObjectMethod(
			"animate",
			"()Landroid/view/ViewPropertyAnimator;"
		);
	}
	void View::announceForAccessibility(JString arg0)
	{
		callMethod<void>(
			"announceForAccessibility",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void View::autofill(android::util::SparseArray arg0)
	{
		callMethod<void>(
			"autofill",
			"(Landroid/util/SparseArray;)V",
			arg0.object()
		);
	}
	void View::autofill(android::view::autofill::AutofillValue arg0)
	{
		callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	void View::bringToFront()
	{
		callMethod<void>(
			"bringToFront",
			"()V"
		);
	}
	void View::buildDrawingCache()
	{
		callMethod<void>(
			"buildDrawingCache",
			"()V"
		);
	}
	void View::buildDrawingCache(jboolean arg0)
	{
		callMethod<void>(
			"buildDrawingCache",
			"(Z)V",
			arg0
		);
	}
	void View::buildLayer()
	{
		callMethod<void>(
			"buildLayer",
			"()V"
		);
	}
	jboolean View::callOnClick()
	{
		return callMethod<jboolean>(
			"callOnClick",
			"()Z"
		);
	}
	jboolean View::canResolveLayoutDirection()
	{
		return callMethod<jboolean>(
			"canResolveLayoutDirection",
			"()Z"
		);
	}
	jboolean View::canResolveTextAlignment()
	{
		return callMethod<jboolean>(
			"canResolveTextAlignment",
			"()Z"
		);
	}
	jboolean View::canResolveTextDirection()
	{
		return callMethod<jboolean>(
			"canResolveTextDirection",
			"()Z"
		);
	}
	jboolean View::canScrollHorizontally(jint arg0)
	{
		return callMethod<jboolean>(
			"canScrollHorizontally",
			"(I)Z",
			arg0
		);
	}
	jboolean View::canScrollVertically(jint arg0)
	{
		return callMethod<jboolean>(
			"canScrollVertically",
			"(I)Z",
			arg0
		);
	}
	void View::cancelDragAndDrop()
	{
		callMethod<void>(
			"cancelDragAndDrop",
			"()V"
		);
	}
	void View::cancelLongPress()
	{
		callMethod<void>(
			"cancelLongPress",
			"()V"
		);
	}
	void View::cancelPendingInputEvents()
	{
		callMethod<void>(
			"cancelPendingInputEvents",
			"()V"
		);
	}
	jboolean View::checkInputConnectionProxy(android::view::View arg0)
	{
		return callMethod<jboolean>(
			"checkInputConnectionProxy",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	void View::clearAnimation()
	{
		callMethod<void>(
			"clearAnimation",
			"()V"
		);
	}
	void View::clearFocus()
	{
		callMethod<void>(
			"clearFocus",
			"()V"
		);
	}
	void View::clearViewTranslationCallback()
	{
		callMethod<void>(
			"clearViewTranslationCallback",
			"()V"
		);
	}
	void View::computeScroll()
	{
		callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	android::view::WindowInsets View::computeSystemWindowInsets(android::view::WindowInsets arg0, android::graphics::Rect arg1)
	{
		return callObjectMethod(
			"computeSystemWindowInsets",
			"(Landroid/view/WindowInsets;Landroid/graphics/Rect;)Landroid/view/WindowInsets;",
			arg0.object(),
			arg1.object()
		);
	}
	android::view::accessibility::AccessibilityNodeInfo View::createAccessibilityNodeInfo()
	{
		return callObjectMethod(
			"createAccessibilityNodeInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	void View::createContextMenu(JObject arg0)
	{
		callMethod<void>(
			"createContextMenu",
			"(Landroid/view/ContextMenu;)V",
			arg0.object()
		);
	}
	void View::destroyDrawingCache()
	{
		callMethod<void>(
			"destroyDrawingCache",
			"()V"
		);
	}
	android::view::WindowInsets View::dispatchApplyWindowInsets(android::view::WindowInsets arg0)
	{
		return callObjectMethod(
			"dispatchApplyWindowInsets",
			"(Landroid/view/WindowInsets;)Landroid/view/WindowInsets;",
			arg0.object()
		);
	}
	jboolean View::dispatchCapturedPointerEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchCapturedPointerEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void View::dispatchConfigurationChanged(android::content::res::Configuration arg0)
	{
		callMethod<void>(
			"dispatchConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	void View::dispatchCreateViewTranslationRequest(JObject arg0, JIntArray arg1, android::view::translation::TranslationCapability arg2, JObject arg3)
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
	void View::dispatchDisplayHint(jint arg0)
	{
		callMethod<void>(
			"dispatchDisplayHint",
			"(I)V",
			arg0
		);
	}
	jboolean View::dispatchDragEvent(android::view::DragEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.object()
		);
	}
	void View::dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"dispatchDrawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void View::dispatchFinishTemporaryDetach()
	{
		callMethod<void>(
			"dispatchFinishTemporaryDetach",
			"()V"
		);
	}
	jboolean View::dispatchGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean View::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean View::dispatchKeyEventPreIme(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchKeyEventPreIme",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean View::dispatchKeyShortcutEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean View::dispatchNestedFling(jfloat arg0, jfloat arg1, jboolean arg2)
	{
		return callMethod<jboolean>(
			"dispatchNestedFling",
			"(FFZ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean View::dispatchNestedPreFling(jfloat arg0, jfloat arg1)
	{
		return callMethod<jboolean>(
			"dispatchNestedPreFling",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean View::dispatchNestedPrePerformAccessibilityAction(jint arg0, android::os::Bundle arg1)
	{
		return callMethod<jboolean>(
			"dispatchNestedPrePerformAccessibilityAction",
			"(ILandroid/os/Bundle;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean View::dispatchNestedPreScroll(jint arg0, jint arg1, JIntArray arg2, JIntArray arg3)
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
	jboolean View::dispatchNestedScroll(jint arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4)
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
	void View::dispatchPointerCaptureChanged(jboolean arg0)
	{
		callMethod<void>(
			"dispatchPointerCaptureChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean View::dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.object()
		);
	}
	void View::dispatchProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1)
	{
		callMethod<void>(
			"dispatchProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	void View::dispatchProvideStructure(android::view::ViewStructure arg0)
	{
		callMethod<void>(
			"dispatchProvideStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	void View::dispatchScrollCaptureSearch(android::graphics::Rect arg0, android::graphics::Point arg1, JObject arg2)
	{
		callMethod<void>(
			"dispatchScrollCaptureSearch",
			"(Landroid/graphics/Rect;Landroid/graphics/Point;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void View::dispatchStartTemporaryDetach()
	{
		callMethod<void>(
			"dispatchStartTemporaryDetach",
			"()V"
		);
	}
	void View::dispatchSystemUiVisibilityChanged(jint arg0)
	{
		callMethod<void>(
			"dispatchSystemUiVisibilityChanged",
			"(I)V",
			arg0
		);
	}
	jboolean View::dispatchTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean View::dispatchTrackballEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean View::dispatchUnhandledMove(android::view::View arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"dispatchUnhandledMove",
			"(Landroid/view/View;I)Z",
			arg0.object(),
			arg1
		);
	}
	void View::dispatchWindowFocusChanged(jboolean arg0)
	{
		callMethod<void>(
			"dispatchWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void View::dispatchWindowInsetsAnimationEnd(android::view::WindowInsetsAnimation arg0)
	{
		callMethod<void>(
			"dispatchWindowInsetsAnimationEnd",
			"(Landroid/view/WindowInsetsAnimation;)V",
			arg0.object()
		);
	}
	void View::dispatchWindowInsetsAnimationPrepare(android::view::WindowInsetsAnimation arg0)
	{
		callMethod<void>(
			"dispatchWindowInsetsAnimationPrepare",
			"(Landroid/view/WindowInsetsAnimation;)V",
			arg0.object()
		);
	}
	android::view::WindowInsets View::dispatchWindowInsetsAnimationProgress(android::view::WindowInsets arg0, JObject arg1)
	{
		return callObjectMethod(
			"dispatchWindowInsetsAnimationProgress",
			"(Landroid/view/WindowInsets;Ljava/util/List;)Landroid/view/WindowInsets;",
			arg0.object(),
			arg1.object()
		);
	}
	android::view::WindowInsetsAnimation_Bounds View::dispatchWindowInsetsAnimationStart(android::view::WindowInsetsAnimation arg0, android::view::WindowInsetsAnimation_Bounds arg1)
	{
		return callObjectMethod(
			"dispatchWindowInsetsAnimationStart",
			"(Landroid/view/WindowInsetsAnimation;Landroid/view/WindowInsetsAnimation$Bounds;)Landroid/view/WindowInsetsAnimation$Bounds;",
			arg0.object(),
			arg1.object()
		);
	}
	void View::dispatchWindowSystemUiVisiblityChanged(jint arg0)
	{
		callMethod<void>(
			"dispatchWindowSystemUiVisiblityChanged",
			"(I)V",
			arg0
		);
	}
	void View::dispatchWindowVisibilityChanged(jint arg0)
	{
		callMethod<void>(
			"dispatchWindowVisibilityChanged",
			"(I)V",
			arg0
		);
	}
	void View::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	void View::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	android::view::View View::findFocus()
	{
		return callObjectMethod(
			"findFocus",
			"()Landroid/view/View;"
		);
	}
	android::view::View View::findViewById(jint arg0)
	{
		return callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	android::view::View View::findViewWithTag(JObject arg0)
	{
		return callObjectMethod(
			"findViewWithTag",
			"(Ljava/lang/Object;)Landroid/view/View;",
			arg0.object<jobject>()
		);
	}
	void View::findViewsWithText(java::util::ArrayList arg0, JString arg1, jint arg2)
	{
		callMethod<void>(
			"findViewsWithText",
			"(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	android::view::View View::focusSearch(jint arg0)
	{
		return callObjectMethod(
			"focusSearch",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void View::forceHasOverlappingRendering(jboolean arg0)
	{
		callMethod<void>(
			"forceHasOverlappingRendering",
			"(Z)V",
			arg0
		);
	}
	void View::forceLayout()
	{
		callMethod<void>(
			"forceLayout",
			"()V"
		);
	}
	jboolean View::gatherTransparentRegion(android::graphics::Region arg0)
	{
		return callMethod<jboolean>(
			"gatherTransparentRegion",
			"(Landroid/graphics/Region;)Z",
			arg0.object()
		);
	}
	void View::generateDisplayHash(JString arg0, android::graphics::Rect arg1, JObject arg2, JObject arg3)
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
	JString View::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::view::View_AccessibilityDelegate View::getAccessibilityDelegate()
	{
		return callObjectMethod(
			"getAccessibilityDelegate",
			"()Landroid/view/View$AccessibilityDelegate;"
		);
	}
	jint View::getAccessibilityLiveRegion()
	{
		return callMethod<jint>(
			"getAccessibilityLiveRegion",
			"()I"
		);
	}
	android::view::accessibility::AccessibilityNodeProvider View::getAccessibilityNodeProvider()
	{
		return callObjectMethod(
			"getAccessibilityNodeProvider",
			"()Landroid/view/accessibility/AccessibilityNodeProvider;"
		);
	}
	JString View::getAccessibilityPaneTitle()
	{
		return callObjectMethod(
			"getAccessibilityPaneTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint View::getAccessibilityTraversalAfter()
	{
		return callMethod<jint>(
			"getAccessibilityTraversalAfter",
			"()I"
		);
	}
	jint View::getAccessibilityTraversalBefore()
	{
		return callMethod<jint>(
			"getAccessibilityTraversalBefore",
			"()I"
		);
	}
	jfloat View::getAlpha()
	{
		return callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	android::view::animation::Animation View::getAnimation()
	{
		return callObjectMethod(
			"getAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
	android::graphics::Matrix View::getAnimationMatrix()
	{
		return callObjectMethod(
			"getAnimationMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	JObject View::getApplicationWindowToken()
	{
		return callObjectMethod(
			"getApplicationWindowToken",
			"()Landroid/os/IBinder;"
		);
	}
	JIntArray View::getAttributeResolutionStack(jint arg0)
	{
		return callObjectMethod(
			"getAttributeResolutionStack",
			"(I)[I",
			arg0
		);
	}
	JObject View::getAttributeSourceResourceMap()
	{
		return callObjectMethod(
			"getAttributeSourceResourceMap",
			"()Ljava/util/Map;"
		);
	}
	JArray View::getAutofillHints()
	{
		return callObjectMethod(
			"getAutofillHints",
			"()[Ljava/lang/String;"
		);
	}
	android::view::autofill::AutofillId View::getAutofillId()
	{
		return callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	jint View::getAutofillType()
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	android::view::autofill::AutofillValue View::getAutofillValue()
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	android::graphics::drawable::Drawable View::getBackground()
	{
		return callObjectMethod(
			"getBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::BlendMode View::getBackgroundTintBlendMode()
	{
		return callObjectMethod(
			"getBackgroundTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList View::getBackgroundTintList()
	{
		return callObjectMethod(
			"getBackgroundTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode View::getBackgroundTintMode()
	{
		return callObjectMethod(
			"getBackgroundTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	jint View::getBaseline()
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	jint View::getBottom()
	{
		return callMethod<jint>(
			"getBottom",
			"()I"
		);
	}
	jfloat View::getCameraDistance()
	{
		return callMethod<jfloat>(
			"getCameraDistance",
			"()F"
		);
	}
	android::graphics::Rect View::getClipBounds()
	{
		return callObjectMethod(
			"getClipBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	jboolean View::getClipBounds(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"getClipBounds",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean View::getClipToOutline()
	{
		return callMethod<jboolean>(
			"getClipToOutline",
			"()Z"
		);
	}
	android::view::contentcapture::ContentCaptureSession View::getContentCaptureSession()
	{
		return callObjectMethod(
			"getContentCaptureSession",
			"()Landroid/view/contentcapture/ContentCaptureSession;"
		);
	}
	JString View::getContentDescription()
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::content::Context View::getContext()
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jboolean View::getDefaultFocusHighlightEnabled()
	{
		return callMethod<jboolean>(
			"getDefaultFocusHighlightEnabled",
			"()Z"
		);
	}
	android::view::Display View::getDisplay()
	{
		return callObjectMethod(
			"getDisplay",
			"()Landroid/view/Display;"
		);
	}
	JIntArray View::getDrawableState()
	{
		return callObjectMethod(
			"getDrawableState",
			"()[I"
		);
	}
	android::graphics::Bitmap View::getDrawingCache()
	{
		return callObjectMethod(
			"getDrawingCache",
			"()Landroid/graphics/Bitmap;"
		);
	}
	android::graphics::Bitmap View::getDrawingCache(jboolean arg0)
	{
		return callObjectMethod(
			"getDrawingCache",
			"(Z)Landroid/graphics/Bitmap;",
			arg0
		);
	}
	jint View::getDrawingCacheBackgroundColor()
	{
		return callMethod<jint>(
			"getDrawingCacheBackgroundColor",
			"()I"
		);
	}
	jint View::getDrawingCacheQuality()
	{
		return callMethod<jint>(
			"getDrawingCacheQuality",
			"()I"
		);
	}
	void View::getDrawingRect(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"getDrawingRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jlong View::getDrawingTime()
	{
		return callMethod<jlong>(
			"getDrawingTime",
			"()J"
		);
	}
	jfloat View::getElevation()
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	jint View::getExplicitStyle()
	{
		return callMethod<jint>(
			"getExplicitStyle",
			"()I"
		);
	}
	jboolean View::getFilterTouchesWhenObscured()
	{
		return callMethod<jboolean>(
			"getFilterTouchesWhenObscured",
			"()Z"
		);
	}
	jboolean View::getFitsSystemWindows()
	{
		return callMethod<jboolean>(
			"getFitsSystemWindows",
			"()Z"
		);
	}
	jint View::getFocusable()
	{
		return callMethod<jint>(
			"getFocusable",
			"()I"
		);
	}
	java::util::ArrayList View::getFocusables(jint arg0)
	{
		return callObjectMethod(
			"getFocusables",
			"(I)Ljava/util/ArrayList;",
			arg0
		);
	}
	void View::getFocusedRect(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"getFocusedRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable View::getForeground()
	{
		return callObjectMethod(
			"getForeground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint View::getForegroundGravity()
	{
		return callMethod<jint>(
			"getForegroundGravity",
			"()I"
		);
	}
	android::graphics::BlendMode View::getForegroundTintBlendMode()
	{
		return callObjectMethod(
			"getForegroundTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList View::getForegroundTintList()
	{
		return callObjectMethod(
			"getForegroundTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode View::getForegroundTintMode()
	{
		return callObjectMethod(
			"getForegroundTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	jboolean View::getGlobalVisibleRect(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"getGlobalVisibleRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean View::getGlobalVisibleRect(android::graphics::Rect arg0, android::graphics::Point arg1)
	{
		return callMethod<jboolean>(
			"getGlobalVisibleRect",
			"(Landroid/graphics/Rect;Landroid/graphics/Point;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	android::os::Handler View::getHandler()
	{
		return callObjectMethod(
			"getHandler",
			"()Landroid/os/Handler;"
		);
	}
	jboolean View::getHasOverlappingRendering()
	{
		return callMethod<jboolean>(
			"getHasOverlappingRendering",
			"()Z"
		);
	}
	jint View::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	void View::getHitRect(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"getHitRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jint View::getHorizontalFadingEdgeLength()
	{
		return callMethod<jint>(
			"getHorizontalFadingEdgeLength",
			"()I"
		);
	}
	android::graphics::drawable::Drawable View::getHorizontalScrollbarThumbDrawable()
	{
		return callObjectMethod(
			"getHorizontalScrollbarThumbDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::drawable::Drawable View::getHorizontalScrollbarTrackDrawable()
	{
		return callObjectMethod(
			"getHorizontalScrollbarTrackDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint View::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint View::getImportantForAccessibility()
	{
		return callMethod<jint>(
			"getImportantForAccessibility",
			"()I"
		);
	}
	jint View::getImportantForAutofill()
	{
		return callMethod<jint>(
			"getImportantForAutofill",
			"()I"
		);
	}
	jint View::getImportantForContentCapture()
	{
		return callMethod<jint>(
			"getImportantForContentCapture",
			"()I"
		);
	}
	jboolean View::getKeepScreenOn()
	{
		return callMethod<jboolean>(
			"getKeepScreenOn",
			"()Z"
		);
	}
	android::view::KeyEvent_DispatcherState View::getKeyDispatcherState()
	{
		return callObjectMethod(
			"getKeyDispatcherState",
			"()Landroid/view/KeyEvent$DispatcherState;"
		);
	}
	jint View::getLabelFor()
	{
		return callMethod<jint>(
			"getLabelFor",
			"()I"
		);
	}
	jint View::getLayerType()
	{
		return callMethod<jint>(
			"getLayerType",
			"()I"
		);
	}
	jint View::getLayoutDirection()
	{
		return callMethod<jint>(
			"getLayoutDirection",
			"()I"
		);
	}
	android::view::ViewGroup_LayoutParams View::getLayoutParams()
	{
		return callObjectMethod(
			"getLayoutParams",
			"()Landroid/view/ViewGroup$LayoutParams;"
		);
	}
	jint View::getLeft()
	{
		return callMethod<jint>(
			"getLeft",
			"()I"
		);
	}
	jboolean View::getLocalVisibleRect(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"getLocalVisibleRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	void View::getLocationInSurface(JIntArray arg0)
	{
		callMethod<void>(
			"getLocationInSurface",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	void View::getLocationInWindow(JIntArray arg0)
	{
		callMethod<void>(
			"getLocationInWindow",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	void View::getLocationOnScreen(JIntArray arg0)
	{
		callMethod<void>(
			"getLocationOnScreen",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	android::graphics::Matrix View::getMatrix()
	{
		return callObjectMethod(
			"getMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	jint View::getMeasuredHeight()
	{
		return callMethod<jint>(
			"getMeasuredHeight",
			"()I"
		);
	}
	jint View::getMeasuredHeightAndState()
	{
		return callMethod<jint>(
			"getMeasuredHeightAndState",
			"()I"
		);
	}
	jint View::getMeasuredState()
	{
		return callMethod<jint>(
			"getMeasuredState",
			"()I"
		);
	}
	jint View::getMeasuredWidth()
	{
		return callMethod<jint>(
			"getMeasuredWidth",
			"()I"
		);
	}
	jint View::getMeasuredWidthAndState()
	{
		return callMethod<jint>(
			"getMeasuredWidthAndState",
			"()I"
		);
	}
	jint View::getMinimumHeight()
	{
		return callMethod<jint>(
			"getMinimumHeight",
			"()I"
		);
	}
	jint View::getMinimumWidth()
	{
		return callMethod<jint>(
			"getMinimumWidth",
			"()I"
		);
	}
	jint View::getNextClusterForwardId()
	{
		return callMethod<jint>(
			"getNextClusterForwardId",
			"()I"
		);
	}
	jint View::getNextFocusDownId()
	{
		return callMethod<jint>(
			"getNextFocusDownId",
			"()I"
		);
	}
	jint View::getNextFocusForwardId()
	{
		return callMethod<jint>(
			"getNextFocusForwardId",
			"()I"
		);
	}
	jint View::getNextFocusLeftId()
	{
		return callMethod<jint>(
			"getNextFocusLeftId",
			"()I"
		);
	}
	jint View::getNextFocusRightId()
	{
		return callMethod<jint>(
			"getNextFocusRightId",
			"()I"
		);
	}
	jint View::getNextFocusUpId()
	{
		return callMethod<jint>(
			"getNextFocusUpId",
			"()I"
		);
	}
	JObject View::getOnFocusChangeListener()
	{
		return callObjectMethod(
			"getOnFocusChangeListener",
			"()Landroid/view/View$OnFocusChangeListener;"
		);
	}
	jint View::getOutlineAmbientShadowColor()
	{
		return callMethod<jint>(
			"getOutlineAmbientShadowColor",
			"()I"
		);
	}
	android::view::ViewOutlineProvider View::getOutlineProvider()
	{
		return callObjectMethod(
			"getOutlineProvider",
			"()Landroid/view/ViewOutlineProvider;"
		);
	}
	jint View::getOutlineSpotShadowColor()
	{
		return callMethod<jint>(
			"getOutlineSpotShadowColor",
			"()I"
		);
	}
	jint View::getOverScrollMode()
	{
		return callMethod<jint>(
			"getOverScrollMode",
			"()I"
		);
	}
	android::view::ViewOverlay View::getOverlay()
	{
		return callObjectMethod(
			"getOverlay",
			"()Landroid/view/ViewOverlay;"
		);
	}
	jint View::getPaddingBottom()
	{
		return callMethod<jint>(
			"getPaddingBottom",
			"()I"
		);
	}
	jint View::getPaddingEnd()
	{
		return callMethod<jint>(
			"getPaddingEnd",
			"()I"
		);
	}
	jint View::getPaddingLeft()
	{
		return callMethod<jint>(
			"getPaddingLeft",
			"()I"
		);
	}
	jint View::getPaddingRight()
	{
		return callMethod<jint>(
			"getPaddingRight",
			"()I"
		);
	}
	jint View::getPaddingStart()
	{
		return callMethod<jint>(
			"getPaddingStart",
			"()I"
		);
	}
	jint View::getPaddingTop()
	{
		return callMethod<jint>(
			"getPaddingTop",
			"()I"
		);
	}
	JObject View::getParent()
	{
		return callObjectMethod(
			"getParent",
			"()Landroid/view/ViewParent;"
		);
	}
	JObject View::getParentForAccessibility()
	{
		return callObjectMethod(
			"getParentForAccessibility",
			"()Landroid/view/ViewParent;"
		);
	}
	jfloat View::getPivotX()
	{
		return callMethod<jfloat>(
			"getPivotX",
			"()F"
		);
	}
	jfloat View::getPivotY()
	{
		return callMethod<jfloat>(
			"getPivotY",
			"()F"
		);
	}
	android::view::PointerIcon View::getPointerIcon()
	{
		return callObjectMethod(
			"getPointerIcon",
			"()Landroid/view/PointerIcon;"
		);
	}
	JArray View::getReceiveContentMimeTypes()
	{
		return callObjectMethod(
			"getReceiveContentMimeTypes",
			"()[Ljava/lang/String;"
		);
	}
	android::content::res::Resources View::getResources()
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	jboolean View::getRevealOnFocusHint()
	{
		return callMethod<jboolean>(
			"getRevealOnFocusHint",
			"()Z"
		);
	}
	jint View::getRight()
	{
		return callMethod<jint>(
			"getRight",
			"()I"
		);
	}
	JObject View::getRootSurfaceControl()
	{
		return callObjectMethod(
			"getRootSurfaceControl",
			"()Landroid/view/AttachedSurfaceControl;"
		);
	}
	android::view::View View::getRootView()
	{
		return callObjectMethod(
			"getRootView",
			"()Landroid/view/View;"
		);
	}
	android::view::WindowInsets View::getRootWindowInsets()
	{
		return callObjectMethod(
			"getRootWindowInsets",
			"()Landroid/view/WindowInsets;"
		);
	}
	jfloat View::getRotation()
	{
		return callMethod<jfloat>(
			"getRotation",
			"()F"
		);
	}
	jfloat View::getRotationX()
	{
		return callMethod<jfloat>(
			"getRotationX",
			"()F"
		);
	}
	jfloat View::getRotationY()
	{
		return callMethod<jfloat>(
			"getRotationY",
			"()F"
		);
	}
	jfloat View::getScaleX()
	{
		return callMethod<jfloat>(
			"getScaleX",
			"()F"
		);
	}
	jfloat View::getScaleY()
	{
		return callMethod<jfloat>(
			"getScaleY",
			"()F"
		);
	}
	jint View::getScrollBarDefaultDelayBeforeFade()
	{
		return callMethod<jint>(
			"getScrollBarDefaultDelayBeforeFade",
			"()I"
		);
	}
	jint View::getScrollBarFadeDuration()
	{
		return callMethod<jint>(
			"getScrollBarFadeDuration",
			"()I"
		);
	}
	jint View::getScrollBarSize()
	{
		return callMethod<jint>(
			"getScrollBarSize",
			"()I"
		);
	}
	jint View::getScrollBarStyle()
	{
		return callMethod<jint>(
			"getScrollBarStyle",
			"()I"
		);
	}
	jint View::getScrollCaptureHint()
	{
		return callMethod<jint>(
			"getScrollCaptureHint",
			"()I"
		);
	}
	jint View::getScrollIndicators()
	{
		return callMethod<jint>(
			"getScrollIndicators",
			"()I"
		);
	}
	jint View::getScrollX()
	{
		return callMethod<jint>(
			"getScrollX",
			"()I"
		);
	}
	jint View::getScrollY()
	{
		return callMethod<jint>(
			"getScrollY",
			"()I"
		);
	}
	jint View::getSolidColor()
	{
		return callMethod<jint>(
			"getSolidColor",
			"()I"
		);
	}
	jint View::getSourceLayoutResId()
	{
		return callMethod<jint>(
			"getSourceLayoutResId",
			"()I"
		);
	}
	JString View::getStateDescription()
	{
		return callObjectMethod(
			"getStateDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::animation::StateListAnimator View::getStateListAnimator()
	{
		return callObjectMethod(
			"getStateListAnimator",
			"()Landroid/animation/StateListAnimator;"
		);
	}
	JObject View::getSystemGestureExclusionRects()
	{
		return callObjectMethod(
			"getSystemGestureExclusionRects",
			"()Ljava/util/List;"
		);
	}
	jint View::getSystemUiVisibility()
	{
		return callMethod<jint>(
			"getSystemUiVisibility",
			"()I"
		);
	}
	JObject View::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;"
		);
	}
	JObject View::getTag(jint arg0)
	{
		return callObjectMethod(
			"getTag",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	jint View::getTextAlignment()
	{
		return callMethod<jint>(
			"getTextAlignment",
			"()I"
		);
	}
	jint View::getTextDirection()
	{
		return callMethod<jint>(
			"getTextDirection",
			"()I"
		);
	}
	JString View::getTooltipText()
	{
		return callObjectMethod(
			"getTooltipText",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint View::getTop()
	{
		return callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	android::view::TouchDelegate View::getTouchDelegate()
	{
		return callObjectMethod(
			"getTouchDelegate",
			"()Landroid/view/TouchDelegate;"
		);
	}
	java::util::ArrayList View::getTouchables()
	{
		return callObjectMethod(
			"getTouchables",
			"()Ljava/util/ArrayList;"
		);
	}
	jfloat View::getTransitionAlpha()
	{
		return callMethod<jfloat>(
			"getTransitionAlpha",
			"()F"
		);
	}
	JString View::getTransitionName()
	{
		return callObjectMethod(
			"getTransitionName",
			"()Ljava/lang/String;"
		);
	}
	jfloat View::getTranslationX()
	{
		return callMethod<jfloat>(
			"getTranslationX",
			"()F"
		);
	}
	jfloat View::getTranslationY()
	{
		return callMethod<jfloat>(
			"getTranslationY",
			"()F"
		);
	}
	jfloat View::getTranslationZ()
	{
		return callMethod<jfloat>(
			"getTranslationZ",
			"()F"
		);
	}
	jlong View::getUniqueDrawingId()
	{
		return callMethod<jlong>(
			"getUniqueDrawingId",
			"()J"
		);
	}
	jint View::getVerticalFadingEdgeLength()
	{
		return callMethod<jint>(
			"getVerticalFadingEdgeLength",
			"()I"
		);
	}
	jint View::getVerticalScrollbarPosition()
	{
		return callMethod<jint>(
			"getVerticalScrollbarPosition",
			"()I"
		);
	}
	android::graphics::drawable::Drawable View::getVerticalScrollbarThumbDrawable()
	{
		return callObjectMethod(
			"getVerticalScrollbarThumbDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::drawable::Drawable View::getVerticalScrollbarTrackDrawable()
	{
		return callObjectMethod(
			"getVerticalScrollbarTrackDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint View::getVerticalScrollbarWidth()
	{
		return callMethod<jint>(
			"getVerticalScrollbarWidth",
			"()I"
		);
	}
	android::view::translation::ViewTranslationResponse View::getViewTranslationResponse()
	{
		return callObjectMethod(
			"getViewTranslationResponse",
			"()Landroid/view/translation/ViewTranslationResponse;"
		);
	}
	android::view::ViewTreeObserver View::getViewTreeObserver()
	{
		return callObjectMethod(
			"getViewTreeObserver",
			"()Landroid/view/ViewTreeObserver;"
		);
	}
	jint View::getVisibility()
	{
		return callMethod<jint>(
			"getVisibility",
			"()I"
		);
	}
	jint View::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	android::view::WindowId View::getWindowId()
	{
		return callObjectMethod(
			"getWindowId",
			"()Landroid/view/WindowId;"
		);
	}
	JObject View::getWindowInsetsController()
	{
		return callObjectMethod(
			"getWindowInsetsController",
			"()Landroid/view/WindowInsetsController;"
		);
	}
	jint View::getWindowSystemUiVisibility()
	{
		return callMethod<jint>(
			"getWindowSystemUiVisibility",
			"()I"
		);
	}
	JObject View::getWindowToken()
	{
		return callObjectMethod(
			"getWindowToken",
			"()Landroid/os/IBinder;"
		);
	}
	jint View::getWindowVisibility()
	{
		return callMethod<jint>(
			"getWindowVisibility",
			"()I"
		);
	}
	void View::getWindowVisibleDisplayFrame(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"getWindowVisibleDisplayFrame",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jfloat View::getX()
	{
		return callMethod<jfloat>(
			"getX",
			"()F"
		);
	}
	jfloat View::getY()
	{
		return callMethod<jfloat>(
			"getY",
			"()F"
		);
	}
	jfloat View::getZ()
	{
		return callMethod<jfloat>(
			"getZ",
			"()F"
		);
	}
	jboolean View::hasExplicitFocusable()
	{
		return callMethod<jboolean>(
			"hasExplicitFocusable",
			"()Z"
		);
	}
	jboolean View::hasFocus()
	{
		return callMethod<jboolean>(
			"hasFocus",
			"()Z"
		);
	}
	jboolean View::hasFocusable()
	{
		return callMethod<jboolean>(
			"hasFocusable",
			"()Z"
		);
	}
	jboolean View::hasNestedScrollingParent()
	{
		return callMethod<jboolean>(
			"hasNestedScrollingParent",
			"()Z"
		);
	}
	jboolean View::hasOnClickListeners()
	{
		return callMethod<jboolean>(
			"hasOnClickListeners",
			"()Z"
		);
	}
	jboolean View::hasOnLongClickListeners()
	{
		return callMethod<jboolean>(
			"hasOnLongClickListeners",
			"()Z"
		);
	}
	jboolean View::hasOverlappingRendering()
	{
		return callMethod<jboolean>(
			"hasOverlappingRendering",
			"()Z"
		);
	}
	jboolean View::hasPointerCapture()
	{
		return callMethod<jboolean>(
			"hasPointerCapture",
			"()Z"
		);
	}
	jboolean View::hasTransientState()
	{
		return callMethod<jboolean>(
			"hasTransientState",
			"()Z"
		);
	}
	jboolean View::hasWindowFocus()
	{
		return callMethod<jboolean>(
			"hasWindowFocus",
			"()Z"
		);
	}
	void View::invalidate()
	{
		callMethod<void>(
			"invalidate",
			"()V"
		);
	}
	void View::invalidate(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"invalidate",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void View::invalidate(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void View::invalidateDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void View::invalidateOutline()
	{
		callMethod<void>(
			"invalidateOutline",
			"()V"
		);
	}
	jboolean View::isAccessibilityFocused()
	{
		return callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z"
		);
	}
	jboolean View::isAccessibilityHeading()
	{
		return callMethod<jboolean>(
			"isAccessibilityHeading",
			"()Z"
		);
	}
	jboolean View::isActivated()
	{
		return callMethod<jboolean>(
			"isActivated",
			"()Z"
		);
	}
	jboolean View::isAttachedToWindow()
	{
		return callMethod<jboolean>(
			"isAttachedToWindow",
			"()Z"
		);
	}
	jboolean View::isClickable()
	{
		return callMethod<jboolean>(
			"isClickable",
			"()Z"
		);
	}
	jboolean View::isContextClickable()
	{
		return callMethod<jboolean>(
			"isContextClickable",
			"()Z"
		);
	}
	jboolean View::isDirty()
	{
		return callMethod<jboolean>(
			"isDirty",
			"()Z"
		);
	}
	jboolean View::isDrawingCacheEnabled()
	{
		return callMethod<jboolean>(
			"isDrawingCacheEnabled",
			"()Z"
		);
	}
	jboolean View::isDuplicateParentStateEnabled()
	{
		return callMethod<jboolean>(
			"isDuplicateParentStateEnabled",
			"()Z"
		);
	}
	jboolean View::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean View::isFocusable()
	{
		return callMethod<jboolean>(
			"isFocusable",
			"()Z"
		);
	}
	jboolean View::isFocusableInTouchMode()
	{
		return callMethod<jboolean>(
			"isFocusableInTouchMode",
			"()Z"
		);
	}
	jboolean View::isFocused()
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	jboolean View::isFocusedByDefault()
	{
		return callMethod<jboolean>(
			"isFocusedByDefault",
			"()Z"
		);
	}
	jboolean View::isForceDarkAllowed()
	{
		return callMethod<jboolean>(
			"isForceDarkAllowed",
			"()Z"
		);
	}
	jboolean View::isHapticFeedbackEnabled()
	{
		return callMethod<jboolean>(
			"isHapticFeedbackEnabled",
			"()Z"
		);
	}
	jboolean View::isHardwareAccelerated()
	{
		return callMethod<jboolean>(
			"isHardwareAccelerated",
			"()Z"
		);
	}
	jboolean View::isHorizontalFadingEdgeEnabled()
	{
		return callMethod<jboolean>(
			"isHorizontalFadingEdgeEnabled",
			"()Z"
		);
	}
	jboolean View::isHorizontalScrollBarEnabled()
	{
		return callMethod<jboolean>(
			"isHorizontalScrollBarEnabled",
			"()Z"
		);
	}
	jboolean View::isHovered()
	{
		return callMethod<jboolean>(
			"isHovered",
			"()Z"
		);
	}
	jboolean View::isImportantForAccessibility()
	{
		return callMethod<jboolean>(
			"isImportantForAccessibility",
			"()Z"
		);
	}
	jboolean View::isImportantForAutofill()
	{
		return callMethod<jboolean>(
			"isImportantForAutofill",
			"()Z"
		);
	}
	jboolean View::isImportantForContentCapture()
	{
		return callMethod<jboolean>(
			"isImportantForContentCapture",
			"()Z"
		);
	}
	jboolean View::isInEditMode()
	{
		return callMethod<jboolean>(
			"isInEditMode",
			"()Z"
		);
	}
	jboolean View::isInLayout()
	{
		return callMethod<jboolean>(
			"isInLayout",
			"()Z"
		);
	}
	jboolean View::isInTouchMode()
	{
		return callMethod<jboolean>(
			"isInTouchMode",
			"()Z"
		);
	}
	jboolean View::isKeyboardNavigationCluster()
	{
		return callMethod<jboolean>(
			"isKeyboardNavigationCluster",
			"()Z"
		);
	}
	jboolean View::isLaidOut()
	{
		return callMethod<jboolean>(
			"isLaidOut",
			"()Z"
		);
	}
	jboolean View::isLayoutDirectionResolved()
	{
		return callMethod<jboolean>(
			"isLayoutDirectionResolved",
			"()Z"
		);
	}
	jboolean View::isLayoutRequested()
	{
		return callMethod<jboolean>(
			"isLayoutRequested",
			"()Z"
		);
	}
	jboolean View::isLongClickable()
	{
		return callMethod<jboolean>(
			"isLongClickable",
			"()Z"
		);
	}
	jboolean View::isNestedScrollingEnabled()
	{
		return callMethod<jboolean>(
			"isNestedScrollingEnabled",
			"()Z"
		);
	}
	jboolean View::isOpaque()
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	jboolean View::isPaddingRelative()
	{
		return callMethod<jboolean>(
			"isPaddingRelative",
			"()Z"
		);
	}
	jboolean View::isPivotSet()
	{
		return callMethod<jboolean>(
			"isPivotSet",
			"()Z"
		);
	}
	jboolean View::isPressed()
	{
		return callMethod<jboolean>(
			"isPressed",
			"()Z"
		);
	}
	jboolean View::isSaveEnabled()
	{
		return callMethod<jboolean>(
			"isSaveEnabled",
			"()Z"
		);
	}
	jboolean View::isSaveFromParentEnabled()
	{
		return callMethod<jboolean>(
			"isSaveFromParentEnabled",
			"()Z"
		);
	}
	jboolean View::isScreenReaderFocusable()
	{
		return callMethod<jboolean>(
			"isScreenReaderFocusable",
			"()Z"
		);
	}
	jboolean View::isScrollContainer()
	{
		return callMethod<jboolean>(
			"isScrollContainer",
			"()Z"
		);
	}
	jboolean View::isScrollbarFadingEnabled()
	{
		return callMethod<jboolean>(
			"isScrollbarFadingEnabled",
			"()Z"
		);
	}
	jboolean View::isSelected()
	{
		return callMethod<jboolean>(
			"isSelected",
			"()Z"
		);
	}
	jboolean View::isShowingLayoutBounds()
	{
		return callMethod<jboolean>(
			"isShowingLayoutBounds",
			"()Z"
		);
	}
	jboolean View::isShown()
	{
		return callMethod<jboolean>(
			"isShown",
			"()Z"
		);
	}
	jboolean View::isSoundEffectsEnabled()
	{
		return callMethod<jboolean>(
			"isSoundEffectsEnabled",
			"()Z"
		);
	}
	jboolean View::isTemporarilyDetached()
	{
		return callMethod<jboolean>(
			"isTemporarilyDetached",
			"()Z"
		);
	}
	jboolean View::isTextAlignmentResolved()
	{
		return callMethod<jboolean>(
			"isTextAlignmentResolved",
			"()Z"
		);
	}
	jboolean View::isTextDirectionResolved()
	{
		return callMethod<jboolean>(
			"isTextDirectionResolved",
			"()Z"
		);
	}
	jboolean View::isVerticalFadingEdgeEnabled()
	{
		return callMethod<jboolean>(
			"isVerticalFadingEdgeEnabled",
			"()Z"
		);
	}
	jboolean View::isVerticalScrollBarEnabled()
	{
		return callMethod<jboolean>(
			"isVerticalScrollBarEnabled",
			"()Z"
		);
	}
	jboolean View::isVisibleToUserForAutofill(jint arg0)
	{
		return callMethod<jboolean>(
			"isVisibleToUserForAutofill",
			"(I)Z",
			arg0
		);
	}
	void View::jumpDrawablesToCurrentState()
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	android::view::View View::keyboardNavigationClusterSearch(android::view::View arg0, jint arg1)
	{
		return callObjectMethod(
			"keyboardNavigationClusterSearch",
			"(Landroid/view/View;I)Landroid/view/View;",
			arg0.object(),
			arg1
		);
	}
	void View::layout(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void View::measure(jint arg0, jint arg1)
	{
		callMethod<void>(
			"measure",
			"(II)V",
			arg0,
			arg1
		);
	}
	void View::offsetLeftAndRight(jint arg0)
	{
		callMethod<void>(
			"offsetLeftAndRight",
			"(I)V",
			arg0
		);
	}
	void View::offsetTopAndBottom(jint arg0)
	{
		callMethod<void>(
			"offsetTopAndBottom",
			"(I)V",
			arg0
		);
	}
	android::view::WindowInsets View::onApplyWindowInsets(android::view::WindowInsets arg0)
	{
		return callObjectMethod(
			"onApplyWindowInsets",
			"(Landroid/view/WindowInsets;)Landroid/view/WindowInsets;",
			arg0.object()
		);
	}
	void View::onCancelPendingInputEvents()
	{
		callMethod<void>(
			"onCancelPendingInputEvents",
			"()V"
		);
	}
	jboolean View::onCapturedPointerEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onCapturedPointerEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean View::onCheckIsTextEditor()
	{
		return callMethod<jboolean>(
			"onCheckIsTextEditor",
			"()Z"
		);
	}
	JObject View::onCreateInputConnection(android::view::inputmethod::EditorInfo arg0)
	{
		return callObjectMethod(
			"onCreateInputConnection",
			"(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",
			arg0.object()
		);
	}
	void View::onCreateViewTranslationRequest(JIntArray arg0, JObject arg1)
	{
		callMethod<void>(
			"onCreateViewTranslationRequest",
			"([ILjava/util/function/Consumer;)V",
			arg0.object<jintArray>(),
			arg1.object()
		);
	}
	void View::onCreateVirtualViewTranslationRequests(JLongArray arg0, JIntArray arg1, JObject arg2)
	{
		callMethod<void>(
			"onCreateVirtualViewTranslationRequests",
			"([J[ILjava/util/function/Consumer;)V",
			arg0.object<jlongArray>(),
			arg1.object<jintArray>(),
			arg2.object()
		);
	}
	jboolean View::onDragEvent(android::view::DragEvent arg0)
	{
		return callMethod<jboolean>(
			"onDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.object()
		);
	}
	void View::onDrawForeground(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"onDrawForeground",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jboolean View::onFilterTouchEventForSecurity(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onFilterTouchEventForSecurity",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void View::onFinishTemporaryDetach()
	{
		callMethod<void>(
			"onFinishTemporaryDetach",
			"()V"
		);
	}
	jboolean View::onGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void View::onHoverChanged(jboolean arg0)
	{
		callMethod<void>(
			"onHoverChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean View::onHoverEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void View::onInitializeAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0)
	{
		callMethod<void>(
			"onInitializeAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object()
		);
	}
	void View::onInitializeAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0)
	{
		callMethod<void>(
			"onInitializeAccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.object()
		);
	}
	jboolean View::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean View::onKeyLongPress(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean View::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean View::onKeyPreIme(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean View::onKeyShortcut(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyShortcut",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean View::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	void View::onPointerCaptureChange(jboolean arg0)
	{
		callMethod<void>(
			"onPointerCaptureChange",
			"(Z)V",
			arg0
		);
	}
	void View::onPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0)
	{
		callMethod<void>(
			"onPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object()
		);
	}
	void View::onProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1)
	{
		callMethod<void>(
			"onProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	void View::onProvideAutofillVirtualStructure(android::view::ViewStructure arg0, jint arg1)
	{
		callMethod<void>(
			"onProvideAutofillVirtualStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	void View::onProvideContentCaptureStructure(android::view::ViewStructure arg0, jint arg1)
	{
		callMethod<void>(
			"onProvideContentCaptureStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	void View::onProvideStructure(android::view::ViewStructure arg0)
	{
		callMethod<void>(
			"onProvideStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	void View::onProvideVirtualStructure(android::view::ViewStructure arg0)
	{
		callMethod<void>(
			"onProvideVirtualStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	android::view::ContentInfo View::onReceiveContent(android::view::ContentInfo arg0)
	{
		return callObjectMethod(
			"onReceiveContent",
			"(Landroid/view/ContentInfo;)Landroid/view/ContentInfo;",
			arg0.object()
		);
	}
	android::view::PointerIcon View::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1)
	{
		return callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
	void View::onRtlPropertiesChanged(jint arg0)
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	void View::onScreenStateChanged(jint arg0)
	{
		callMethod<void>(
			"onScreenStateChanged",
			"(I)V",
			arg0
		);
	}
	void View::onScrollCaptureSearch(android::graphics::Rect arg0, android::graphics::Point arg1, JObject arg2)
	{
		callMethod<void>(
			"onScrollCaptureSearch",
			"(Landroid/graphics/Rect;Landroid/graphics/Point;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void View::onStartTemporaryDetach()
	{
		callMethod<void>(
			"onStartTemporaryDetach",
			"()V"
		);
	}
	jboolean View::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean View::onTrackballEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void View::onViewTranslationResponse(android::view::translation::ViewTranslationResponse arg0)
	{
		callMethod<void>(
			"onViewTranslationResponse",
			"(Landroid/view/translation/ViewTranslationResponse;)V",
			arg0.object()
		);
	}
	void View::onVirtualViewTranslationResponses(android::util::LongSparseArray arg0)
	{
		callMethod<void>(
			"onVirtualViewTranslationResponses",
			"(Landroid/util/LongSparseArray;)V",
			arg0.object()
		);
	}
	void View::onVisibilityAggregated(jboolean arg0)
	{
		callMethod<void>(
			"onVisibilityAggregated",
			"(Z)V",
			arg0
		);
	}
	void View::onWindowFocusChanged(jboolean arg0)
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void View::onWindowSystemUiVisibilityChanged(jint arg0)
	{
		callMethod<void>(
			"onWindowSystemUiVisibilityChanged",
			"(I)V",
			arg0
		);
	}
	jboolean View::performAccessibilityAction(jint arg0, android::os::Bundle arg1)
	{
		return callMethod<jboolean>(
			"performAccessibilityAction",
			"(ILandroid/os/Bundle;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean View::performClick()
	{
		return callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	jboolean View::performContextClick()
	{
		return callMethod<jboolean>(
			"performContextClick",
			"()Z"
		);
	}
	jboolean View::performContextClick(jfloat arg0, jfloat arg1)
	{
		return callMethod<jboolean>(
			"performContextClick",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean View::performHapticFeedback(jint arg0)
	{
		return callMethod<jboolean>(
			"performHapticFeedback",
			"(I)Z",
			arg0
		);
	}
	jboolean View::performHapticFeedback(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"performHapticFeedback",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean View::performLongClick()
	{
		return callMethod<jboolean>(
			"performLongClick",
			"()Z"
		);
	}
	jboolean View::performLongClick(jfloat arg0, jfloat arg1)
	{
		return callMethod<jboolean>(
			"performLongClick",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	android::view::ContentInfo View::performReceiveContent(android::view::ContentInfo arg0)
	{
		return callObjectMethod(
			"performReceiveContent",
			"(Landroid/view/ContentInfo;)Landroid/view/ContentInfo;",
			arg0.object()
		);
	}
	void View::playSoundEffect(jint arg0)
	{
		callMethod<void>(
			"playSoundEffect",
			"(I)V",
			arg0
		);
	}
	jboolean View::post(JObject arg0)
	{
		return callMethod<jboolean>(
			"post",
			"(Ljava/lang/Runnable;)Z",
			arg0.object()
		);
	}
	jboolean View::postDelayed(JObject arg0, jlong arg1)
	{
		return callMethod<jboolean>(
			"postDelayed",
			"(Ljava/lang/Runnable;J)Z",
			arg0.object(),
			arg1
		);
	}
	void View::postInvalidate()
	{
		callMethod<void>(
			"postInvalidate",
			"()V"
		);
	}
	void View::postInvalidate(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void View::postInvalidateDelayed(jlong arg0)
	{
		callMethod<void>(
			"postInvalidateDelayed",
			"(J)V",
			arg0
		);
	}
	void View::postInvalidateDelayed(jlong arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	void View::postInvalidateOnAnimation()
	{
		callMethod<void>(
			"postInvalidateOnAnimation",
			"()V"
		);
	}
	void View::postInvalidateOnAnimation(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void View::postOnAnimation(JObject arg0)
	{
		callMethod<void>(
			"postOnAnimation",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	void View::postOnAnimationDelayed(JObject arg0, jlong arg1)
	{
		callMethod<void>(
			"postOnAnimationDelayed",
			"(Ljava/lang/Runnable;J)V",
			arg0.object(),
			arg1
		);
	}
	void View::refreshDrawableState()
	{
		callMethod<void>(
			"refreshDrawableState",
			"()V"
		);
	}
	void View::releasePointerCapture()
	{
		callMethod<void>(
			"releasePointerCapture",
			"()V"
		);
	}
	jboolean View::removeCallbacks(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeCallbacks",
			"(Ljava/lang/Runnable;)Z",
			arg0.object()
		);
	}
	void View::removeOnAttachStateChangeListener(JObject arg0)
	{
		callMethod<void>(
			"removeOnAttachStateChangeListener",
			"(Landroid/view/View$OnAttachStateChangeListener;)V",
			arg0.object()
		);
	}
	void View::removeOnLayoutChangeListener(JObject arg0)
	{
		callMethod<void>(
			"removeOnLayoutChangeListener",
			"(Landroid/view/View$OnLayoutChangeListener;)V",
			arg0.object()
		);
	}
	void View::removeOnUnhandledKeyEventListener(JObject arg0)
	{
		callMethod<void>(
			"removeOnUnhandledKeyEventListener",
			"(Landroid/view/View$OnUnhandledKeyEventListener;)V",
			arg0.object()
		);
	}
	void View::requestApplyInsets()
	{
		callMethod<void>(
			"requestApplyInsets",
			"()V"
		);
	}
	void View::requestFitSystemWindows()
	{
		callMethod<void>(
			"requestFitSystemWindows",
			"()V"
		);
	}
	jboolean View::requestFocus()
	{
		return callMethod<jboolean>(
			"requestFocus",
			"()Z"
		);
	}
	jboolean View::requestFocus(jint arg0)
	{
		return callMethod<jboolean>(
			"requestFocus",
			"(I)Z",
			arg0
		);
	}
	jboolean View::requestFocus(jint arg0, android::graphics::Rect arg1)
	{
		return callMethod<jboolean>(
			"requestFocus",
			"(ILandroid/graphics/Rect;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean View::requestFocusFromTouch()
	{
		return callMethod<jboolean>(
			"requestFocusFromTouch",
			"()Z"
		);
	}
	void View::requestLayout()
	{
		callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	void View::requestPointerCapture()
	{
		callMethod<void>(
			"requestPointerCapture",
			"()V"
		);
	}
	jboolean View::requestRectangleOnScreen(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"requestRectangleOnScreen",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean View::requestRectangleOnScreen(android::graphics::Rect arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"requestRectangleOnScreen",
			"(Landroid/graphics/Rect;Z)Z",
			arg0.object(),
			arg1
		);
	}
	void View::requestUnbufferedDispatch(android::view::MotionEvent arg0)
	{
		callMethod<void>(
			"requestUnbufferedDispatch",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
	void View::requestUnbufferedDispatch(jint arg0)
	{
		callMethod<void>(
			"requestUnbufferedDispatch",
			"(I)V",
			arg0
		);
	}
	android::view::View View::requireViewById(jint arg0)
	{
		return callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void View::resetPivot()
	{
		callMethod<void>(
			"resetPivot",
			"()V"
		);
	}
	jboolean View::restoreDefaultFocus()
	{
		return callMethod<jboolean>(
			"restoreDefaultFocus",
			"()Z"
		);
	}
	void View::restoreHierarchyState(android::util::SparseArray arg0)
	{
		callMethod<void>(
			"restoreHierarchyState",
			"(Landroid/util/SparseArray;)V",
			arg0.object()
		);
	}
	void View::saveAttributeDataForStyleable(android::content::Context arg0, JIntArray arg1, JObject arg2, android::content::res::TypedArray arg3, jint arg4, jint arg5)
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
	void View::saveHierarchyState(android::util::SparseArray arg0)
	{
		callMethod<void>(
			"saveHierarchyState",
			"(Landroid/util/SparseArray;)V",
			arg0.object()
		);
	}
	void View::scheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1, jlong arg2)
	{
		callMethod<void>(
			"scheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void View::scrollBy(jint arg0, jint arg1)
	{
		callMethod<void>(
			"scrollBy",
			"(II)V",
			arg0,
			arg1
		);
	}
	void View::scrollTo(jint arg0, jint arg1)
	{
		callMethod<void>(
			"scrollTo",
			"(II)V",
			arg0,
			arg1
		);
	}
	void View::sendAccessibilityEvent(jint arg0)
	{
		callMethod<void>(
			"sendAccessibilityEvent",
			"(I)V",
			arg0
		);
	}
	void View::sendAccessibilityEventUnchecked(android::view::accessibility::AccessibilityEvent arg0)
	{
		callMethod<void>(
			"sendAccessibilityEventUnchecked",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object()
		);
	}
	void View::setAccessibilityDelegate(android::view::View_AccessibilityDelegate arg0)
	{
		callMethod<void>(
			"setAccessibilityDelegate",
			"(Landroid/view/View$AccessibilityDelegate;)V",
			arg0.object()
		);
	}
	void View::setAccessibilityHeading(jboolean arg0)
	{
		callMethod<void>(
			"setAccessibilityHeading",
			"(Z)V",
			arg0
		);
	}
	void View::setAccessibilityLiveRegion(jint arg0)
	{
		callMethod<void>(
			"setAccessibilityLiveRegion",
			"(I)V",
			arg0
		);
	}
	void View::setAccessibilityPaneTitle(JString arg0)
	{
		callMethod<void>(
			"setAccessibilityPaneTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void View::setAccessibilityTraversalAfter(jint arg0)
	{
		callMethod<void>(
			"setAccessibilityTraversalAfter",
			"(I)V",
			arg0
		);
	}
	void View::setAccessibilityTraversalBefore(jint arg0)
	{
		callMethod<void>(
			"setAccessibilityTraversalBefore",
			"(I)V",
			arg0
		);
	}
	void View::setActivated(jboolean arg0)
	{
		callMethod<void>(
			"setActivated",
			"(Z)V",
			arg0
		);
	}
	void View::setAllowClickWhenDisabled(jboolean arg0)
	{
		callMethod<void>(
			"setAllowClickWhenDisabled",
			"(Z)V",
			arg0
		);
	}
	void View::setAlpha(jfloat arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
	void View::setAnimation(android::view::animation::Animation arg0)
	{
		callMethod<void>(
			"setAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		);
	}
	void View::setAnimationMatrix(android::graphics::Matrix arg0)
	{
		callMethod<void>(
			"setAnimationMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	void View::setAutofillHints(JArray arg0)
	{
		callMethod<void>(
			"setAutofillHints",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void View::setAutofillId(android::view::autofill::AutofillId arg0)
	{
		callMethod<void>(
			"setAutofillId",
			"(Landroid/view/autofill/AutofillId;)V",
			arg0.object()
		);
	}
	void View::setBackground(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setBackground",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void View::setBackgroundColor(jint arg0)
	{
		callMethod<void>(
			"setBackgroundColor",
			"(I)V",
			arg0
		);
	}
	void View::setBackgroundDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void View::setBackgroundResource(jint arg0)
	{
		callMethod<void>(
			"setBackgroundResource",
			"(I)V",
			arg0
		);
	}
	void View::setBackgroundTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setBackgroundTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void View::setBackgroundTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setBackgroundTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void View::setBackgroundTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		callMethod<void>(
			"setBackgroundTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void View::setBottom(jint arg0)
	{
		callMethod<void>(
			"setBottom",
			"(I)V",
			arg0
		);
	}
	void View::setCameraDistance(jfloat arg0)
	{
		callMethod<void>(
			"setCameraDistance",
			"(F)V",
			arg0
		);
	}
	void View::setClickable(jboolean arg0)
	{
		callMethod<void>(
			"setClickable",
			"(Z)V",
			arg0
		);
	}
	void View::setClipBounds(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"setClipBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void View::setClipToOutline(jboolean arg0)
	{
		callMethod<void>(
			"setClipToOutline",
			"(Z)V",
			arg0
		);
	}
	void View::setContentCaptureSession(android::view::contentcapture::ContentCaptureSession arg0)
	{
		callMethod<void>(
			"setContentCaptureSession",
			"(Landroid/view/contentcapture/ContentCaptureSession;)V",
			arg0.object()
		);
	}
	void View::setContentDescription(JString arg0)
	{
		callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void View::setContextClickable(jboolean arg0)
	{
		callMethod<void>(
			"setContextClickable",
			"(Z)V",
			arg0
		);
	}
	void View::setDefaultFocusHighlightEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setDefaultFocusHighlightEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setDrawingCacheBackgroundColor(jint arg0)
	{
		callMethod<void>(
			"setDrawingCacheBackgroundColor",
			"(I)V",
			arg0
		);
	}
	void View::setDrawingCacheEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setDrawingCacheEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setDrawingCacheQuality(jint arg0)
	{
		callMethod<void>(
			"setDrawingCacheQuality",
			"(I)V",
			arg0
		);
	}
	void View::setDuplicateParentStateEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setDuplicateParentStateEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setElevation(jfloat arg0)
	{
		callMethod<void>(
			"setElevation",
			"(F)V",
			arg0
		);
	}
	void View::setEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setFadingEdgeLength(jint arg0)
	{
		callMethod<void>(
			"setFadingEdgeLength",
			"(I)V",
			arg0
		);
	}
	void View::setFilterTouchesWhenObscured(jboolean arg0)
	{
		callMethod<void>(
			"setFilterTouchesWhenObscured",
			"(Z)V",
			arg0
		);
	}
	void View::setFitsSystemWindows(jboolean arg0)
	{
		callMethod<void>(
			"setFitsSystemWindows",
			"(Z)V",
			arg0
		);
	}
	void View::setFocusable(jboolean arg0)
	{
		callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	void View::setFocusable(jint arg0)
	{
		callMethod<void>(
			"setFocusable",
			"(I)V",
			arg0
		);
	}
	void View::setFocusableInTouchMode(jboolean arg0)
	{
		callMethod<void>(
			"setFocusableInTouchMode",
			"(Z)V",
			arg0
		);
	}
	void View::setFocusedByDefault(jboolean arg0)
	{
		callMethod<void>(
			"setFocusedByDefault",
			"(Z)V",
			arg0
		);
	}
	void View::setForceDarkAllowed(jboolean arg0)
	{
		callMethod<void>(
			"setForceDarkAllowed",
			"(Z)V",
			arg0
		);
	}
	void View::setForeground(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setForeground",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void View::setForegroundGravity(jint arg0)
	{
		callMethod<void>(
			"setForegroundGravity",
			"(I)V",
			arg0
		);
	}
	void View::setForegroundTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setForegroundTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void View::setForegroundTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setForegroundTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void View::setForegroundTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		callMethod<void>(
			"setForegroundTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void View::setHapticFeedbackEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setHapticFeedbackEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setHasTransientState(jboolean arg0)
	{
		callMethod<void>(
			"setHasTransientState",
			"(Z)V",
			arg0
		);
	}
	void View::setHorizontalFadingEdgeEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setHorizontalFadingEdgeEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setHorizontalScrollBarEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setHorizontalScrollBarEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setHorizontalScrollbarThumbDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setHorizontalScrollbarThumbDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void View::setHorizontalScrollbarTrackDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setHorizontalScrollbarTrackDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void View::setHovered(jboolean arg0)
	{
		callMethod<void>(
			"setHovered",
			"(Z)V",
			arg0
		);
	}
	void View::setId(jint arg0)
	{
		callMethod<void>(
			"setId",
			"(I)V",
			arg0
		);
	}
	void View::setImportantForAccessibility(jint arg0)
	{
		callMethod<void>(
			"setImportantForAccessibility",
			"(I)V",
			arg0
		);
	}
	void View::setImportantForAutofill(jint arg0)
	{
		callMethod<void>(
			"setImportantForAutofill",
			"(I)V",
			arg0
		);
	}
	void View::setImportantForContentCapture(jint arg0)
	{
		callMethod<void>(
			"setImportantForContentCapture",
			"(I)V",
			arg0
		);
	}
	void View::setKeepScreenOn(jboolean arg0)
	{
		callMethod<void>(
			"setKeepScreenOn",
			"(Z)V",
			arg0
		);
	}
	void View::setKeyboardNavigationCluster(jboolean arg0)
	{
		callMethod<void>(
			"setKeyboardNavigationCluster",
			"(Z)V",
			arg0
		);
	}
	void View::setLabelFor(jint arg0)
	{
		callMethod<void>(
			"setLabelFor",
			"(I)V",
			arg0
		);
	}
	void View::setLayerPaint(android::graphics::Paint arg0)
	{
		callMethod<void>(
			"setLayerPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.object()
		);
	}
	void View::setLayerType(jint arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"setLayerType",
			"(ILandroid/graphics/Paint;)V",
			arg0,
			arg1.object()
		);
	}
	void View::setLayoutDirection(jint arg0)
	{
		callMethod<void>(
			"setLayoutDirection",
			"(I)V",
			arg0
		);
	}
	void View::setLayoutParams(android::view::ViewGroup_LayoutParams arg0)
	{
		callMethod<void>(
			"setLayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		);
	}
	void View::setLeft(jint arg0)
	{
		callMethod<void>(
			"setLeft",
			"(I)V",
			arg0
		);
	}
	void View::setLeftTopRightBottom(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void View::setLongClickable(jboolean arg0)
	{
		callMethod<void>(
			"setLongClickable",
			"(Z)V",
			arg0
		);
	}
	void View::setMinimumHeight(jint arg0)
	{
		callMethod<void>(
			"setMinimumHeight",
			"(I)V",
			arg0
		);
	}
	void View::setMinimumWidth(jint arg0)
	{
		callMethod<void>(
			"setMinimumWidth",
			"(I)V",
			arg0
		);
	}
	void View::setNestedScrollingEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setNestedScrollingEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setNextClusterForwardId(jint arg0)
	{
		callMethod<void>(
			"setNextClusterForwardId",
			"(I)V",
			arg0
		);
	}
	void View::setNextFocusDownId(jint arg0)
	{
		callMethod<void>(
			"setNextFocusDownId",
			"(I)V",
			arg0
		);
	}
	void View::setNextFocusForwardId(jint arg0)
	{
		callMethod<void>(
			"setNextFocusForwardId",
			"(I)V",
			arg0
		);
	}
	void View::setNextFocusLeftId(jint arg0)
	{
		callMethod<void>(
			"setNextFocusLeftId",
			"(I)V",
			arg0
		);
	}
	void View::setNextFocusRightId(jint arg0)
	{
		callMethod<void>(
			"setNextFocusRightId",
			"(I)V",
			arg0
		);
	}
	void View::setNextFocusUpId(jint arg0)
	{
		callMethod<void>(
			"setNextFocusUpId",
			"(I)V",
			arg0
		);
	}
	void View::setOnApplyWindowInsetsListener(JObject arg0)
	{
		callMethod<void>(
			"setOnApplyWindowInsetsListener",
			"(Landroid/view/View$OnApplyWindowInsetsListener;)V",
			arg0.object()
		);
	}
	void View::setOnCapturedPointerListener(JObject arg0)
	{
		callMethod<void>(
			"setOnCapturedPointerListener",
			"(Landroid/view/View$OnCapturedPointerListener;)V",
			arg0.object()
		);
	}
	void View::setOnClickListener(JObject arg0)
	{
		callMethod<void>(
			"setOnClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	void View::setOnContextClickListener(JObject arg0)
	{
		callMethod<void>(
			"setOnContextClickListener",
			"(Landroid/view/View$OnContextClickListener;)V",
			arg0.object()
		);
	}
	void View::setOnCreateContextMenuListener(JObject arg0)
	{
		callMethod<void>(
			"setOnCreateContextMenuListener",
			"(Landroid/view/View$OnCreateContextMenuListener;)V",
			arg0.object()
		);
	}
	void View::setOnDragListener(JObject arg0)
	{
		callMethod<void>(
			"setOnDragListener",
			"(Landroid/view/View$OnDragListener;)V",
			arg0.object()
		);
	}
	void View::setOnFocusChangeListener(JObject arg0)
	{
		callMethod<void>(
			"setOnFocusChangeListener",
			"(Landroid/view/View$OnFocusChangeListener;)V",
			arg0.object()
		);
	}
	void View::setOnGenericMotionListener(JObject arg0)
	{
		callMethod<void>(
			"setOnGenericMotionListener",
			"(Landroid/view/View$OnGenericMotionListener;)V",
			arg0.object()
		);
	}
	void View::setOnHoverListener(JObject arg0)
	{
		callMethod<void>(
			"setOnHoverListener",
			"(Landroid/view/View$OnHoverListener;)V",
			arg0.object()
		);
	}
	void View::setOnKeyListener(JObject arg0)
	{
		callMethod<void>(
			"setOnKeyListener",
			"(Landroid/view/View$OnKeyListener;)V",
			arg0.object()
		);
	}
	void View::setOnLongClickListener(JObject arg0)
	{
		callMethod<void>(
			"setOnLongClickListener",
			"(Landroid/view/View$OnLongClickListener;)V",
			arg0.object()
		);
	}
	void View::setOnReceiveContentListener(JArray arg0, JObject arg1)
	{
		callMethod<void>(
			"setOnReceiveContentListener",
			"([Ljava/lang/String;Landroid/view/OnReceiveContentListener;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	void View::setOnScrollChangeListener(JObject arg0)
	{
		callMethod<void>(
			"setOnScrollChangeListener",
			"(Landroid/view/View$OnScrollChangeListener;)V",
			arg0.object()
		);
	}
	void View::setOnSystemUiVisibilityChangeListener(JObject arg0)
	{
		callMethod<void>(
			"setOnSystemUiVisibilityChangeListener",
			"(Landroid/view/View$OnSystemUiVisibilityChangeListener;)V",
			arg0.object()
		);
	}
	void View::setOnTouchListener(JObject arg0)
	{
		callMethod<void>(
			"setOnTouchListener",
			"(Landroid/view/View$OnTouchListener;)V",
			arg0.object()
		);
	}
	void View::setOutlineAmbientShadowColor(jint arg0)
	{
		callMethod<void>(
			"setOutlineAmbientShadowColor",
			"(I)V",
			arg0
		);
	}
	void View::setOutlineProvider(android::view::ViewOutlineProvider arg0)
	{
		callMethod<void>(
			"setOutlineProvider",
			"(Landroid/view/ViewOutlineProvider;)V",
			arg0.object()
		);
	}
	void View::setOutlineSpotShadowColor(jint arg0)
	{
		callMethod<void>(
			"setOutlineSpotShadowColor",
			"(I)V",
			arg0
		);
	}
	void View::setOverScrollMode(jint arg0)
	{
		callMethod<void>(
			"setOverScrollMode",
			"(I)V",
			arg0
		);
	}
	void View::setPadding(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void View::setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void View::setPivotX(jfloat arg0)
	{
		callMethod<void>(
			"setPivotX",
			"(F)V",
			arg0
		);
	}
	void View::setPivotY(jfloat arg0)
	{
		callMethod<void>(
			"setPivotY",
			"(F)V",
			arg0
		);
	}
	void View::setPointerIcon(android::view::PointerIcon arg0)
	{
		callMethod<void>(
			"setPointerIcon",
			"(Landroid/view/PointerIcon;)V",
			arg0.object()
		);
	}
	void View::setPressed(jboolean arg0)
	{
		callMethod<void>(
			"setPressed",
			"(Z)V",
			arg0
		);
	}
	void View::setRenderEffect(android::graphics::RenderEffect arg0)
	{
		callMethod<void>(
			"setRenderEffect",
			"(Landroid/graphics/RenderEffect;)V",
			arg0.object()
		);
	}
	void View::setRevealOnFocusHint(jboolean arg0)
	{
		callMethod<void>(
			"setRevealOnFocusHint",
			"(Z)V",
			arg0
		);
	}
	void View::setRight(jint arg0)
	{
		callMethod<void>(
			"setRight",
			"(I)V",
			arg0
		);
	}
	void View::setRotation(jfloat arg0)
	{
		callMethod<void>(
			"setRotation",
			"(F)V",
			arg0
		);
	}
	void View::setRotationX(jfloat arg0)
	{
		callMethod<void>(
			"setRotationX",
			"(F)V",
			arg0
		);
	}
	void View::setRotationY(jfloat arg0)
	{
		callMethod<void>(
			"setRotationY",
			"(F)V",
			arg0
		);
	}
	void View::setSaveEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setSaveEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setSaveFromParentEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setSaveFromParentEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setScaleX(jfloat arg0)
	{
		callMethod<void>(
			"setScaleX",
			"(F)V",
			arg0
		);
	}
	void View::setScaleY(jfloat arg0)
	{
		callMethod<void>(
			"setScaleY",
			"(F)V",
			arg0
		);
	}
	void View::setScreenReaderFocusable(jboolean arg0)
	{
		callMethod<void>(
			"setScreenReaderFocusable",
			"(Z)V",
			arg0
		);
	}
	void View::setScrollBarDefaultDelayBeforeFade(jint arg0)
	{
		callMethod<void>(
			"setScrollBarDefaultDelayBeforeFade",
			"(I)V",
			arg0
		);
	}
	void View::setScrollBarFadeDuration(jint arg0)
	{
		callMethod<void>(
			"setScrollBarFadeDuration",
			"(I)V",
			arg0
		);
	}
	void View::setScrollBarSize(jint arg0)
	{
		callMethod<void>(
			"setScrollBarSize",
			"(I)V",
			arg0
		);
	}
	void View::setScrollBarStyle(jint arg0)
	{
		callMethod<void>(
			"setScrollBarStyle",
			"(I)V",
			arg0
		);
	}
	void View::setScrollCaptureCallback(JObject arg0)
	{
		callMethod<void>(
			"setScrollCaptureCallback",
			"(Landroid/view/ScrollCaptureCallback;)V",
			arg0.object()
		);
	}
	void View::setScrollCaptureHint(jint arg0)
	{
		callMethod<void>(
			"setScrollCaptureHint",
			"(I)V",
			arg0
		);
	}
	void View::setScrollContainer(jboolean arg0)
	{
		callMethod<void>(
			"setScrollContainer",
			"(Z)V",
			arg0
		);
	}
	void View::setScrollIndicators(jint arg0)
	{
		callMethod<void>(
			"setScrollIndicators",
			"(I)V",
			arg0
		);
	}
	void View::setScrollIndicators(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setScrollIndicators",
			"(II)V",
			arg0,
			arg1
		);
	}
	void View::setScrollX(jint arg0)
	{
		callMethod<void>(
			"setScrollX",
			"(I)V",
			arg0
		);
	}
	void View::setScrollY(jint arg0)
	{
		callMethod<void>(
			"setScrollY",
			"(I)V",
			arg0
		);
	}
	void View::setScrollbarFadingEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setScrollbarFadingEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setSelected(jboolean arg0)
	{
		callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	void View::setSoundEffectsEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setSoundEffectsEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setStateDescription(JString arg0)
	{
		callMethod<void>(
			"setStateDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void View::setStateListAnimator(android::animation::StateListAnimator arg0)
	{
		callMethod<void>(
			"setStateListAnimator",
			"(Landroid/animation/StateListAnimator;)V",
			arg0.object()
		);
	}
	void View::setSystemGestureExclusionRects(JObject arg0)
	{
		callMethod<void>(
			"setSystemGestureExclusionRects",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void View::setSystemUiVisibility(jint arg0)
	{
		callMethod<void>(
			"setSystemUiVisibility",
			"(I)V",
			arg0
		);
	}
	void View::setTag(JObject arg0)
	{
		callMethod<void>(
			"setTag",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void View::setTag(jint arg0, JObject arg1)
	{
		callMethod<void>(
			"setTag",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	void View::setTextAlignment(jint arg0)
	{
		callMethod<void>(
			"setTextAlignment",
			"(I)V",
			arg0
		);
	}
	void View::setTextDirection(jint arg0)
	{
		callMethod<void>(
			"setTextDirection",
			"(I)V",
			arg0
		);
	}
	void View::setTooltipText(JString arg0)
	{
		callMethod<void>(
			"setTooltipText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void View::setTop(jint arg0)
	{
		callMethod<void>(
			"setTop",
			"(I)V",
			arg0
		);
	}
	void View::setTouchDelegate(android::view::TouchDelegate arg0)
	{
		callMethod<void>(
			"setTouchDelegate",
			"(Landroid/view/TouchDelegate;)V",
			arg0.object()
		);
	}
	void View::setTransitionAlpha(jfloat arg0)
	{
		callMethod<void>(
			"setTransitionAlpha",
			"(F)V",
			arg0
		);
	}
	void View::setTransitionName(JString arg0)
	{
		callMethod<void>(
			"setTransitionName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void View::setTransitionVisibility(jint arg0)
	{
		callMethod<void>(
			"setTransitionVisibility",
			"(I)V",
			arg0
		);
	}
	void View::setTranslationX(jfloat arg0)
	{
		callMethod<void>(
			"setTranslationX",
			"(F)V",
			arg0
		);
	}
	void View::setTranslationY(jfloat arg0)
	{
		callMethod<void>(
			"setTranslationY",
			"(F)V",
			arg0
		);
	}
	void View::setTranslationZ(jfloat arg0)
	{
		callMethod<void>(
			"setTranslationZ",
			"(F)V",
			arg0
		);
	}
	void View::setVerticalFadingEdgeEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setVerticalFadingEdgeEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setVerticalScrollBarEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setVerticalScrollBarEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setVerticalScrollbarPosition(jint arg0)
	{
		callMethod<void>(
			"setVerticalScrollbarPosition",
			"(I)V",
			arg0
		);
	}
	void View::setVerticalScrollbarThumbDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setVerticalScrollbarThumbDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void View::setVerticalScrollbarTrackDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setVerticalScrollbarTrackDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void View::setViewTranslationCallback(JObject arg0)
	{
		callMethod<void>(
			"setViewTranslationCallback",
			"(Landroid/view/translation/ViewTranslationCallback;)V",
			arg0.object()
		);
	}
	void View::setVisibility(jint arg0)
	{
		callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
	void View::setWillNotCacheDrawing(jboolean arg0)
	{
		callMethod<void>(
			"setWillNotCacheDrawing",
			"(Z)V",
			arg0
		);
	}
	void View::setWillNotDraw(jboolean arg0)
	{
		callMethod<void>(
			"setWillNotDraw",
			"(Z)V",
			arg0
		);
	}
	void View::setWindowInsetsAnimationCallback(android::view::WindowInsetsAnimation_Callback arg0)
	{
		callMethod<void>(
			"setWindowInsetsAnimationCallback",
			"(Landroid/view/WindowInsetsAnimation$Callback;)V",
			arg0.object()
		);
	}
	void View::setX(jfloat arg0)
	{
		callMethod<void>(
			"setX",
			"(F)V",
			arg0
		);
	}
	void View::setY(jfloat arg0)
	{
		callMethod<void>(
			"setY",
			"(F)V",
			arg0
		);
	}
	void View::setZ(jfloat arg0)
	{
		callMethod<void>(
			"setZ",
			"(F)V",
			arg0
		);
	}
	jboolean View::showContextMenu()
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"()Z"
		);
	}
	jboolean View::showContextMenu(jfloat arg0, jfloat arg1)
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	android::view::ActionMode View::startActionMode(JObject arg0)
	{
		return callObjectMethod(
			"startActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.object()
		);
	}
	android::view::ActionMode View::startActionMode(JObject arg0, jint arg1)
	{
		return callObjectMethod(
			"startActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.object(),
			arg1
		);
	}
	void View::startAnimation(android::view::animation::Animation arg0)
	{
		callMethod<void>(
			"startAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		);
	}
	jboolean View::startDrag(android::content::ClipData arg0, android::view::View_DragShadowBuilder arg1, JObject arg2, jint arg3)
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
	jboolean View::startDragAndDrop(android::content::ClipData arg0, android::view::View_DragShadowBuilder arg1, JObject arg2, jint arg3)
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
	jboolean View::startNestedScroll(jint arg0)
	{
		return callMethod<jboolean>(
			"startNestedScroll",
			"(I)Z",
			arg0
		);
	}
	void View::stopNestedScroll()
	{
		callMethod<void>(
			"stopNestedScroll",
			"()V"
		);
	}
	JString View::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void View::transformMatrixToGlobal(android::graphics::Matrix arg0)
	{
		callMethod<void>(
			"transformMatrixToGlobal",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	void View::transformMatrixToLocal(android::graphics::Matrix arg0)
	{
		callMethod<void>(
			"transformMatrixToLocal",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	void View::unscheduleDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void View::unscheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1)
	{
		callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void View::updateDragShadow(android::view::View_DragShadowBuilder arg0)
	{
		callMethod<void>(
			"updateDragShadow",
			"(Landroid/view/View$DragShadowBuilder;)V",
			arg0.object()
		);
	}
	jboolean View::willNotCacheDrawing()
	{
		return callMethod<jboolean>(
			"willNotCacheDrawing",
			"()Z"
		);
	}
	jboolean View::willNotDraw()
	{
		return callMethod<jboolean>(
			"willNotDraw",
			"()Z"
		);
	}
} // namespace android::view

