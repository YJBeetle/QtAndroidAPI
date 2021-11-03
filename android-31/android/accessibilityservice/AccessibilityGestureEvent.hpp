#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::accessibilityservice
{
	class AccessibilityGestureEvent : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityGestureEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityGestureEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring gestureIdToString(jint arg0);
		jint describeContents();
		jint getDisplayId();
		jint getGestureId();
		JObject getMotionEvents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::accessibilityservice

