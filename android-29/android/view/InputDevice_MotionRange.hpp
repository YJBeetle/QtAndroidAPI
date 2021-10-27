#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::view
{
	class InputDevice_MotionRange : public __JniBaseClass
	{
	public:
		// Fields
		
		InputDevice_MotionRange(QAndroidJniObject obj);
		// Constructors
		InputDevice_MotionRange() = default;
		
		// Methods
		jint getAxis();
		jfloat getFlat();
		jfloat getFuzz();
		jfloat getMax();
		jfloat getMin();
		jfloat getRange();
		jfloat getResolution();
		jint getSource();
		jboolean isFromSource(jint arg0);
	};
} // namespace android::view

