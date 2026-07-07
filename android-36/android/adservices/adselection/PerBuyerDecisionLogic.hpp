#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./PerBuyerDecisionLogic.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	inline JObject PerBuyerDecisionLogic::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.adselection.PerBuyerDecisionLogic",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline android::adservices::adselection::PerBuyerDecisionLogic PerBuyerDecisionLogic::EMPTY()
	{
		return getStaticObjectField(
			"android.adservices.adselection.PerBuyerDecisionLogic",
			"EMPTY",
			"Landroid/adservices/adselection/PerBuyerDecisionLogic;"
		);
	}
	
	// Constructors
	inline PerBuyerDecisionLogic::PerBuyerDecisionLogic(JObject arg0)
		: JObject(
			"android.adservices.adselection.PerBuyerDecisionLogic",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint PerBuyerDecisionLogic::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PerBuyerDecisionLogic::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject PerBuyerDecisionLogic::getPerBuyerLogicMap() const
	{
		return callObjectMethod(
			"getPerBuyerLogicMap",
			"()Ljava/util/Map;"
		);
	}
	inline jint PerBuyerDecisionLogic::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void PerBuyerDecisionLogic::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
