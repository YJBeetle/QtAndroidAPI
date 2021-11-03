#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::media
{
	class MediaCodec_MetricsConstants : public JObject
	{
	public:
		// Fields
		static JString CODEC();
		static JString ENCODER();
		static JString HEIGHT();
		static JString MIME_TYPE();
		static JString MODE();
		static JString MODE_AUDIO();
		static JString MODE_VIDEO();
		static JString ROTATION();
		static JString SECURE();
		static JString WIDTH();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCodec_MetricsConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_MetricsConstants(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

