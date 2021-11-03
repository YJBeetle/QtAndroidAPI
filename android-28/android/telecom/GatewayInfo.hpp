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
class JString;

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
		GatewayInfo(JString arg0, android::net::Uri arg1, android::net::Uri arg2);
		
		// Methods
		jint describeContents() const;
		android::net::Uri getGatewayAddress() const;
		JString getGatewayProviderPackageName() const;
		android::net::Uri getOriginalAddress() const;
		jboolean isEmpty() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telecom

