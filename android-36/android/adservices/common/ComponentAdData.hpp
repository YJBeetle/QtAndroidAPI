#pragma once

#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ComponentAdData.def.hpp"

namespace android::adservices::common
{
	// Fields
	inline JObject ComponentAdData::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.common.ComponentAdData",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ComponentAdData::ComponentAdData(android::net::Uri arg0, JString arg1)
		: JObject(
			"android.adservices.common.ComponentAdData",
			"(Landroid/net/Uri;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jint ComponentAdData::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ComponentAdData::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString ComponentAdData::getAdRenderId() const
	{
		return callObjectMethod(
			"getAdRenderId",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::Uri ComponentAdData::getRenderUri() const
	{
		return callObjectMethod(
			"getRenderUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jint ComponentAdData::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString ComponentAdData::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ComponentAdData::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::adservices::common

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::common;
#endif
