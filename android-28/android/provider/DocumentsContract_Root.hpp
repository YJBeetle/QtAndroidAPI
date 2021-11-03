#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class DocumentsContract_Root : public JObject
	{
	public:
		// Fields
		static jstring COLUMN_AVAILABLE_BYTES();
		static jstring COLUMN_CAPACITY_BYTES();
		static jstring COLUMN_DOCUMENT_ID();
		static jstring COLUMN_FLAGS();
		static jstring COLUMN_ICON();
		static jstring COLUMN_MIME_TYPES();
		static jstring COLUMN_ROOT_ID();
		static jstring COLUMN_SUMMARY();
		static jstring COLUMN_TITLE();
		static jint FLAG_LOCAL_ONLY();
		static jint FLAG_SUPPORTS_CREATE();
		static jint FLAG_SUPPORTS_EJECT();
		static jint FLAG_SUPPORTS_IS_CHILD();
		static jint FLAG_SUPPORTS_RECENTS();
		static jint FLAG_SUPPORTS_SEARCH();
		static jstring MIME_TYPE_ITEM();
		
		// QJniObject forward
		template<typename ...Ts> explicit DocumentsContract_Root(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DocumentsContract_Root(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

