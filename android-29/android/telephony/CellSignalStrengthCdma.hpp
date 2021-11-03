#pragma once

#include "./CellSignalStrength.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony
{
	class CellSignalStrengthCdma : public android::telephony::CellSignalStrength
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CellSignalStrengthCdma(const char *className, const char *sig, Ts...agv) : android::telephony::CellSignalStrength(className, sig, std::forward<Ts>(agv)...) {}
		CellSignalStrengthCdma(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
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
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

