#pragma once

#include "./OverlayIdentifier.def.hpp"
#include "../../os/ParcelFileDescriptor.def.hpp"
#include "../../../JString.hpp"
#include "./FabricatedOverlay.def.hpp"

namespace android::content::om
{
	// Fields
	
	// Constructors
	inline FabricatedOverlay::FabricatedOverlay(JString arg0, JString arg1)
		: JObject(
			"android.content.om.FabricatedOverlay",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline android::content::om::OverlayIdentifier FabricatedOverlay::getIdentifier() const
	{
		return callObjectMethod(
			"getIdentifier",
			"()Landroid/content/om/OverlayIdentifier;"
		);
	}
	inline void FabricatedOverlay::setResourceValue(JString arg0, android::os::ParcelFileDescriptor arg1, JString arg2) const
	{
		callMethod<void>(
			"setResourceValue",
			"(Ljava/lang/String;Landroid/os/ParcelFileDescriptor;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline void FabricatedOverlay::setResourceValue(JString arg0, jint arg1, jint arg2, JString arg3) const
	{
		callMethod<void>(
			"setResourceValue",
			"(Ljava/lang/String;IILjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object<jstring>()
		);
	}
	inline void FabricatedOverlay::setResourceValue(JString arg0, jint arg1, JString arg2, JString arg3) const
	{
		callMethod<void>(
			"setResourceValue",
			"(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
	inline void FabricatedOverlay::setTargetOverlayable(JString arg0) const
	{
		callMethod<void>(
			"setTargetOverlayable",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::content::om

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::om;
#endif
