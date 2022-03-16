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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CellSignalStrengthCdma(const char *className, const char *sig, Ts...agv) : android::telephony::CellSignalStrength(className, sig, std::forward<Ts>(agv)...) {}
		CellSignalStrengthCdma(QAndroidJniObject obj) : android::telephony::CellSignalStrength(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getAsuLevel() const;
		jint getCdmaDbm() const;
		jint getCdmaEcio() const;
		jint getCdmaLevel() const;
		jint getDbm() const;
		jint getEvdoDbm() const;
		jint getEvdoEcio() const;
		jint getEvdoLevel() const;
		jint getEvdoSnr() const;
		jint getLevel() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

