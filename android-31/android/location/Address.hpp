#pragma once

#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../java/util/Locale.def.hpp"
#include "./Address.def.hpp"

namespace android::location
{
	// Fields
	inline JObject Address::CREATOR()
	{
		return getStaticObjectField(
			"android.location.Address",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline Address::Address(java::util::Locale arg0)
		: JObject(
			"android.location.Address",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void Address::clearLatitude() const
	{
		callMethod<void>(
			"clearLatitude",
			"()V"
		);
	}
	inline void Address::clearLongitude() const
	{
		callMethod<void>(
			"clearLongitude",
			"()V"
		);
	}
	inline jint Address::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString Address::getAddressLine(jint arg0) const
	{
		return callObjectMethod(
			"getAddressLine",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Address::getAdminArea() const
	{
		return callObjectMethod(
			"getAdminArea",
			"()Ljava/lang/String;"
		);
	}
	inline JString Address::getCountryCode() const
	{
		return callObjectMethod(
			"getCountryCode",
			"()Ljava/lang/String;"
		);
	}
	inline JString Address::getCountryName() const
	{
		return callObjectMethod(
			"getCountryName",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::Bundle Address::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString Address::getFeatureName() const
	{
		return callObjectMethod(
			"getFeatureName",
			"()Ljava/lang/String;"
		);
	}
	inline jdouble Address::getLatitude() const
	{
		return callMethod<jdouble>(
			"getLatitude",
			"()D"
		);
	}
	inline java::util::Locale Address::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	inline JString Address::getLocality() const
	{
		return callObjectMethod(
			"getLocality",
			"()Ljava/lang/String;"
		);
	}
	inline jdouble Address::getLongitude() const
	{
		return callMethod<jdouble>(
			"getLongitude",
			"()D"
		);
	}
	inline jint Address::getMaxAddressLineIndex() const
	{
		return callMethod<jint>(
			"getMaxAddressLineIndex",
			"()I"
		);
	}
	inline JString Address::getPhone() const
	{
		return callObjectMethod(
			"getPhone",
			"()Ljava/lang/String;"
		);
	}
	inline JString Address::getPostalCode() const
	{
		return callObjectMethod(
			"getPostalCode",
			"()Ljava/lang/String;"
		);
	}
	inline JString Address::getPremises() const
	{
		return callObjectMethod(
			"getPremises",
			"()Ljava/lang/String;"
		);
	}
	inline JString Address::getSubAdminArea() const
	{
		return callObjectMethod(
			"getSubAdminArea",
			"()Ljava/lang/String;"
		);
	}
	inline JString Address::getSubLocality() const
	{
		return callObjectMethod(
			"getSubLocality",
			"()Ljava/lang/String;"
		);
	}
	inline JString Address::getSubThoroughfare() const
	{
		return callObjectMethod(
			"getSubThoroughfare",
			"()Ljava/lang/String;"
		);
	}
	inline JString Address::getThoroughfare() const
	{
		return callObjectMethod(
			"getThoroughfare",
			"()Ljava/lang/String;"
		);
	}
	inline JString Address::getUrl() const
	{
		return callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean Address::hasLatitude() const
	{
		return callMethod<jboolean>(
			"hasLatitude",
			"()Z"
		);
	}
	inline jboolean Address::hasLongitude() const
	{
		return callMethod<jboolean>(
			"hasLongitude",
			"()Z"
		);
	}
	inline void Address::setAddressLine(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"setAddressLine",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void Address::setAdminArea(JString arg0) const
	{
		callMethod<void>(
			"setAdminArea",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Address::setCountryCode(JString arg0) const
	{
		callMethod<void>(
			"setCountryCode",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Address::setCountryName(JString arg0) const
	{
		callMethod<void>(
			"setCountryName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Address::setExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Address::setFeatureName(JString arg0) const
	{
		callMethod<void>(
			"setFeatureName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Address::setLatitude(jdouble arg0) const
	{
		callMethod<void>(
			"setLatitude",
			"(D)V",
			arg0
		);
	}
	inline void Address::setLocality(JString arg0) const
	{
		callMethod<void>(
			"setLocality",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Address::setLongitude(jdouble arg0) const
	{
		callMethod<void>(
			"setLongitude",
			"(D)V",
			arg0
		);
	}
	inline void Address::setPhone(JString arg0) const
	{
		callMethod<void>(
			"setPhone",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Address::setPostalCode(JString arg0) const
	{
		callMethod<void>(
			"setPostalCode",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Address::setPremises(JString arg0) const
	{
		callMethod<void>(
			"setPremises",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Address::setSubAdminArea(JString arg0) const
	{
		callMethod<void>(
			"setSubAdminArea",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Address::setSubLocality(JString arg0) const
	{
		callMethod<void>(
			"setSubLocality",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Address::setSubThoroughfare(JString arg0) const
	{
		callMethod<void>(
			"setSubThoroughfare",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Address::setThoroughfare(JString arg0) const
	{
		callMethod<void>(
			"setThoroughfare",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Address::setUrl(JString arg0) const
	{
		callMethod<void>(
			"setUrl",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JString Address::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Address::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

// Base class headers

