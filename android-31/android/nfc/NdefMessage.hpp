#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JArray;
namespace android::nfc
{
	class NdefRecord;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::nfc
{
	class NdefMessage : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NdefMessage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NdefMessage(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		NdefMessage(JByteArray arg0);
		NdefMessage(JArray arg0);
		NdefMessage(android::nfc::NdefRecord arg0, JArray arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getByteArrayLength() const;
		JArray getRecords() const;
		jint hashCode() const;
		JByteArray toByteArray() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::nfc

