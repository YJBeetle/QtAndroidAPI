#pragma once

#include "./HeaderBlock.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/nio/ByteBuffer.def.hpp"
#include "./BidirectionalStream.def.hpp"

namespace android::net::http
{
	// Fields
	inline jint BidirectionalStream::STREAM_PRIORITY_HIGHEST()
	{
		return getStaticField<jint>(
			"android.net.http.BidirectionalStream",
			"STREAM_PRIORITY_HIGHEST"
		);
	}
	inline jint BidirectionalStream::STREAM_PRIORITY_IDLE()
	{
		return getStaticField<jint>(
			"android.net.http.BidirectionalStream",
			"STREAM_PRIORITY_IDLE"
		);
	}
	inline jint BidirectionalStream::STREAM_PRIORITY_LOW()
	{
		return getStaticField<jint>(
			"android.net.http.BidirectionalStream",
			"STREAM_PRIORITY_LOW"
		);
	}
	inline jint BidirectionalStream::STREAM_PRIORITY_LOWEST()
	{
		return getStaticField<jint>(
			"android.net.http.BidirectionalStream",
			"STREAM_PRIORITY_LOWEST"
		);
	}
	inline jint BidirectionalStream::STREAM_PRIORITY_MEDIUM()
	{
		return getStaticField<jint>(
			"android.net.http.BidirectionalStream",
			"STREAM_PRIORITY_MEDIUM"
		);
	}
	
	// Constructors
	inline BidirectionalStream::BidirectionalStream()
		: JObject(
			"android.net.http.BidirectionalStream",
			"()V"
		) {}
	
	// Methods
	inline void BidirectionalStream::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline void BidirectionalStream::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline android::net::http::HeaderBlock BidirectionalStream::getHeaders() const
	{
		return callObjectMethod(
			"getHeaders",
			"()Landroid/net/http/HeaderBlock;"
		);
	}
	inline JString BidirectionalStream::getHttpMethod() const
	{
		return callObjectMethod(
			"getHttpMethod",
			"()Ljava/lang/String;"
		);
	}
	inline jint BidirectionalStream::getPriority() const
	{
		return callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	inline jint BidirectionalStream::getTrafficStatsTag() const
	{
		return callMethod<jint>(
			"getTrafficStatsTag",
			"()I"
		);
	}
	inline jint BidirectionalStream::getTrafficStatsUid() const
	{
		return callMethod<jint>(
			"getTrafficStatsUid",
			"()I"
		);
	}
	inline jboolean BidirectionalStream::hasTrafficStatsTag() const
	{
		return callMethod<jboolean>(
			"hasTrafficStatsTag",
			"()Z"
		);
	}
	inline jboolean BidirectionalStream::hasTrafficStatsUid() const
	{
		return callMethod<jboolean>(
			"hasTrafficStatsUid",
			"()Z"
		);
	}
	inline jboolean BidirectionalStream::isDelayRequestHeadersUntilFirstFlushEnabled() const
	{
		return callMethod<jboolean>(
			"isDelayRequestHeadersUntilFirstFlushEnabled",
			"()Z"
		);
	}
	inline jboolean BidirectionalStream::isDone() const
	{
		return callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	inline void BidirectionalStream::read(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"read",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	inline void BidirectionalStream::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	inline void BidirectionalStream::write(java::nio::ByteBuffer arg0, jboolean arg1) const
	{
		callMethod<void>(
			"write",
			"(Ljava/nio/ByteBuffer;Z)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
