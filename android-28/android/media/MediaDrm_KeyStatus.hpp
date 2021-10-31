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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaDrm_KeyStatus(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_KeyStatus(QJniObject obj);
		
		// Constructors
		
		// Methods
		jbyteArray getKeyId();
		jint getStatusCode();
	};
} // namespace android::media

