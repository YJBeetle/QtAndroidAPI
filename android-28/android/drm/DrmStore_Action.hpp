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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmStore_Action(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DrmStore_Action(QAndroidJniObject obj);
		
		// Constructors
		DrmStore_Action();
		
		// Methods
	};
} // namespace android::drm

