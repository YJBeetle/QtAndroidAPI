#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../../java/util/Locale.hpp"
#include "./Address.hpp"

namespace android::location
{
	// Fields
	QAndroidJniObject Address::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.Address",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Address::Address(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Address::Address(java::util::Locale arg0)
		: __JniBaseClass(
			"android.location.Address",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	void Address::clearLatitude()
	{
		callMethod<void>(
			"clearLatitude",
			"()V"
		);
	}
	void Address::clearLongitude()
	{
		callMethod<void>(
			"clearLongitude",
			"()V"
		);
	}
	jint Address::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring Address::getAddressLine(jint arg0)
	{
		return callObjectMethod(
			"getAddressLine",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Address::getAdminArea()
	{
		return callObjectMethod(
			"getAdminArea",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Address::getCountryCode()
	{
		return callObjectMethod(
			"getCountryCode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Address::getCountryName()
	{
		return callObjectMethod(
			"getCountryName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Address::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring Address::getFeatureName()
	{
		return callObjectMethod(
			"getFeatureName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jdouble Address::getLatitude()
	{
		return callMethod<jdouble>(
			"getLatitude",
			"()D"
		);
	}
	QAndroidJniObject Address::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	jstring Address::getLocality()
	{
		return callObjectMethod(
			"getLocality",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jdouble Address::getLongitude()
	{
		return callMethod<jdouble>(
			"getLongitude",
			"()D"
		);
	}
	jint Address::getMaxAddressLineIndex()
	{
		return callMethod<jint>(
			"getMaxAddressLineIndex",
			"()I"
		);
	}
	jstring Address::getPhone()
	{
		return callObjectMethod(
			"getPhone",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Address::getPostalCode()
	{
		return callObjectMethod(
			"getPostalCode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Address::getPremises()
	{
		return callObjectMethod(
			"getPremises",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Address::getSubAdminArea()
	{
		return callObjectMethod(
			"getSubAdminArea",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Address::getSubLocality()
	{
		return callObjectMethod(
			"getSubLocality",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Address::getSubThoroughfare()
	{
		return callObjectMethod(
			"getSubThoroughfare",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Address::getThoroughfare()
	{
		return callObjectMethod(
			"getThoroughfare",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Address::getUrl()
	{
		return callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Address::hasLatitude()
	{
		return callMethod<jboolean>(
			"hasLatitude",
			"()Z"
		);
	}
	jboolean Address::hasLongitude()
	{
		return callMethod<jboolean>(
			"hasLongitude",
			"()Z"
		);
	}
	void Address::setAddressLine(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"setAddressLine",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Address::setAdminArea(jstring arg0)
	{
		callMethod<void>(
			"setAdminArea",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setCountryCode(jstring arg0)
	{
		callMethod<void>(
			"setCountryCode",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setCountryName(jstring arg0)
	{
		callMethod<void>(
			"setCountryName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setExtras(android::os::Bundle arg0)
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Address::setFeatureName(jstring arg0)
	{
		callMethod<void>(
			"setFeatureName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setLatitude(jdouble arg0)
	{
		callMethod<void>(
			"setLatitude",
			"(D)V",
			arg0
		);
	}
	void Address::setLocality(jstring arg0)
	{
		callMethod<void>(
			"setLocality",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setLongitude(jdouble arg0)
	{
		callMethod<void>(
			"setLongitude",
			"(D)V",
			arg0
		);
	}
	void Address::setPhone(jstring arg0)
	{
		callMethod<void>(
			"setPhone",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setPostalCode(jstring arg0)
	{
		callMethod<void>(
			"setPostalCode",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setPremises(jstring arg0)
	{
		callMethod<void>(
			"setPremises",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setSubAdminArea(jstring arg0)
	{
		callMethod<void>(
			"setSubAdminArea",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setSubLocality(jstring arg0)
	{
		callMethod<void>(
			"setSubLocality",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setSubThoroughfare(jstring arg0)
	{
		callMethod<void>(
			"setSubThoroughfare",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setThoroughfare(jstring arg0)
	{
		callMethod<void>(
			"setThoroughfare",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setUrl(jstring arg0)
	{
		callMethod<void>(
			"setUrl",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring Address::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Address::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

