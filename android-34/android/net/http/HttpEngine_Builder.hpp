#pragma once

#include "../../content/Context.def.hpp"
#include "./ConnectionMigrationOptions.def.hpp"
#include "./DnsOptions.def.hpp"
#include "./HttpEngine.def.hpp"
#include "./QuicOptions.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/Instant.def.hpp"
#include "./HttpEngine_Builder.def.hpp"

namespace android::net::http
{
	// Fields
	inline jint HttpEngine_Builder::HTTP_CACHE_DISABLED()
	{
		return getStaticField<jint>(
			"android.net.http.HttpEngine$Builder",
			"HTTP_CACHE_DISABLED"
		);
	}
	inline jint HttpEngine_Builder::HTTP_CACHE_DISK()
	{
		return getStaticField<jint>(
			"android.net.http.HttpEngine$Builder",
			"HTTP_CACHE_DISK"
		);
	}
	inline jint HttpEngine_Builder::HTTP_CACHE_DISK_NO_HTTP()
	{
		return getStaticField<jint>(
			"android.net.http.HttpEngine$Builder",
			"HTTP_CACHE_DISK_NO_HTTP"
		);
	}
	inline jint HttpEngine_Builder::HTTP_CACHE_IN_MEMORY()
	{
		return getStaticField<jint>(
			"android.net.http.HttpEngine$Builder",
			"HTTP_CACHE_IN_MEMORY"
		);
	}
	
	// Constructors
	inline HttpEngine_Builder::HttpEngine_Builder(android::content::Context arg0)
		: JObject(
			"android.net.http.HttpEngine$Builder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::net::http::HttpEngine_Builder HttpEngine_Builder::addPublicKeyPins(JString arg0, JObject arg1, jboolean arg2, java::time::Instant arg3) const
	{
		return callObjectMethod(
			"addPublicKeyPins",
			"(Ljava/lang/String;Ljava/util/Set;ZLjava/time/Instant;)Landroid/net/http/HttpEngine$Builder;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline android::net::http::HttpEngine_Builder HttpEngine_Builder::addQuicHint(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"addQuicHint",
			"(Ljava/lang/String;II)Landroid/net/http/HttpEngine$Builder;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline android::net::http::HttpEngine HttpEngine_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/http/HttpEngine;"
		);
	}
	inline JString HttpEngine_Builder::getDefaultUserAgent() const
	{
		return callObjectMethod(
			"getDefaultUserAgent",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::http::HttpEngine_Builder HttpEngine_Builder::setConnectionMigrationOptions(android::net::http::ConnectionMigrationOptions arg0) const
	{
		return callObjectMethod(
			"setConnectionMigrationOptions",
			"(Landroid/net/http/ConnectionMigrationOptions;)Landroid/net/http/HttpEngine$Builder;",
			arg0.object()
		);
	}
	inline android::net::http::HttpEngine_Builder HttpEngine_Builder::setDnsOptions(android::net::http::DnsOptions arg0) const
	{
		return callObjectMethod(
			"setDnsOptions",
			"(Landroid/net/http/DnsOptions;)Landroid/net/http/HttpEngine$Builder;",
			arg0.object()
		);
	}
	inline android::net::http::HttpEngine_Builder HttpEngine_Builder::setEnableBrotli(jboolean arg0) const
	{
		return callObjectMethod(
			"setEnableBrotli",
			"(Z)Landroid/net/http/HttpEngine$Builder;",
			arg0
		);
	}
	inline android::net::http::HttpEngine_Builder HttpEngine_Builder::setEnableHttp2(jboolean arg0) const
	{
		return callObjectMethod(
			"setEnableHttp2",
			"(Z)Landroid/net/http/HttpEngine$Builder;",
			arg0
		);
	}
	inline android::net::http::HttpEngine_Builder HttpEngine_Builder::setEnableHttpCache(jint arg0, jlong arg1) const
	{
		return callObjectMethod(
			"setEnableHttpCache",
			"(IJ)Landroid/net/http/HttpEngine$Builder;",
			arg0,
			arg1
		);
	}
	inline android::net::http::HttpEngine_Builder HttpEngine_Builder::setEnablePublicKeyPinningBypassForLocalTrustAnchors(jboolean arg0) const
	{
		return callObjectMethod(
			"setEnablePublicKeyPinningBypassForLocalTrustAnchors",
			"(Z)Landroid/net/http/HttpEngine$Builder;",
			arg0
		);
	}
	inline android::net::http::HttpEngine_Builder HttpEngine_Builder::setEnableQuic(jboolean arg0) const
	{
		return callObjectMethod(
			"setEnableQuic",
			"(Z)Landroid/net/http/HttpEngine$Builder;",
			arg0
		);
	}
	inline android::net::http::HttpEngine_Builder HttpEngine_Builder::setQuicOptions(android::net::http::QuicOptions arg0) const
	{
		return callObjectMethod(
			"setQuicOptions",
			"(Landroid/net/http/QuicOptions;)Landroid/net/http/HttpEngine$Builder;",
			arg0.object()
		);
	}
	inline android::net::http::HttpEngine_Builder HttpEngine_Builder::setStoragePath(JString arg0) const
	{
		return callObjectMethod(
			"setStoragePath",
			"(Ljava/lang/String;)Landroid/net/http/HttpEngine$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::http::HttpEngine_Builder HttpEngine_Builder::setUserAgent(JString arg0) const
	{
		return callObjectMethod(
			"setUserAgent",
			"(Ljava/lang/String;)Landroid/net/http/HttpEngine$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
