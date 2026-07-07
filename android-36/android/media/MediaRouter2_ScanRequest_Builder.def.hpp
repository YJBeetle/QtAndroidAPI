#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaRouter2_ScanRequest;
}

namespace android::media
{
	class MediaRouter2_ScanRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRouter2_ScanRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter2_ScanRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaRouter2_ScanRequest_Builder();
		
		// Methods
		android::media::MediaRouter2_ScanRequest build() const;
		android::media::MediaRouter2_ScanRequest_Builder setScreenOffScan(jboolean arg0) const;
	};
} // namespace android::media

