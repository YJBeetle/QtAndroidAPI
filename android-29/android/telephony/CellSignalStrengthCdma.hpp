#pragma once

#include "../../__JniBaseClass.hpp"
#include "./CellSignalStrength.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class CellSignalStrengthCdma : public android::telephony::CellSignalStrength
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CellSignalStrengthCdma(const char *className, const char *sig, Ts...agv) : android::telephony::CellSignalStrength(className, sig, std::forward<Ts>(agv)...) {}
		CellSignalStrengthCdma(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getAsuLevel();
		jint getCdmaDbm();
		jint getCdmaEcio();
		jint getCdmaLevel();
		jint getDbm();
		jint getEvdoDbm();
		jint getEvdoEcio();
		jint getEvdoLevel();
		jint getEvdoSnr();
		jint getLevel();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

