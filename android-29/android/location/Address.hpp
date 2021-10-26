#pragma once

#ifndef ANDROID_LOCATION_ADDRESS
#define ANDROID_LOCATION_ADDRESS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::location
{
	class Address : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::java::util::Locale arg0);
		
		// Methods
		jstring toString();
		QAndroidJniObject getLocale();
		void setExtras(__jni_impl::android::os::Bundle arg0);
		void setCountryCode(jstring arg0);
		void setCountryCode(const QString &arg0);
		jstring getUrl();
		jdouble getLatitude();
		void setLatitude(jdouble arg0);
		jdouble getLongitude();
		void setLongitude(jdouble arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getExtras();
		jint getMaxAddressLineIndex();
		jstring getAddressLine(jint arg0);
		void setAddressLine(jint arg0, jstring arg1);
		void setAddressLine(jint arg0, const QString &arg1);
		jstring getFeatureName();
		void setFeatureName(jstring arg0);
		void setFeatureName(const QString &arg0);
		jstring getAdminArea();
		void setAdminArea(jstring arg0);
		void setAdminArea(const QString &arg0);
		jstring getSubAdminArea();
		void setSubAdminArea(jstring arg0);
		void setSubAdminArea(const QString &arg0);
		jstring getLocality();
		void setLocality(jstring arg0);
		void setLocality(const QString &arg0);
		jstring getSubLocality();
		void setSubLocality(jstring arg0);
		void setSubLocality(const QString &arg0);
		jstring getThoroughfare();
		void setThoroughfare(jstring arg0);
		void setThoroughfare(const QString &arg0);
		jstring getSubThoroughfare();
		void setSubThoroughfare(jstring arg0);
		void setSubThoroughfare(const QString &arg0);
		jstring getPremises();
		void setPremises(jstring arg0);
		void setPremises(const QString &arg0);
		jstring getPostalCode();
		void setPostalCode(jstring arg0);
		void setPostalCode(const QString &arg0);
		jstring getCountryCode();
		jstring getCountryName();
		void setCountryName(jstring arg0);
		void setCountryName(const QString &arg0);
		jboolean hasLatitude();
		void clearLatitude();
		jboolean hasLongitude();
		void clearLongitude();
		jstring getPhone();
		void setPhone(jstring arg0);
		void setPhone(const QString &arg0);
		void setUrl(jstring arg0);
		void setUrl(const QString &arg0);
	};
} // namespace __jni_impl::android::location

#include "../../java/util/Locale.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::location
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
	
	// Constructors
	void Address::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.location.Address",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jstring Address::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Address::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	void Address::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Address::setCountryCode(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCountryCode",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setCountryCode(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setCountryCode",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Address::getUrl()
	{
		return __thiz.callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jdouble Address::getLatitude()
	{
		return __thiz.callMethod<jdouble>(
			"getLatitude",
			"()D"
		);
	}
	void Address::setLatitude(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"setLatitude",
			"(D)V",
			arg0
		);
	}
	jdouble Address::getLongitude()
	{
		return __thiz.callMethod<jdouble>(
			"getLongitude",
			"()D"
		);
	}
	void Address::setLongitude(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"setLongitude",
			"(D)V",
			arg0
		);
	}
	jint Address::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Address::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Address::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint Address::getMaxAddressLineIndex()
	{
		return __thiz.callMethod<jint>(
			"getMaxAddressLineIndex",
			"()I"
		);
	}
	jstring Address::getAddressLine(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAddressLine",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void Address::setAddressLine(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setAddressLine",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Address::setAddressLine(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setAddressLine",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring Address::getFeatureName()
	{
		return __thiz.callObjectMethod(
			"getFeatureName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Address::setFeatureName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFeatureName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setFeatureName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setFeatureName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Address::getAdminArea()
	{
		return __thiz.callObjectMethod(
			"getAdminArea",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Address::setAdminArea(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setAdminArea",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setAdminArea(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setAdminArea",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Address::getSubAdminArea()
	{
		return __thiz.callObjectMethod(
			"getSubAdminArea",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Address::setSubAdminArea(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSubAdminArea",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setSubAdminArea(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSubAdminArea",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Address::getLocality()
	{
		return __thiz.callObjectMethod(
			"getLocality",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Address::setLocality(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setLocality",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setLocality(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setLocality",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Address::getSubLocality()
	{
		return __thiz.callObjectMethod(
			"getSubLocality",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Address::setSubLocality(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSubLocality",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setSubLocality(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSubLocality",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Address::getThoroughfare()
	{
		return __thiz.callObjectMethod(
			"getThoroughfare",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Address::setThoroughfare(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setThoroughfare",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setThoroughfare(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setThoroughfare",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Address::getSubThoroughfare()
	{
		return __thiz.callObjectMethod(
			"getSubThoroughfare",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Address::setSubThoroughfare(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSubThoroughfare",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setSubThoroughfare(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSubThoroughfare",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Address::getPremises()
	{
		return __thiz.callObjectMethod(
			"getPremises",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Address::setPremises(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPremises",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setPremises(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPremises",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Address::getPostalCode()
	{
		return __thiz.callObjectMethod(
			"getPostalCode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Address::setPostalCode(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPostalCode",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setPostalCode(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPostalCode",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Address::getCountryCode()
	{
		return __thiz.callObjectMethod(
			"getCountryCode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Address::getCountryName()
	{
		return __thiz.callObjectMethod(
			"getCountryName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Address::setCountryName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCountryName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setCountryName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setCountryName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean Address::hasLatitude()
	{
		return __thiz.callMethod<jboolean>(
			"hasLatitude",
			"()Z"
		);
	}
	void Address::clearLatitude()
	{
		__thiz.callMethod<void>(
			"clearLatitude",
			"()V"
		);
	}
	jboolean Address::hasLongitude()
	{
		return __thiz.callMethod<jboolean>(
			"hasLongitude",
			"()Z"
		);
	}
	void Address::clearLongitude()
	{
		__thiz.callMethod<void>(
			"clearLongitude",
			"()V"
		);
	}
	jstring Address::getPhone()
	{
		return __thiz.callObjectMethod(
			"getPhone",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Address::setPhone(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPhone",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setPhone(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPhone",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Address::setUrl(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setUrl",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Address::setUrl(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setUrl",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::location

namespace android::location
{
	class Address : public __jni_impl::android::location::Address
	{
	public:
		Address(QAndroidJniObject obj) { __thiz = obj; }
		Address(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::location

#endif // ANDROID_LOCATION_ADDRESS

