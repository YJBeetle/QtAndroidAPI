#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class SignalStrength : public __JniBaseClass
	{
	public:
		// Fields
		static jint INVALID();
		
		SignalStrength(QAndroidJniObject obj);
		// Constructors
		SignalStrength() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getCdmaDbm();
		jint getCdmaEcio();
		QAndroidJniObject getCellSignalStrengths();
		QAndroidJniObject getCellSignalStrengths(jclass arg0);
		jint getEvdoDbm();
		jint getEvdoEcio();
		jint getEvdoSnr();
		jint getGsmBitErrorRate();
		jint getGsmSignalStrength();
		jint getLevel();
		jint hashCode();
		jboolean isGsm();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

