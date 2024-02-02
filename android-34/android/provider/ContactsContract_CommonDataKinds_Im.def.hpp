#pragma once

#include "../../JObject.hpp"

namespace android::content::res
{
	class Resources;
}
class JString;
class JString;

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Im : public JObject
	{
	public:
		// Fields
		static JString CONTENT_ITEM_TYPE();
		static JString CUSTOM_PROTOCOL();
		static JString EXTRA_ADDRESS_BOOK_INDEX();
		static JString EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static JString EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static JString PROTOCOL();
		static jint PROTOCOL_AIM();
		static jint PROTOCOL_CUSTOM();
		static jint PROTOCOL_GOOGLE_TALK();
		static jint PROTOCOL_ICQ();
		static jint PROTOCOL_JABBER();
		static jint PROTOCOL_MSN();
		static jint PROTOCOL_NETMEETING();
		static jint PROTOCOL_QQ();
		static jint PROTOCOL_SKYPE();
		static jint PROTOCOL_YAHOO();
		static jint TYPE_HOME();
		static jint TYPE_OTHER();
		static jint TYPE_WORK();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_Im(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_Im(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString getProtocolLabel(android::content::res::Resources arg0, jint arg1, JString arg2);
		static jint getProtocolLabelResource(jint arg0);
		static JString getTypeLabel(android::content::res::Resources arg0, jint arg1, JString arg2);
		static jint getTypeLabelResource(jint arg0);
	};
} // namespace android::provider

