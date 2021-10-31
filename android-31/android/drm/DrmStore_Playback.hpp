#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class DrmStore_Playback : public __JniBaseClass
	{
	public:
		// Fields
		static jint PAUSE();
		static jint RESUME();
		static jint START();
		static jint STOP();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmStore_Playback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DrmStore_Playback(QAndroidJniObject obj);
		
		// Constructors
		DrmStore_Playback();
		
		// Methods
	};
} // namespace android::drm

