#pragma once

#include "../../JObject.hpp"

namespace android::content::res
{
	class Resources;
}
class JString;
namespace java::lang
{
	class Integer;
}
class JString;

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Event : public JObject
	{
	public:
		// Fields
		static JString CONTENT_ITEM_TYPE();
		static JString EXTRA_ADDRESS_BOOK_INDEX();
		static JString EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static JString EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static JString START_DATE();
		static jint TYPE_ANNIVERSARY();
		static jint TYPE_BIRTHDAY();
		static jint TYPE_OTHER();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_Event(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_Event(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString getTypeLabel(android::content::res::Resources arg0, jint arg1, JString arg2);
		static jint getTypeResource(java::lang::Integer arg0);
	};
} // namespace android::provider

