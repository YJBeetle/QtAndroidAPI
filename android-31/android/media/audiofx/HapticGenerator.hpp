#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./AudioEffect.hpp"


namespace android::media::audiofx
{
	class HapticGenerator : public android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HapticGenerator(const char *className, const char *sig, Ts...agv) : android::media::audiofx::AudioEffect(className, sig, std::forward<Ts>(agv)...) {}
		HapticGenerator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::audiofx::HapticGenerator create(jint arg0);
		static jboolean isAvailable();
		void close();
		void release();
		jint setEnabled(jboolean arg0);
	};
} // namespace android::media::audiofx
