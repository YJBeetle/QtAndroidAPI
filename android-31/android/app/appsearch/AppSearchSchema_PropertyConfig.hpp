#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema_PropertyConfig.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline jint AppSearchSchema_PropertyConfig::CARDINALITY_OPTIONAL()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$PropertyConfig",
			"CARDINALITY_OPTIONAL"
		);
	}
	inline jint AppSearchSchema_PropertyConfig::CARDINALITY_REPEATED()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$PropertyConfig",
			"CARDINALITY_REPEATED"
		);
	}
	inline jint AppSearchSchema_PropertyConfig::CARDINALITY_REQUIRED()
	{
		return getStaticField<jint>(
			"android.app.appsearch.AppSearchSchema$PropertyConfig",
			"CARDINALITY_REQUIRED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean AppSearchSchema_PropertyConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint AppSearchSchema_PropertyConfig::getCardinality() const
	{
		return callMethod<jint>(
			"getCardinality",
			"()I"
		);
	}
	inline JString AppSearchSchema_PropertyConfig::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint AppSearchSchema_PropertyConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AppSearchSchema_PropertyConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch

// Base class headers

