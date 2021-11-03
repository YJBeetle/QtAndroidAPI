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
	class CellIdentityWcdma;
}
namespace android::telephony
{
	class CellSignalStrength;
}
namespace android::telephony
{
	class CellSignalStrengthWcdma;
}
class JObject;
class JString;

namespace android::telephony
{
	class CellInfoWcdma : public android::telephony::CellInfo
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CellInfoWcdma(const char *className, const char *sig, Ts...agv) : android::telephony::CellInfo(className, sig, std::forward<Ts>(agv)...) {}
		CellInfoWcdma(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		android::telephony::CellIdentityWcdma getCellIdentity();
		android::telephony::CellSignalStrengthWcdma getCellSignalStrength();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

