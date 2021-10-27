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
		
		GestureDescription(QAndroidJniObject obj);
		// Constructors
		GestureDescription() = default;
		
		// Methods
		static jlong getMaxGestureDuration();
		static jint getMaxStrokeCount();
		QAndroidJniObject getStroke(jint arg0);
		jint getStrokeCount();
	};
} // namespace android::accessibilityservice

