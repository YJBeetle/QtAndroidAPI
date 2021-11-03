#pragma once

#include "../../JObject.hpp"

namespace android::nfc
{
	class NdefRecord;
}
namespace android::os
{
	class Parcel;
}

namespace android::nfc
{
	class NdefMessage : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit NdefMessage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NdefMessage(QJniObject obj);
		
		// Constructors
		NdefMessage(jbyteArray arg0);
		NdefMessage(jarray arg0);
		NdefMessage(android::nfc::NdefRecord arg0, jarray arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getByteArrayLength();
		jarray getRecords();
		jint hashCode();
		jbyteArray toByteArray();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::nfc

