#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
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
	class ServiceInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		ServiceInfo(QAndroidJniObject obj);
		// Constructors
		ServiceInfo() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getLocales();
		jstring getNameForLocale(java::util::Locale arg0);
		QAndroidJniObject getNamedContentLocales();
		jstring getServiceClassName();
		jstring getServiceId();
		QAndroidJniObject getSessionEndTime();
		QAndroidJniObject getSessionStartTime();
		jint hashCode();
	};
} // namespace android::telephony::mbms

