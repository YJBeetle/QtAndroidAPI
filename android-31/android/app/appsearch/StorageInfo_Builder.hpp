#pragma once

#include "./StorageInfo.def.hpp"
#include "./StorageInfo_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline StorageInfo_Builder::StorageInfo_Builder()
		: JObject(
			"android.app.appsearch.StorageInfo$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::app::appsearch::StorageInfo StorageInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/StorageInfo;"
		);
	}
	inline android::app::appsearch::StorageInfo_Builder StorageInfo_Builder::setAliveDocumentsCount(jint arg0) const
	{
		return callObjectMethod(
			"setAliveDocumentsCount",
			"(I)Landroid/app/appsearch/StorageInfo$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::StorageInfo_Builder StorageInfo_Builder::setAliveNamespacesCount(jint arg0) const
	{
		return callObjectMethod(
			"setAliveNamespacesCount",
			"(I)Landroid/app/appsearch/StorageInfo$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::StorageInfo_Builder StorageInfo_Builder::setSizeBytes(jlong arg0) const
	{
		return callObjectMethod(
			"setSizeBytes",
			"(J)Landroid/app/appsearch/StorageInfo$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

// Base class headers

