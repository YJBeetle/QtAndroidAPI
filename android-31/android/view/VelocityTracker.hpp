#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class MotionEvent;
}

namespace android::view
{
	class VelocityTracker : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VelocityTracker(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VelocityTracker(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::VelocityTracker obtain();
		void addMovement(android::view::MotionEvent arg0);
		void clear();
		void computeCurrentVelocity(jint arg0);
		void computeCurrentVelocity(jint arg0, jfloat arg1);
		jfloat getXVelocity();
		jfloat getXVelocity(jint arg0);
		jfloat getYVelocity();
		jfloat getYVelocity(jint arg0);
		void recycle();
	};
} // namespace android::view

