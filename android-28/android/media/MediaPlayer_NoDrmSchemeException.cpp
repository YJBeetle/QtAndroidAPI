#include "../../JString.hpp"
#include "./MediaPlayer_NoDrmSchemeException.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaPlayer_NoDrmSchemeException::MediaPlayer_NoDrmSchemeException(QJniObject obj) : android::media::MediaDrmException(obj) {}
	
	// Constructors
	MediaPlayer_NoDrmSchemeException::MediaPlayer_NoDrmSchemeException(JString arg0)
		: android::media::MediaDrmException(
			"android.media.MediaPlayer$NoDrmSchemeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media

