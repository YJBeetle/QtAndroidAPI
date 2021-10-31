#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Path;
}

namespace android::accessibilityservice
{
	class GestureDescription_StrokeDescription : public __JniBaseClass
	{
	public:
		// Fields
		
		GestureDescription_StrokeDescription(QAndroidJniObject obj);
		// Constructors
		GestureDescription_StrokeDescription(android::graphics::Path arg0, jlong arg1, jlong arg2);
		GestureDescription_StrokeDescription(android::graphics::Path arg0, jlong arg1, jlong arg2, jboolean arg3);
		GestureDescription_StrokeDescription() = default;
		
		// Methods
		QAndroidJniObject continueStroke(android::graphics::Path arg0, jlong arg1, jlong arg2, jboolean arg3);
		jlong getDuration();
		QAndroidJniObject getPath();
		jlong getStartTime();
		jboolean willContinue();
	};
} // namespace android::accessibilityservice

