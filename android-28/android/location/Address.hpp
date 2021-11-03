#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;
namespace java::util
{
	class Locale;
}

namespace android::location
{
	class Address : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Address(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Address(QAndroidJniObject obj);
		
		// Constructors
		Address(java::util::Locale arg0);
		
		// Methods
		void clearLatitude();
		void clearLongitude();
		jint describeContents();
		JString getAddressLine(jint arg0);
		JString getAdminArea();
		JString getCountryCode();
		JString getCountryName();
		android::os::Bundle getExtras();
		JString getFeatureName();
		jdouble getLatitude();
		java::util::Locale getLocale();
		JString getLocality();
		jdouble getLongitude();
		jint getMaxAddressLineIndex();
		JString getPhone();
		JString getPostalCode();
		JString getPremises();
		JString getSubAdminArea();
		JString getSubLocality();
		JString getSubThoroughfare();
		JString getThoroughfare();
		JString getUrl();
		jboolean hasLatitude();
		jboolean hasLongitude();
		void setAddressLine(jint arg0, JString arg1);
		void setAdminArea(JString arg0);
		void setCountryCode(JString arg0);
		void setCountryName(JString arg0);
		void setExtras(android::os::Bundle arg0);
		void setFeatureName(JString arg0);
		void setLatitude(jdouble arg0);
		void setLocality(JString arg0);
		void setLongitude(jdouble arg0);
		void setPhone(JString arg0);
		void setPostalCode(JString arg0);
		void setPremises(JString arg0);
		void setSubAdminArea(JString arg0);
		void setSubLocality(JString arg0);
		void setSubThoroughfare(JString arg0);
		void setThoroughfare(JString arg0);
		void setUrl(JString arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

