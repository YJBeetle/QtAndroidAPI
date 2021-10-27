#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class NeighboringCellInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint UNKNOWN_CID();
		static jint UNKNOWN_RSSI();
		
		NeighboringCellInfo(QAndroidJniObject obj);
		// Constructors
		NeighboringCellInfo();
		NeighboringCellInfo(android::os::Parcel &arg0);
		NeighboringCellInfo(jint &arg0, jint &arg1);
		NeighboringCellInfo(jint &arg0, jstring &arg1, jint &arg2);
		NeighboringCellInfo(jint &arg0, const QString &arg1, jint &arg2);
		
		// Methods
		jint describeContents();
		jint getCid();
		jint getLac();
		jint getNetworkType();
		jint getPsc();
		jint getRssi();
		void setCid(jint arg0);
		void setRssi(jint arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

