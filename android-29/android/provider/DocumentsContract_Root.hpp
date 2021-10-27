#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class DocumentsContract_Root : public __JniBaseClass
	{
	public:
		// Fields
		static jstring COLUMN_AVAILABLE_BYTES();
		static jstring COLUMN_CAPACITY_BYTES();
		static jstring COLUMN_DOCUMENT_ID();
		static jstring COLUMN_FLAGS();
		static jstring COLUMN_ICON();
		static jstring COLUMN_MIME_TYPES();
		static jstring COLUMN_QUERY_ARGS();
		static jstring COLUMN_ROOT_ID();
		static jstring COLUMN_SUMMARY();
		static jstring COLUMN_TITLE();
		static jint FLAG_EMPTY();
		static jint FLAG_LOCAL_ONLY();
		static jint FLAG_SUPPORTS_CREATE();
		static jint FLAG_SUPPORTS_EJECT();
		static jint FLAG_SUPPORTS_IS_CHILD();
		static jint FLAG_SUPPORTS_RECENTS();
		static jint FLAG_SUPPORTS_SEARCH();
		static jstring MIME_TYPE_ITEM();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
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
	
	// Constructors
	void DocumentsContract_Root::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.DocumentsContract$Root",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class DocumentsContract_Root : public __jni_impl::android::provider::DocumentsContract_Root
	{
	public:
		DocumentsContract_Root(QAndroidJniObject obj) { __thiz = obj; }
		DocumentsContract_Root()
		{
			__constructor();
		}
	};
} // namespace android::provider

