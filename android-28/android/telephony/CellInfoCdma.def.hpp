#pragma once

#include "./CellInfo.def.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::telephony
{
	class CellIdentityCdma;
}
namespace android::telephony
{
	class CellSignalStrengthCdma;
}
class JObject;
class JString;

namespace android::telephony
{
	class CellInfoCdma : public android::telephony::CellInfo
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CellInfoCdma(const char *className, const char *sig, Ts...agv) : android::telephony::CellInfo(className, sig, std::forward<Ts>(agv)...) {}
		CellInfoCdma(QJniObject obj) : android::telephony::CellInfo(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::telephony::CellIdentityCdma getCellIdentity() const;
		android::telephony::CellSignalStrengthCdma getCellSignalStrength() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

