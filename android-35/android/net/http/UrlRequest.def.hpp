#pragma once

#include "../../../JObject.hpp"

namespace android::net::http
{
	class HeaderBlock;
}
class JString;
namespace java::nio
{
	class ByteBuffer;
}

namespace android::net::http
{
	class UrlRequest : public JObject
	{
	public:
		// Fields
		static jint REQUEST_PRIORITY_HIGHEST();
		static jint REQUEST_PRIORITY_IDLE();
		static jint REQUEST_PRIORITY_LOW();
		static jint REQUEST_PRIORITY_LOWEST();
		static jint REQUEST_PRIORITY_MEDIUM();
		
		// QJniObject forward
		template<typename ...Ts> explicit UrlRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UrlRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void cancel() const;
		void followRedirect() const;
		android::net::http::HeaderBlock getHeaders() const;
		JString getHttpMethod() const;
		jint getPriority() const;
		void getStatus(JObject arg0) const;
		jint getTrafficStatsTag() const;
		jint getTrafficStatsUid() const;
		jboolean hasTrafficStatsTag() const;
		jboolean hasTrafficStatsUid() const;
		jboolean isCacheDisabled() const;
		jboolean isDirectExecutorAllowed() const;
		jboolean isDone() const;
		void read(java::nio::ByteBuffer arg0) const;
		void start() const;
	};
} // namespace android::net::http

