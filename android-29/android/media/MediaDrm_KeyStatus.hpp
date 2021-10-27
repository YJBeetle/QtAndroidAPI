#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaDrm_KeyStatus : public __JniBaseClass
	{
	public:
		// Fields
		static jint STATUS_EXPIRED();
		static jint STATUS_INTERNAL_ERROR();
		static jint STATUS_OUTPUT_NOT_ALLOWED();
		static jint STATUS_PENDING();
		static jint STATUS_USABLE();
		static jint STATUS_USABLE_IN_FUTURE();
		
		MediaDrm_KeyStatus(QAndroidJniObject obj);
		// Constructors
		MediaDrm_KeyStatus() = default;
		
		// Methods
		jbyteArray getKeyId();
		jint getStatusCode();
	};
} // namespace android::media

