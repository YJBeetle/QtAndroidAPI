#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "./MediaCasException.hpp"


namespace android::media
{
	class MediaCasException_ResourceBusyException : public android::media::MediaCasException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCasException_ResourceBusyException(const char *className, const char *sig, Ts...agv) : android::media::MediaCasException(className, sig, std::forward<Ts>(agv)...) {}
		MediaCasException_ResourceBusyException(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

