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
	class CellSignalStrengthNr : public android::telephony::CellSignalStrength
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CellSignalStrengthNr(const char *className, const char *sig, Ts...agv) : android::telephony::CellSignalStrength(className, sig, std::forward<Ts>(agv)...) {}
		CellSignalStrengthNr(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
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
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

