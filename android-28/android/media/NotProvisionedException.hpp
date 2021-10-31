#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "./MediaDrmException.hpp"


namespace android::media
{
	class NotProvisionedException : public android::media::MediaDrmException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NotProvisionedException(const char *className, const char *sig, Ts...agv) : android::media::MediaDrmException(className, sig, std::forward<Ts>(agv)...) {}
		NotProvisionedException(QJniObject obj);
		
		// Constructors
		NotProvisionedException(jstring arg0);
		
		// Methods
	};
} // namespace android::media

