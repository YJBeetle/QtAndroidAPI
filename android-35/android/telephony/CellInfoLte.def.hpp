#pragma once

#include "./CellInfo.def.hpp"

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
	class CellIdentityLte;
}
namespace android::telephony
{
	class CellSignalStrength;
}
namespace android::telephony
{
	class CellSignalStrengthLte;
}
class JObject;
class JString;

namespace android::telephony
{
	class CellInfoLte : public android::telephony::CellInfo
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CellInfoLte(const char *className, const char *sig, Ts...agv) : android::telephony::CellInfo(className, sig, std::forward<Ts>(agv)...) {}
		CellInfoLte(QJniObject obj) : android::telephony::CellInfo(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::telephony::CellIdentityLte getCellIdentity() const;
		android::telephony::CellSignalStrengthLte getCellSignalStrength() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

