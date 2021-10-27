#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class R_animator : public __JniBaseClass
	{
	public:
		// Fields
		static jint fade_in();
		static jint fade_out();
		
		R_animator(QAndroidJniObject obj);
		// Constructors
		R_animator();
		
		// Methods
	};
} // namespace android

