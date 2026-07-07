#pragma once

#include "../../../../JObject.hpp"

namespace android::net::wifi::rtt
{
	class PasnConfig;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi::rtt
{
	class SecureRangingConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SecureRangingConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SecureRangingConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::net::wifi::rtt::PasnConfig getPasnConfig() const;
		jint hashCode() const;
		jboolean isRangingFrameProtectionEnabled() const;
		jboolean isSecureHeLtfEnabled() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::rtt

