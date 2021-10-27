#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class R_transition : public __JniBaseClass
	{
	public:
		// Fields
		static jint explode();
		static jint fade();
		static jint move();
		static jint no_transition();
		static jint slide_bottom();
		static jint slide_left();
		static jint slide_right();
		static jint slide_top();
		
		R_transition(QAndroidJniObject obj);
		// Constructors
		R_transition();
		
		// Methods
	};
} // namespace android

