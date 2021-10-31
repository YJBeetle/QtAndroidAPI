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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SoundEffectConstants(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SoundEffectConstants(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getContantForFocusDirection(jint arg0);
	};
} // namespace android::view

