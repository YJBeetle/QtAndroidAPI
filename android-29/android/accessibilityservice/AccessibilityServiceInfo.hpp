#pragma once

#include "../../JObject.hpp"

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
		static jint FLAG_REQUEST_SHORTCUT_WARNING_DIALOG_SPOKEN_FEEDBACK();
		static jint FLAG_REQUEST_TOUCH_EXPLORATION_MODE();
		static jint FLAG_RETRIEVE_INTERACTIVE_WINDOWS();
		jint eventTypes();
		jint feedbackType();
		jint flags();
		jlong notificationTimeout();
		jarray packageNames();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityServiceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityServiceInfo(QJniObject obj);
		
		// Constructors
		AccessibilityServiceInfo();
		
		// Methods
		static jstring capabilityToString(jint arg0);
		static jstring feedbackTypeToString(jint arg0);
		static jstring flagToString(jint arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jboolean getCanRetrieveWindowContent();
		jint getCapabilities();
		jstring getDescription();
		jstring getId();
		jint getInteractiveUiTimeoutMillis();
		jint getNonInteractiveUiTimeoutMillis();
		android::content::pm::ResolveInfo getResolveInfo();
		jstring getSettingsActivityName();
		jint hashCode();
		jstring loadDescription(android::content::pm::PackageManager arg0);
		jstring loadSummary(android::content::pm::PackageManager arg0);
		void setInteractiveUiTimeoutMillis(jint arg0);
		void setNonInteractiveUiTimeoutMillis(jint arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::accessibilityservice

