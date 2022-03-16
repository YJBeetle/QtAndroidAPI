#include "../../JArray.hpp"
#include "../os/Parcel.hpp"
#include "./MediaPlayer_DrmInfo.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject MediaPlayer_DrmInfo::getPssh() const
	{
		return callObjectMethod(
			"getPssh",
			"()Ljava/util/Map;"
		);
	}
	JArray MediaPlayer_DrmInfo::getSupportedSchemes() const
	{
		return callObjectMethod(
			"getSupportedSchemes",
			"()[Ljava/util/UUID;"
		);
	}
} // namespace android::media

