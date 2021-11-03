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
	class ContactsContract_CommonDataKinds_Organization : public JObject
	{
	public:
		// Fields
		static JString COMPANY();
		static JString CONTENT_ITEM_TYPE();
		static JString DEPARTMENT();
		static JString EXTRA_ADDRESS_BOOK_INDEX();
		static JString EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static JString EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static JString JOB_DESCRIPTION();
		static JString OFFICE_LOCATION();
		static JString PHONETIC_NAME();
		static JString PHONETIC_NAME_STYLE();
		static JString SYMBOL();
		static JString TITLE();
		static jint TYPE_OTHER();
		static jint TYPE_WORK();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_Organization(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_Organization(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JString getTypeLabel(android::content::res::Resources arg0, jint arg1, JString arg2);
		static jint getTypeLabelResource(jint arg0);
	};
} // namespace android::provider

