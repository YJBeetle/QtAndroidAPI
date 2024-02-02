#pragma once

#include "../../../JObject.hpp"

class JString;
namespace java::time
{
	class Duration;
}

namespace android::net::http
{
	class QuicOptions : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit QuicOptions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		QuicOptions(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getAllowedQuicHosts() const;
		JString getHandshakeUserAgent() const;
		java::time::Duration getIdleConnectionTimeout() const;
		jint getInMemoryServerConfigsCacheSize() const;
		jboolean hasInMemoryServerConfigsCacheSize() const;
	};
} // namespace android::net::http

