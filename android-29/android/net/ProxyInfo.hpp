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

namespace android::net
{
	class ProxyInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		ProxyInfo(QAndroidJniObject obj);
		// Constructors
		ProxyInfo() = default;
		
		// Methods
		static QAndroidJniObject buildDirectProxy(jstring arg0, jint arg1);
		static QAndroidJniObject buildDirectProxy(jstring arg0, jint arg1, __JniBaseClass arg2);
		static QAndroidJniObject buildPacProxy(android::net::Uri arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jarray getExclusionList();
		jstring getHost();
		QAndroidJniObject getPacFileUrl();
		jint getPort();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

