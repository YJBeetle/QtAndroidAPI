#pragma once

#include "../../java/io/InputStream.def.hpp"
#include "../../JString.hpp"
#include "./WebResourceResponse.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline WebResourceResponse::WebResourceResponse(JString arg0, JString arg1, java::io::InputStream arg2)
		: JObject(
			"android.webkit.WebResourceResponse",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/io/InputStream;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	inline WebResourceResponse::WebResourceResponse(JString arg0, JString arg1, jint arg2, JString arg3, JObject arg4, java::io::InputStream arg5)
		: JObject(
			"android.webkit.WebResourceResponse",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/util/Map;Ljava/io/InputStream;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jstring>(),
			arg4.object(),
			arg5.object()
		) {}
	
	// Methods
	inline java::io::InputStream WebResourceResponse::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Ljava/io/InputStream;"
		);
	}
	inline JString WebResourceResponse::getEncoding() const
	{
		return callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		);
	}
	inline JString WebResourceResponse::getMimeType() const
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		);
	}
	inline JString WebResourceResponse::getReasonPhrase() const
	{
		return callObjectMethod(
			"getReasonPhrase",
			"()Ljava/lang/String;"
		);
	}
	inline JObject WebResourceResponse::getResponseHeaders() const
	{
		return callObjectMethod(
			"getResponseHeaders",
			"()Ljava/util/Map;"
		);
	}
	inline jint WebResourceResponse::getStatusCode() const
	{
		return callMethod<jint>(
			"getStatusCode",
			"()I"
		);
	}
	inline void WebResourceResponse::setData(java::io::InputStream arg0) const
	{
		callMethod<void>(
			"setData",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	inline void WebResourceResponse::setEncoding(JString arg0) const
	{
		callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WebResourceResponse::setMimeType(JString arg0) const
	{
		callMethod<void>(
			"setMimeType",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WebResourceResponse::setResponseHeaders(JObject arg0) const
	{
		callMethod<void>(
			"setResponseHeaders",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	inline void WebResourceResponse::setStatusCodeAndReasonPhrase(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"setStatusCodeAndReasonPhrase",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
} // namespace android::webkit

// Base class headers

