#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::net::http
{
	class ConnectionMigrationOptions;
}
namespace android::net::http
{
	class DnsOptions;
}
namespace android::net::http
{
	class HttpEngine;
}
namespace android::net::http
{
	class QuicOptions;
}
class JString;
namespace java::time
{
	class Instant;
}

namespace android::net::http
{
	class HttpEngine_Builder : public JObject
	{
	public:
		// Fields
		static jint HTTP_CACHE_DISABLED();
		static jint HTTP_CACHE_DISK();
		static jint HTTP_CACHE_DISK_NO_HTTP();
		static jint HTTP_CACHE_IN_MEMORY();
		
		// QJniObject forward
		template<typename ...Ts> explicit HttpEngine_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HttpEngine_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		HttpEngine_Builder(android::content::Context arg0);
		
		// Methods
		android::net::http::HttpEngine_Builder addPublicKeyPins(JString arg0, JObject arg1, jboolean arg2, java::time::Instant arg3) const;
		android::net::http::HttpEngine_Builder addQuicHint(JString arg0, jint arg1, jint arg2) const;
		android::net::http::HttpEngine build() const;
		JString getDefaultUserAgent() const;
		android::net::http::HttpEngine_Builder setConnectionMigrationOptions(android::net::http::ConnectionMigrationOptions arg0) const;
		android::net::http::HttpEngine_Builder setDnsOptions(android::net::http::DnsOptions arg0) const;
		android::net::http::HttpEngine_Builder setEnableBrotli(jboolean arg0) const;
		android::net::http::HttpEngine_Builder setEnableHttp2(jboolean arg0) const;
		android::net::http::HttpEngine_Builder setEnableHttpCache(jint arg0, jlong arg1) const;
		android::net::http::HttpEngine_Builder setEnablePublicKeyPinningBypassForLocalTrustAnchors(jboolean arg0) const;
		android::net::http::HttpEngine_Builder setEnableQuic(jboolean arg0) const;
		android::net::http::HttpEngine_Builder setQuicOptions(android::net::http::QuicOptions arg0) const;
		android::net::http::HttpEngine_Builder setStoragePath(JString arg0) const;
		android::net::http::HttpEngine_Builder setUserAgent(JString arg0) const;
	};
} // namespace android::net::http

