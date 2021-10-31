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
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityGestureEvent(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityGestureEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getDisplayId();
		jint getGestureId();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::accessibilityservice

