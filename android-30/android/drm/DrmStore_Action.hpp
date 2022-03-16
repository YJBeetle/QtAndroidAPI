#pragma once

#include "../../JObject.hpp"

namespace android::drm
{
	class DrmStore_Action : public JObject
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
		template<typename ...Ts> explicit DrmStore_Action(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmStore_Action(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		DrmStore_Action();
		
		// Methods
	};
} // namespace android::drm

