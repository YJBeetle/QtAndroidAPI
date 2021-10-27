#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::admin
{
	class NetworkEvent : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		NetworkEvent(QAndroidJniObject obj);
		// Constructors
		NetworkEvent() = default;
		
		// Methods
		jint describeContents();
		jlong getId();
		jstring getPackageName();
		jlong getTimestamp();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::admin

