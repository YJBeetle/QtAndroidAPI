#pragma once

#include "./MediaDrmException.def.hpp"

class JString;

namespace android::media
{
	class NotProvisionedException : public android::media::MediaDrmException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NotProvisionedException(const char *className, const char *sig, Ts...agv) : android::media::MediaDrmException(className, sig, std::forward<Ts>(agv)...) {}
		NotProvisionedException(QAndroidJniObject obj) : android::media::MediaDrmException(obj) {}
		
		// Constructors
		NotProvisionedException(JString arg0);
		
		// Methods
	};
} // namespace android::media

