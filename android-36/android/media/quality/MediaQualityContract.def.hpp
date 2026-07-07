#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::media::quality
{
	class MediaQualityContract : public JObject
	{
	public:
		// Fields
		static JString LEVEL_HIGH();
		static JString LEVEL_LOW();
		static JString LEVEL_MEDIUM();
		static JString LEVEL_OFF();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaQualityContract(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaQualityContract(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::media::quality

