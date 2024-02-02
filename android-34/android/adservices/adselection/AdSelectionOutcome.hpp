#pragma once

#include "../../net/Uri.def.hpp"
#include "../../../JObject.hpp"
#include "./AdSelectionOutcome.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean AdSelectionOutcome::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong AdSelectionOutcome::getAdSelectionId() const
	{
		return callMethod<jlong>(
			"getAdSelectionId",
			"()J"
		);
	}
	inline android::net::Uri AdSelectionOutcome::getRenderUri() const
	{
		return callObjectMethod(
			"getRenderUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jint AdSelectionOutcome::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
