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
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NetworkInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		QAndroidJniObject getDetailedState();
		jstring getExtraInfo();
		jstring getReason();
		QAndroidJniObject getState();
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

