#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::nfc
{
	class NfcAntennaInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit NfcAntennaInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NfcAntennaInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		NfcAntennaInfo(jint arg0, jint arg1, jboolean arg2, JObject arg3);
		
		// Methods
		jint describeContents() const;
		JObject getAvailableNfcAntennas() const;
		jint getDeviceHeight() const;
		jint getDeviceWidth() const;
		jboolean isDeviceFoldable() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::nfc

