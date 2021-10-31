#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}

namespace android::nfc
{
	class NdefRecord : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jbyteArray RTD_ALTERNATIVE_CARRIER();
		static jbyteArray RTD_HANDOVER_CARRIER();
		static jbyteArray RTD_HANDOVER_REQUEST();
		static jbyteArray RTD_HANDOVER_SELECT();
		static jbyteArray RTD_SMART_POSTER();
		static jbyteArray RTD_TEXT();
		static jbyteArray RTD_URI();
		static jshort TNF_ABSOLUTE_URI();
		static jshort TNF_EMPTY();
		static jshort TNF_EXTERNAL_TYPE();
		static jshort TNF_MIME_MEDIA();
		static jshort TNF_UNCHANGED();
		static jshort TNF_UNKNOWN();
		static jshort TNF_WELL_KNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit NdefRecord(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NdefRecord(QJniObject obj);
		
		// Constructors
		NdefRecord(jbyteArray arg0);
		NdefRecord(jshort arg0, jbyteArray arg1, jbyteArray arg2, jbyteArray arg3);
		
		// Methods
		static android::nfc::NdefRecord createApplicationRecord(jstring arg0);
		static android::nfc::NdefRecord createExternal(jstring arg0, jstring arg1, jbyteArray arg2);
		static android::nfc::NdefRecord createMime(jstring arg0, jbyteArray arg1);
		static android::nfc::NdefRecord createTextRecord(jstring arg0, jstring arg1);
		static android::nfc::NdefRecord createUri(android::net::Uri arg0);
		static android::nfc::NdefRecord createUri(jstring arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jbyteArray getId();
		jbyteArray getPayload();
		jshort getTnf();
		jbyteArray getType();
		jint hashCode();
		jbyteArray toByteArray();
		jstring toMimeType();
		jstring toString();
		android::net::Uri toUri();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::nfc

