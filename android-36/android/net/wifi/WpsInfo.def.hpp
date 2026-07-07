#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::net::wifi
{
	class WpsInfo : public JObject
	{
	public:
		// Fields
		JString BSSID();
		static JObject CREATOR();
		static jint DISPLAY();
		static jint INVALID();
		static jint KEYPAD();
		static jint LABEL();
		static jint PBC();
		JString pin();
		jint setup();
		
		// QJniObject forward
		template<typename ...Ts> explicit WpsInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WpsInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WpsInfo();
		WpsInfo(android::net::wifi::WpsInfo &arg0);
		
		// Methods
		jint describeContents() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi

