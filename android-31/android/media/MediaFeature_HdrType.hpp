#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::media
{
	class MediaFeature_HdrType : public JObject
	{
	public:
		// Fields
		static JString DOLBY_VISION();
		static JString HDR10();
		static JString HDR10_PLUS();
		static JString HLG();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaFeature_HdrType(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaFeature_HdrType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

