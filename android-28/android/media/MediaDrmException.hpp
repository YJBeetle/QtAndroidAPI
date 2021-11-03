#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::media
{
	class MediaDrmException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaDrmException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrmException(QAndroidJniObject obj);
		
		// Constructors
		MediaDrmException(jstring arg0);
		
		// Methods
	};
} // namespace android::media

