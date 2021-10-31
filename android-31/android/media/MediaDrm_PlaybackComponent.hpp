#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaDrm;
}
namespace android::media::metrics
{
	class LogSessionId;
}

namespace android::media
{
	class MediaDrm_PlaybackComponent : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaDrm_PlaybackComponent(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_PlaybackComponent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::media::metrics::LogSessionId getLogSessionId();
		void setLogSessionId(android::media::metrics::LogSessionId arg0);
	};
} // namespace android::media

