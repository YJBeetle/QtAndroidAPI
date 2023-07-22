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
		Address(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Address(java::util::Locale arg0);
		
		// Methods
		void clearLatitude() const;
		void clearLongitude() const;
		jint describeContents() const;
		JString getAddressLine(jint arg0) const;
		JString getAdminArea() const;
		JString getCountryCode() const;
		JString getCountryName() const;
		android::os::Bundle getExtras() const;
		JString getFeatureName() const;
		jdouble getLatitude() const;
		java::util::Locale getLocale() const;
		JString getLocality() const;
		jdouble getLongitude() const;
		jint getMaxAddressLineIndex() const;
		JString getPhone() const;
		JString getPostalCode() const;
		JString getPremises() const;
		JString getSubAdminArea() const;
		JString getSubLocality() const;
		JString getSubThoroughfare() const;
		JString getThoroughfare() const;
		JString getUrl() const;
		jboolean hasLatitude() const;
		jboolean hasLongitude() const;
		void setAddressLine(jint arg0, JString arg1) const;
		void setAdminArea(JString arg0) const;
		void setCountryCode(JString arg0) const;
		void setCountryName(JString arg0) const;
		void setExtras(android::os::Bundle arg0) const;
		void setFeatureName(JString arg0) const;
		void setLatitude(jdouble arg0) const;
		void setLocality(JString arg0) const;
		void setLongitude(jdouble arg0) const;
		void setPhone(JString arg0) const;
		void setPostalCode(JString arg0) const;
		void setPremises(JString arg0) const;
		void setSubAdminArea(JString arg0) const;
		void setSubLocality(JString arg0) const;
		void setSubThoroughfare(JString arg0) const;
		void setThoroughfare(JString arg0) const;
		void setUrl(JString arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::location

