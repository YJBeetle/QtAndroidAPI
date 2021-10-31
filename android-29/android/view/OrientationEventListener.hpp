#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

namespace android::view
{
	class OrientationEventListener : public __JniBaseClass
	{
	public:
		// Fields
		static jint ORIENTATION_UNKNOWN();
		
		OrientationEventListener(QAndroidJniObject obj);
		// Constructors
		OrientationEventListener(android::content::Context arg0);
		OrientationEventListener(android::content::Context arg0, jint arg1);
		OrientationEventListener() = default;
		
		// Methods
		jboolean canDetectOrientation();
		void disable();
		void enable();
		void onOrientationChanged(jint arg0);
	};
} // namespace android::view

