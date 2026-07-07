#pragma once

#include "../../../JObject.hpp"

namespace android::net::nsd
{
	class NsdServiceInfo;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::nsd
{
	class AdvertisingRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jlong FLAG_SKIP_PROBING();
		
		// QJniObject forward
		template<typename ...Ts> explicit AdvertisingRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdvertisingRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jlong getFlags() const;
		jint getProtocolType() const;
		android::net::nsd::NsdServiceInfo getServiceInfo() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::nsd

