#pragma once

#include "./PeerHandle.def.hpp"

namespace android::net::wifi::aware
{
	class PeerHandle;
}
namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::aware
{
	class ParcelablePeerHandle : public android::net::wifi::aware::PeerHandle
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ParcelablePeerHandle(const char *className, const char *sig, Ts...agv) : android::net::wifi::aware::PeerHandle(className, sig, std::forward<Ts>(agv)...) {}
		ParcelablePeerHandle(QJniObject obj) : android::net::wifi::aware::PeerHandle(obj) {}
		
		// Constructors
		ParcelablePeerHandle(android::net::wifi::aware::PeerHandle arg0);
		
		// Methods
		jint describeContents() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::aware

