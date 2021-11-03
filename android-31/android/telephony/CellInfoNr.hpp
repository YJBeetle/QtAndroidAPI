#pragma once

#include "../../JObject.hpp"
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
	class CellSignalStrength;
}

namespace android::telephony
{
	class CellInfoNr : public android::telephony::CellInfo
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CellInfoNr(const char *className, const char *sig, Ts...agv) : android::telephony::CellInfo(className, sig, std::forward<Ts>(agv)...) {}
		CellInfoNr(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		android::telephony::CellIdentity getCellIdentity();
		android::telephony::CellSignalStrength getCellSignalStrength();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

