#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class SoundEffectConstants : public JObject
	{
	public:
		// Fields
		static jint CLICK();
		static jint NAVIGATION_DOWN();
		static jint NAVIGATION_LEFT();
		static jint NAVIGATION_RIGHT();
		static jint NAVIGATION_UP();
		
		// QJniObject forward
		template<typename ...Ts> explicit SoundEffectConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SoundEffectConstants(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getContantForFocusDirection(jint arg0);
	};
} // namespace android::view

