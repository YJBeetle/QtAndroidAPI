#pragma once

#include "./UploadDataSink.def.hpp"
#include "../../../java/nio/ByteBuffer.def.hpp"
#include "./UploadDataProvider.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	inline UploadDataProvider::UploadDataProvider()
		: JObject(
			"android.net.http.UploadDataProvider",
			"()V"
		) {}
	
	// Methods
	inline void UploadDataProvider::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jlong UploadDataProvider::getLength() const
	{
		return callMethod<jlong>(
			"getLength",
			"()J"
		);
	}
	inline void UploadDataProvider::read(android::net::http::UploadDataSink arg0, java::nio::ByteBuffer arg1) const
	{
		callMethod<void>(
			"read",
			"(Landroid/net/http/UploadDataSink;Ljava/nio/ByteBuffer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void UploadDataProvider::rewind(android::net::http::UploadDataSink arg0) const
	{
		callMethod<void>(
			"rewind",
			"(Landroid/net/http/UploadDataSink;)V",
			arg0.object()
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
