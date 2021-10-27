#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::view
{
	class SoundEffectConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jint CLICK();
		static jint NAVIGATION_DOWN();
		static jint NAVIGATION_LEFT();
		static jint NAVIGATION_RIGHT();
		static jint NAVIGATION_UP();
		
		SoundEffectConstants(QAndroidJniObject obj);
		// Constructors
		SoundEffectConstants() = default;
		
		// Methods
		static jint getContantForFocusDirection(jint arg0);
	};
} // namespace android::view

