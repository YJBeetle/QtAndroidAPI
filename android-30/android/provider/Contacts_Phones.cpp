#include "../../JArray.hpp"
#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./Contacts_Phones.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri Contacts_Phones::CONTENT_FILTER_URL()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Phones",
			"CONTENT_FILTER_URL",
			"Landroid/net/Uri;"
		);
	}
	JString Contacts_Phones::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Phones",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString Contacts_Phones::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Phones",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri Contacts_Phones::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Phones",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Contacts_Phones::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Phones",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	JString Contacts_Phones::PERSON_ID()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Phones",
			"PERSON_ID",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	Contacts_Phones::Contacts_Phones(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString Contacts_Phones::getDisplayLabel(android::content::Context arg0, jint arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$Phones",
			"getDisplayLabel",
			"(Landroid/content/Context;ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	JString Contacts_Phones::getDisplayLabel(android::content::Context arg0, jint arg1, JString arg2, JArray arg3)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$Phones",
			"getDisplayLabel",
			"(Landroid/content/Context;ILjava/lang/CharSequence;[Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2.object<jstring>(),
			arg3.object<jarray>()
		);
	}
} // namespace android::provider

