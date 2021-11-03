#pragma once

#include "../../JObject.hpp"

namespace android::content::res
{
	class Resources;
}
namespace android::net
{
	class Uri;
}
class JString;
class JString;

namespace android::provider
{
	class ContactsContract_CommonDataKinds_StructuredPostal : public JObject
	{
	public:
		// Fields
		static JString CITY();
		static JString CONTENT_ITEM_TYPE();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static JString COUNTRY();
		static JString EXTRA_ADDRESS_BOOK_INDEX();
		static JString EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static JString EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static JString FORMATTED_ADDRESS();
		static JString NEIGHBORHOOD();
		static JString POBOX();
		static JString POSTCODE();
		static JString REGION();
		static JString STREET();
		static jint TYPE_HOME();
		static jint TYPE_OTHER();
		static jint TYPE_WORK();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_StructuredPostal(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_StructuredPostal(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JString getTypeLabel(android::content::res::Resources arg0, jint arg1, JString arg2);
		static jint getTypeLabelResource(jint arg0);
	};
} // namespace android::provider

