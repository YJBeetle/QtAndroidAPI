#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::telephony
{
	class VisualVoicemailSmsFilterSettings : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint DESTINATION_PORT_ANY();
		static jint DESTINATION_PORT_DATA_SMS();
		JString clientPrefix();
		jint destinationPort();
		JObject originatingNumbers();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VisualVoicemailSmsFilterSettings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VisualVoicemailSmsFilterSettings(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

