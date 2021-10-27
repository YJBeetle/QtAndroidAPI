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
		
		NetworkInfo(QAndroidJniObject obj);
		// Constructors
		NetworkInfo() = default;
		
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

