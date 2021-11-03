#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class DrmInitData;
}
namespace android::media
{
	class MediaFormat;
}

namespace android::media
{
	class MediaParser_TrackData : public JObject
	{
	public:
		// Fields
		android::media::DrmInitData drmInitData();
		android::media::MediaFormat mediaFormat();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaParser_TrackData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaParser_TrackData(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

