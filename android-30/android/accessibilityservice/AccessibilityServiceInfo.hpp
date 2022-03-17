#pragma once

#include "../../JArray.hpp"
#include "../content/pm/PackageManager.def.hpp"
#include "../content/pm/ResolveInfo.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AccessibilityServiceInfo.def.hpp"

namespace android::accessibilityservice
{
	// Fields
	inline jint AccessibilityServiceInfo::CAPABILITY_CAN_CONTROL_MAGNIFICATION()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_CONTROL_MAGNIFICATION"
		);
	}
	inline jint AccessibilityServiceInfo::CAPABILITY_CAN_PERFORM_GESTURES()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_PERFORM_GESTURES"
		);
	}
	inline jint AccessibilityServiceInfo::CAPABILITY_CAN_REQUEST_ENHANCED_WEB_ACCESSIBILITY()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_REQUEST_ENHANCED_WEB_ACCESSIBILITY"
		);
	}
	inline jint AccessibilityServiceInfo::CAPABILITY_CAN_REQUEST_FILTER_KEY_EVENTS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_REQUEST_FILTER_KEY_EVENTS"
		);
	}
	inline jint AccessibilityServiceInfo::CAPABILITY_CAN_REQUEST_FINGERPRINT_GESTURES()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_REQUEST_FINGERPRINT_GESTURES"
		);
	}
	inline jint AccessibilityServiceInfo::CAPABILITY_CAN_REQUEST_TOUCH_EXPLORATION()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_REQUEST_TOUCH_EXPLORATION"
		);
	}
	inline jint AccessibilityServiceInfo::CAPABILITY_CAN_RETRIEVE_WINDOW_CONTENT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_RETRIEVE_WINDOW_CONTENT"
		);
	}
	inline jint AccessibilityServiceInfo::CAPABILITY_CAN_TAKE_SCREENSHOT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_TAKE_SCREENSHOT"
		);
	}
	inline JObject AccessibilityServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint AccessibilityServiceInfo::DEFAULT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"DEFAULT"
		);
	}
	inline jint AccessibilityServiceInfo::FEEDBACK_ALL_MASK()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_ALL_MASK"
		);
	}
	inline jint AccessibilityServiceInfo::FEEDBACK_AUDIBLE()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_AUDIBLE"
		);
	}
	inline jint AccessibilityServiceInfo::FEEDBACK_BRAILLE()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_BRAILLE"
		);
	}
	inline jint AccessibilityServiceInfo::FEEDBACK_GENERIC()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_GENERIC"
		);
	}
	inline jint AccessibilityServiceInfo::FEEDBACK_HAPTIC()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_HAPTIC"
		);
	}
	inline jint AccessibilityServiceInfo::FEEDBACK_SPOKEN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_SPOKEN"
		);
	}
	inline jint AccessibilityServiceInfo::FEEDBACK_VISUAL()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_VISUAL"
		);
	}
	inline jint AccessibilityServiceInfo::FLAG_ENABLE_ACCESSIBILITY_VOLUME()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_ENABLE_ACCESSIBILITY_VOLUME"
		);
	}
	inline jint AccessibilityServiceInfo::FLAG_INCLUDE_NOT_IMPORTANT_VIEWS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_INCLUDE_NOT_IMPORTANT_VIEWS"
		);
	}
	inline jint AccessibilityServiceInfo::FLAG_REPORT_VIEW_IDS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REPORT_VIEW_IDS"
		);
	}
	inline jint AccessibilityServiceInfo::FLAG_REQUEST_ACCESSIBILITY_BUTTON()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_ACCESSIBILITY_BUTTON"
		);
	}
	inline jint AccessibilityServiceInfo::FLAG_REQUEST_ENHANCED_WEB_ACCESSIBILITY()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_ENHANCED_WEB_ACCESSIBILITY"
		);
	}
	inline jint AccessibilityServiceInfo::FLAG_REQUEST_FILTER_KEY_EVENTS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_FILTER_KEY_EVENTS"
		);
	}
	inline jint AccessibilityServiceInfo::FLAG_REQUEST_FINGERPRINT_GESTURES()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_FINGERPRINT_GESTURES"
		);
	}
	inline jint AccessibilityServiceInfo::FLAG_REQUEST_MULTI_FINGER_GESTURES()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_MULTI_FINGER_GESTURES"
		);
	}
	inline jint AccessibilityServiceInfo::FLAG_REQUEST_SHORTCUT_WARNING_DIALOG_SPOKEN_FEEDBACK()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_SHORTCUT_WARNING_DIALOG_SPOKEN_FEEDBACK"
		);
	}
	inline jint AccessibilityServiceInfo::FLAG_REQUEST_TOUCH_EXPLORATION_MODE()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_TOUCH_EXPLORATION_MODE"
		);
	}
	inline jint AccessibilityServiceInfo::FLAG_RETRIEVE_INTERACTIVE_WINDOWS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_RETRIEVE_INTERACTIVE_WINDOWS"
		);
	}
	inline jint AccessibilityServiceInfo::FLAG_SERVICE_HANDLES_DOUBLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_SERVICE_HANDLES_DOUBLE_TAP"
		);
	}
	inline jint AccessibilityServiceInfo::eventTypes()
	{
		return getField<jint>(
			"eventTypes"
		);
	}
	inline jint AccessibilityServiceInfo::feedbackType()
	{
		return getField<jint>(
			"feedbackType"
		);
	}
	inline jint AccessibilityServiceInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	inline jlong AccessibilityServiceInfo::notificationTimeout()
	{
		return getField<jlong>(
			"notificationTimeout"
		);
	}
	inline JArray AccessibilityServiceInfo::packageNames()
	{
		return getObjectField(
			"packageNames",
			"[Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline AccessibilityServiceInfo::AccessibilityServiceInfo()
		: JObject(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"()V"
		) {}
	
	// Methods
	inline JString AccessibilityServiceInfo::capabilityToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"capabilityToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString AccessibilityServiceInfo::feedbackTypeToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"feedbackTypeToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString AccessibilityServiceInfo::flagToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"flagToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint AccessibilityServiceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AccessibilityServiceInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean AccessibilityServiceInfo::getCanRetrieveWindowContent() const
	{
		return callMethod<jboolean>(
			"getCanRetrieveWindowContent",
			"()Z"
		);
	}
	inline jint AccessibilityServiceInfo::getCapabilities() const
	{
		return callMethod<jint>(
			"getCapabilities",
			"()I"
		);
	}
	inline JString AccessibilityServiceInfo::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	inline JString AccessibilityServiceInfo::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline jint AccessibilityServiceInfo::getInteractiveUiTimeoutMillis() const
	{
		return callMethod<jint>(
			"getInteractiveUiTimeoutMillis",
			"()I"
		);
	}
	inline jint AccessibilityServiceInfo::getNonInteractiveUiTimeoutMillis() const
	{
		return callMethod<jint>(
			"getNonInteractiveUiTimeoutMillis",
			"()I"
		);
	}
	inline android::content::pm::ResolveInfo AccessibilityServiceInfo::getResolveInfo() const
	{
		return callObjectMethod(
			"getResolveInfo",
			"()Landroid/content/pm/ResolveInfo;"
		);
	}
	inline JString AccessibilityServiceInfo::getSettingsActivityName() const
	{
		return callObjectMethod(
			"getSettingsActivityName",
			"()Ljava/lang/String;"
		);
	}
	inline jint AccessibilityServiceInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AccessibilityServiceInfo::loadDescription(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString AccessibilityServiceInfo::loadSummary(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadSummary",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline void AccessibilityServiceInfo::setInteractiveUiTimeoutMillis(jint arg0) const
	{
		callMethod<void>(
			"setInteractiveUiTimeoutMillis",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityServiceInfo::setNonInteractiveUiTimeoutMillis(jint arg0) const
	{
		callMethod<void>(
			"setNonInteractiveUiTimeoutMillis",
			"(I)V",
			arg0
		);
	}
	inline JString AccessibilityServiceInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AccessibilityServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::accessibilityservice

// Base class headers

