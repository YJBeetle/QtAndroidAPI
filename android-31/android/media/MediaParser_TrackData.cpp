#include "./DrmInitData.hpp"
#include "./MediaFormat.hpp"
#include "./MediaParser_TrackData.hpp"

namespace android::media
{
	// Fields
	android::media::DrmInitData MediaParser_TrackData::drmInitData()
	{
		return getObjectField(
			"drmInitData",
			"Landroid/media/DrmInitData;"
		);
	}
	android::media::MediaFormat MediaParser_TrackData::mediaFormat()
	{
		return getObjectField(
			"mediaFormat",
			"Landroid/media/MediaFormat;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::media

