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
	class BidirectionalStream : public JObject
	{
	public:
		// Fields
		static jint STREAM_PRIORITY_HIGHEST();
		static jint STREAM_PRIORITY_IDLE();
		static jint STREAM_PRIORITY_LOW();
		static jint STREAM_PRIORITY_LOWEST();
		static jint STREAM_PRIORITY_MEDIUM();
		
		// QJniObject forward
		template<typename ...Ts> explicit BidirectionalStream(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BidirectionalStream(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BidirectionalStream();
		
		// Methods
		void cancel() const;
		void flush() const;
		android::net::http::HeaderBlock getHeaders() const;
		JString getHttpMethod() const;
		jint getPriority() const;
		jint getTrafficStatsTag() const;
		jint getTrafficStatsUid() const;
		jboolean hasTrafficStatsTag() const;
		jboolean hasTrafficStatsUid() const;
		jboolean isDelayRequestHeadersUntilFirstFlushEnabled() const;
		jboolean isDone() const;
		void read(java::nio::ByteBuffer arg0) const;
		void start() const;
		void write(java::nio::ByteBuffer arg0, jboolean arg1) const;
	};
} // namespace android::net::http

