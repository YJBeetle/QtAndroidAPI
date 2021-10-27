#pragma once

#include "../../__JniBaseClass.hpp"
#include "./CellSignalStrength.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class CellSignalStrengthNr : public android::telephony::CellSignalStrength
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		CellSignalStrengthNr(QAndroidJniObject obj);
		// Constructors
		CellSignalStrengthNr() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getAsuLevel();
		jint getCsiRsrp();
		jint getCsiRsrq();
		jint getCsiSinr();
		jint getDbm();
		jint getLevel();
		jint getSsRsrp();
		jint getSsRsrq();
		jint getSsSinr();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

