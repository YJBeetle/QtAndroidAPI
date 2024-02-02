#pragma once

#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_Note.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_CommonDataKinds_Note::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Note",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Note::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Note",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Note::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Note",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Note::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Note",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Note::NOTE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Note",
			"NOTE",
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
