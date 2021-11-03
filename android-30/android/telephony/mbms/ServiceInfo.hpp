#pragma once

#include "../../../JObject.hpp"

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
		jboolean equals(jobject arg0);
		JObject getLocales();
		jstring getNameForLocale(java::util::Locale arg0);
		JObject getNamedContentLocales();
		jstring getServiceClassName();
		jstring getServiceId();
		java::util::Date getSessionEndTime();
		java::util::Date getSessionStartTime();
		jint hashCode();
	};
} // namespace android::telephony::mbms

