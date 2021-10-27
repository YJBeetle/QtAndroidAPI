#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace java::util
{
	class Locale;
}

namespace android::location
{
	class Address : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		Address(QAndroidJniObject obj);
		// Constructors
		Address(java::util::Locale &arg0);
		Address() = default;
		
		// Methods
		void clearLatitude();
		void clearLongitude();
		jint describeContents();
		jstring getAddressLine(jint arg0);
		jstring getAdminArea();
		jstring getCountryCode();
		jstring getCountryName();
		QAndroidJniObject getExtras();
		jstring getFeatureName();
		jdouble getLatitude();
		QAndroidJniObject getLocale();
		jstring getLocality();
		jdouble getLongitude();
		jint getMaxAddressLineIndex();
		jstring getPhone();
		jstring getPostalCode();
		jstring getPremises();
		jstring getSubAdminArea();
		jstring getSubLocality();
		jstring getSubThoroughfare();
		jstring getThoroughfare();
		jstring getUrl();
		jboolean hasLatitude();
		jboolean hasLongitude();
		void setAddressLine(jint arg0, jstring arg1);
		void setAddressLine(jint arg0, const QString &arg1);
		void setAdminArea(jstring arg0);
		void setAdminArea(const QString &arg0);
		void setCountryCode(jstring arg0);
		void setCountryCode(const QString &arg0);
		void setCountryName(jstring arg0);
		void setCountryName(const QString &arg0);
		void setExtras(android::os::Bundle arg0);
		void setFeatureName(jstring arg0);
		void setFeatureName(const QString &arg0);
		void setLatitude(jdouble arg0);
		void setLocality(jstring arg0);
		void setLocality(const QString &arg0);
		void setLongitude(jdouble arg0);
		void setPhone(jstring arg0);
		void setPhone(const QString &arg0);
		void setPostalCode(jstring arg0);
		void setPostalCode(const QString &arg0);
		void setPremises(jstring arg0);
		void setPremises(const QString &arg0);
		void setSubAdminArea(jstring arg0);
		void setSubAdminArea(const QString &arg0);
		void setSubLocality(jstring arg0);
		void setSubLocality(const QString &arg0);
		void setSubThoroughfare(jstring arg0);
		void setSubThoroughfare(const QString &arg0);
		void setThoroughfare(jstring arg0);
		void setThoroughfare(const QString &arg0);
		void setUrl(jstring arg0);
		void setUrl(const QString &arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

