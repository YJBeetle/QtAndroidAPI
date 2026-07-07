#pragma once

#include "../common/AdTechIdentifier.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../../JObject.hpp"
#include "./AdSelectionOutcome.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	inline android::adservices::adselection::AdSelectionOutcome AdSelectionOutcome::NO_OUTCOME()
	{
		return getStaticObjectField(
			"android.adservices.adselection.AdSelectionOutcome",
			"NO_OUTCOME",
			"Landroid/adservices/adselection/AdSelectionOutcome;"
		);
	}
	
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
	inline JObject AdSelectionOutcome::getComponentAdUris() const
	{
		return callObjectMethod(
			"getComponentAdUris",
			"()Ljava/util/List;"
		);
	}
	inline android::net::Uri AdSelectionOutcome::getRenderUri() const
	{
		return callObjectMethod(
			"getRenderUri",
			"()Landroid/net/Uri;"
		);
	}
	inline android::adservices::common::AdTechIdentifier AdSelectionOutcome::getWinningSeller() const
	{
		return callObjectMethod(
			"getWinningSeller",
			"()Landroid/adservices/common/AdTechIdentifier;"
		);
	}
	inline jboolean AdSelectionOutcome::hasOutcome() const
	{
		return callMethod<jboolean>(
			"hasOutcome",
			"()Z"
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
