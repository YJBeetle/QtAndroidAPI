#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
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
	class MediaProjectionManager : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaProjectionManager(QAndroidJniObject obj);
		// Constructors
		MediaProjectionManager() = default;
		
		// Methods
		QAndroidJniObject createScreenCaptureIntent();
		QAndroidJniObject getMediaProjection(jint arg0, android::content::Intent arg1);
	};
} // namespace android::media::projection

