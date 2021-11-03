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
		
		// QJniObject forward
		template<typename ...Ts> explicit NdefMessage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NdefMessage(QJniObject obj);
		
		// Constructors
		NdefMessage(JByteArray arg0);
		NdefMessage(JArray arg0);
		NdefMessage(android::nfc::NdefRecord arg0, JArray arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getByteArrayLength();
		JArray getRecords();
		jint hashCode();
		JByteArray toByteArray();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::nfc

