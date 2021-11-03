#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::telephony::euicc
{
	class DownloadableSubscription : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit DownloadableSubscription(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DownloadableSubscription(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::telephony::euicc::DownloadableSubscription forActivationCode(JString arg0);
		jint describeContents() const;
		JString getConfirmationCode() const;
		JString getEncodedActivationCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony::euicc

