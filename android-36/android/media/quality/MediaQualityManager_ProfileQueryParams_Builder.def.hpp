#pragma once

#include "../../../JObject.hpp"

namespace android::media::quality
{
	class MediaQualityManager_ProfileQueryParams;
}

namespace android::media::quality
{
	class MediaQualityManager_ProfileQueryParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaQualityManager_ProfileQueryParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaQualityManager_ProfileQueryParams_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaQualityManager_ProfileQueryParams_Builder();
		
		// Methods
		android::media::quality::MediaQualityManager_ProfileQueryParams build() const;
		android::media::quality::MediaQualityManager_ProfileQueryParams_Builder setParametersIncluded(jboolean arg0) const;
	};
} // namespace android::media::quality

