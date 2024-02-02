#pragma once

#include "../../../JObject.hpp"

namespace android::net::http
{
	class ConnectionMigrationOptions;
}

namespace android::net::http
{
	class ConnectionMigrationOptions_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConnectionMigrationOptions_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConnectionMigrationOptions_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ConnectionMigrationOptions_Builder();
		
		// Methods
		android::net::http::ConnectionMigrationOptions build() const;
		android::net::http::ConnectionMigrationOptions_Builder setAllowNonDefaultNetworkUsage(jint arg0) const;
		android::net::http::ConnectionMigrationOptions_Builder setDefaultNetworkMigration(jint arg0) const;
		android::net::http::ConnectionMigrationOptions_Builder setPathDegradationMigration(jint arg0) const;
	};
} // namespace android::net::http

