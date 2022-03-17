#pragma once

#include "./CellInfo.def.hpp"

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
		CellInfoGsm(QAndroidJniObject obj) : android::telephony::CellInfo(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::telephony::CellIdentityGsm getCellIdentity() const;
		android::telephony::CellSignalStrengthGsm getCellSignalStrength() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

