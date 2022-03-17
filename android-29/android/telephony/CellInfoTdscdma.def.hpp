#pragma once

#include "./CellInfo.def.hpp"

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
		CellInfoTdscdma(QAndroidJniObject obj) : android::telephony::CellInfo(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::telephony::CellIdentityTdscdma getCellIdentity() const;
		android::telephony::CellSignalStrengthTdscdma getCellSignalStrength() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

