#pragma once

#include "../../JObject.hpp"


namespace android::media
{
	class MediaFeature_HdrType : public JObject
	{
	public:
		// Fields
		static jstring DOLBY_VISION();
		static jstring HDR10();
		static jstring HDR10_PLUS();
		static jstring HLG();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaFeature_HdrType(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaFeature_HdrType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

