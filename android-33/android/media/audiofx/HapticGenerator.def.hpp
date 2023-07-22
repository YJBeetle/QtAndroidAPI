#pragma once

#include "./AudioEffect.def.hpp"

namespace android::media::audiofx
{
	class HapticGenerator : public android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HapticGenerator(const char *className, const char *sig, Ts...agv) : android::media::audiofx::AudioEffect(className, sig, std::forward<Ts>(agv)...) {}
		HapticGenerator(QAndroidJniObject obj) : android::media::audiofx::AudioEffect(obj) {}
		
		// Constructors
		
		// Methods
		static android::media::audiofx::HapticGenerator create(jint arg0);
		static jboolean isAvailable();
		void close() const;
		void release() const;
		jint setEnabled(jboolean arg0) const;
	};
} // namespace android::media::audiofx

