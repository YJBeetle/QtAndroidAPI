#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class PackageIdentifier;
}
namespace android::app::appsearch
{
	class SchemaVisibilityConfig;
}

namespace android::app::appsearch
{
	class SchemaVisibilityConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SchemaVisibilityConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SchemaVisibilityConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SchemaVisibilityConfig_Builder();
		
		// Methods
		android::app::appsearch::SchemaVisibilityConfig_Builder addAllowedPackage(android::app::appsearch::PackageIdentifier arg0) const;
		android::app::appsearch::SchemaVisibilityConfig_Builder addRequiredPermissions(JObject arg0) const;
		android::app::appsearch::SchemaVisibilityConfig build() const;
		android::app::appsearch::SchemaVisibilityConfig_Builder clearAllowedPackages() const;
		android::app::appsearch::SchemaVisibilityConfig_Builder clearRequiredPermissions() const;
		android::app::appsearch::SchemaVisibilityConfig_Builder setPubliclyVisibleTargetPackage(android::app::appsearch::PackageIdentifier arg0) const;
	};
} // namespace android::app::appsearch

