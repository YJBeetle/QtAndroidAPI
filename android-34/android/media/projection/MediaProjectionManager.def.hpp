#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Intent;
}
namespace android::media::projection
{
	class MediaProjection;
}
namespace android::media::projection
{
	class MediaProjectionConfig;
}

namespace android::media::projection
{
	class MediaProjectionManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaProjectionManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaProjectionManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::content::Intent createScreenCaptureIntent() const;
		android::content::Intent createScreenCaptureIntent(android::media::projection::MediaProjectionConfig arg0) const;
		android::media::projection::MediaProjection getMediaProjection(jint arg0, android::content::Intent arg1) const;
	};
} // namespace android::media::projection

