#include "../content/res/Resources.hpp"
#include "./ContactsContract_CommonDataKinds_SipAddress.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_CommonDataKinds_SipAddress::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$SipAddress",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_SipAddress::EXTRA_ADDRESS_BOOK_INDEX()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$SipAddress",
			"EXTRA_ADDRESS_BOOK_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_SipAddress::EXTRA_ADDRESS_BOOK_INDEX_COUNTS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$SipAddress",
			"EXTRA_ADDRESS_BOOK_INDEX_COUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_SipAddress::EXTRA_ADDRESS_BOOK_INDEX_TITLES()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$SipAddress",
			"EXTRA_ADDRESS_BOOK_INDEX_TITLES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_CommonDataKinds_SipAddress::SIP_ADDRESS()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$CommonDataKinds$SipAddress",
			"SIP_ADDRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_SipAddress::TYPE_HOME()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$SipAddress",
			"TYPE_HOME"
		);
	}
	jint ContactsContract_CommonDataKinds_SipAddress::TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$SipAddress",
			"TYPE_OTHER"
		);
	}
	jint ContactsContract_CommonDataKinds_SipAddress::TYPE_WORK()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$CommonDataKinds$SipAddress",
			"TYPE_WORK"
		);
	}
	
	// QAndroidJniObject forward
	ContactsContract_CommonDataKinds_SipAddress::ContactsContract_CommonDataKinds_SipAddress(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring ContactsContract_CommonDataKinds_SipAddress::getTypeLabel(android::content::res::Resources arg0, jint arg1, jstring arg2)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$CommonDataKinds$SipAddress",
			"getTypeLabel",
			"(Landroid/content/res/Resources;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2
		).object<jstring>();
	}
	jint ContactsContract_CommonDataKinds_SipAddress::getTypeLabelResource(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.provider.ContactsContract$CommonDataKinds$SipAddress",
			"getTypeLabelResource",
			"(I)I",
			arg0
		);
	}
} // namespace android::provider

