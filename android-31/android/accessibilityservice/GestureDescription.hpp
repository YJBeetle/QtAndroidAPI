#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::accessibilityservice
{
	class GestureDescription_StrokeDescription;
}

namespace android::accessibilityservice
{
	class GestureDescription : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GestureDescription(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GestureDescription(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jlong getMaxGestureDuration();
		static jint getMaxStrokeCount();
		jint getDisplayId();
		android::accessibilityservice::GestureDescription_StrokeDescription getStroke(jint arg0);
		jint getStrokeCount();
	};
} // namespace android::accessibilityservice

