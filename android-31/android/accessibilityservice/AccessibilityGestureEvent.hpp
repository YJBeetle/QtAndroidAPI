#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::accessibilityservice
{
	class AccessibilityGestureEvent : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityGestureEvent(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityGestureEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring gestureIdToString(jint arg0);
		jint describeContents();
		jint getDisplayId();
		jint getGestureId();
		__JniBaseClass getMotionEvents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::accessibilityservice

