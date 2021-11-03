#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./Contacts.hpp"

namespace android::provider
{
	// Fields
	JString Contacts::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.Contacts",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri Contacts::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jint Contacts::KIND_EMAIL()
	{
		return getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_EMAIL"
		);
	}
	jint Contacts::KIND_IM()
	{
		return getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_IM"
		);
	}
	jint Contacts::KIND_ORGANIZATION()
	{
		return getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_ORGANIZATION"
		);
	}
	jint Contacts::KIND_PHONE()
	{
		return getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_PHONE"
		);
	}
	jint Contacts::KIND_POSTAL()
	{
		return getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_POSTAL"
		);
	}
	
	// QJniObject forward
	Contacts::Contacts(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

