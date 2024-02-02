#pragma once

#include "./ConnectionMigrationOptions.def.hpp"
#include "./ConnectionMigrationOptions_Builder.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	inline ConnectionMigrationOptions_Builder::ConnectionMigrationOptions_Builder()
		: JObject(
			"android.net.http.ConnectionMigrationOptions$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::http::ConnectionMigrationOptions ConnectionMigrationOptions_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/http/ConnectionMigrationOptions;"
		);
	}
	inline android::net::http::ConnectionMigrationOptions_Builder ConnectionMigrationOptions_Builder::setAllowNonDefaultNetworkUsage(jint arg0) const
	{
		return callObjectMethod(
			"setAllowNonDefaultNetworkUsage",
			"(I)Landroid/net/http/ConnectionMigrationOptions$Builder;",
			arg0
		);
	}
	inline android::net::http::ConnectionMigrationOptions_Builder ConnectionMigrationOptions_Builder::setDefaultNetworkMigration(jint arg0) const
	{
		return callObjectMethod(
			"setDefaultNetworkMigration",
			"(I)Landroid/net/http/ConnectionMigrationOptions$Builder;",
			arg0
		);
	}
	inline android::net::http::ConnectionMigrationOptions_Builder ConnectionMigrationOptions_Builder::setPathDegradationMigration(jint arg0) const
	{
		return callObjectMethod(
			"setPathDegradationMigration",
			"(I)Landroid/net/http/ConnectionMigrationOptions$Builder;",
			arg0
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
