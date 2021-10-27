#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class CellInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint CONNECTION_NONE();
		static jint CONNECTION_PRIMARY_SERVING();
		static jint CONNECTION_SECONDARY_SERVING();
		static jint CONNECTION_UNKNOWN();
		static QAndroidJniObject CREATOR();
		static jint UNAVAILABLE();
		static jlong UNAVAILABLE_LONG();
		
		CellInfo(QAndroidJniObject obj);
		// Constructors
		CellInfo() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getCellConnectionStatus();
		jlong getTimeStamp();
		jint hashCode();
		jboolean isRegistered();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

