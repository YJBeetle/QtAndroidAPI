#pragma once

#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_Photo.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_CommonDataKinds_Photo::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Photo",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Photo::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Photo",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Photo::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Photo",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Photo::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Photo",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Photo::PHOTO()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Photo",
			"PHOTO",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Photo::PHOTO_FILE_ID()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Photo",
			"PHOTO_FILE_ID",
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
