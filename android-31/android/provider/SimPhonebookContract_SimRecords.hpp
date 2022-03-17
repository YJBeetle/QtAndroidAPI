#pragma once

#include "../content/ContentResolver.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./SimPhonebookContract_SimRecords.def.hpp"

namespace android::provider
{
	// Fields
	inline JString SimPhonebookContract_SimRecords::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract$SimRecords",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString SimPhonebookContract_SimRecords::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract$SimRecords",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString SimPhonebookContract_SimRecords::ELEMENTARY_FILE_TYPE()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract$SimRecords",
			"ELEMENTARY_FILE_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline jint SimPhonebookContract_SimRecords::ERROR_NAME_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.provider.SimPhonebookContract$SimRecords",
			"ERROR_NAME_UNSUPPORTED"
		);
	}
	inline JString SimPhonebookContract_SimRecords::NAME()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract$SimRecords",
			"NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString SimPhonebookContract_SimRecords::PHONE_NUMBER()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract$SimRecords",
			"PHONE_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString SimPhonebookContract_SimRecords::RECORD_NUMBER()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract$SimRecords",
			"RECORD_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString SimPhonebookContract_SimRecords::SUBSCRIPTION_ID()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract$SimRecords",
			"SUBSCRIPTION_ID",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::Uri SimPhonebookContract_SimRecords::getContentUri(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.provider.SimPhonebookContract$SimRecords",
			"getContentUri",
			"(II)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
	inline jint SimPhonebookContract_SimRecords::getEncodedNameLength(android::content::ContentResolver arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.provider.SimPhonebookContract$SimRecords",
			"getEncodedNameLength",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::net::Uri SimPhonebookContract_SimRecords::getItemUri(jint arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.provider.SimPhonebookContract$SimRecords",
			"getItemUri",
			"(III)Landroid/net/Uri;",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::provider

// Base class headers

