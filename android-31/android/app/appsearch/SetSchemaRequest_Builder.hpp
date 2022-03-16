#pragma once

#include "../../../JArray.hpp"
#include "./Migrator.def.hpp"
#include "./PackageIdentifier.def.hpp"
#include "./SetSchemaRequest.def.hpp"
#include "../../../JString.hpp"
#include "./SetSchemaRequest_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline SetSchemaRequest_Builder::SetSchemaRequest_Builder()
		: JObject(
			"android.app.appsearch.SetSchemaRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::app::appsearch::SetSchemaRequest_Builder SetSchemaRequest_Builder::addSchemas(JArray arg0) const
	{
		return callObjectMethod(
			"addSchemas",
			"([Landroid/app/appsearch/AppSearchSchema;)Landroid/app/appsearch/SetSchemaRequest$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::app::appsearch::SetSchemaRequest_Builder SetSchemaRequest_Builder::addSchemas(JObject arg0) const
	{
		return callObjectMethod(
			"addSchemas",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SetSchemaRequest$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SetSchemaRequest SetSchemaRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/SetSchemaRequest;"
		);
	}
	inline android::app::appsearch::SetSchemaRequest_Builder SetSchemaRequest_Builder::setForceOverride(jboolean arg0) const
	{
		return callObjectMethod(
			"setForceOverride",
			"(Z)Landroid/app/appsearch/SetSchemaRequest$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SetSchemaRequest_Builder SetSchemaRequest_Builder::setMigrator(JString arg0, android::app::appsearch::Migrator arg1) const
	{
		return callObjectMethod(
			"setMigrator",
			"(Ljava/lang/String;Landroid/app/appsearch/Migrator;)Landroid/app/appsearch/SetSchemaRequest$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::app::appsearch::SetSchemaRequest_Builder SetSchemaRequest_Builder::setMigrators(JObject arg0) const
	{
		return callObjectMethod(
			"setMigrators",
			"(Ljava/util/Map;)Landroid/app/appsearch/SetSchemaRequest$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SetSchemaRequest_Builder SetSchemaRequest_Builder::setSchemaTypeDisplayedBySystem(JString arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"setSchemaTypeDisplayedBySystem",
			"(Ljava/lang/String;Z)Landroid/app/appsearch/SetSchemaRequest$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::app::appsearch::SetSchemaRequest_Builder SetSchemaRequest_Builder::setSchemaTypeVisibilityForPackage(JString arg0, jboolean arg1, android::app::appsearch::PackageIdentifier arg2) const
	{
		return callObjectMethod(
			"setSchemaTypeVisibilityForPackage",
			"(Ljava/lang/String;ZLandroid/app/appsearch/PackageIdentifier;)Landroid/app/appsearch/SetSchemaRequest$Builder;",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline android::app::appsearch::SetSchemaRequest_Builder SetSchemaRequest_Builder::setVersion(jint arg0) const
	{
		return callObjectMethod(
			"setVersion",
			"(I)Landroid/app/appsearch/SetSchemaRequest$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

// Base class headers

