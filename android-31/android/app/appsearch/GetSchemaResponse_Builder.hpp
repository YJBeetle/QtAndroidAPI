#pragma once

#include "./AppSearchSchema.def.hpp"
#include "./GetSchemaResponse.def.hpp"
#include "./GetSchemaResponse_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline GetSchemaResponse_Builder::GetSchemaResponse_Builder()
		: JObject(
			"android.app.appsearch.GetSchemaResponse$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::app::appsearch::GetSchemaResponse_Builder GetSchemaResponse_Builder::addSchema(android::app::appsearch::AppSearchSchema arg0) const
	{
		return callObjectMethod(
			"addSchema",
			"(Landroid/app/appsearch/AppSearchSchema;)Landroid/app/appsearch/GetSchemaResponse$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::GetSchemaResponse GetSchemaResponse_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/GetSchemaResponse;"
		);
	}
	inline android::app::appsearch::GetSchemaResponse_Builder GetSchemaResponse_Builder::setVersion(jint arg0) const
	{
		return callObjectMethod(
			"setVersion",
			"(I)Landroid/app/appsearch/GetSchemaResponse$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

// Base class headers

