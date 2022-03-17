#pragma once

#include "../../../JArray.hpp"
#include "./RemoveByDocumentIdRequest.def.hpp"
#include "../../../JString.hpp"
#include "./RemoveByDocumentIdRequest_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline RemoveByDocumentIdRequest_Builder::RemoveByDocumentIdRequest_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.RemoveByDocumentIdRequest$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::app::appsearch::RemoveByDocumentIdRequest_Builder RemoveByDocumentIdRequest_Builder::addIds(JArray arg0) const
	{
		return callObjectMethod(
			"addIds",
			"([Ljava/lang/String;)Landroid/app/appsearch/RemoveByDocumentIdRequest$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::app::appsearch::RemoveByDocumentIdRequest_Builder RemoveByDocumentIdRequest_Builder::addIds(JObject arg0) const
	{
		return callObjectMethod(
			"addIds",
			"(Ljava/util/Collection;)Landroid/app/appsearch/RemoveByDocumentIdRequest$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::RemoveByDocumentIdRequest RemoveByDocumentIdRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/RemoveByDocumentIdRequest;"
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
