#pragma once

#include "../../JObject.hpp"

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
	class GatewayInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit GatewayInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GatewayInfo(QJniObject obj);
		
		// Constructors
		GatewayInfo(jstring arg0, android::net::Uri arg1, android::net::Uri arg2);
		
		// Methods
		jint describeContents();
		android::net::Uri getGatewayAddress();
		jstring getGatewayProviderPackageName();
		android::net::Uri getOriginalAddress();
		jboolean isEmpty();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom

