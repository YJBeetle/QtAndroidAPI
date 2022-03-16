#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::accessibilityservice
{
	class AccessibilityGestureEvent : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityGestureEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityGestureEvent(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString gestureIdToString(jint arg0);
		jint describeContents() const;
		jint getDisplayId() const;
		jint getGestureId() const;
		JObject getMotionEvents() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::accessibilityservice

