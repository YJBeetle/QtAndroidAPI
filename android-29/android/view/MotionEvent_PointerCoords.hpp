#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::view
{
	class MotionEvent_PointerCoords : public __JniBaseClass
	{
	public:
		// Fields
		jfloat orientation();
		jfloat pressure();
		jfloat size();
		jfloat toolMajor();
		jfloat toolMinor();
		jfloat touchMajor();
		jfloat touchMinor();
		jfloat x();
		jfloat y();
		
		MotionEvent_PointerCoords(QAndroidJniObject obj);
		// Constructors
		MotionEvent_PointerCoords();
		MotionEvent_PointerCoords(android::view::MotionEvent_PointerCoords &arg0);
		
		// Methods
		void clear();
		void copyFrom(android::view::MotionEvent_PointerCoords arg0);
		jfloat getAxisValue(jint arg0);
		void setAxisValue(jint arg0, jfloat arg1);
	};
} // namespace android::view

