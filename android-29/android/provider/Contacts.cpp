#include "../net/Uri.hpp"
#include "./Contacts.hpp"

namespace android::provider
{
	// Fields
	jstring Contacts::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Contacts::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jint Contacts::KIND_EMAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_EMAIL"
		);
	}
	jint Contacts::KIND_IM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_IM"
		);
	}
	jint Contacts::KIND_ORGANIZATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_ORGANIZATION"
		);
	}
	jint Contacts::KIND_PHONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_PHONE"
		);
	}
	jint Contacts::KIND_POSTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_POSTAL"
		);
	}
	
	Contacts::Contacts(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::provider

