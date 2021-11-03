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
	class MediaProjectionManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaProjectionManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaProjectionManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::content::Intent createScreenCaptureIntent();
		android::media::projection::MediaProjection getMediaProjection(jint arg0, android::content::Intent arg1);
	};
} // namespace android::media::projection

