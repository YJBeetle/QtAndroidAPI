#pragma once

#include "./AssociationRequest.def.hpp"
#include "./AssociationRequest_Builder.def.hpp"

namespace android::companion
{
	// Fields
	
	// Constructors
	inline AssociationRequest_Builder::AssociationRequest_Builder()
		: JObject(
			"android.companion.AssociationRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::companion::AssociationRequest_Builder AssociationRequest_Builder::addDeviceFilter(JObject arg0) const
	{
		return callObjectMethod(
			"addDeviceFilter",
			"(Landroid/companion/DeviceFilter;)Landroid/companion/AssociationRequest$Builder;",
			arg0.object()
		);
	}
	inline android::companion::AssociationRequest AssociationRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/companion/AssociationRequest;"
		);
	}
	inline android::companion::AssociationRequest_Builder AssociationRequest_Builder::setSingleDevice(jboolean arg0) const
	{
		return callObjectMethod(
			"setSingleDevice",
			"(Z)Landroid/companion/AssociationRequest$Builder;",
			arg0
		);
	}
} // namespace android::companion

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::companion;
#endif
