#pragma once

#include "./MediaCasException.hpp"

class JString;

namespace android::media
{
	class MediaCasException_NotProvisionedException : public android::media::MediaCasException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCasException_NotProvisionedException(const char *className, const char *sig, Ts...agv) : android::media::MediaCasException(className, sig, std::forward<Ts>(agv)...) {}
		MediaCasException_NotProvisionedException(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

