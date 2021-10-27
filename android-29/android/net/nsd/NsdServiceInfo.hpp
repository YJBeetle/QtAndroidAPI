#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::net
{
	class InetAddress;
}

namespace android::net::nsd
{
	class NsdServiceInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		NsdServiceInfo(QAndroidJniObject obj);
		// Constructors
		NsdServiceInfo();
		
		// Methods
		jint describeContents();
		QAndroidJniObject getAttributes();
		QAndroidJniObject getHost();
		jint getPort();
		jstring getServiceName();
		jstring getServiceType();
		void removeAttribute(jstring arg0);
		void removeAttribute(const QString &arg0);
		void setAttribute(jstring arg0, jstring arg1);
		void setAttribute(const QString &arg0, const QString &arg1);
		void setHost(java::net::InetAddress arg0);
		void setPort(jint arg0);
		void setServiceName(jstring arg0);
		void setServiceName(const QString &arg0);
		void setServiceType(jstring arg0);
		void setServiceType(const QString &arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::nsd

