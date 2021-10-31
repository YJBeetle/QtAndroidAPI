#pragma once

#include "../../__JniBaseClass.hpp"

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
	class NetworkInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NetworkInfo(QJniObject obj);
		
		// Constructors
		
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
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

