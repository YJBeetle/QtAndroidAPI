#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::media
{
	class MediaDrm_SessionException : public java::lang::RuntimeException
	{
	public:
		// Fields
		static jint ERROR_RESOURCE_CONTENTION();
		static jint ERROR_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaDrm_SessionException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_SessionException(QAndroidJniObject obj);
		
		// Constructors
		MediaDrm_SessionException(jint arg0, jstring arg1);
		
		// Methods
		jint getErrorCode();
		jboolean isTransient();
	};
} // namespace android::media

