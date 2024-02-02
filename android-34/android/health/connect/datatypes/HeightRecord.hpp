#pragma once

#include "./AggregationType.def.hpp"
#include "./units/Length.def.hpp"
#include "../../../../JObject.hpp"
#include "./HeightRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType HeightRecord::HEIGHT_AVG()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.HeightRecord",
			"HEIGHT_AVG",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType HeightRecord::HEIGHT_MAX()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.HeightRecord",
			"HEIGHT_MAX",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline android::health::connect::datatypes::AggregationType HeightRecord::HEIGHT_MIN()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.HeightRecord",
			"HEIGHT_MIN",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean HeightRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Length HeightRecord::getHeight() const
	{
		return callObjectMethod(
			"getHeight",
			"()Landroid/health/connect/datatypes/units/Length;"
		);
	}
	inline jint HeightRecord::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers
#include "./Record.hpp"
#include "./InstantRecord.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
