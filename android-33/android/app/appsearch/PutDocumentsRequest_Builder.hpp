#pragma once

#include "../../../JArray.hpp"
#include "./PutDocumentsRequest.def.hpp"
#include "./PutDocumentsRequest_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline PutDocumentsRequest_Builder::PutDocumentsRequest_Builder()
		: JObject(
			"android.app.appsearch.PutDocumentsRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::app::appsearch::PutDocumentsRequest_Builder PutDocumentsRequest_Builder::addGenericDocuments(JArray arg0) const
	{
		return callObjectMethod(
			"addGenericDocuments",
			"([Landroid/app/appsearch/GenericDocument;)Landroid/app/appsearch/PutDocumentsRequest$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::app::appsearch::PutDocumentsRequest_Builder PutDocumentsRequest_Builder::addGenericDocuments(JObject arg0) const
	{
		return callObjectMethod(
			"addGenericDocuments",
			"(Ljava/util/Collection;)Landroid/app/appsearch/PutDocumentsRequest$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::PutDocumentsRequest PutDocumentsRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/PutDocumentsRequest;"
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
