#pragma once

#include "./OverlayManagerTransaction.def.hpp"
#include "../../../JString.hpp"
#include "./OverlayManager.def.hpp"

namespace android::content::om
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void OverlayManager::commit(android::content::om::OverlayManagerTransaction arg0) const
	{
		callMethod<void>(
			"commit",
			"(Landroid/content/om/OverlayManagerTransaction;)V",
			arg0.object()
		);
	}
	inline JObject OverlayManager::getOverlayInfosForTarget(JString arg0) const
	{
		return callObjectMethod(
			"getOverlayInfosForTarget",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
} // namespace android::content::om

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::om;
#endif
