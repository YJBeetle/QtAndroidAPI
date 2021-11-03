#pragma once

#include "./CellInfo.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::telephony
{
	class CellIdentity;
}
namespace android::telephony
{
	class CellIdentityCdma;
}
namespace android::telephony
{
	class CellSignalStrength;
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
		CellInfoCdma(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		android::telephony::CellIdentityCdma getCellIdentity();
		android::telephony::CellSignalStrengthCdma getCellSignalStrength();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

