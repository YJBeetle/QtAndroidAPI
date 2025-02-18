#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class Network;
}
namespace android::net::http
{
	class UploadDataProvider;
}
namespace android::net::http
{
	class UrlRequest;
}
class JString;

namespace android::net::http
{
	class UrlRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UrlRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UrlRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::net::http::UrlRequest_Builder addHeader(JString arg0, JString arg1) const;
		android::net::http::UrlRequest_Builder bindToNetwork(android::net::Network arg0) const;
		android::net::http::UrlRequest build() const;
		android::net::http::UrlRequest_Builder setCacheDisabled(jboolean arg0) const;
		android::net::http::UrlRequest_Builder setDirectExecutorAllowed(jboolean arg0) const;
		android::net::http::UrlRequest_Builder setHttpMethod(JString arg0) const;
		android::net::http::UrlRequest_Builder setPriority(jint arg0) const;
		android::net::http::UrlRequest_Builder setTrafficStatsTag(jint arg0) const;
		android::net::http::UrlRequest_Builder setTrafficStatsUid(jint arg0) const;
		android::net::http::UrlRequest_Builder setUploadDataProvider(android::net::http::UploadDataProvider arg0, JObject arg1) const;
	};
} // namespace android::net::http

