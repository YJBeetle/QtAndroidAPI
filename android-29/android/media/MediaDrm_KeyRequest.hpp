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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaDrm_KeyRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_KeyRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jbyteArray getData();
		jstring getDefaultUrl();
		jint getRequestType();
	};
} // namespace android::media

