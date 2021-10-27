#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

namespace android::view
{
	class OrientationListener : public __JniBaseClass
	{
	public:
		// Fields
		static jint ORIENTATION_UNKNOWN();
		
		OrientationListener(QAndroidJniObject obj);
		// Constructors
		OrientationListener(android::content::Context &arg0);
		OrientationListener(android::content::Context &arg0, jint &arg1);
		OrientationListener() = default;
		
		// Methods
		void disable();
		void enable();
		void onAccuracyChanged(jint arg0, jint arg1);
		void onOrientationChanged(jint arg0);
		void onSensorChanged(jint arg0, jfloatArray arg1);
	};
} // namespace android::view

