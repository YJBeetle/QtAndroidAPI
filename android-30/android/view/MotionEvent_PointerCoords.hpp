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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MotionEvent_PointerCoords(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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

