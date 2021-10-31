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
	class CellIdentityTdscdma;
}
namespace android::telephony
{
	class CellSignalStrength;
}
namespace android::telephony
{
	class CellSignalStrengthTdscdma;
}

namespace android::telephony
{
	class CellInfoTdscdma : public android::telephony::CellInfo
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CellInfoTdscdma(const char *className, const char *sig, Ts...agv) : android::telephony::CellInfo(className, sig, std::forward<Ts>(agv)...) {}
		CellInfoTdscdma(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::telephony::CellIdentityTdscdma getCellIdentity();
		android::telephony::CellSignalStrengthTdscdma getCellSignalStrength();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

