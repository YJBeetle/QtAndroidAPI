#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony::ims
{
	class ImsRegistrationAttributes : public __JniBaseClass
	{
	public:
		// Fields
		static jint ATTR_EPDG_OVER_CELL_INTERNET();
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ImsRegistrationAttributes(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ImsRegistrationAttributes(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getAttributeFlags();
		__JniBaseClass getFeatureTags();
		jint getTransportType();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::ims

