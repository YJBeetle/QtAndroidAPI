#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::nfc
{
	class NdefRecord : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JByteArray RTD_ALTERNATIVE_CARRIER();
		static JByteArray RTD_HANDOVER_CARRIER();
		static JByteArray RTD_HANDOVER_REQUEST();
		static JByteArray RTD_HANDOVER_SELECT();
		static JByteArray RTD_SMART_POSTER();
		static JByteArray RTD_TEXT();
		static JByteArray RTD_URI();
		static jshort TNF_ABSOLUTE_URI();
		static jshort TNF_EMPTY();
		static jshort TNF_EXTERNAL_TYPE();
		static jshort TNF_MIME_MEDIA();
		static jshort TNF_UNCHANGED();
		static jshort TNF_UNKNOWN();
		static jshort TNF_WELL_KNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NdefRecord(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NdefRecord(QAndroidJniObject obj);
		
		// Constructors
		NdefRecord(JByteArray arg0);
		NdefRecord(jshort arg0, JByteArray arg1, JByteArray arg2, JByteArray arg3);
		
		// Methods
		static android::nfc::NdefRecord createApplicationRecord(JString arg0);
		static android::nfc::NdefRecord createExternal(JString arg0, JString arg1, JByteArray arg2);
		static android::nfc::NdefRecord createMime(JString arg0, JByteArray arg1);
		static android::nfc::NdefRecord createTextRecord(JString arg0, JString arg1);
		static android::nfc::NdefRecord createUri(android::net::Uri arg0);
		static android::nfc::NdefRecord createUri(JString arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JByteArray getId() const;
		JByteArray getPayload() const;
		jshort getTnf() const;
		JByteArray getType() const;
		jint hashCode() const;
		JByteArray toByteArray() const;
		JString toMimeType() const;
		JString toString() const;
		android::net::Uri toUri() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::nfc

