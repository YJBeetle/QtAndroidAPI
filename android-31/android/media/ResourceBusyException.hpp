#pragma once

#include "./MediaDrmException.hpp"

class JString;

namespace android::media
{
	class ResourceBusyException : public android::media::MediaDrmException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ResourceBusyException(const char *className, const char *sig, Ts...agv) : android::media::MediaDrmException(className, sig, std::forward<Ts>(agv)...) {}
		ResourceBusyException(QJniObject obj);
		
		// Constructors
		ResourceBusyException(JString arg0);
		
		// Methods
	};
} // namespace android::media

