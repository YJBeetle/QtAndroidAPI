#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net
{
	class ProxyInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProxyInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProxyInfo(QAndroidJniObject obj);
		
		// Constructors
		ProxyInfo(android::net::ProxyInfo &arg0);
		
		// Methods
		static android::net::ProxyInfo buildDirectProxy(JString arg0, jint arg1);
		static android::net::ProxyInfo buildDirectProxy(JString arg0, jint arg1, JObject arg2);
		static android::net::ProxyInfo buildPacProxy(android::net::Uri arg0);
		static android::net::ProxyInfo buildPacProxy(android::net::Uri arg0, jint arg1);
		jint describeContents();
		jboolean equals(JObject arg0);
		JArray getExclusionList();
		JString getHost();
		android::net::Uri getPacFileUrl();
		jint getPort();
		jint hashCode();
		jboolean isValid();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

