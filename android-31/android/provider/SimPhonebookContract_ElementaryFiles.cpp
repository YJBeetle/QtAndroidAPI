#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./SimPhonebookContract_ElementaryFiles.hpp"

namespace android::provider
{
	// Fields
	JString SimPhonebookContract_ElementaryFiles::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract$ElementaryFiles",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString SimPhonebookContract_ElementaryFiles::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract$ElementaryFiles",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri SimPhonebookContract_ElementaryFiles::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract$ElementaryFiles",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jint SimPhonebookContract_ElementaryFiles::EF_ADN()
	{
		return getStaticField<jint>(
			"android.provider.SimPhonebookContract$ElementaryFiles",
			"EF_ADN"
		);
	}
	jint SimPhonebookContract_ElementaryFiles::EF_FDN()
	{
		return getStaticField<jint>(
			"android.provider.SimPhonebookContract$ElementaryFiles",
			"EF_FDN"
		);
	}
	jint SimPhonebookContract_ElementaryFiles::EF_SDN()
	{
		return getStaticField<jint>(
			"android.provider.SimPhonebookContract$ElementaryFiles",
			"EF_SDN"
		);
	}
	JString SimPhonebookContract_ElementaryFiles::EF_TYPE()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract$ElementaryFiles",
			"EF_TYPE",
			"Ljava/lang/String;"
		);
	}
	jint SimPhonebookContract_ElementaryFiles::EF_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.provider.SimPhonebookContract$ElementaryFiles",
			"EF_UNKNOWN"
		);
	}
	JString SimPhonebookContract_ElementaryFiles::MAX_RECORDS()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract$ElementaryFiles",
			"MAX_RECORDS",
			"Ljava/lang/String;"
		);
	}
	JString SimPhonebookContract_ElementaryFiles::NAME_MAX_LENGTH()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract$ElementaryFiles",
			"NAME_MAX_LENGTH",
			"Ljava/lang/String;"
		);
	}
	JString SimPhonebookContract_ElementaryFiles::PHONE_NUMBER_MAX_LENGTH()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract$ElementaryFiles",
			"PHONE_NUMBER_MAX_LENGTH",
			"Ljava/lang/String;"
		);
	}
	JString SimPhonebookContract_ElementaryFiles::RECORD_COUNT()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract$ElementaryFiles",
			"RECORD_COUNT",
			"Ljava/lang/String;"
		);
	}
	JString SimPhonebookContract_ElementaryFiles::SLOT_INDEX()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract$ElementaryFiles",
			"SLOT_INDEX",
			"Ljava/lang/String;"
		);
	}
	JString SimPhonebookContract_ElementaryFiles::SUBSCRIPTION_ID()
	{
		return getStaticObjectField(
			"android.provider.SimPhonebookContract$ElementaryFiles",
			"SUBSCRIPTION_ID",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	SimPhonebookContract_ElementaryFiles::SimPhonebookContract_ElementaryFiles(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::net::Uri SimPhonebookContract_ElementaryFiles::getItemUri(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.provider.SimPhonebookContract$ElementaryFiles",
			"getItemUri",
			"(II)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
} // namespace android::provider

