#include "./DocumentsContract_Root.hpp"

namespace android::provider
{
	// Fields
	jstring DocumentsContract_Root::COLUMN_AVAILABLE_BYTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_AVAILABLE_BYTES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract_Root::COLUMN_CAPACITY_BYTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_CAPACITY_BYTES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract_Root::COLUMN_DOCUMENT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_DOCUMENT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract_Root::COLUMN_FLAGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_FLAGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract_Root::COLUMN_ICON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_ICON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract_Root::COLUMN_MIME_TYPES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_MIME_TYPES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract_Root::COLUMN_QUERY_ARGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_QUERY_ARGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract_Root::COLUMN_ROOT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_ROOT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract_Root::COLUMN_SUMMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_SUMMARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DocumentsContract_Root::COLUMN_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DocumentsContract_Root::FLAG_EMPTY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_EMPTY"
		);
	}
	jint DocumentsContract_Root::FLAG_LOCAL_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_LOCAL_ONLY"
		);
	}
	jint DocumentsContract_Root::FLAG_SUPPORTS_CREATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_CREATE"
		);
	}
	jint DocumentsContract_Root::FLAG_SUPPORTS_EJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_EJECT"
		);
	}
	jint DocumentsContract_Root::FLAG_SUPPORTS_IS_CHILD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_IS_CHILD"
		);
	}
	jint DocumentsContract_Root::FLAG_SUPPORTS_RECENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_RECENTS"
		);
	}
	jint DocumentsContract_Root::FLAG_SUPPORTS_SEARCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_SEARCH"
		);
	}
	jstring DocumentsContract_Root::MIME_TYPE_ITEM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"MIME_TYPE_ITEM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	DocumentsContract_Root::DocumentsContract_Root(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::provider

