#pragma once

#include "../../../JObject.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ServiceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ServiceInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getLocales() const;
		JString getNameForLocale(java::util::Locale arg0) const;
		JObject getNamedContentLocales() const;
		JString getServiceClassName() const;
		JString getServiceId() const;
		java::util::Date getSessionEndTime() const;
		java::util::Date getSessionStartTime() const;
		jint hashCode() const;
	};
} // namespace android::telephony::mbms

