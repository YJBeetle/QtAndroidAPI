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
		NetworkInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::net::NetworkInfo_DetailedState getDetailedState();
		JString getExtraInfo();
		JString getReason();
		android::net::NetworkInfo_State getState();
		jint getSubtype();
		JString getSubtypeName();
		jint getType();
		JString getTypeName();
		jboolean isAvailable();
		jboolean isConnected();
		jboolean isConnectedOrConnecting();
		jboolean isFailover();
		jboolean isRoaming();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

