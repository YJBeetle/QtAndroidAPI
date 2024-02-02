#pragma once

#include "./DeletionRequest.def.hpp"
#include "../../../java/time/Instant.def.hpp"
#include "./DeletionRequest_Builder.def.hpp"

namespace android::adservices::measurement
{
	// Fields
	
	// Constructors
	inline DeletionRequest_Builder::DeletionRequest_Builder()
		: JObject(
			"android.adservices.measurement.DeletionRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::measurement::DeletionRequest DeletionRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/measurement/DeletionRequest;"
		);
	}
	inline android::adservices::measurement::DeletionRequest_Builder DeletionRequest_Builder::setDeletionMode(jint arg0) const
	{
		return callObjectMethod(
			"setDeletionMode",
			"(I)Landroid/adservices/measurement/DeletionRequest$Builder;",
			arg0
		);
	}
	inline android::adservices::measurement::DeletionRequest_Builder DeletionRequest_Builder::setDomainUris(JObject arg0) const
	{
		return callObjectMethod(
			"setDomainUris",
			"(Ljava/util/List;)Landroid/adservices/measurement/DeletionRequest$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::measurement::DeletionRequest_Builder DeletionRequest_Builder::setEnd(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"setEnd",
			"(Ljava/time/Instant;)Landroid/adservices/measurement/DeletionRequest$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::measurement::DeletionRequest_Builder DeletionRequest_Builder::setMatchBehavior(jint arg0) const
	{
		return callObjectMethod(
			"setMatchBehavior",
			"(I)Landroid/adservices/measurement/DeletionRequest$Builder;",
			arg0
		);
	}
	inline android::adservices::measurement::DeletionRequest_Builder DeletionRequest_Builder::setOriginUris(JObject arg0) const
	{
		return callObjectMethod(
			"setOriginUris",
			"(Ljava/util/List;)Landroid/adservices/measurement/DeletionRequest$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::measurement::DeletionRequest_Builder DeletionRequest_Builder::setStart(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"setStart",
			"(Ljava/time/Instant;)Landroid/adservices/measurement/DeletionRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::measurement

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::measurement;
#endif
