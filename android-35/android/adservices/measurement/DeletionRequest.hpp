#pragma once

#include "../../../java/time/Instant.def.hpp"
#include "./DeletionRequest.def.hpp"

namespace android::adservices::measurement
{
	// Fields
	inline jint DeletionRequest::DELETION_MODE_ALL()
	{
		return getStaticField<jint>(
			"android.adservices.measurement.DeletionRequest",
			"DELETION_MODE_ALL"
		);
	}
	inline jint DeletionRequest::DELETION_MODE_EXCLUDE_INTERNAL_DATA()
	{
		return getStaticField<jint>(
			"android.adservices.measurement.DeletionRequest",
			"DELETION_MODE_EXCLUDE_INTERNAL_DATA"
		);
	}
	inline jint DeletionRequest::MATCH_BEHAVIOR_DELETE()
	{
		return getStaticField<jint>(
			"android.adservices.measurement.DeletionRequest",
			"MATCH_BEHAVIOR_DELETE"
		);
	}
	inline jint DeletionRequest::MATCH_BEHAVIOR_PRESERVE()
	{
		return getStaticField<jint>(
			"android.adservices.measurement.DeletionRequest",
			"MATCH_BEHAVIOR_PRESERVE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint DeletionRequest::getDeletionMode() const
	{
		return callMethod<jint>(
			"getDeletionMode",
			"()I"
		);
	}
	inline JObject DeletionRequest::getDomainUris() const
	{
		return callObjectMethod(
			"getDomainUris",
			"()Ljava/util/List;"
		);
	}
	inline java::time::Instant DeletionRequest::getEnd() const
	{
		return callObjectMethod(
			"getEnd",
			"()Ljava/time/Instant;"
		);
	}
	inline jint DeletionRequest::getMatchBehavior() const
	{
		return callMethod<jint>(
			"getMatchBehavior",
			"()I"
		);
	}
	inline JObject DeletionRequest::getOriginUris() const
	{
		return callObjectMethod(
			"getOriginUris",
			"()Ljava/util/List;"
		);
	}
	inline java::time::Instant DeletionRequest::getStart() const
	{
		return callObjectMethod(
			"getStart",
			"()Ljava/time/Instant;"
		);
	}
} // namespace android::adservices::measurement

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::measurement;
#endif
