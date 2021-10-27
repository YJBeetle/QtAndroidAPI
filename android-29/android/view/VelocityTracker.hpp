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
		
		VelocityTracker(QAndroidJniObject obj);
		// Constructors
		VelocityTracker() = default;
		
		// Methods
		static QAndroidJniObject obtain();
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

