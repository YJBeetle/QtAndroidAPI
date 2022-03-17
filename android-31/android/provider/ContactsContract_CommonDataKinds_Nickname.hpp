#pragma once

#include "../../JString.hpp"
#include "./ContactsContract_CommonDataKinds_Nickname.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_CommonDataKinds_Nickname::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Nickname::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Nickname::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Nickname::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_CommonDataKinds_Nickname::NAME()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"NAME",
			"Ljava/lang/String;"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Nickname::TYPE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"TYPE_DEFAULT"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Nickname::TYPE_INITIALS()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"TYPE_INITIALS"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Nickname::TYPE_MAIDEN_NAME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"TYPE_MAIDEN_NAME"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Nickname::TYPE_MAINDEN_NAME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"TYPE_MAINDEN_NAME"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Nickname::TYPE_OTHER_NAME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"TYPE_OTHER_NAME"
		);
	}
	inline jint ContactsContract_CommonDataKinds_Nickname::TYPE_SHORT_NAME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"TYPE_SHORT_NAME"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
