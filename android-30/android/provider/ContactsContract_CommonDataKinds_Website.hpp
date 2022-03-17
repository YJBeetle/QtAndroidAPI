#pragma once

#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_Website.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_CommonDataKinds_Website::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Website::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Website::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Website::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Website::TYPE_BLOG()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_BLOG"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Website::TYPE_FTP()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_FTP"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Website::TYPE_HOME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_HOME"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Website::TYPE_HOMEPAGE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_HOMEPAGE"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Website::TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_OTHER"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Website::TYPE_PROFILE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_PROFILE"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Website::TYPE_WORK()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"TYPE_WORK"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Website::URL()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Website",
			"URL",
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
