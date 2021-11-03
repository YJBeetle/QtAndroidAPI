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

namespace android::net
{
	class NetworkInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkInfo(QJniObject obj);
		
		// Constructors
		NetworkInfo(jint arg0, jint arg1, jstring arg2, jstring arg3);
		
		// Methods
		jint describeContents();
		android::net::NetworkInfo_DetailedState getDetailedState();
		jstring getExtraInfo();
		jstring getReason();
		android::net::NetworkInfo_State getState();
		jint getSubtype();
		jstring getSubtypeName();
		jint getType();
		jstring getTypeName();
		jboolean isAvailable();
		jboolean isConnected();
		jboolean isConnectedOrConnecting();
		jboolean isFailover();
		jboolean isRoaming();
		void setDetailedState(android::net::NetworkInfo_DetailedState arg0, jstring arg1, jstring arg2);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

