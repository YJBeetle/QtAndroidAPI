#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi
{
	class WpsInfo : public __JniBaseClass
	{
	public:
		// Fields
		jstring BSSID();
		static __JniBaseClass CREATOR();
		static jint DISPLAY();
		static jint INVALID();
		static jint KEYPAD();
		static jint LABEL();
		static jint PBC();
		jstring pin();
		jint setup();
		
		// QJniObject forward
		template<typename ...Ts> explicit WpsInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WpsInfo(QJniObject obj);
		
		// Constructors
		WpsInfo();
		WpsInfo(android::net::wifi::WpsInfo &arg0);
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

