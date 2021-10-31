#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaExtractor_MetricsConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FORMAT();
		static jstring MIME_TYPE();
		static jstring TRACKS();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaExtractor_MetricsConstants(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaExtractor_MetricsConstants(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

