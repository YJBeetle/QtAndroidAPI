#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::location
{
	class GnssNavigationMessage : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint STATUS_PARITY_PASSED();
		static jint STATUS_PARITY_REBUILT();
		static jint STATUS_UNKNOWN();
		static jint TYPE_BDS_D1();
		static jint TYPE_BDS_D2();
		static jint TYPE_GAL_F();
		static jint TYPE_GAL_I();
		static jint TYPE_GLO_L1CA();
		static jint TYPE_GPS_CNAV2();
		static jint TYPE_GPS_L1CA();
		static jint TYPE_GPS_L2CNAV();
		static jint TYPE_GPS_L5CNAV();
		static jint TYPE_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GnssNavigationMessage(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GnssNavigationMessage(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jbyteArray getData();
		jint getMessageId();
		jint getStatus();
		jint getSubmessageId();
		jint getSvid();
		jint getType();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

