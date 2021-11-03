#pragma once

#include "./CellInfo.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::telephony
{
	class CellIdentityGsm;
}
namespace android::telephony
{
	class CellSignalStrengthGsm;
}
class JObject;
class JString;

namespace android::telephony
{
	class CellInfoGsm : public android::telephony::CellInfo
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CellInfoGsm(const char *className, const char *sig, Ts...agv) : android::telephony::CellInfo(className, sig, std::forward<Ts>(agv)...) {}
		CellInfoGsm(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		android::telephony::CellIdentityGsm getCellIdentity();
		android::telephony::CellSignalStrengthGsm getCellSignalStrength();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

