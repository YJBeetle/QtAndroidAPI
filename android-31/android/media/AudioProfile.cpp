#include "../../JIntArray.hpp"
#include "../../JString.hpp"
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
	
	// QAndroidJniObject forward
	AudioProfile::AudioProfile(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JIntArray AudioProfile::getChannelIndexMasks()
	{
		return callObjectMethod(
			"getChannelIndexMasks",
			"()[I"
		);
	}
	JIntArray AudioProfile::getChannelMasks()
	{
		return callObjectMethod(
			"getChannelMasks",
			"()[I"
		);
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
	JIntArray AudioProfile::getSampleRates()
	{
		return callObjectMethod(
			"getSampleRates",
			"()[I"
		);
	}
	JString AudioProfile::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

