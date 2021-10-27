#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::view
{
	class MotionEvent_PointerProperties : public __JniBaseClass
	{
	public:
		// Fields
		jint id();
		jint toolType();
		
		MotionEvent_PointerProperties(QAndroidJniObject obj);
		// Constructors
		MotionEvent_PointerProperties();
		MotionEvent_PointerProperties(android::view::MotionEvent_PointerProperties &arg0);
		
		// Methods
		void clear();
		void copyFrom(android::view::MotionEvent_PointerProperties arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::view

