#pragma once

#include "./SourceRegistrationRequest.def.hpp"
#include "../../view/InputEvent.def.hpp"
#include "./SourceRegistrationRequest_Builder.def.hpp"

namespace android::adservices::measurement
{
	// Fields
	
	// Constructors
	inline SourceRegistrationRequest_Builder::SourceRegistrationRequest_Builder(JObject arg0)
		: JObject(
			"android.adservices.measurement.SourceRegistrationRequest$Builder",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::adservices::measurement::SourceRegistrationRequest SourceRegistrationRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/measurement/SourceRegistrationRequest;"
		);
	}
	inline android::adservices::measurement::SourceRegistrationRequest_Builder SourceRegistrationRequest_Builder::setInputEvent(android::view::InputEvent arg0) const
	{
		return callObjectMethod(
			"setInputEvent",
			"(Landroid/view/InputEvent;)Landroid/adservices/measurement/SourceRegistrationRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::measurement

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::measurement;
#endif
