#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaFeature_HdrType : public __JniBaseClass
	{
	public:
		// Fields
		static jstring DOLBY_VISION();
		static jstring HDR10();
		static jstring HDR10_PLUS();
		static jstring HLG();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaFeature_HdrType(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaFeature_HdrType(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

