#include "../../JArray.hpp"
#include "../os/Parcel.hpp"
#include "./MediaPlayer_DrmInfo.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaPlayer_DrmInfo::MediaPlayer_DrmInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject MediaPlayer_DrmInfo::getPssh()
	{
		return callObjectMethod(
			"getPssh",
			"()Ljava/util/Map;"
		);
	}
	JArray MediaPlayer_DrmInfo::getSupportedSchemes()
	{
		return callObjectMethod(
			"getSupportedSchemes",
			"()[Ljava/util/UUID;"
		);
	}
} // namespace android::media

