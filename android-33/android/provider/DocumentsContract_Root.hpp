#pragma once

#include "../../JString.hpp"
#include "./DocumentsContract_Root.def.hpp"

namespace android::provider
{
	// Fields
	inline JString DocumentsContract_Root::COLUMN_AVAILABLE_BYTES()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_AVAILABLE_BYTES",
			"Ljava/lang/String;"
		);
	}
	inline JString DocumentsContract_Root::COLUMN_CAPACITY_BYTES()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_CAPACITY_BYTES",
			"Ljava/lang/String;"
		);
	}
	inline JString DocumentsContract_Root::COLUMN_DOCUMENT_ID()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_DOCUMENT_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString DocumentsContract_Root::COLUMN_FLAGS()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_FLAGS",
			"Ljava/lang/String;"
		);
	}
	inline JString DocumentsContract_Root::COLUMN_ICON()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_ICON",
			"Ljava/lang/String;"
		);
	}
	inline JString DocumentsContract_Root::COLUMN_MIME_TYPES()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_MIME_TYPES",
			"Ljava/lang/String;"
		);
	}
	inline JString DocumentsContract_Root::COLUMN_QUERY_ARGS()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_QUERY_ARGS",
			"Ljava/lang/String;"
		);
	}
	inline JString DocumentsContract_Root::COLUMN_ROOT_ID()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_ROOT_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString DocumentsContract_Root::COLUMN_SUMMARY()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_SUMMARY",
			"Ljava/lang/String;"
		);
	}
	inline JString DocumentsContract_Root::COLUMN_TITLE()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_TITLE",
			"Ljava/lang/String;"
		);
	}
	inline jint DocumentsContract_Root::FLAG_EMPTY()
	{
		return getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_EMPTY"
		);
	}
	inline jint DocumentsContract_Root::FLAG_LOCAL_ONLY()
	{
		return getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_LOCAL_ONLY"
		);
	}
	inline jint DocumentsContract_Root::FLAG_SUPPORTS_CREATE()
	{
		return getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_CREATE"
		);
	}
	inline jint DocumentsContract_Root::FLAG_SUPPORTS_EJECT()
	{
		return getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_EJECT"
		);
	}
	inline jint DocumentsContract_Root::FLAG_SUPPORTS_IS_CHILD()
	{
		return getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_IS_CHILD"
		);
	}
	inline jint DocumentsContract_Root::FLAG_SUPPORTS_RECENTS()
	{
		return getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_RECENTS"
		);
	}
	inline jint DocumentsContract_Root::FLAG_SUPPORTS_SEARCH()
	{
		return getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_SEARCH"
		);
	}
	inline JString DocumentsContract_Root::MIME_TYPE_ITEM()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"MIME_TYPE_ITEM",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
