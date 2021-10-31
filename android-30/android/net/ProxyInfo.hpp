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
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ProxyInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ProxyInfo(QJniObject obj);
		
		// Constructors
		ProxyInfo(android::net::ProxyInfo &arg0);
		
		// Methods
		static android::net::ProxyInfo buildDirectProxy(jstring arg0, jint arg1);
		static android::net::ProxyInfo buildDirectProxy(jstring arg0, jint arg1, __JniBaseClass arg2);
		static android::net::ProxyInfo buildPacProxy(android::net::Uri arg0);
		static android::net::ProxyInfo buildPacProxy(android::net::Uri arg0, jint arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		jarray getExclusionList();
		jstring getHost();
		android::net::Uri getPacFileUrl();
		jint getPort();
		jint hashCode();
		jboolean isValid();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

