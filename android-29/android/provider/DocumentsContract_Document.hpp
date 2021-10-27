#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class DocumentsContract_Document : public __JniBaseClass
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
		static jint FLAG_PARTIAL();
		static jint FLAG_SUPPORTS_COPY();
		static jint FLAG_SUPPORTS_DELETE();
		static jint FLAG_SUPPORTS_METADATA();
		static jint FLAG_SUPPORTS_MOVE();
		static jint FLAG_SUPPORTS_REMOVE();
		static jint FLAG_SUPPORTS_RENAME();
		static jint FLAG_SUPPORTS_SETTINGS();
		static jint FLAG_SUPPORTS_THUMBNAIL();
		static jint FLAG_SUPPORTS_WRITE();
		static jint FLAG_VIRTUAL_DOCUMENT();
		static jint FLAG_WEB_LINKABLE();
		static jstring MIME_TYPE_DIR();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring DocumentsContract_Document::COLUMN_DISPLAY_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Document",
			"COLUMN_DISPLAY_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract_Document::COLUMN_DOCUMENT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Document",
			"COLUMN_DOCUMENT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract_Document::COLUMN_FLAGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Document",
			"COLUMN_FLAGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract_Document::COLUMN_ICON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Document",
			"COLUMN_ICON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract_Document::COLUMN_LAST_MODIFIED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Document",
			"COLUMN_LAST_MODIFIED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract_Document::COLUMN_MIME_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Document",
			"COLUMN_MIME_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract_Document::COLUMN_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Document",
			"COLUMN_SIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract_Document::COLUMN_SUMMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Document",
			"COLUMN_SUMMARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DocumentsContract_Document::FLAG_DIR_PREFERS_GRID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Document",
			"FLAG_DIR_PREFERS_GRID"
		);
	}
	jint DocumentsContract_Document::FLAG_DIR_PREFERS_LAST_MODIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Document",
			"FLAG_DIR_PREFERS_LAST_MODIFIED"
		);
	}
	jint DocumentsContract_Document::FLAG_DIR_SUPPORTS_CREATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Document",
			"FLAG_DIR_SUPPORTS_CREATE"
		);
	}
	jint DocumentsContract_Document::FLAG_PARTIAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Document",
			"FLAG_PARTIAL"
		);
	}
	jint DocumentsContract_Document::FLAG_SUPPORTS_COPY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Document",
			"FLAG_SUPPORTS_COPY"
		);
	}
	jint DocumentsContract_Document::FLAG_SUPPORTS_DELETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Document",
			"FLAG_SUPPORTS_DELETE"
		);
	}
	jint DocumentsContract_Document::FLAG_SUPPORTS_METADATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Document",
			"FLAG_SUPPORTS_METADATA"
		);
	}
	jint DocumentsContract_Document::FLAG_SUPPORTS_MOVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Document",
			"FLAG_SUPPORTS_MOVE"
		);
	}
	jint DocumentsContract_Document::FLAG_SUPPORTS_REMOVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Document",
			"FLAG_SUPPORTS_REMOVE"
		);
	}
	jint DocumentsContract_Document::FLAG_SUPPORTS_RENAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Document",
			"FLAG_SUPPORTS_RENAME"
		);
	}
	jint DocumentsContract_Document::FLAG_SUPPORTS_SETTINGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Document",
			"FLAG_SUPPORTS_SETTINGS"
		);
	}
	jint DocumentsContract_Document::FLAG_SUPPORTS_THUMBNAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Document",
			"FLAG_SUPPORTS_THUMBNAIL"
		);
	}
	jint DocumentsContract_Document::FLAG_SUPPORTS_WRITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Document",
			"FLAG_SUPPORTS_WRITE"
		);
	}
	jint DocumentsContract_Document::FLAG_VIRTUAL_DOCUMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Document",
			"FLAG_VIRTUAL_DOCUMENT"
		);
	}
	jint DocumentsContract_Document::FLAG_WEB_LINKABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Document",
			"FLAG_WEB_LINKABLE"
		);
	}
	jstring DocumentsContract_Document::MIME_TYPE_DIR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Document",
			"MIME_TYPE_DIR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void DocumentsContract_Document::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.DocumentsContract$Document",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class DocumentsContract_Document : public __jni_impl::android::provider::DocumentsContract_Document
	{
	public:
		DocumentsContract_Document(QAndroidJniObject obj) { __thiz = obj; }
		DocumentsContract_Document()
		{
			__constructor();
		}
	};
} // namespace android::provider

