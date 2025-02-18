#pragma once

#include "../common/AdSelectionSignals.def.hpp"
#include "../common/AdTechIdentifier.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./AdSelectionFromOutcomesConfig.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	inline JObject AdSelectionFromOutcomesConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.adselection.AdSelectionFromOutcomesConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AdSelectionFromOutcomesConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AdSelectionFromOutcomesConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject AdSelectionFromOutcomesConfig::getAdSelectionIds() const
	{
		return callObjectMethod(
			"getAdSelectionIds",
			"()Ljava/util/List;"
		);
	}
	inline android::net::Uri AdSelectionFromOutcomesConfig::getSelectionLogicUri() const
	{
		return callObjectMethod(
			"getSelectionLogicUri",
			"()Landroid/net/Uri;"
		);
	}
	inline android::adservices::common::AdSelectionSignals AdSelectionFromOutcomesConfig::getSelectionSignals() const
	{
		return callObjectMethod(
			"getSelectionSignals",
			"()Landroid/adservices/common/AdSelectionSignals;"
		);
	}
	inline android::adservices::common::AdTechIdentifier AdSelectionFromOutcomesConfig::getSeller() const
	{
		return callObjectMethod(
			"getSeller",
			"()Landroid/adservices/common/AdTechIdentifier;"
		);
	}
	inline jint AdSelectionFromOutcomesConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void AdSelectionFromOutcomesConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
