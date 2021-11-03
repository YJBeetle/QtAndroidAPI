#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::media
{
	class MediaExtractor_MetricsConstants : public JObject
	{
	public:
		// Fields
		static JString FORMAT();
		static JString MIME_TYPE();
		static JString TRACKS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaExtractor_MetricsConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaExtractor_MetricsConstants(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

