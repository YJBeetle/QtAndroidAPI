#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class DrmStore_Action : public __JniBaseClass
	{
	public:
		// Fields
		static jint DEFAULT();
		static jint DISPLAY();
		static jint EXECUTE();
		static jint OUTPUT();
		static jint PLAY();
		static jint PREVIEW();
		static jint RINGTONE();
		static jint TRANSFER();
		
		DrmStore_Action(QAndroidJniObject obj);
		// Constructors
		DrmStore_Action();
		
		// Methods
	};
} // namespace android::drm

