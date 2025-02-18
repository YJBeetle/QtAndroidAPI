#pragma once

#include "../../../JObject.hpp"

namespace android::net::http
{
	class HeaderBlock;
}
class JString;

namespace android::net::http
{
	class UrlResponseInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UrlResponseInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UrlResponseInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		UrlResponseInfo();
		
		// Methods
		android::net::http::HeaderBlock getHeaders() const;
		jint getHttpStatusCode() const;
		JString getHttpStatusText() const;
		JString getNegotiatedProtocol() const;
		jlong getReceivedByteCount() const;
		JString getUrl() const;
		JObject getUrlChain() const;
		jboolean wasCached() const;
	};
} // namespace android::net::http

