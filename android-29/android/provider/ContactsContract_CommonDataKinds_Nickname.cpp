#include "./ContactsContract_CommonDataKinds_Nickname.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_CommonDataKinds_Nickname::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Nickname::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Nickname::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Nickname::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_Nickname::NAME()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_Nickname::TYPE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"TYPE_DEFAULT"
		);
	}
	jint ContactsContract_CommonDataKinds_Nickname::TYPE_INITIALS()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"TYPE_INITIALS"
		);
	}
	jint ContactsContract_CommonDataKinds_Nickname::TYPE_MAIDEN_NAME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"TYPE_MAIDEN_NAME"
		);
	}
	jint ContactsContract_CommonDataKinds_Nickname::TYPE_MAINDEN_NAME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"TYPE_MAINDEN_NAME"
		);
	}
	jint ContactsContract_CommonDataKinds_Nickname::TYPE_OTHER_NAME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"TYPE_OTHER_NAME"
		);
	}
	jint ContactsContract_CommonDataKinds_Nickname::TYPE_SHORT_NAME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$Nickname",
			"TYPE_SHORT_NAME"
		);
	}
	
	// QAndroidJniObject forward
	ContactsContract_CommonDataKinds_Nickname::ContactsContract_CommonDataKinds_Nickname(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

