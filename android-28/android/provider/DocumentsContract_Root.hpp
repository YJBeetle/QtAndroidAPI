#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class DocumentsContract_Root : public JObject
	{
	public:
		// Fields
		static JString COLUMN_AVAILABLE_BYTES();
		static JString COLUMN_CAPACITY_BYTES();
		static JString COLUMN_DOCUMENT_ID();
		static JString COLUMN_FLAGS();
		static JString COLUMN_ICON();
		static JString COLUMN_MIME_TYPES();
		static JString COLUMN_ROOT_ID();
		static JString COLUMN_SUMMARY();
		static JString COLUMN_TITLE();
		static jint FLAG_LOCAL_ONLY();
		static jint FLAG_SUPPORTS_CREATE();
		static jint FLAG_SUPPORTS_EJECT();
		static jint FLAG_SUPPORTS_IS_CHILD();
		static jint FLAG_SUPPORTS_RECENTS();
		static jint FLAG_SUPPORTS_SEARCH();
		static JString MIME_TYPE_ITEM();
		
		// QJniObject forward
		template<typename ...Ts> explicit DocumentsContract_Root(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DocumentsContract_Root(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

