#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "../../java/util/Locale.hpp"
#include "./Address.hpp"

namespace android::location
{
	// Fields
	JObject Address::CREATOR()
	{
		return getStaticObjectField(
			"android.location.Address",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	Address::Address(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Address::Address(java::util::Locale arg0)
		: JObject(
			"android.location.Address",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	void Address::clearLatitude() const
	{
		callMethod<void>(
			"clearLatitude",
			"()V"
		);
	}
	void Address::clearLongitude() const
	{
		callMethod<void>(
			"clearLongitude",
			"()V"
		);
	}
	jint Address::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString Address::getAddressLine(jint arg0) const
	{
		return callObjectMethod(
			"getAddressLine",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Address::getAdminArea() const
	{
		return callObjectMethod(
			"getAdminArea",
			"()Ljava/lang/String;"
		);
	}
	JString Address::getCountryCode() const
	{
		return callObjectMethod(
			"getCountryCode",
			"()Ljava/lang/String;"
		);
	}
	JString Address::getCountryName() const
	{
		return callObjectMethod(
			"getCountryName",
			"()Ljava/lang/String;"
		);
	}
	android::os::Bundle Address::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	JString Address::getFeatureName() const
	{
		return callObjectMethod(
			"getFeatureName",
			"()Ljava/lang/String;"
		);
	}
	jdouble Address::getLatitude() const
	{
		return callMethod<jdouble>(
			"getLatitude",
			"()D"
		);
	}
	java::util::Locale Address::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	JString Address::getLocality() const
	{
		return callObjectMethod(
			"getLocality",
			"()Ljava/lang/String;"
		);
	}
	jdouble Address::getLongitude() const
	{
		return callMethod<jdouble>(
			"getLongitude",
			"()D"
		);
	}
	jint Address::getMaxAddressLineIndex() const
	{
		return callMethod<jint>(
			"getMaxAddressLineIndex",
			"()I"
		);
	}
	JString Address::getPhone() const
	{
		return callObjectMethod(
			"getPhone",
			"()Ljava/lang/String;"
		);
	}
	JString Address::getPostalCode() const
	{
		return callObjectMethod(
			"getPostalCode",
			"()Ljava/lang/String;"
		);
	}
	JString Address::getPremises() const
	{
		return callObjectMethod(
			"getPremises",
			"()Ljava/lang/String;"
		);
	}
	JString Address::getSubAdminArea() const
	{
		return callObjectMethod(
			"getSubAdminArea",
			"()Ljava/lang/String;"
		);
	}
	JString Address::getSubLocality() const
	{
		return callObjectMethod(
			"getSubLocality",
			"()Ljava/lang/String;"
		);
	}
	JString Address::getSubThoroughfare() const
	{
		return callObjectMethod(
			"getSubThoroughfare",
			"()Ljava/lang/String;"
		);
	}
	JString Address::getThoroughfare() const
	{
		return callObjectMethod(
			"getThoroughfare",
			"()Ljava/lang/String;"
		);
	}
	JString Address::getUrl() const
	{
		return callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		);
	}
	jboolean Address::hasLatitude() const
	{
		return callMethod<jboolean>(
			"hasLatitude",
			"()Z"
		);
	}
	jboolean Address::hasLongitude() const
	{
		return callMethod<jboolean>(
			"hasLongitude",
			"()Z"
		);
	}
	void Address::setAddressLine(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"setAddressLine",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void Address::setAdminArea(JString arg0) const
	{
		callMethod<void>(
			"setAdminArea",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Address::setCountryCode(JString arg0) const
	{
		callMethod<void>(
			"setCountryCode",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Address::setCountryName(JString arg0) const
	{
		callMethod<void>(
			"setCountryName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Address::setExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Address::setFeatureName(JString arg0) const
	{
		callMethod<void>(
			"setFeatureName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Address::setLatitude(jdouble arg0) const
	{
		callMethod<void>(
			"setLatitude",
			"(D)V",
			arg0
		);
	}
	void Address::setLocality(JString arg0) const
	{
		callMethod<void>(
			"setLocality",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Address::setLongitude(jdouble arg0) const
	{
		callMethod<void>(
			"setLongitude",
			"(D)V",
			arg0
		);
	}
	void Address::setPhone(JString arg0) const
	{
		callMethod<void>(
			"setPhone",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Address::setPostalCode(JString arg0) const
	{
		callMethod<void>(
			"setPostalCode",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Address::setPremises(JString arg0) const
	{
		callMethod<void>(
			"setPremises",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Address::setSubAdminArea(JString arg0) const
	{
		callMethod<void>(
			"setSubAdminArea",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Address::setSubLocality(JString arg0) const
	{
		callMethod<void>(
			"setSubLocality",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Address::setSubThoroughfare(JString arg0) const
	{
		callMethod<void>(
			"setSubThoroughfare",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Address::setThoroughfare(JString arg0) const
	{
		callMethod<void>(
			"setThoroughfare",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Address::setUrl(JString arg0) const
	{
		callMethod<void>(
			"setUrl",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JString Address::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Address::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

