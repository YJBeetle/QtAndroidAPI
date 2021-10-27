#pragma once

#include "../../__JniBaseClass.hpp"
#include "./CellSignalStrength.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class CellSignalStrengthLte : public android::telephony::CellSignalStrength
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		CellSignalStrengthLte(QAndroidJniObject obj);
		// Constructors
		CellSignalStrengthLte() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getAsuLevel();
		jint getCqi();
		jint getDbm();
		jint getLevel();
		jint getRsrp();
		jint getRsrq();
		jint getRssi();
		jint getRssnr();
		jint getTimingAdvance();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

