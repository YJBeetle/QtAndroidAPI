#pragma once

#include "./AudioMetadata_Format.def.hpp"

namespace android::media
{
	// Fields
	inline JObject AudioMetadata_Format::KEY_ATMOS_PRESENT()
	{
		return getStaticObjectField(
			"android.media.AudioMetadata$Format",
			"KEY_ATMOS_PRESENT",
			"Landroid/media/AudioMetadata$Key;"
		);
	}
	inline JObject AudioMetadata_Format::KEY_AUDIO_ENCODING()
	{
		return getStaticObjectField(
			"android.media.AudioMetadata$Format",
			"KEY_AUDIO_ENCODING",
			"Landroid/media/AudioMetadata$Key;"
		);
	}
	inline JObject AudioMetadata_Format::KEY_BIT_RATE()
	{
		return getStaticObjectField(
			"android.media.AudioMetadata$Format",
			"KEY_BIT_RATE",
			"Landroid/media/AudioMetadata$Key;"
		);
	}
	inline JObject AudioMetadata_Format::KEY_BIT_WIDTH()
	{
		return getStaticObjectField(
			"android.media.AudioMetadata$Format",
			"KEY_BIT_WIDTH",
			"Landroid/media/AudioMetadata$Key;"
		);
	}
	inline JObject AudioMetadata_Format::KEY_CHANNEL_MASK()
	{
		return getStaticObjectField(
			"android.media.AudioMetadata$Format",
			"KEY_CHANNEL_MASK",
			"Landroid/media/AudioMetadata$Key;"
		);
	}
	inline JObject AudioMetadata_Format::KEY_MIME()
	{
		return getStaticObjectField(
			"android.media.AudioMetadata$Format",
			"KEY_MIME",
			"Landroid/media/AudioMetadata$Key;"
		);
	}
	inline JObject AudioMetadata_Format::KEY_SAMPLE_RATE()
	{
		return getStaticObjectField(
			"android.media.AudioMetadata$Format",
			"KEY_SAMPLE_RATE",
			"Landroid/media/AudioMetadata$Key;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
