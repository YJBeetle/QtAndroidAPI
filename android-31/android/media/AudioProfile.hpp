#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class AudioProfile : public __JniBaseClass
	{
	public:
		// Fields
		static jint AUDIO_ENCAPSULATION_TYPE_IEC61937();
		static jint AUDIO_ENCAPSULATION_TYPE_NONE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioProfile(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioProfile(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jintArray getChannelIndexMasks();
		jintArray getChannelMasks();
		jint getEncapsulationType();
		jint getFormat();
		jintArray getSampleRates();
		jstring toString();
	};
} // namespace android::media

