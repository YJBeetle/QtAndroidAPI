#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::content::pm
{
	class PackageManager;
}
namespace android::content::pm
{
	class ResolveInfo;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::accessibilityservice
{
	class AccessibilityServiceInfo : public JObject
	{
	public:
		// Fields
		static jint CAPABILITY_CAN_CONTROL_MAGNIFICATION();
		static jint CAPABILITY_CAN_PERFORM_GESTURES();
		static jint CAPABILITY_CAN_REQUEST_ENHANCED_WEB_ACCESSIBILITY();
		static jint CAPABILITY_CAN_REQUEST_FILTER_KEY_EVENTS();
		static jint CAPABILITY_CAN_REQUEST_FINGERPRINT_GESTURES();
		static jint CAPABILITY_CAN_REQUEST_TOUCH_EXPLORATION();
		static jint CAPABILITY_CAN_RETRIEVE_WINDOW_CONTENT();
		static jint CAPABILITY_CAN_TAKE_SCREENSHOT();
		static JObject CREATOR();
		static jint DEFAULT();
		static jint FEEDBACK_ALL_MASK();
		static jint FEEDBACK_AUDIBLE();
		static jint FEEDBACK_BRAILLE();
		static jint FEEDBACK_GENERIC();
		static jint FEEDBACK_HAPTIC();
		static jint FEEDBACK_SPOKEN();
		static jint FEEDBACK_VISUAL();
		static jint FLAG_ENABLE_ACCESSIBILITY_VOLUME();
		static jint FLAG_INCLUDE_NOT_IMPORTANT_VIEWS();
		static jint FLAG_REPORT_VIEW_IDS();
		static jint FLAG_REQUEST_ACCESSIBILITY_BUTTON();
		static jint FLAG_REQUEST_ENHANCED_WEB_ACCESSIBILITY();
		static jint FLAG_REQUEST_FILTER_KEY_EVENTS();
		static jint FLAG_REQUEST_FINGERPRINT_GESTURES();
		static jint FLAG_REQUEST_MULTI_FINGER_GESTURES();
		static jint FLAG_REQUEST_SHORTCUT_WARNING_DIALOG_SPOKEN_FEEDBACK();
		static jint FLAG_REQUEST_TOUCH_EXPLORATION_MODE();
		static jint FLAG_RETRIEVE_INTERACTIVE_WINDOWS();
		static jint FLAG_SERVICE_HANDLES_DOUBLE_TAP();
		jint eventTypes();
		jint feedbackType();
		jint flags();
		jlong notificationTimeout();
		JArray packageNames();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityServiceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityServiceInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AccessibilityServiceInfo();
		
		// Methods
		static JString capabilityToString(jint arg0);
		static JString feedbackTypeToString(jint arg0);
		static JString flagToString(jint arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jboolean getCanRetrieveWindowContent() const;
		jint getCapabilities() const;
		JString getDescription() const;
		JString getId() const;
		jint getInteractiveUiTimeoutMillis() const;
		jint getNonInteractiveUiTimeoutMillis() const;
		android::content::pm::ResolveInfo getResolveInfo() const;
		JString getSettingsActivityName() const;
		jint hashCode() const;
		JString loadDescription(android::content::pm::PackageManager arg0) const;
		JString loadSummary(android::content::pm::PackageManager arg0) const;
		void setInteractiveUiTimeoutMillis(jint arg0) const;
		void setNonInteractiveUiTimeoutMillis(jint arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::accessibilityservice

