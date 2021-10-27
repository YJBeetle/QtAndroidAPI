#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}

namespace android::telecom
{
	class GatewayInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		GatewayInfo(QAndroidJniObject obj);
		// Constructors
		GatewayInfo(jstring &arg0, android::net::Uri &arg1, android::net::Uri &arg2);
		GatewayInfo(const QString &arg0, android::net::Uri &arg1, android::net::Uri &arg2);
		GatewayInfo() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getGatewayAddress();
		jstring getGatewayProviderPackageName();
		QAndroidJniObject getOriginalAddress();
		jboolean isEmpty();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom

