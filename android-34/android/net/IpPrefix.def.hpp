#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;
namespace java::net
{
	class InetAddress;
}

namespace android::net
{
	class IpPrefix : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit IpPrefix(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IpPrefix(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		IpPrefix(java::net::InetAddress arg0, jint arg1);
		
		// Methods
		jboolean contains(java::net::InetAddress arg0) const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		java::net::InetAddress getAddress() const;
		jint getPrefixLength() const;
		JByteArray getRawAddress() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net

