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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProxyInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ProxyInfo(QAndroidJniObject obj);
		
		// Constructors
		
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

