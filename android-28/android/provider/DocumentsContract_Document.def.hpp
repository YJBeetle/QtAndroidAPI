#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class DocumentsContract_Document : public JObject
	{
	public:
		// Fields
		static JString COLUMN_DISPLAY_NAME();
		static JString COLUMN_DOCUMENT_ID();
		static JString COLUMN_FLAGS();
		static JString COLUMN_ICON();
		static JString COLUMN_LAST_MODIFIED();
		static JString COLUMN_MIME_TYPE();
		static JString COLUMN_SIZE();
		static JString COLUMN_SUMMARY();
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
		static JString MIME_TYPE_DIR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DocumentsContract_Document(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DocumentsContract_Document(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

