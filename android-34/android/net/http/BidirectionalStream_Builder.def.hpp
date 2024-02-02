#pragma once

#include "../../../JObject.hpp"

namespace android::net::http
{
	class BidirectionalStream;
}
class JString;

namespace android::net::http
{
	class BidirectionalStream_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BidirectionalStream_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BidirectionalStream_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BidirectionalStream_Builder();
		
		// Methods
		android::net::http::BidirectionalStream_Builder addHeader(JString arg0, JString arg1) const;
		android::net::http::BidirectionalStream build() const;
		android::net::http::BidirectionalStream_Builder setDelayRequestHeadersUntilFirstFlushEnabled(jboolean arg0) const;
		android::net::http::BidirectionalStream_Builder setHttpMethod(JString arg0) const;
		android::net::http::BidirectionalStream_Builder setPriority(jint arg0) const;
		android::net::http::BidirectionalStream_Builder setTrafficStatsTag(jint arg0) const;
		android::net::http::BidirectionalStream_Builder setTrafficStatsUid(jint arg0) const;
	};
} // namespace android::net::http

