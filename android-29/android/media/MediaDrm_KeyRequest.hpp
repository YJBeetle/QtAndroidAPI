#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaDrm_KeyRequest : public __JniBaseClass
	{
	public:
		// Fields
		static jint REQUEST_TYPE_INITIAL();
		static jint REQUEST_TYPE_NONE();
		static jint REQUEST_TYPE_RELEASE();
		static jint REQUEST_TYPE_RENEWAL();
		static jint REQUEST_TYPE_UPDATE();
		
		MediaDrm_KeyRequest(QAndroidJniObject obj);
		// Constructors
		MediaDrm_KeyRequest() = default;
		
		// Methods
		jbyteArray getData();
		jstring getDefaultUrl();
		jint getRequestType();
	};
} // namespace android::media

