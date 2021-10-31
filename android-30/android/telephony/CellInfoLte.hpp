#pragma once

#include "../../__JniBaseClass.hpp"
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

namespace android::telephony
{
	class CellInfoLte : public android::telephony::CellInfo
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CellInfoLte(const char *className, const char *sig, Ts...agv) : android::telephony::CellInfo(className, sig, std::forward<Ts>(agv)...) {}
		CellInfoLte(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::telephony::CellIdentityLte getCellIdentity();
		android::telephony::CellSignalStrengthLte getCellSignalStrength();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

