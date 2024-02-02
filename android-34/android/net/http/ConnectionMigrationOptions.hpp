#pragma once

#include "./ConnectionMigrationOptions.def.hpp"

namespace android::net::http
{
	// Fields
	inline jint ConnectionMigrationOptions::MIGRATION_OPTION_DISABLED()
	{
		return getStaticField<jint>(
			"android.net.http.ConnectionMigrationOptions",
			"MIGRATION_OPTION_DISABLED"
		);
	}
	inline jint ConnectionMigrationOptions::MIGRATION_OPTION_ENABLED()
	{
		return getStaticField<jint>(
			"android.net.http.ConnectionMigrationOptions",
			"MIGRATION_OPTION_ENABLED"
		);
	}
	inline jint ConnectionMigrationOptions::MIGRATION_OPTION_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.net.http.ConnectionMigrationOptions",
			"MIGRATION_OPTION_UNSPECIFIED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ConnectionMigrationOptions::getAllowNonDefaultNetworkUsage() const
	{
		return callMethod<jint>(
			"getAllowNonDefaultNetworkUsage",
			"()I"
		);
	}
	inline jint ConnectionMigrationOptions::getDefaultNetworkMigration() const
	{
		return callMethod<jint>(
			"getDefaultNetworkMigration",
			"()I"
		);
	}
	inline jint ConnectionMigrationOptions::getPathDegradationMigration() const
	{
		return callMethod<jint>(
			"getPathDegradationMigration",
			"()I"
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
