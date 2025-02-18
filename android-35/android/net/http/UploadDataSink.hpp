#pragma once

#include "../../../java/lang/Exception.def.hpp"
#include "./UploadDataSink.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	inline UploadDataSink::UploadDataSink()
		: JObject(
			"android.net.http.UploadDataSink",
			"()V"
		) {}
	
	// Methods
	inline void UploadDataSink::onReadError(java::lang::Exception arg0) const
	{
		callMethod<void>(
			"onReadError",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		);
	}
	inline void UploadDataSink::onReadSucceeded(jboolean arg0) const
	{
		callMethod<void>(
			"onReadSucceeded",
			"(Z)V",
			arg0
		);
	}
	inline void UploadDataSink::onRewindError(java::lang::Exception arg0) const
	{
		callMethod<void>(
			"onRewindError",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		);
	}
	inline void UploadDataSink::onRewindSucceeded() const
	{
		callMethod<void>(
			"onRewindSucceeded",
			"()V"
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
