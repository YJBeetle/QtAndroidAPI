#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class DocumentsContract_Document : public JObject
	{
	public:
		// Fields
		static jstring COLUMN_DISPLAY_NAME();
		static jstring COLUMN_DOCUMENT_ID();
		static jstring COLUMN_FLAGS();
		static jstring COLUMN_ICON();
		static jstring COLUMN_LAST_MODIFIED();
		static jstring COLUMN_MIME_TYPE();
		static jstring COLUMN_SIZE();
		static jstring COLUMN_SUMMARY();
		static jint FLAG_DIR_PREFERS_GRID();
		static jint FLAG_DIR_PREFERS_LAST_MODIFIED();
		static jint FLAG_DIR_SUPPORTS_CREATE();
		static jint FLAG_SUPPORTS_COPY();
		static jint FLAG_SUPPORTS_DELETE();
		static jint FLAG_SUPPORTS_MOVE();
		static jint FLAG_SUPPORTS_REMOVE();
		static jint FLAG_SUPPORTS_RENAME();
		static jint FLAG_SUPPORTS_SETTINGS();
		static jint FLAG_SUPPORTS_THUMBNAIL();
		static jint FLAG_SUPPORTS_WRITE();
		static jint FLAG_VIRTUAL_DOCUMENT();
		static jint FLAG_WEB_LINKABLE();
		static jstring MIME_TYPE_DIR();
		
		// QJniObject forward
		template<typename ...Ts> explicit DocumentsContract_Document(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DocumentsContract_Document(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

