#pragma once

#include "../../../JObject.hpp"

namespace java::time
{
	class Instant;
}

namespace android::security::identity
{
	class AuthenticationKeyMetadata : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AuthenticationKeyMetadata(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AuthenticationKeyMetadata(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		java::time::Instant getExpirationDate() const;
		jint getUsageCount() const;
	};
} // namespace android::security::identity

