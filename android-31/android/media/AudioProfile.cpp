#include "./AudioProfile.hpp"

namespace android::media
{
	// Fields
	jint AudioProfile::AUDIO_ENCAPSULATION_TYPE_IEC61937()
	{
		return getStaticField<jint>(
			"android.media.AudioProfile",
			"AUDIO_ENCAPSULATION_TYPE_IEC61937"
		);
	}
	jint AudioProfile::AUDIO_ENCAPSULATION_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.media.AudioProfile",
			"AUDIO_ENCAPSULATION_TYPE_NONE"
		);
	}
	
	// QJniObject forward
	AudioProfile::AudioProfile(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jintArray AudioProfile::getChannelIndexMasks()
	{
		return callObjectMethod(
			"getChannelIndexMasks",
			"()[I"
		).object<jintArray>();
	}
	jintArray AudioProfile::getChannelMasks()
	{
		return callObjectMethod(
			"getChannelMasks",
			"()[I"
		).object<jintArray>();
	}
	jint AudioProfile::getEncapsulationType()
	{
		return callMethod<jint>(
			"getEncapsulationType",
			"()I"
		);
	}
	jint AudioProfile::getFormat()
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	jintArray AudioProfile::getSampleRates()
	{
		return callObjectMethod(
			"getSampleRates",
			"()[I"
		).object<jintArray>();
	}
	jstring AudioProfile::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

