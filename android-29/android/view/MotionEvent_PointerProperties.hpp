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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MotionEvent_PointerProperties(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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

