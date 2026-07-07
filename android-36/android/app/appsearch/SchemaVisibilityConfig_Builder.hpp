#pragma once

#include "./PackageIdentifier.def.hpp"
#include "./SchemaVisibilityConfig.def.hpp"
#include "./SchemaVisibilityConfig_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline SchemaVisibilityConfig_Builder::SchemaVisibilityConfig_Builder()
		: JObject(
			"android.app.appsearch.SchemaVisibilityConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::app::appsearch::SchemaVisibilityConfig_Builder SchemaVisibilityConfig_Builder::addAllowedPackage(android::app::appsearch::PackageIdentifier arg0) const
	{
		return callObjectMethod(
			"addAllowedPackage",
			"(Landroid/app/appsearch/PackageIdentifier;)Landroid/app/appsearch/SchemaVisibilityConfig$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SchemaVisibilityConfig_Builder SchemaVisibilityConfig_Builder::addRequiredPermissions(JObject arg0) const
	{
		return callObjectMethod(
			"addRequiredPermissions",
			"(Ljava/util/Set;)Landroid/app/appsearch/SchemaVisibilityConfig$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SchemaVisibilityConfig SchemaVisibilityConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/SchemaVisibilityConfig;"
		);
	}
	inline android::app::appsearch::SchemaVisibilityConfig_Builder SchemaVisibilityConfig_Builder::clearAllowedPackages() const
	{
		return callObjectMethod(
			"clearAllowedPackages",
			"()Landroid/app/appsearch/SchemaVisibilityConfig$Builder;"
		);
	}
	inline android::app::appsearch::SchemaVisibilityConfig_Builder SchemaVisibilityConfig_Builder::clearRequiredPermissions() const
	{
		return callObjectMethod(
			"clearRequiredPermissions",
			"()Landroid/app/appsearch/SchemaVisibilityConfig$Builder;"
		);
	}
	inline android::app::appsearch::SchemaVisibilityConfig_Builder SchemaVisibilityConfig_Builder::setPubliclyVisibleTargetPackage(android::app::appsearch::PackageIdentifier arg0) const
	{
		return callObjectMethod(
			"setPubliclyVisibleTargetPackage",
			"(Landroid/app/appsearch/PackageIdentifier;)Landroid/app/appsearch/SchemaVisibilityConfig$Builder;",
			arg0.object()
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
