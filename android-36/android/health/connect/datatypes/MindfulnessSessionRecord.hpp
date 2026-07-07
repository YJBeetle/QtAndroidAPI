#pragma once

#include "./AggregationType.def.hpp"
#include "../../../../JString.hpp"
#include "../../../../JObject.hpp"
#include "./MindfulnessSessionRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType MindfulnessSessionRecord::MINDFULNESS_DURATION_TOTAL()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.MindfulnessSessionRecord",
			"MINDFULNESS_DURATION_TOTAL",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	inline jint MindfulnessSessionRecord::MINDFULNESS_SESSION_TYPE_BREATHING()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MindfulnessSessionRecord",
			"MINDFULNESS_SESSION_TYPE_BREATHING"
		);
	}
	inline jint MindfulnessSessionRecord::MINDFULNESS_SESSION_TYPE_MEDITATION()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MindfulnessSessionRecord",
			"MINDFULNESS_SESSION_TYPE_MEDITATION"
		);
	}
	inline jint MindfulnessSessionRecord::MINDFULNESS_SESSION_TYPE_MOVEMENT()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MindfulnessSessionRecord",
			"MINDFULNESS_SESSION_TYPE_MOVEMENT"
		);
	}
	inline jint MindfulnessSessionRecord::MINDFULNESS_SESSION_TYPE_MUSIC()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MindfulnessSessionRecord",
			"MINDFULNESS_SESSION_TYPE_MUSIC"
		);
	}
	inline jint MindfulnessSessionRecord::MINDFULNESS_SESSION_TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MindfulnessSessionRecord",
			"MINDFULNESS_SESSION_TYPE_OTHER"
		);
	}
	inline jint MindfulnessSessionRecord::MINDFULNESS_SESSION_TYPE_UNGUIDED()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MindfulnessSessionRecord",
			"MINDFULNESS_SESSION_TYPE_UNGUIDED"
		);
	}
	inline jint MindfulnessSessionRecord::MINDFULNESS_SESSION_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MindfulnessSessionRecord",
			"MINDFULNESS_SESSION_TYPE_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean MindfulnessSessionRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint MindfulnessSessionRecord::getMindfulnessSessionType() const
	{
		return callMethod<jint>(
			"getMindfulnessSessionType",
			"()I"
		);
	}
	inline JString MindfulnessSessionRecord::getNotes() const
	{
		return callObjectMethod(
			"getNotes",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString MindfulnessSessionRecord::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint MindfulnessSessionRecord::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers
#include "./Record.hpp"
#include "./IntervalRecord.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
