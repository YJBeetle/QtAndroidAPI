#pragma once

#include "../../../../JArray.hpp"
#include "./ObserverSpec.def.hpp"
#include "./ObserverSpec_Builder.def.hpp"

namespace android::app::appsearch::observer
{
	// Fields
	
	// Constructors
	inline ObserverSpec_Builder::ObserverSpec_Builder()
		: JObject(
			"android.app.appsearch.observer.ObserverSpec$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::app::appsearch::observer::ObserverSpec_Builder ObserverSpec_Builder::addFilterSchemas(JArray arg0) const
	{
		return callObjectMethod(
			"addFilterSchemas",
			"([Ljava/lang/String;)Landroid/app/appsearch/observer/ObserverSpec$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::app::appsearch::observer::ObserverSpec_Builder ObserverSpec_Builder::addFilterSchemas(JObject arg0) const
	{
		return callObjectMethod(
			"addFilterSchemas",
			"(Ljava/util/Collection;)Landroid/app/appsearch/observer/ObserverSpec$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::observer::ObserverSpec ObserverSpec_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/observer/ObserverSpec;"
		);
	}
} // namespace android::app::appsearch::observer

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch::observer;
#endif
