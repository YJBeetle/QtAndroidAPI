#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_AggregationExceptions.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_AggregationExceptions::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_AggregationExceptions::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract_AggregationExceptions::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString ContactsContract_AggregationExceptions::RAW_CONTACT_ID1()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"RAW_CONTACT_ID1",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_AggregationExceptions::RAW_CONTACT_ID2()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"RAW_CONTACT_ID2",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_AggregationExceptions::TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$AggregationExceptions",
			"TYPE",
			"Ljava/lang/String;"
		);
	}
	inline jint ContactsContract_AggregationExceptions::TYPE_AUTOMATIC()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$AggregationExceptions",
			"TYPE_AUTOMATIC"
		);
	}
	inline jint ContactsContract_AggregationExceptions::TYPE_KEEP_SEPARATE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$AggregationExceptions",
			"TYPE_KEEP_SEPARATE"
		);
	}
	inline jint ContactsContract_AggregationExceptions::TYPE_KEEP_TOGETHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$AggregationExceptions",
			"TYPE_KEEP_TOGETHER"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
