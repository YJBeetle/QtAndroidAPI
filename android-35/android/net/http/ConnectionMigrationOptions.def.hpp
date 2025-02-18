#pragma once

#include "../../../JObject.hpp"

namespace android::net::http
{
	class ConnectionMigrationOptions : public JObject
	{
	public:
		// Fields
		static jint MIGRATION_OPTION_DISABLED();
		static jint MIGRATION_OPTION_ENABLED();
		static jint MIGRATION_OPTION_UNSPECIFIED();
		
		// QJniObject forward
		template<typename ...Ts> explicit ConnectionMigrationOptions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConnectionMigrationOptions(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getAllowNonDefaultNetworkUsage() const;
		jint getDefaultNetworkMigration() const;
		jint getPathDegradationMigration() const;
	};
} // namespace android::net::http

