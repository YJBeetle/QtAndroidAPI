#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::telephony
{
	class VisualVoicemailSmsFilterSettings_Builder;
}

namespace android::telephony
{
	class VisualVoicemailSmsFilterSettings : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint DESTINATION_PORT_ANY();
		static jint DESTINATION_PORT_DATA_SMS();
		jstring clientPrefix();
		jint destinationPort();
		QAndroidJniObject originatingNumbers();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VisualVoicemailSmsFilterSettings(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VisualVoicemailSmsFilterSettings(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

