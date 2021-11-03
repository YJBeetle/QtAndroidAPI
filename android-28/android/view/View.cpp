#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../animation/StateListAnimator.hpp"
#include "../content/ClipData.hpp"
#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../content/res/Configuration.hpp"
#include "../content/res/Resources.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Matrix.hpp"
#include "../graphics/Paint.hpp"
#include "../graphics/Point.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../util/Property.hpp"
#include "../util/SparseArray.hpp"
#include "./ActionMode.hpp"
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
#include "./accessibility/AccessibilityEvent.hpp"
#include "./accessibility/AccessibilityNodeInfo.hpp"
#include "./accessibility/AccessibilityNodeProvider.hpp"
#include "./animation/Animation.hpp"
#include "./autofill/AutofillId.hpp"
#include "./autofill/AutofillValue.hpp"
#include "./inputmethod/EditorInfo.hpp"
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
	
	// QJniObject forward
	View::View(QJniObject obj) : JObject(obj) {}
	
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
	void View::addChildrenForAccessibility(java::util::ArrayList arg0) const
	{
		callMethod<void>(
			"addChildrenForAccessibility",
			"(Ljava/util/ArrayList;)V",
			arg0.object()
		);
	}
	void View::addExtraDataToAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0, JString arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void View::addFocusables(java::util::ArrayList arg0, jint arg1) const
	{
		callMethod<void>(
			"addFocusables",
			"(Ljava/util/ArrayList;I)V",
			arg0.object(),
			arg1
		);
	}
	void View::addFocusables(java::util::ArrayList arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"addFocusables",
			"(Ljava/util/ArrayList;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void View::addKeyboardNavigationClusters(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"addKeyboardNavigationClusters",
			"(Ljava/util/Collection;I)V",
			arg0.object(),
			arg1
		);
	}
	void View::addOnAttachStateChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnAttachStateChangeListener",
			"(Landroid/view/View$OnAttachStateChangeListener;)V",
			arg0.object()
		);
	}
	void View::addOnLayoutChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnLayoutChangeListener",
			"(Landroid/view/View$OnLayoutChangeListener;)V",
			arg0.object()
		);
	}
	void View::addOnUnhandledKeyEventListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnUnhandledKeyEventListener",
			"(Landroid/view/View$OnUnhandledKeyEventListener;)V",
			arg0.object()
		);
	}
	void View::addTouchables(java::util::ArrayList arg0) const
	{
		callMethod<void>(
			"addTouchables",
			"(Ljava/util/ArrayList;)V",
			arg0.object()
		);
	}
	android::view::ViewPropertyAnimator View::animate() const
	{
		return callObjectMethod(
			"animate",
			"()Landroid/view/ViewPropertyAnimator;"
		);
	}
	void View::announceForAccessibility(JString arg0) const
	{
		callMethod<void>(
			"announceForAccessibility",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void View::autofill(android::util::SparseArray arg0) const
	{
		callMethod<void>(
			"autofill",
			"(Landroid/util/SparseArray;)V",
			arg0.object()
		);
	}
	void View::autofill(android::view::autofill::AutofillValue arg0) const
	{
		callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	void View::bringToFront() const
	{
		callMethod<void>(
			"bringToFront",
			"()V"
		);
	}
	void View::buildDrawingCache() const
	{
		callMethod<void>(
			"buildDrawingCache",
			"()V"
		);
	}
	void View::buildDrawingCache(jboolean arg0) const
	{
		callMethod<void>(
			"buildDrawingCache",
			"(Z)V",
			arg0
		);
	}
	void View::buildLayer() const
	{
		callMethod<void>(
			"buildLayer",
			"()V"
		);
	}
	jboolean View::callOnClick() const
	{
		return callMethod<jboolean>(
			"callOnClick",
			"()Z"
		);
	}
	jboolean View::canResolveLayoutDirection() const
	{
		return callMethod<jboolean>(
			"canResolveLayoutDirection",
			"()Z"
		);
	}
	jboolean View::canResolveTextAlignment() const
	{
		return callMethod<jboolean>(
			"canResolveTextAlignment",
			"()Z"
		);
	}
	jboolean View::canResolveTextDirection() const
	{
		return callMethod<jboolean>(
			"canResolveTextDirection",
			"()Z"
		);
	}
	jboolean View::canScrollHorizontally(jint arg0) const
	{
		return callMethod<jboolean>(
			"canScrollHorizontally",
			"(I)Z",
			arg0
		);
	}
	jboolean View::canScrollVertically(jint arg0) const
	{
		return callMethod<jboolean>(
			"canScrollVertically",
			"(I)Z",
			arg0
		);
	}
	void View::cancelDragAndDrop() const
	{
		callMethod<void>(
			"cancelDragAndDrop",
			"()V"
		);
	}
	void View::cancelLongPress() const
	{
		callMethod<void>(
			"cancelLongPress",
			"()V"
		);
	}
	void View::cancelPendingInputEvents() const
	{
		callMethod<void>(
			"cancelPendingInputEvents",
			"()V"
		);
	}
	jboolean View::checkInputConnectionProxy(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"checkInputConnectionProxy",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	void View::clearAnimation() const
	{
		callMethod<void>(
			"clearAnimation",
			"()V"
		);
	}
	void View::clearFocus() const
	{
		callMethod<void>(
			"clearFocus",
			"()V"
		);
	}
	void View::computeScroll() const
	{
		callMethod<void>(
			"computeScroll",
			"()V"
		);
	}
	android::view::WindowInsets View::computeSystemWindowInsets(android::view::WindowInsets arg0, android::graphics::Rect arg1) const
	{
		return callObjectMethod(
			"computeSystemWindowInsets",
			"(Landroid/view/WindowInsets;Landroid/graphics/Rect;)Landroid/view/WindowInsets;",
			arg0.object(),
			arg1.object()
		);
	}
	android::view::accessibility::AccessibilityNodeInfo View::createAccessibilityNodeInfo() const
	{
		return callObjectMethod(
			"createAccessibilityNodeInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	void View::createContextMenu(JObject arg0) const
	{
		callMethod<void>(
			"createContextMenu",
			"(Landroid/view/ContextMenu;)V",
			arg0.object()
		);
	}
	void View::destroyDrawingCache() const
	{
		callMethod<void>(
			"destroyDrawingCache",
			"()V"
		);
	}
	android::view::WindowInsets View::dispatchApplyWindowInsets(android::view::WindowInsets arg0) const
	{
		return callObjectMethod(
			"dispatchApplyWindowInsets",
			"(Landroid/view/WindowInsets;)Landroid/view/WindowInsets;",
			arg0.object()
		);
	}
	jboolean View::dispatchCapturedPointerEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchCapturedPointerEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void View::dispatchConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"dispatchConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	void View::dispatchDisplayHint(jint arg0) const
	{
		callMethod<void>(
			"dispatchDisplayHint",
			"(I)V",
			arg0
		);
	}
	jboolean View::dispatchDragEvent(android::view::DragEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.object()
		);
	}
	void View::dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"dispatchDrawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void View::dispatchFinishTemporaryDetach() const
	{
		callMethod<void>(
			"dispatchFinishTemporaryDetach",
			"()V"
		);
	}
	jboolean View::dispatchGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean View::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean View::dispatchKeyEventPreIme(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEventPreIme",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean View::dispatchKeyShortcutEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean View::dispatchNestedFling(jfloat arg0, jfloat arg1, jboolean arg2) const
	{
		return callMethod<jboolean>(
			"dispatchNestedFling",
			"(FFZ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean View::dispatchNestedPreFling(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"dispatchNestedPreFling",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean View::dispatchNestedPrePerformAccessibilityAction(jint arg0, android::os::Bundle arg1) const
	{
		return callMethod<jboolean>(
			"dispatchNestedPrePerformAccessibilityAction",
			"(ILandroid/os/Bundle;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean View::dispatchNestedPreScroll(jint arg0, jint arg1, JIntArray arg2, JIntArray arg3) const
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
	jboolean View::dispatchNestedScroll(jint arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4) const
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
	void View::dispatchPointerCaptureChanged(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchPointerCaptureChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean View::dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.object()
		);
	}
	void View::dispatchProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"dispatchProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	void View::dispatchProvideStructure(android::view::ViewStructure arg0) const
	{
		callMethod<void>(
			"dispatchProvideStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	void View::dispatchStartTemporaryDetach() const
	{
		callMethod<void>(
			"dispatchStartTemporaryDetach",
			"()V"
		);
	}
	void View::dispatchSystemUiVisibilityChanged(jint arg0) const
	{
		callMethod<void>(
			"dispatchSystemUiVisibilityChanged",
			"(I)V",
			arg0
		);
	}
	jboolean View::dispatchTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean View::dispatchTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean View::dispatchUnhandledMove(android::view::View arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"dispatchUnhandledMove",
			"(Landroid/view/View;I)Z",
			arg0.object(),
			arg1
		);
	}
	void View::dispatchWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void View::dispatchWindowSystemUiVisiblityChanged(jint arg0) const
	{
		callMethod<void>(
			"dispatchWindowSystemUiVisiblityChanged",
			"(I)V",
			arg0
		);
	}
	void View::dispatchWindowVisibilityChanged(jint arg0) const
	{
		callMethod<void>(
			"dispatchWindowVisibilityChanged",
			"(I)V",
			arg0
		);
	}
	void View::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	void View::drawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	android::view::View View::findFocus() const
	{
		return callObjectMethod(
			"findFocus",
			"()Landroid/view/View;"
		);
	}
	android::view::View View::findViewById(jint arg0) const
	{
		return callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	android::view::View View::findViewWithTag(JObject arg0) const
	{
		return callObjectMethod(
			"findViewWithTag",
			"(Ljava/lang/Object;)Landroid/view/View;",
			arg0.object<jobject>()
		);
	}
	void View::findViewsWithText(java::util::ArrayList arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"findViewsWithText",
			"(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	android::view::View View::focusSearch(jint arg0) const
	{
		return callObjectMethod(
			"focusSearch",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void View::forceHasOverlappingRendering(jboolean arg0) const
	{
		callMethod<void>(
			"forceHasOverlappingRendering",
			"(Z)V",
			arg0
		);
	}
	void View::forceLayout() const
	{
		callMethod<void>(
			"forceLayout",
			"()V"
		);
	}
	JString View::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint View::getAccessibilityLiveRegion() const
	{
		return callMethod<jint>(
			"getAccessibilityLiveRegion",
			"()I"
		);
	}
	android::view::accessibility::AccessibilityNodeProvider View::getAccessibilityNodeProvider() const
	{
		return callObjectMethod(
			"getAccessibilityNodeProvider",
			"()Landroid/view/accessibility/AccessibilityNodeProvider;"
		);
	}
	JString View::getAccessibilityPaneTitle() const
	{
		return callObjectMethod(
			"getAccessibilityPaneTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint View::getAccessibilityTraversalAfter() const
	{
		return callMethod<jint>(
			"getAccessibilityTraversalAfter",
			"()I"
		);
	}
	jint View::getAccessibilityTraversalBefore() const
	{
		return callMethod<jint>(
			"getAccessibilityTraversalBefore",
			"()I"
		);
	}
	jfloat View::getAlpha() const
	{
		return callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	android::view::animation::Animation View::getAnimation() const
	{
		return callObjectMethod(
			"getAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
	JObject View::getApplicationWindowToken() const
	{
		return callObjectMethod(
			"getApplicationWindowToken",
			"()Landroid/os/IBinder;"
		);
	}
	JArray View::getAutofillHints() const
	{
		return callObjectMethod(
			"getAutofillHints",
			"()[Ljava/lang/String;"
		);
	}
	android::view::autofill::AutofillId View::getAutofillId() const
	{
		return callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	jint View::getAutofillType() const
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	android::view::autofill::AutofillValue View::getAutofillValue() const
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	android::graphics::drawable::Drawable View::getBackground() const
	{
		return callObjectMethod(
			"getBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::content::res::ColorStateList View::getBackgroundTintList() const
	{
		return callObjectMethod(
			"getBackgroundTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode View::getBackgroundTintMode() const
	{
		return callObjectMethod(
			"getBackgroundTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	jint View::getBaseline() const
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	jint View::getBottom() const
	{
		return callMethod<jint>(
			"getBottom",
			"()I"
		);
	}
	jfloat View::getCameraDistance() const
	{
		return callMethod<jfloat>(
			"getCameraDistance",
			"()F"
		);
	}
	android::graphics::Rect View::getClipBounds() const
	{
		return callObjectMethod(
			"getClipBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	jboolean View::getClipBounds(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getClipBounds",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean View::getClipToOutline() const
	{
		return callMethod<jboolean>(
			"getClipToOutline",
			"()Z"
		);
	}
	JString View::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::content::Context View::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jboolean View::getDefaultFocusHighlightEnabled() const
	{
		return callMethod<jboolean>(
			"getDefaultFocusHighlightEnabled",
			"()Z"
		);
	}
	android::view::Display View::getDisplay() const
	{
		return callObjectMethod(
			"getDisplay",
			"()Landroid/view/Display;"
		);
	}
	JIntArray View::getDrawableState() const
	{
		return callObjectMethod(
			"getDrawableState",
			"()[I"
		);
	}
	android::graphics::Bitmap View::getDrawingCache() const
	{
		return callObjectMethod(
			"getDrawingCache",
			"()Landroid/graphics/Bitmap;"
		);
	}
	android::graphics::Bitmap View::getDrawingCache(jboolean arg0) const
	{
		return callObjectMethod(
			"getDrawingCache",
			"(Z)Landroid/graphics/Bitmap;",
			arg0
		);
	}
	jint View::getDrawingCacheBackgroundColor() const
	{
		return callMethod<jint>(
			"getDrawingCacheBackgroundColor",
			"()I"
		);
	}
	jint View::getDrawingCacheQuality() const
	{
		return callMethod<jint>(
			"getDrawingCacheQuality",
			"()I"
		);
	}
	void View::getDrawingRect(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getDrawingRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jlong View::getDrawingTime() const
	{
		return callMethod<jlong>(
			"getDrawingTime",
			"()J"
		);
	}
	jfloat View::getElevation() const
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	jboolean View::getFilterTouchesWhenObscured() const
	{
		return callMethod<jboolean>(
			"getFilterTouchesWhenObscured",
			"()Z"
		);
	}
	jboolean View::getFitsSystemWindows() const
	{
		return callMethod<jboolean>(
			"getFitsSystemWindows",
			"()Z"
		);
	}
	jint View::getFocusable() const
	{
		return callMethod<jint>(
			"getFocusable",
			"()I"
		);
	}
	java::util::ArrayList View::getFocusables(jint arg0) const
	{
		return callObjectMethod(
			"getFocusables",
			"(I)Ljava/util/ArrayList;",
			arg0
		);
	}
	void View::getFocusedRect(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getFocusedRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable View::getForeground() const
	{
		return callObjectMethod(
			"getForeground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint View::getForegroundGravity() const
	{
		return callMethod<jint>(
			"getForegroundGravity",
			"()I"
		);
	}
	android::content::res::ColorStateList View::getForegroundTintList() const
	{
		return callObjectMethod(
			"getForegroundTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode View::getForegroundTintMode() const
	{
		return callObjectMethod(
			"getForegroundTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	jboolean View::getGlobalVisibleRect(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getGlobalVisibleRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean View::getGlobalVisibleRect(android::graphics::Rect arg0, android::graphics::Point arg1) const
	{
		return callMethod<jboolean>(
			"getGlobalVisibleRect",
			"(Landroid/graphics/Rect;Landroid/graphics/Point;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	android::os::Handler View::getHandler() const
	{
		return callObjectMethod(
			"getHandler",
			"()Landroid/os/Handler;"
		);
	}
	jboolean View::getHasOverlappingRendering() const
	{
		return callMethod<jboolean>(
			"getHasOverlappingRendering",
			"()Z"
		);
	}
	jint View::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	void View::getHitRect(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getHitRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jint View::getHorizontalFadingEdgeLength() const
	{
		return callMethod<jint>(
			"getHorizontalFadingEdgeLength",
			"()I"
		);
	}
	jint View::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint View::getImportantForAccessibility() const
	{
		return callMethod<jint>(
			"getImportantForAccessibility",
			"()I"
		);
	}
	jint View::getImportantForAutofill() const
	{
		return callMethod<jint>(
			"getImportantForAutofill",
			"()I"
		);
	}
	jboolean View::getKeepScreenOn() const
	{
		return callMethod<jboolean>(
			"getKeepScreenOn",
			"()Z"
		);
	}
	android::view::KeyEvent_DispatcherState View::getKeyDispatcherState() const
	{
		return callObjectMethod(
			"getKeyDispatcherState",
			"()Landroid/view/KeyEvent$DispatcherState;"
		);
	}
	jint View::getLabelFor() const
	{
		return callMethod<jint>(
			"getLabelFor",
			"()I"
		);
	}
	jint View::getLayerType() const
	{
		return callMethod<jint>(
			"getLayerType",
			"()I"
		);
	}
	jint View::getLayoutDirection() const
	{
		return callMethod<jint>(
			"getLayoutDirection",
			"()I"
		);
	}
	android::view::ViewGroup_LayoutParams View::getLayoutParams() const
	{
		return callObjectMethod(
			"getLayoutParams",
			"()Landroid/view/ViewGroup$LayoutParams;"
		);
	}
	jint View::getLeft() const
	{
		return callMethod<jint>(
			"getLeft",
			"()I"
		);
	}
	jboolean View::getLocalVisibleRect(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getLocalVisibleRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	void View::getLocationInWindow(JIntArray arg0) const
	{
		callMethod<void>(
			"getLocationInWindow",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	void View::getLocationOnScreen(JIntArray arg0) const
	{
		callMethod<void>(
			"getLocationOnScreen",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	android::graphics::Matrix View::getMatrix() const
	{
		return callObjectMethod(
			"getMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	jint View::getMeasuredHeight() const
	{
		return callMethod<jint>(
			"getMeasuredHeight",
			"()I"
		);
	}
	jint View::getMeasuredHeightAndState() const
	{
		return callMethod<jint>(
			"getMeasuredHeightAndState",
			"()I"
		);
	}
	jint View::getMeasuredState() const
	{
		return callMethod<jint>(
			"getMeasuredState",
			"()I"
		);
	}
	jint View::getMeasuredWidth() const
	{
		return callMethod<jint>(
			"getMeasuredWidth",
			"()I"
		);
	}
	jint View::getMeasuredWidthAndState() const
	{
		return callMethod<jint>(
			"getMeasuredWidthAndState",
			"()I"
		);
	}
	jint View::getMinimumHeight() const
	{
		return callMethod<jint>(
			"getMinimumHeight",
			"()I"
		);
	}
	jint View::getMinimumWidth() const
	{
		return callMethod<jint>(
			"getMinimumWidth",
			"()I"
		);
	}
	jint View::getNextClusterForwardId() const
	{
		return callMethod<jint>(
			"getNextClusterForwardId",
			"()I"
		);
	}
	jint View::getNextFocusDownId() const
	{
		return callMethod<jint>(
			"getNextFocusDownId",
			"()I"
		);
	}
	jint View::getNextFocusForwardId() const
	{
		return callMethod<jint>(
			"getNextFocusForwardId",
			"()I"
		);
	}
	jint View::getNextFocusLeftId() const
	{
		return callMethod<jint>(
			"getNextFocusLeftId",
			"()I"
		);
	}
	jint View::getNextFocusRightId() const
	{
		return callMethod<jint>(
			"getNextFocusRightId",
			"()I"
		);
	}
	jint View::getNextFocusUpId() const
	{
		return callMethod<jint>(
			"getNextFocusUpId",
			"()I"
		);
	}
	JObject View::getOnFocusChangeListener() const
	{
		return callObjectMethod(
			"getOnFocusChangeListener",
			"()Landroid/view/View$OnFocusChangeListener;"
		);
	}
	jint View::getOutlineAmbientShadowColor() const
	{
		return callMethod<jint>(
			"getOutlineAmbientShadowColor",
			"()I"
		);
	}
	android::view::ViewOutlineProvider View::getOutlineProvider() const
	{
		return callObjectMethod(
			"getOutlineProvider",
			"()Landroid/view/ViewOutlineProvider;"
		);
	}
	jint View::getOutlineSpotShadowColor() const
	{
		return callMethod<jint>(
			"getOutlineSpotShadowColor",
			"()I"
		);
	}
	jint View::getOverScrollMode() const
	{
		return callMethod<jint>(
			"getOverScrollMode",
			"()I"
		);
	}
	android::view::ViewOverlay View::getOverlay() const
	{
		return callObjectMethod(
			"getOverlay",
			"()Landroid/view/ViewOverlay;"
		);
	}
	jint View::getPaddingBottom() const
	{
		return callMethod<jint>(
			"getPaddingBottom",
			"()I"
		);
	}
	jint View::getPaddingEnd() const
	{
		return callMethod<jint>(
			"getPaddingEnd",
			"()I"
		);
	}
	jint View::getPaddingLeft() const
	{
		return callMethod<jint>(
			"getPaddingLeft",
			"()I"
		);
	}
	jint View::getPaddingRight() const
	{
		return callMethod<jint>(
			"getPaddingRight",
			"()I"
		);
	}
	jint View::getPaddingStart() const
	{
		return callMethod<jint>(
			"getPaddingStart",
			"()I"
		);
	}
	jint View::getPaddingTop() const
	{
		return callMethod<jint>(
			"getPaddingTop",
			"()I"
		);
	}
	JObject View::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Landroid/view/ViewParent;"
		);
	}
	JObject View::getParentForAccessibility() const
	{
		return callObjectMethod(
			"getParentForAccessibility",
			"()Landroid/view/ViewParent;"
		);
	}
	jfloat View::getPivotX() const
	{
		return callMethod<jfloat>(
			"getPivotX",
			"()F"
		);
	}
	jfloat View::getPivotY() const
	{
		return callMethod<jfloat>(
			"getPivotY",
			"()F"
		);
	}
	android::view::PointerIcon View::getPointerIcon() const
	{
		return callObjectMethod(
			"getPointerIcon",
			"()Landroid/view/PointerIcon;"
		);
	}
	android::content::res::Resources View::getResources() const
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	jboolean View::getRevealOnFocusHint() const
	{
		return callMethod<jboolean>(
			"getRevealOnFocusHint",
			"()Z"
		);
	}
	jint View::getRight() const
	{
		return callMethod<jint>(
			"getRight",
			"()I"
		);
	}
	android::view::View View::getRootView() const
	{
		return callObjectMethod(
			"getRootView",
			"()Landroid/view/View;"
		);
	}
	android::view::WindowInsets View::getRootWindowInsets() const
	{
		return callObjectMethod(
			"getRootWindowInsets",
			"()Landroid/view/WindowInsets;"
		);
	}
	jfloat View::getRotation() const
	{
		return callMethod<jfloat>(
			"getRotation",
			"()F"
		);
	}
	jfloat View::getRotationX() const
	{
		return callMethod<jfloat>(
			"getRotationX",
			"()F"
		);
	}
	jfloat View::getRotationY() const
	{
		return callMethod<jfloat>(
			"getRotationY",
			"()F"
		);
	}
	jfloat View::getScaleX() const
	{
		return callMethod<jfloat>(
			"getScaleX",
			"()F"
		);
	}
	jfloat View::getScaleY() const
	{
		return callMethod<jfloat>(
			"getScaleY",
			"()F"
		);
	}
	jint View::getScrollBarDefaultDelayBeforeFade() const
	{
		return callMethod<jint>(
			"getScrollBarDefaultDelayBeforeFade",
			"()I"
		);
	}
	jint View::getScrollBarFadeDuration() const
	{
		return callMethod<jint>(
			"getScrollBarFadeDuration",
			"()I"
		);
	}
	jint View::getScrollBarSize() const
	{
		return callMethod<jint>(
			"getScrollBarSize",
			"()I"
		);
	}
	jint View::getScrollBarStyle() const
	{
		return callMethod<jint>(
			"getScrollBarStyle",
			"()I"
		);
	}
	jint View::getScrollIndicators() const
	{
		return callMethod<jint>(
			"getScrollIndicators",
			"()I"
		);
	}
	jint View::getScrollX() const
	{
		return callMethod<jint>(
			"getScrollX",
			"()I"
		);
	}
	jint View::getScrollY() const
	{
		return callMethod<jint>(
			"getScrollY",
			"()I"
		);
	}
	jint View::getSolidColor() const
	{
		return callMethod<jint>(
			"getSolidColor",
			"()I"
		);
	}
	android::animation::StateListAnimator View::getStateListAnimator() const
	{
		return callObjectMethod(
			"getStateListAnimator",
			"()Landroid/animation/StateListAnimator;"
		);
	}
	jint View::getSystemUiVisibility() const
	{
		return callMethod<jint>(
			"getSystemUiVisibility",
			"()I"
		);
	}
	JObject View::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;"
		);
	}
	JObject View::getTag(jint arg0) const
	{
		return callObjectMethod(
			"getTag",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	jint View::getTextAlignment() const
	{
		return callMethod<jint>(
			"getTextAlignment",
			"()I"
		);
	}
	jint View::getTextDirection() const
	{
		return callMethod<jint>(
			"getTextDirection",
			"()I"
		);
	}
	JString View::getTooltipText() const
	{
		return callObjectMethod(
			"getTooltipText",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint View::getTop() const
	{
		return callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	android::view::TouchDelegate View::getTouchDelegate() const
	{
		return callObjectMethod(
			"getTouchDelegate",
			"()Landroid/view/TouchDelegate;"
		);
	}
	java::util::ArrayList View::getTouchables() const
	{
		return callObjectMethod(
			"getTouchables",
			"()Ljava/util/ArrayList;"
		);
	}
	JString View::getTransitionName() const
	{
		return callObjectMethod(
			"getTransitionName",
			"()Ljava/lang/String;"
		);
	}
	jfloat View::getTranslationX() const
	{
		return callMethod<jfloat>(
			"getTranslationX",
			"()F"
		);
	}
	jfloat View::getTranslationY() const
	{
		return callMethod<jfloat>(
			"getTranslationY",
			"()F"
		);
	}
	jfloat View::getTranslationZ() const
	{
		return callMethod<jfloat>(
			"getTranslationZ",
			"()F"
		);
	}
	jint View::getVerticalFadingEdgeLength() const
	{
		return callMethod<jint>(
			"getVerticalFadingEdgeLength",
			"()I"
		);
	}
	jint View::getVerticalScrollbarPosition() const
	{
		return callMethod<jint>(
			"getVerticalScrollbarPosition",
			"()I"
		);
	}
	jint View::getVerticalScrollbarWidth() const
	{
		return callMethod<jint>(
			"getVerticalScrollbarWidth",
			"()I"
		);
	}
	android::view::ViewTreeObserver View::getViewTreeObserver() const
	{
		return callObjectMethod(
			"getViewTreeObserver",
			"()Landroid/view/ViewTreeObserver;"
		);
	}
	jint View::getVisibility() const
	{
		return callMethod<jint>(
			"getVisibility",
			"()I"
		);
	}
	jint View::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	android::view::WindowId View::getWindowId() const
	{
		return callObjectMethod(
			"getWindowId",
			"()Landroid/view/WindowId;"
		);
	}
	jint View::getWindowSystemUiVisibility() const
	{
		return callMethod<jint>(
			"getWindowSystemUiVisibility",
			"()I"
		);
	}
	JObject View::getWindowToken() const
	{
		return callObjectMethod(
			"getWindowToken",
			"()Landroid/os/IBinder;"
		);
	}
	jint View::getWindowVisibility() const
	{
		return callMethod<jint>(
			"getWindowVisibility",
			"()I"
		);
	}
	void View::getWindowVisibleDisplayFrame(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getWindowVisibleDisplayFrame",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jfloat View::getX() const
	{
		return callMethod<jfloat>(
			"getX",
			"()F"
		);
	}
	jfloat View::getY() const
	{
		return callMethod<jfloat>(
			"getY",
			"()F"
		);
	}
	jfloat View::getZ() const
	{
		return callMethod<jfloat>(
			"getZ",
			"()F"
		);
	}
	jboolean View::hasExplicitFocusable() const
	{
		return callMethod<jboolean>(
			"hasExplicitFocusable",
			"()Z"
		);
	}
	jboolean View::hasFocus() const
	{
		return callMethod<jboolean>(
			"hasFocus",
			"()Z"
		);
	}
	jboolean View::hasFocusable() const
	{
		return callMethod<jboolean>(
			"hasFocusable",
			"()Z"
		);
	}
	jboolean View::hasNestedScrollingParent() const
	{
		return callMethod<jboolean>(
			"hasNestedScrollingParent",
			"()Z"
		);
	}
	jboolean View::hasOnClickListeners() const
	{
		return callMethod<jboolean>(
			"hasOnClickListeners",
			"()Z"
		);
	}
	jboolean View::hasOverlappingRendering() const
	{
		return callMethod<jboolean>(
			"hasOverlappingRendering",
			"()Z"
		);
	}
	jboolean View::hasPointerCapture() const
	{
		return callMethod<jboolean>(
			"hasPointerCapture",
			"()Z"
		);
	}
	jboolean View::hasTransientState() const
	{
		return callMethod<jboolean>(
			"hasTransientState",
			"()Z"
		);
	}
	jboolean View::hasWindowFocus() const
	{
		return callMethod<jboolean>(
			"hasWindowFocus",
			"()Z"
		);
	}
	void View::invalidate() const
	{
		callMethod<void>(
			"invalidate",
			"()V"
		);
	}
	void View::invalidate(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"invalidate",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void View::invalidate(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void View::invalidateDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void View::invalidateOutline() const
	{
		callMethod<void>(
			"invalidateOutline",
			"()V"
		);
	}
	jboolean View::isAccessibilityFocused() const
	{
		return callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z"
		);
	}
	jboolean View::isAccessibilityHeading() const
	{
		return callMethod<jboolean>(
			"isAccessibilityHeading",
			"()Z"
		);
	}
	jboolean View::isActivated() const
	{
		return callMethod<jboolean>(
			"isActivated",
			"()Z"
		);
	}
	jboolean View::isAttachedToWindow() const
	{
		return callMethod<jboolean>(
			"isAttachedToWindow",
			"()Z"
		);
	}
	jboolean View::isClickable() const
	{
		return callMethod<jboolean>(
			"isClickable",
			"()Z"
		);
	}
	jboolean View::isContextClickable() const
	{
		return callMethod<jboolean>(
			"isContextClickable",
			"()Z"
		);
	}
	jboolean View::isDirty() const
	{
		return callMethod<jboolean>(
			"isDirty",
			"()Z"
		);
	}
	jboolean View::isDrawingCacheEnabled() const
	{
		return callMethod<jboolean>(
			"isDrawingCacheEnabled",
			"()Z"
		);
	}
	jboolean View::isDuplicateParentStateEnabled() const
	{
		return callMethod<jboolean>(
			"isDuplicateParentStateEnabled",
			"()Z"
		);
	}
	jboolean View::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean View::isFocusable() const
	{
		return callMethod<jboolean>(
			"isFocusable",
			"()Z"
		);
	}
	jboolean View::isFocusableInTouchMode() const
	{
		return callMethod<jboolean>(
			"isFocusableInTouchMode",
			"()Z"
		);
	}
	jboolean View::isFocused() const
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	jboolean View::isFocusedByDefault() const
	{
		return callMethod<jboolean>(
			"isFocusedByDefault",
			"()Z"
		);
	}
	jboolean View::isHapticFeedbackEnabled() const
	{
		return callMethod<jboolean>(
			"isHapticFeedbackEnabled",
			"()Z"
		);
	}
	jboolean View::isHardwareAccelerated() const
	{
		return callMethod<jboolean>(
			"isHardwareAccelerated",
			"()Z"
		);
	}
	jboolean View::isHorizontalFadingEdgeEnabled() const
	{
		return callMethod<jboolean>(
			"isHorizontalFadingEdgeEnabled",
			"()Z"
		);
	}
	jboolean View::isHorizontalScrollBarEnabled() const
	{
		return callMethod<jboolean>(
			"isHorizontalScrollBarEnabled",
			"()Z"
		);
	}
	jboolean View::isHovered() const
	{
		return callMethod<jboolean>(
			"isHovered",
			"()Z"
		);
	}
	jboolean View::isImportantForAccessibility() const
	{
		return callMethod<jboolean>(
			"isImportantForAccessibility",
			"()Z"
		);
	}
	jboolean View::isImportantForAutofill() const
	{
		return callMethod<jboolean>(
			"isImportantForAutofill",
			"()Z"
		);
	}
	jboolean View::isInEditMode() const
	{
		return callMethod<jboolean>(
			"isInEditMode",
			"()Z"
		);
	}
	jboolean View::isInLayout() const
	{
		return callMethod<jboolean>(
			"isInLayout",
			"()Z"
		);
	}
	jboolean View::isInTouchMode() const
	{
		return callMethod<jboolean>(
			"isInTouchMode",
			"()Z"
		);
	}
	jboolean View::isKeyboardNavigationCluster() const
	{
		return callMethod<jboolean>(
			"isKeyboardNavigationCluster",
			"()Z"
		);
	}
	jboolean View::isLaidOut() const
	{
		return callMethod<jboolean>(
			"isLaidOut",
			"()Z"
		);
	}
	jboolean View::isLayoutDirectionResolved() const
	{
		return callMethod<jboolean>(
			"isLayoutDirectionResolved",
			"()Z"
		);
	}
	jboolean View::isLayoutRequested() const
	{
		return callMethod<jboolean>(
			"isLayoutRequested",
			"()Z"
		);
	}
	jboolean View::isLongClickable() const
	{
		return callMethod<jboolean>(
			"isLongClickable",
			"()Z"
		);
	}
	jboolean View::isNestedScrollingEnabled() const
	{
		return callMethod<jboolean>(
			"isNestedScrollingEnabled",
			"()Z"
		);
	}
	jboolean View::isOpaque() const
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	jboolean View::isPaddingRelative() const
	{
		return callMethod<jboolean>(
			"isPaddingRelative",
			"()Z"
		);
	}
	jboolean View::isPivotSet() const
	{
		return callMethod<jboolean>(
			"isPivotSet",
			"()Z"
		);
	}
	jboolean View::isPressed() const
	{
		return callMethod<jboolean>(
			"isPressed",
			"()Z"
		);
	}
	jboolean View::isSaveEnabled() const
	{
		return callMethod<jboolean>(
			"isSaveEnabled",
			"()Z"
		);
	}
	jboolean View::isSaveFromParentEnabled() const
	{
		return callMethod<jboolean>(
			"isSaveFromParentEnabled",
			"()Z"
		);
	}
	jboolean View::isScreenReaderFocusable() const
	{
		return callMethod<jboolean>(
			"isScreenReaderFocusable",
			"()Z"
		);
	}
	jboolean View::isScrollContainer() const
	{
		return callMethod<jboolean>(
			"isScrollContainer",
			"()Z"
		);
	}
	jboolean View::isScrollbarFadingEnabled() const
	{
		return callMethod<jboolean>(
			"isScrollbarFadingEnabled",
			"()Z"
		);
	}
	jboolean View::isSelected() const
	{
		return callMethod<jboolean>(
			"isSelected",
			"()Z"
		);
	}
	jboolean View::isShown() const
	{
		return callMethod<jboolean>(
			"isShown",
			"()Z"
		);
	}
	jboolean View::isSoundEffectsEnabled() const
	{
		return callMethod<jboolean>(
			"isSoundEffectsEnabled",
			"()Z"
		);
	}
	jboolean View::isTemporarilyDetached() const
	{
		return callMethod<jboolean>(
			"isTemporarilyDetached",
			"()Z"
		);
	}
	jboolean View::isTextAlignmentResolved() const
	{
		return callMethod<jboolean>(
			"isTextAlignmentResolved",
			"()Z"
		);
	}
	jboolean View::isTextDirectionResolved() const
	{
		return callMethod<jboolean>(
			"isTextDirectionResolved",
			"()Z"
		);
	}
	jboolean View::isVerticalFadingEdgeEnabled() const
	{
		return callMethod<jboolean>(
			"isVerticalFadingEdgeEnabled",
			"()Z"
		);
	}
	jboolean View::isVerticalScrollBarEnabled() const
	{
		return callMethod<jboolean>(
			"isVerticalScrollBarEnabled",
			"()Z"
		);
	}
	jboolean View::isVisibleToUserForAutofill(jint arg0) const
	{
		return callMethod<jboolean>(
			"isVisibleToUserForAutofill",
			"(I)Z",
			arg0
		);
	}
	void View::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	android::view::View View::keyboardNavigationClusterSearch(android::view::View arg0, jint arg1) const
	{
		return callObjectMethod(
			"keyboardNavigationClusterSearch",
			"(Landroid/view/View;I)Landroid/view/View;",
			arg0.object(),
			arg1
		);
	}
	void View::layout(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void View::measure(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"measure",
			"(II)V",
			arg0,
			arg1
		);
	}
	void View::offsetLeftAndRight(jint arg0) const
	{
		callMethod<void>(
			"offsetLeftAndRight",
			"(I)V",
			arg0
		);
	}
	void View::offsetTopAndBottom(jint arg0) const
	{
		callMethod<void>(
			"offsetTopAndBottom",
			"(I)V",
			arg0
		);
	}
	android::view::WindowInsets View::onApplyWindowInsets(android::view::WindowInsets arg0) const
	{
		return callObjectMethod(
			"onApplyWindowInsets",
			"(Landroid/view/WindowInsets;)Landroid/view/WindowInsets;",
			arg0.object()
		);
	}
	void View::onCancelPendingInputEvents() const
	{
		callMethod<void>(
			"onCancelPendingInputEvents",
			"()V"
		);
	}
	jboolean View::onCapturedPointerEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onCapturedPointerEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean View::onCheckIsTextEditor() const
	{
		return callMethod<jboolean>(
			"onCheckIsTextEditor",
			"()Z"
		);
	}
	JObject View::onCreateInputConnection(android::view::inputmethod::EditorInfo arg0) const
	{
		return callObjectMethod(
			"onCreateInputConnection",
			"(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",
			arg0.object()
		);
	}
	jboolean View::onDragEvent(android::view::DragEvent arg0) const
	{
		return callMethod<jboolean>(
			"onDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.object()
		);
	}
	void View::onDrawForeground(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"onDrawForeground",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jboolean View::onFilterTouchEventForSecurity(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onFilterTouchEventForSecurity",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void View::onFinishTemporaryDetach() const
	{
		callMethod<void>(
			"onFinishTemporaryDetach",
			"()V"
		);
	}
	jboolean View::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void View::onHoverChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onHoverChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean View::onHoverEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void View::onInitializeAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const
	{
		callMethod<void>(
			"onInitializeAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object()
		);
	}
	void View::onInitializeAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0) const
	{
		callMethod<void>(
			"onInitializeAccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.object()
		);
	}
	jboolean View::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean View::onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean View::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean View::onKeyPreIme(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean View::onKeyShortcut(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyShortcut",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean View::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	void View::onPointerCaptureChange(jboolean arg0) const
	{
		callMethod<void>(
			"onPointerCaptureChange",
			"(Z)V",
			arg0
		);
	}
	void View::onPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const
	{
		callMethod<void>(
			"onPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object()
		);
	}
	void View::onProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"onProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	void View::onProvideAutofillVirtualStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"onProvideAutofillVirtualStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	void View::onProvideStructure(android::view::ViewStructure arg0) const
	{
		callMethod<void>(
			"onProvideStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	void View::onProvideVirtualStructure(android::view::ViewStructure arg0) const
	{
		callMethod<void>(
			"onProvideVirtualStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	android::view::PointerIcon View::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const
	{
		return callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
	void View::onRtlPropertiesChanged(jint arg0) const
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	void View::onScreenStateChanged(jint arg0) const
	{
		callMethod<void>(
			"onScreenStateChanged",
			"(I)V",
			arg0
		);
	}
	void View::onStartTemporaryDetach() const
	{
		callMethod<void>(
			"onStartTemporaryDetach",
			"()V"
		);
	}
	jboolean View::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean View::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void View::onVisibilityAggregated(jboolean arg0) const
	{
		callMethod<void>(
			"onVisibilityAggregated",
			"(Z)V",
			arg0
		);
	}
	void View::onWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void View::onWindowSystemUiVisibilityChanged(jint arg0) const
	{
		callMethod<void>(
			"onWindowSystemUiVisibilityChanged",
			"(I)V",
			arg0
		);
	}
	jboolean View::performAccessibilityAction(jint arg0, android::os::Bundle arg1) const
	{
		return callMethod<jboolean>(
			"performAccessibilityAction",
			"(ILandroid/os/Bundle;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean View::performClick() const
	{
		return callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	jboolean View::performContextClick() const
	{
		return callMethod<jboolean>(
			"performContextClick",
			"()Z"
		);
	}
	jboolean View::performContextClick(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"performContextClick",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean View::performHapticFeedback(jint arg0) const
	{
		return callMethod<jboolean>(
			"performHapticFeedback",
			"(I)Z",
			arg0
		);
	}
	jboolean View::performHapticFeedback(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"performHapticFeedback",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean View::performLongClick() const
	{
		return callMethod<jboolean>(
			"performLongClick",
			"()Z"
		);
	}
	jboolean View::performLongClick(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"performLongClick",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	void View::playSoundEffect(jint arg0) const
	{
		callMethod<void>(
			"playSoundEffect",
			"(I)V",
			arg0
		);
	}
	jboolean View::post(JObject arg0) const
	{
		return callMethod<jboolean>(
			"post",
			"(Ljava/lang/Runnable;)Z",
			arg0.object()
		);
	}
	jboolean View::postDelayed(JObject arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"postDelayed",
			"(Ljava/lang/Runnable;J)Z",
			arg0.object(),
			arg1
		);
	}
	void View::postInvalidate() const
	{
		callMethod<void>(
			"postInvalidate",
			"()V"
		);
	}
	void View::postInvalidate(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void View::postInvalidateDelayed(jlong arg0) const
	{
		callMethod<void>(
			"postInvalidateDelayed",
			"(J)V",
			arg0
		);
	}
	void View::postInvalidateDelayed(jlong arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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
	void View::postInvalidateOnAnimation() const
	{
		callMethod<void>(
			"postInvalidateOnAnimation",
			"()V"
		);
	}
	void View::postInvalidateOnAnimation(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void View::postOnAnimation(JObject arg0) const
	{
		callMethod<void>(
			"postOnAnimation",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	void View::postOnAnimationDelayed(JObject arg0, jlong arg1) const
	{
		callMethod<void>(
			"postOnAnimationDelayed",
			"(Ljava/lang/Runnable;J)V",
			arg0.object(),
			arg1
		);
	}
	void View::refreshDrawableState() const
	{
		callMethod<void>(
			"refreshDrawableState",
			"()V"
		);
	}
	void View::releasePointerCapture() const
	{
		callMethod<void>(
			"releasePointerCapture",
			"()V"
		);
	}
	jboolean View::removeCallbacks(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeCallbacks",
			"(Ljava/lang/Runnable;)Z",
			arg0.object()
		);
	}
	void View::removeOnAttachStateChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnAttachStateChangeListener",
			"(Landroid/view/View$OnAttachStateChangeListener;)V",
			arg0.object()
		);
	}
	void View::removeOnLayoutChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnLayoutChangeListener",
			"(Landroid/view/View$OnLayoutChangeListener;)V",
			arg0.object()
		);
	}
	void View::removeOnUnhandledKeyEventListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnUnhandledKeyEventListener",
			"(Landroid/view/View$OnUnhandledKeyEventListener;)V",
			arg0.object()
		);
	}
	void View::requestApplyInsets() const
	{
		callMethod<void>(
			"requestApplyInsets",
			"()V"
		);
	}
	void View::requestFitSystemWindows() const
	{
		callMethod<void>(
			"requestFitSystemWindows",
			"()V"
		);
	}
	jboolean View::requestFocus() const
	{
		return callMethod<jboolean>(
			"requestFocus",
			"()Z"
		);
	}
	jboolean View::requestFocus(jint arg0) const
	{
		return callMethod<jboolean>(
			"requestFocus",
			"(I)Z",
			arg0
		);
	}
	jboolean View::requestFocus(jint arg0, android::graphics::Rect arg1) const
	{
		return callMethod<jboolean>(
			"requestFocus",
			"(ILandroid/graphics/Rect;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean View::requestFocusFromTouch() const
	{
		return callMethod<jboolean>(
			"requestFocusFromTouch",
			"()Z"
		);
	}
	void View::requestLayout() const
	{
		callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	void View::requestPointerCapture() const
	{
		callMethod<void>(
			"requestPointerCapture",
			"()V"
		);
	}
	jboolean View::requestRectangleOnScreen(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"requestRectangleOnScreen",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean View::requestRectangleOnScreen(android::graphics::Rect arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"requestRectangleOnScreen",
			"(Landroid/graphics/Rect;Z)Z",
			arg0.object(),
			arg1
		);
	}
	void View::requestUnbufferedDispatch(android::view::MotionEvent arg0) const
	{
		callMethod<void>(
			"requestUnbufferedDispatch",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
	android::view::View View::requireViewById(jint arg0) const
	{
		return callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void View::resetPivot() const
	{
		callMethod<void>(
			"resetPivot",
			"()V"
		);
	}
	jboolean View::restoreDefaultFocus() const
	{
		return callMethod<jboolean>(
			"restoreDefaultFocus",
			"()Z"
		);
	}
	void View::restoreHierarchyState(android::util::SparseArray arg0) const
	{
		callMethod<void>(
			"restoreHierarchyState",
			"(Landroid/util/SparseArray;)V",
			arg0.object()
		);
	}
	void View::saveHierarchyState(android::util::SparseArray arg0) const
	{
		callMethod<void>(
			"saveHierarchyState",
			"(Landroid/util/SparseArray;)V",
			arg0.object()
		);
	}
	void View::scheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1, jlong arg2) const
	{
		callMethod<void>(
			"scheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void View::scrollBy(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"scrollBy",
			"(II)V",
			arg0,
			arg1
		);
	}
	void View::scrollTo(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"scrollTo",
			"(II)V",
			arg0,
			arg1
		);
	}
	void View::sendAccessibilityEvent(jint arg0) const
	{
		callMethod<void>(
			"sendAccessibilityEvent",
			"(I)V",
			arg0
		);
	}
	void View::sendAccessibilityEventUnchecked(android::view::accessibility::AccessibilityEvent arg0) const
	{
		callMethod<void>(
			"sendAccessibilityEventUnchecked",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object()
		);
	}
	void View::setAccessibilityDelegate(android::view::View_AccessibilityDelegate arg0) const
	{
		callMethod<void>(
			"setAccessibilityDelegate",
			"(Landroid/view/View$AccessibilityDelegate;)V",
			arg0.object()
		);
	}
	void View::setAccessibilityHeading(jboolean arg0) const
	{
		callMethod<void>(
			"setAccessibilityHeading",
			"(Z)V",
			arg0
		);
	}
	void View::setAccessibilityLiveRegion(jint arg0) const
	{
		callMethod<void>(
			"setAccessibilityLiveRegion",
			"(I)V",
			arg0
		);
	}
	void View::setAccessibilityPaneTitle(JString arg0) const
	{
		callMethod<void>(
			"setAccessibilityPaneTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void View::setAccessibilityTraversalAfter(jint arg0) const
	{
		callMethod<void>(
			"setAccessibilityTraversalAfter",
			"(I)V",
			arg0
		);
	}
	void View::setAccessibilityTraversalBefore(jint arg0) const
	{
		callMethod<void>(
			"setAccessibilityTraversalBefore",
			"(I)V",
			arg0
		);
	}
	void View::setActivated(jboolean arg0) const
	{
		callMethod<void>(
			"setActivated",
			"(Z)V",
			arg0
		);
	}
	void View::setAlpha(jfloat arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
	void View::setAnimation(android::view::animation::Animation arg0) const
	{
		callMethod<void>(
			"setAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		);
	}
	void View::setAutofillHints(JArray arg0) const
	{
		callMethod<void>(
			"setAutofillHints",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void View::setAutofillId(android::view::autofill::AutofillId arg0) const
	{
		callMethod<void>(
			"setAutofillId",
			"(Landroid/view/autofill/AutofillId;)V",
			arg0.object()
		);
	}
	void View::setBackground(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setBackground",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void View::setBackgroundColor(jint arg0) const
	{
		callMethod<void>(
			"setBackgroundColor",
			"(I)V",
			arg0
		);
	}
	void View::setBackgroundDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void View::setBackgroundResource(jint arg0) const
	{
		callMethod<void>(
			"setBackgroundResource",
			"(I)V",
			arg0
		);
	}
	void View::setBackgroundTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setBackgroundTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void View::setBackgroundTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setBackgroundTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void View::setBottom(jint arg0) const
	{
		callMethod<void>(
			"setBottom",
			"(I)V",
			arg0
		);
	}
	void View::setCameraDistance(jfloat arg0) const
	{
		callMethod<void>(
			"setCameraDistance",
			"(F)V",
			arg0
		);
	}
	void View::setClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setClickable",
			"(Z)V",
			arg0
		);
	}
	void View::setClipBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setClipBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void View::setClipToOutline(jboolean arg0) const
	{
		callMethod<void>(
			"setClipToOutline",
			"(Z)V",
			arg0
		);
	}
	void View::setContentDescription(JString arg0) const
	{
		callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void View::setContextClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setContextClickable",
			"(Z)V",
			arg0
		);
	}
	void View::setDefaultFocusHighlightEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setDefaultFocusHighlightEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setDrawingCacheBackgroundColor(jint arg0) const
	{
		callMethod<void>(
			"setDrawingCacheBackgroundColor",
			"(I)V",
			arg0
		);
	}
	void View::setDrawingCacheEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setDrawingCacheEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setDrawingCacheQuality(jint arg0) const
	{
		callMethod<void>(
			"setDrawingCacheQuality",
			"(I)V",
			arg0
		);
	}
	void View::setDuplicateParentStateEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setDuplicateParentStateEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setElevation(jfloat arg0) const
	{
		callMethod<void>(
			"setElevation",
			"(F)V",
			arg0
		);
	}
	void View::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setFadingEdgeLength(jint arg0) const
	{
		callMethod<void>(
			"setFadingEdgeLength",
			"(I)V",
			arg0
		);
	}
	void View::setFilterTouchesWhenObscured(jboolean arg0) const
	{
		callMethod<void>(
			"setFilterTouchesWhenObscured",
			"(Z)V",
			arg0
		);
	}
	void View::setFitsSystemWindows(jboolean arg0) const
	{
		callMethod<void>(
			"setFitsSystemWindows",
			"(Z)V",
			arg0
		);
	}
	void View::setFocusable(jboolean arg0) const
	{
		callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	void View::setFocusable(jint arg0) const
	{
		callMethod<void>(
			"setFocusable",
			"(I)V",
			arg0
		);
	}
	void View::setFocusableInTouchMode(jboolean arg0) const
	{
		callMethod<void>(
			"setFocusableInTouchMode",
			"(Z)V",
			arg0
		);
	}
	void View::setFocusedByDefault(jboolean arg0) const
	{
		callMethod<void>(
			"setFocusedByDefault",
			"(Z)V",
			arg0
		);
	}
	void View::setForeground(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setForeground",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void View::setForegroundGravity(jint arg0) const
	{
		callMethod<void>(
			"setForegroundGravity",
			"(I)V",
			arg0
		);
	}
	void View::setForegroundTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setForegroundTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void View::setForegroundTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setForegroundTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void View::setHapticFeedbackEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setHapticFeedbackEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setHasTransientState(jboolean arg0) const
	{
		callMethod<void>(
			"setHasTransientState",
			"(Z)V",
			arg0
		);
	}
	void View::setHorizontalFadingEdgeEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setHorizontalFadingEdgeEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setHorizontalScrollBarEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setHorizontalScrollBarEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setHovered(jboolean arg0) const
	{
		callMethod<void>(
			"setHovered",
			"(Z)V",
			arg0
		);
	}
	void View::setId(jint arg0) const
	{
		callMethod<void>(
			"setId",
			"(I)V",
			arg0
		);
	}
	void View::setImportantForAccessibility(jint arg0) const
	{
		callMethod<void>(
			"setImportantForAccessibility",
			"(I)V",
			arg0
		);
	}
	void View::setImportantForAutofill(jint arg0) const
	{
		callMethod<void>(
			"setImportantForAutofill",
			"(I)V",
			arg0
		);
	}
	void View::setKeepScreenOn(jboolean arg0) const
	{
		callMethod<void>(
			"setKeepScreenOn",
			"(Z)V",
			arg0
		);
	}
	void View::setKeyboardNavigationCluster(jboolean arg0) const
	{
		callMethod<void>(
			"setKeyboardNavigationCluster",
			"(Z)V",
			arg0
		);
	}
	void View::setLabelFor(jint arg0) const
	{
		callMethod<void>(
			"setLabelFor",
			"(I)V",
			arg0
		);
	}
	void View::setLayerPaint(android::graphics::Paint arg0) const
	{
		callMethod<void>(
			"setLayerPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.object()
		);
	}
	void View::setLayerType(jint arg0, android::graphics::Paint arg1) const
	{
		callMethod<void>(
			"setLayerType",
			"(ILandroid/graphics/Paint;)V",
			arg0,
			arg1.object()
		);
	}
	void View::setLayoutDirection(jint arg0) const
	{
		callMethod<void>(
			"setLayoutDirection",
			"(I)V",
			arg0
		);
	}
	void View::setLayoutParams(android::view::ViewGroup_LayoutParams arg0) const
	{
		callMethod<void>(
			"setLayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		);
	}
	void View::setLeft(jint arg0) const
	{
		callMethod<void>(
			"setLeft",
			"(I)V",
			arg0
		);
	}
	void View::setLongClickable(jboolean arg0) const
	{
		callMethod<void>(
			"setLongClickable",
			"(Z)V",
			arg0
		);
	}
	void View::setMinimumHeight(jint arg0) const
	{
		callMethod<void>(
			"setMinimumHeight",
			"(I)V",
			arg0
		);
	}
	void View::setMinimumWidth(jint arg0) const
	{
		callMethod<void>(
			"setMinimumWidth",
			"(I)V",
			arg0
		);
	}
	void View::setNestedScrollingEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setNestedScrollingEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setNextClusterForwardId(jint arg0) const
	{
		callMethod<void>(
			"setNextClusterForwardId",
			"(I)V",
			arg0
		);
	}
	void View::setNextFocusDownId(jint arg0) const
	{
		callMethod<void>(
			"setNextFocusDownId",
			"(I)V",
			arg0
		);
	}
	void View::setNextFocusForwardId(jint arg0) const
	{
		callMethod<void>(
			"setNextFocusForwardId",
			"(I)V",
			arg0
		);
	}
	void View::setNextFocusLeftId(jint arg0) const
	{
		callMethod<void>(
			"setNextFocusLeftId",
			"(I)V",
			arg0
		);
	}
	void View::setNextFocusRightId(jint arg0) const
	{
		callMethod<void>(
			"setNextFocusRightId",
			"(I)V",
			arg0
		);
	}
	void View::setNextFocusUpId(jint arg0) const
	{
		callMethod<void>(
			"setNextFocusUpId",
			"(I)V",
			arg0
		);
	}
	void View::setOnApplyWindowInsetsListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnApplyWindowInsetsListener",
			"(Landroid/view/View$OnApplyWindowInsetsListener;)V",
			arg0.object()
		);
	}
	void View::setOnCapturedPointerListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnCapturedPointerListener",
			"(Landroid/view/View$OnCapturedPointerListener;)V",
			arg0.object()
		);
	}
	void View::setOnClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	void View::setOnContextClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnContextClickListener",
			"(Landroid/view/View$OnContextClickListener;)V",
			arg0.object()
		);
	}
	void View::setOnCreateContextMenuListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnCreateContextMenuListener",
			"(Landroid/view/View$OnCreateContextMenuListener;)V",
			arg0.object()
		);
	}
	void View::setOnDragListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDragListener",
			"(Landroid/view/View$OnDragListener;)V",
			arg0.object()
		);
	}
	void View::setOnFocusChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnFocusChangeListener",
			"(Landroid/view/View$OnFocusChangeListener;)V",
			arg0.object()
		);
	}
	void View::setOnGenericMotionListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnGenericMotionListener",
			"(Landroid/view/View$OnGenericMotionListener;)V",
			arg0.object()
		);
	}
	void View::setOnHoverListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnHoverListener",
			"(Landroid/view/View$OnHoverListener;)V",
			arg0.object()
		);
	}
	void View::setOnKeyListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnKeyListener",
			"(Landroid/view/View$OnKeyListener;)V",
			arg0.object()
		);
	}
	void View::setOnLongClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnLongClickListener",
			"(Landroid/view/View$OnLongClickListener;)V",
			arg0.object()
		);
	}
	void View::setOnScrollChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnScrollChangeListener",
			"(Landroid/view/View$OnScrollChangeListener;)V",
			arg0.object()
		);
	}
	void View::setOnSystemUiVisibilityChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnSystemUiVisibilityChangeListener",
			"(Landroid/view/View$OnSystemUiVisibilityChangeListener;)V",
			arg0.object()
		);
	}
	void View::setOnTouchListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnTouchListener",
			"(Landroid/view/View$OnTouchListener;)V",
			arg0.object()
		);
	}
	void View::setOutlineAmbientShadowColor(jint arg0) const
	{
		callMethod<void>(
			"setOutlineAmbientShadowColor",
			"(I)V",
			arg0
		);
	}
	void View::setOutlineProvider(android::view::ViewOutlineProvider arg0) const
	{
		callMethod<void>(
			"setOutlineProvider",
			"(Landroid/view/ViewOutlineProvider;)V",
			arg0.object()
		);
	}
	void View::setOutlineSpotShadowColor(jint arg0) const
	{
		callMethod<void>(
			"setOutlineSpotShadowColor",
			"(I)V",
			arg0
		);
	}
	void View::setOverScrollMode(jint arg0) const
	{
		callMethod<void>(
			"setOverScrollMode",
			"(I)V",
			arg0
		);
	}
	void View::setPadding(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void View::setPaddingRelative(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void View::setPivotX(jfloat arg0) const
	{
		callMethod<void>(
			"setPivotX",
			"(F)V",
			arg0
		);
	}
	void View::setPivotY(jfloat arg0) const
	{
		callMethod<void>(
			"setPivotY",
			"(F)V",
			arg0
		);
	}
	void View::setPointerIcon(android::view::PointerIcon arg0) const
	{
		callMethod<void>(
			"setPointerIcon",
			"(Landroid/view/PointerIcon;)V",
			arg0.object()
		);
	}
	void View::setPressed(jboolean arg0) const
	{
		callMethod<void>(
			"setPressed",
			"(Z)V",
			arg0
		);
	}
	void View::setRevealOnFocusHint(jboolean arg0) const
	{
		callMethod<void>(
			"setRevealOnFocusHint",
			"(Z)V",
			arg0
		);
	}
	void View::setRight(jint arg0) const
	{
		callMethod<void>(
			"setRight",
			"(I)V",
			arg0
		);
	}
	void View::setRotation(jfloat arg0) const
	{
		callMethod<void>(
			"setRotation",
			"(F)V",
			arg0
		);
	}
	void View::setRotationX(jfloat arg0) const
	{
		callMethod<void>(
			"setRotationX",
			"(F)V",
			arg0
		);
	}
	void View::setRotationY(jfloat arg0) const
	{
		callMethod<void>(
			"setRotationY",
			"(F)V",
			arg0
		);
	}
	void View::setSaveEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setSaveEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setSaveFromParentEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setSaveFromParentEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setScaleX(jfloat arg0) const
	{
		callMethod<void>(
			"setScaleX",
			"(F)V",
			arg0
		);
	}
	void View::setScaleY(jfloat arg0) const
	{
		callMethod<void>(
			"setScaleY",
			"(F)V",
			arg0
		);
	}
	void View::setScreenReaderFocusable(jboolean arg0) const
	{
		callMethod<void>(
			"setScreenReaderFocusable",
			"(Z)V",
			arg0
		);
	}
	void View::setScrollBarDefaultDelayBeforeFade(jint arg0) const
	{
		callMethod<void>(
			"setScrollBarDefaultDelayBeforeFade",
			"(I)V",
			arg0
		);
	}
	void View::setScrollBarFadeDuration(jint arg0) const
	{
		callMethod<void>(
			"setScrollBarFadeDuration",
			"(I)V",
			arg0
		);
	}
	void View::setScrollBarSize(jint arg0) const
	{
		callMethod<void>(
			"setScrollBarSize",
			"(I)V",
			arg0
		);
	}
	void View::setScrollBarStyle(jint arg0) const
	{
		callMethod<void>(
			"setScrollBarStyle",
			"(I)V",
			arg0
		);
	}
	void View::setScrollContainer(jboolean arg0) const
	{
		callMethod<void>(
			"setScrollContainer",
			"(Z)V",
			arg0
		);
	}
	void View::setScrollIndicators(jint arg0) const
	{
		callMethod<void>(
			"setScrollIndicators",
			"(I)V",
			arg0
		);
	}
	void View::setScrollIndicators(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setScrollIndicators",
			"(II)V",
			arg0,
			arg1
		);
	}
	void View::setScrollX(jint arg0) const
	{
		callMethod<void>(
			"setScrollX",
			"(I)V",
			arg0
		);
	}
	void View::setScrollY(jint arg0) const
	{
		callMethod<void>(
			"setScrollY",
			"(I)V",
			arg0
		);
	}
	void View::setScrollbarFadingEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setScrollbarFadingEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setSelected(jboolean arg0) const
	{
		callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	void View::setSoundEffectsEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setSoundEffectsEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setStateListAnimator(android::animation::StateListAnimator arg0) const
	{
		callMethod<void>(
			"setStateListAnimator",
			"(Landroid/animation/StateListAnimator;)V",
			arg0.object()
		);
	}
	void View::setSystemUiVisibility(jint arg0) const
	{
		callMethod<void>(
			"setSystemUiVisibility",
			"(I)V",
			arg0
		);
	}
	void View::setTag(JObject arg0) const
	{
		callMethod<void>(
			"setTag",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void View::setTag(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"setTag",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	void View::setTextAlignment(jint arg0) const
	{
		callMethod<void>(
			"setTextAlignment",
			"(I)V",
			arg0
		);
	}
	void View::setTextDirection(jint arg0) const
	{
		callMethod<void>(
			"setTextDirection",
			"(I)V",
			arg0
		);
	}
	void View::setTooltipText(JString arg0) const
	{
		callMethod<void>(
			"setTooltipText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void View::setTop(jint arg0) const
	{
		callMethod<void>(
			"setTop",
			"(I)V",
			arg0
		);
	}
	void View::setTouchDelegate(android::view::TouchDelegate arg0) const
	{
		callMethod<void>(
			"setTouchDelegate",
			"(Landroid/view/TouchDelegate;)V",
			arg0.object()
		);
	}
	void View::setTransitionName(JString arg0) const
	{
		callMethod<void>(
			"setTransitionName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void View::setTranslationX(jfloat arg0) const
	{
		callMethod<void>(
			"setTranslationX",
			"(F)V",
			arg0
		);
	}
	void View::setTranslationY(jfloat arg0) const
	{
		callMethod<void>(
			"setTranslationY",
			"(F)V",
			arg0
		);
	}
	void View::setTranslationZ(jfloat arg0) const
	{
		callMethod<void>(
			"setTranslationZ",
			"(F)V",
			arg0
		);
	}
	void View::setVerticalFadingEdgeEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setVerticalFadingEdgeEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setVerticalScrollBarEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setVerticalScrollBarEnabled",
			"(Z)V",
			arg0
		);
	}
	void View::setVerticalScrollbarPosition(jint arg0) const
	{
		callMethod<void>(
			"setVerticalScrollbarPosition",
			"(I)V",
			arg0
		);
	}
	void View::setVisibility(jint arg0) const
	{
		callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
	void View::setWillNotCacheDrawing(jboolean arg0) const
	{
		callMethod<void>(
			"setWillNotCacheDrawing",
			"(Z)V",
			arg0
		);
	}
	void View::setWillNotDraw(jboolean arg0) const
	{
		callMethod<void>(
			"setWillNotDraw",
			"(Z)V",
			arg0
		);
	}
	void View::setX(jfloat arg0) const
	{
		callMethod<void>(
			"setX",
			"(F)V",
			arg0
		);
	}
	void View::setY(jfloat arg0) const
	{
		callMethod<void>(
			"setY",
			"(F)V",
			arg0
		);
	}
	void View::setZ(jfloat arg0) const
	{
		callMethod<void>(
			"setZ",
			"(F)V",
			arg0
		);
	}
	jboolean View::showContextMenu() const
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"()Z"
		);
	}
	jboolean View::showContextMenu(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	android::view::ActionMode View::startActionMode(JObject arg0) const
	{
		return callObjectMethod(
			"startActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.object()
		);
	}
	android::view::ActionMode View::startActionMode(JObject arg0, jint arg1) const
	{
		return callObjectMethod(
			"startActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.object(),
			arg1
		);
	}
	void View::startAnimation(android::view::animation::Animation arg0) const
	{
		callMethod<void>(
			"startAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		);
	}
	jboolean View::startDrag(android::content::ClipData arg0, android::view::View_DragShadowBuilder arg1, JObject arg2, jint arg3) const
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
	jboolean View::startDragAndDrop(android::content::ClipData arg0, android::view::View_DragShadowBuilder arg1, JObject arg2, jint arg3) const
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
	jboolean View::startNestedScroll(jint arg0) const
	{
		return callMethod<jboolean>(
			"startNestedScroll",
			"(I)Z",
			arg0
		);
	}
	void View::stopNestedScroll() const
	{
		callMethod<void>(
			"stopNestedScroll",
			"()V"
		);
	}
	JString View::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void View::unscheduleDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void View::unscheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1) const
	{
		callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void View::updateDragShadow(android::view::View_DragShadowBuilder arg0) const
	{
		callMethod<void>(
			"updateDragShadow",
			"(Landroid/view/View$DragShadowBuilder;)V",
			arg0.object()
		);
	}
	jboolean View::willNotCacheDrawing() const
	{
		return callMethod<jboolean>(
			"willNotCacheDrawing",
			"()Z"
		);
	}
	jboolean View::willNotDraw() const
	{
		return callMethod<jboolean>(
			"willNotDraw",
			"()Z"
		);
	}
} // namespace android::view

