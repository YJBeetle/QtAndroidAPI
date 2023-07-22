#pragma once

#include "./GenericDocument.def.hpp"
#include "./Migrator.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline Migrator::Migrator()
		: JObject(
			"android.app.appsearch.Migrator",
			"()V"
		) {}
	
	// Methods
	inline android::app::appsearch::GenericDocument Migrator::onDowngrade(jint arg0, jint arg1, android::app::appsearch::GenericDocument arg2) const
	{
		return callObjectMethod(
			"onDowngrade",
			"(IILandroid/app/appsearch/GenericDocument;)Landroid/app/appsearch/GenericDocument;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline android::app::appsearch::GenericDocument Migrator::onUpgrade(jint arg0, jint arg1, android::app::appsearch::GenericDocument arg2) const
	{
		return callObjectMethod(
			"onUpgrade",
			"(IILandroid/app/appsearch/GenericDocument;)Landroid/app/appsearch/GenericDocument;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jboolean Migrator::shouldMigrate(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"shouldMigrate",
			"(II)Z",
			arg0,
			arg1
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
