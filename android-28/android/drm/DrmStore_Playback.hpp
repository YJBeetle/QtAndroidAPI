#pragma once

#include "../../JObject.hpp"


namespace android::drm
{
	class DrmStore_Playback : public JObject
	{
	public:
		// Fields
		static jint PAUSE();
		static jint RESUME();
		static jint START();
		static jint STOP();
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmStore_Playback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmStore_Playback(QJniObject obj);
		
		// Constructors
		DrmStore_Playback();
		
		// Methods
	};
} // namespace android::drm

