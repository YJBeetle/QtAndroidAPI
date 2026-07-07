#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class Network;
}
namespace android::net::http
{
	class BidirectionalStream_Builder;
}
namespace android::net::http
{
	class UrlRequest_Builder;
}
class JString;
namespace java::net
{
	class URL;
}
namespace java::net
{
	class URLConnection;
}

namespace android::net::http
{
	class HttpEngine : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HttpEngine(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HttpEngine(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString getVersionString();
		void bindToNetwork(android::net::Network arg0) const;
		JObject createUrlStreamHandlerFactory() const;
		android::net::http::BidirectionalStream_Builder newBidirectionalStreamBuilder(JString arg0, JObject arg1, JObject arg2) const;
		android::net::http::UrlRequest_Builder newUrlRequestBuilder(JString arg0, JObject arg1, JObject arg2) const;
		java::net::URLConnection openConnection(java::net::URL arg0) const;
		void shutdown() const;
	};
} // namespace android::net::http

