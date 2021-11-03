#pragma once

#include "./CellInfo.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::telephony
{
	class CellIdentityTdscdma;
}
namespace android::telephony
{
	class CellSignalStrengthTdscdma;
}
class JObject;
class JString;

namespace android::telephony
{
	class CellInfoTdscdma : public android::telephony::CellInfo
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CellInfoTdscdma(const char *className, const char *sig, Ts...agv) : android::telephony::CellInfo(className, sig, std::forward<Ts>(agv)...) {}
		CellInfoTdscdma(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		android::telephony::CellIdentityTdscdma getCellIdentity();
		android::telephony::CellSignalStrengthTdscdma getCellSignalStrength();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

