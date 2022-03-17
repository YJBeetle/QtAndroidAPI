#pragma once

#include "../../../JArray.hpp"
#include "./GetByDocumentIdRequest.def.hpp"
#include "../../../JString.hpp"
#include "./GetByDocumentIdRequest_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline GetByDocumentIdRequest_Builder::GetByDocumentIdRequest_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.GetByDocumentIdRequest$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::app::appsearch::GetByDocumentIdRequest_Builder GetByDocumentIdRequest_Builder::addIds(JArray arg0) const
	{
		return callObjectMethod(
			"addIds",
			"([Ljava/lang/String;)Landroid/app/appsearch/GetByDocumentIdRequest$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::app::appsearch::GetByDocumentIdRequest_Builder GetByDocumentIdRequest_Builder::addIds(JObject arg0) const
	{
		return callObjectMethod(
			"addIds",
			"(Ljava/util/Collection;)Landroid/app/appsearch/GetByDocumentIdRequest$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::GetByDocumentIdRequest_Builder GetByDocumentIdRequest_Builder::addProjection(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"addProjection",
			"(Ljava/lang/String;Ljava/util/Collection;)Landroid/app/appsearch/GetByDocumentIdRequest$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::app::appsearch::GetByDocumentIdRequest GetByDocumentIdRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/GetByDocumentIdRequest;"
		);
	}
} // namespace android::app::appsearch

// Base class headers

