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
	
	// QAndroidJniObject forward
	MediaParser_TrackData::MediaParser_TrackData(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

