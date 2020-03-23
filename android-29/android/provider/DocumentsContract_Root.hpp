#pragma once

#ifndef ANDROID_PROVIDER_DOCUMENTSCONTRACT_ROOT
#define ANDROID_PROVIDER_DOCUMENTSCONTRACT_ROOT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class DocumentsContract_Root : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject COLUMN_AVAILABLE_BYTES();
		static QAndroidJniObject COLUMN_CAPACITY_BYTES();
		static QAndroidJniObject COLUMN_DOCUMENT_ID();
		static QAndroidJniObject COLUMN_FLAGS();
		static QAndroidJniObject COLUMN_ICON();
		static QAndroidJniObject COLUMN_MIME_TYPES();
		static QAndroidJniObject COLUMN_QUERY_ARGS();
		static QAndroidJniObject COLUMN_ROOT_ID();
		static QAndroidJniObject COLUMN_SUMMARY();
		static QAndroidJniObject COLUMN_TITLE();
		static jint FLAG_EMPTY();
		static jint FLAG_LOCAL_ONLY();
		static jint FLAG_SUPPORTS_CREATE();
		static jint FLAG_SUPPORTS_EJECT();
		static jint FLAG_SUPPORTS_IS_CHILD();
		static jint FLAG_SUPPORTS_RECENTS();
		static jint FLAG_SUPPORTS_SEARCH();
		static QAndroidJniObject MIME_TYPE_ITEM();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject DocumentsContract_Root::COLUMN_AVAILABLE_BYTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_AVAILABLE_BYTES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract_Root::COLUMN_CAPACITY_BYTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_CAPACITY_BYTES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract_Root::COLUMN_DOCUMENT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_DOCUMENT_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract_Root::COLUMN_FLAGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_FLAGS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract_Root::COLUMN_ICON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_ICON",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract_Root::COLUMN_MIME_TYPES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_MIME_TYPES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract_Root::COLUMN_QUERY_ARGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_QUERY_ARGS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract_Root::COLUMN_ROOT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_ROOT_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract_Root::COLUMN_SUMMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_SUMMARY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DocumentsContract_Root::COLUMN_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_TITLE",
			"Ljava/lang/String;");
	}
	jint DocumentsContract_Root::FLAG_EMPTY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_EMPTY");
	}
	jint DocumentsContract_Root::FLAG_LOCAL_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_LOCAL_ONLY");
	}
	jint DocumentsContract_Root::FLAG_SUPPORTS_CREATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_CREATE");
	}
	jint DocumentsContract_Root::FLAG_SUPPORTS_EJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_EJECT");
	}
	jint DocumentsContract_Root::FLAG_SUPPORTS_IS_CHILD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_IS_CHILD");
	}
	jint DocumentsContract_Root::FLAG_SUPPORTS_RECENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_RECENTS");
	}
	jint DocumentsContract_Root::FLAG_SUPPORTS_SEARCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_SEARCH");
	}
	QAndroidJniObject DocumentsContract_Root::MIME_TYPE_ITEM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"MIME_TYPE_ITEM",
			"Ljava/lang/String;");
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

#endif // ANDROID_PROVIDER_DOCUMENTSCONTRACT_ROOT

