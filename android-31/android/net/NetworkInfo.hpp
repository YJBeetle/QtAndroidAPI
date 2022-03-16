#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class NetworkInfo_DetailedState;
}
namespace android::net
{
	class NetworkInfo_State;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::net
{
	class NetworkInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		NetworkInfo(jint arg0, jint arg1, JString arg2, JString arg3);
		
		// Methods
		jint describeContents() const;
		android::net::NetworkInfo_DetailedState getDetailedState() const;
		JString getExtraInfo() const;
		JString getReason() const;
		android::net::NetworkInfo_State getState() const;
		jint getSubtype() const;
		JString getSubtypeName() const;
		jint getType() const;
		JString getTypeName() const;
		jboolean isAvailable() const;
		jboolean isConnected() const;
		jboolean isConnectedOrConnecting() const;
		jboolean isFailover() const;
		jboolean isRoaming() const;
		void setDetailedState(android::net::NetworkInfo_DetailedState arg0, JString arg1, JString arg2) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net

