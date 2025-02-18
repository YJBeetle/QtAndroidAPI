#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./DecisionLogic.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	inline JObject DecisionLogic::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.adselection.DecisionLogic",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline DecisionLogic::DecisionLogic(JString arg0)
		: JObject(
			"android.adservices.adselection.DecisionLogic",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint DecisionLogic::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean DecisionLogic::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString DecisionLogic::getLogic() const
	{
		return callObjectMethod(
			"getLogic",
			"()Ljava/lang/String;"
		);
	}
	inline jint DecisionLogic::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString DecisionLogic::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void DecisionLogic::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
