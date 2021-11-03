#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;
namespace java::util
{
	class Date;
}
namespace java::util
{
	class Locale;
}

namespace android::telephony::mbms
{
	class ServiceInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ServiceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ServiceInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JObject getLocales();
		JString getNameForLocale(java::util::Locale arg0);
		JObject getNamedContentLocales();
		JString getServiceClassName();
		JString getServiceId();
		java::util::Date getSessionEndTime();
		java::util::Date getSessionStartTime();
		jint hashCode();
	};
} // namespace android::telephony::mbms

