#include "../../../JString.hpp"
#include "./TvContract_Channels_Logo.hpp"

namespace android::media::tv
{
	// Fields
	JString TvContract_Channels_Logo::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels$Logo",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	TvContract_Channels_Logo::TvContract_Channels_Logo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media::tv

