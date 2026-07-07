#pragma once

#include "../../../JObject.hpp"

namespace android::net::http
{
	class QuicOptions;
}
class JString;
namespace java::time
{
	class Duration;
}

namespace android::net::http
{
	class QuicOptions_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit QuicOptions_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		QuicOptions_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		QuicOptions_Builder();
		
		// Methods
		android::net::http::QuicOptions_Builder addAllowedQuicHost(JString arg0) const;
		android::net::http::QuicOptions build() const;
		android::net::http::QuicOptions_Builder setHandshakeUserAgent(JString arg0) const;
		android::net::http::QuicOptions_Builder setIdleConnectionTimeout(java::time::Duration arg0) const;
		android::net::http::QuicOptions_Builder setInMemoryServerConfigsCacheSize(jint arg0) const;
	};
} // namespace android::net::http

