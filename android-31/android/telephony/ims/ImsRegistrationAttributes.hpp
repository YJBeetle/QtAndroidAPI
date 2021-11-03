#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony::ims
{
	class ImsRegistrationAttributes : public JObject
	{
	public:
		// Fields
		static jint ATTR_EPDG_OVER_CELL_INTERNET();
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImsRegistrationAttributes(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImsRegistrationAttributes(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getAttributeFlags();
		JObject getFeatureTags();
		jint getTransportType();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::ims

