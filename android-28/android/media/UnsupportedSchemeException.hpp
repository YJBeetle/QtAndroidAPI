#pragma once

#include "./MediaDrmException.hpp"

class JString;

namespace android::media
{
	class UnsupportedSchemeException : public android::media::MediaDrmException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnsupportedSchemeException(const char *className, const char *sig, Ts...agv) : android::media::MediaDrmException(className, sig, std::forward<Ts>(agv)...) {}
		UnsupportedSchemeException(QAndroidJniObject obj) : android::media::MediaDrmException(obj) {}
		
		// Constructors
		UnsupportedSchemeException(JString arg0);
		
		// Methods
	};
} // namespace android::media

