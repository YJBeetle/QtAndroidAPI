#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony::euicc
{
	class EuiccInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit EuiccInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EuiccInfo(QJniObject obj);
		
		// Constructors
		EuiccInfo(jstring arg0);
		
		// Methods
		jint describeContents();
		jstring getOsVersion();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::euicc

