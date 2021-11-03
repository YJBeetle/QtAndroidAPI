#include "../../JString.hpp"
#include "./UnsupportedSchemeException.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	UnsupportedSchemeException::UnsupportedSchemeException(QJniObject obj) : android::media::MediaDrmException(obj) {}
	
	// Constructors
	UnsupportedSchemeException::UnsupportedSchemeException(JString arg0)
		: android::media::MediaDrmException(
			"android.media.UnsupportedSchemeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media

