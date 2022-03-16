#include "../../JByteArray.hpp"
#include "../content/ContentResolver.hpp"
#include "../content/ContentValues.hpp"
#include "../content/Context.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/BitmapFactory_Options.hpp"
#include "../net/Uri.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../JString.hpp"
#include "./Contacts_People.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri Contacts_People::CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Contacts_People::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString Contacts_People::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri Contacts_People::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Contacts_People::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri Contacts_People::DELETED_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People",
			"DELETED_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Contacts_People::PRIMARY_EMAIL_ID()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People",
			"PRIMARY_EMAIL_ID",
			"Ljava/lang/String;"
		);
	}
	JString Contacts_People::PRIMARY_ORGANIZATION_ID()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People",
			"PRIMARY_ORGANIZATION_ID",
			"Ljava/lang/String;"
		);
	}
	JString Contacts_People::PRIMARY_PHONE_ID()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People",
			"PRIMARY_PHONE_ID",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	android::net::Uri Contacts_People::addToGroup(android::content::ContentResolver arg0, jlong arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$People",
			"addToGroup",
			"(Landroid/content/ContentResolver;JLjava/lang/String;)Landroid/net/Uri;",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	android::net::Uri Contacts_People::addToGroup(android::content::ContentResolver arg0, jlong arg1, jlong arg2)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$People",
			"addToGroup",
			"(Landroid/content/ContentResolver;JJ)Landroid/net/Uri;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::net::Uri Contacts_People::addToMyContactsGroup(android::content::ContentResolver arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$People",
			"addToMyContactsGroup",
			"(Landroid/content/ContentResolver;J)Landroid/net/Uri;",
			arg0.object(),
			arg1
		);
	}
	android::net::Uri Contacts_People::createPersonInMyContactsGroup(android::content::ContentResolver arg0, android::content::ContentValues arg1)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$People",
			"createPersonInMyContactsGroup",
			"(Landroid/content/ContentResolver;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	android::graphics::Bitmap Contacts_People::loadContactPhoto(android::content::Context arg0, android::net::Uri arg1, jint arg2, android::graphics::BitmapFactory_Options arg3)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$People",
			"loadContactPhoto",
			"(Landroid/content/Context;Landroid/net/Uri;ILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	void Contacts_People::markAsContacted(android::content::ContentResolver arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"android.provider.Contacts$People",
			"markAsContacted",
			"(Landroid/content/ContentResolver;J)V",
			arg0.object(),
			arg1
		);
	}
	java::io::InputStream Contacts_People::openContactPhotoInputStream(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$People",
			"openContactPhotoInputStream",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Ljava/io/InputStream;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Contacts_People::queryGroups(android::content::ContentResolver arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$People",
			"queryGroups",
			"(Landroid/content/ContentResolver;J)Landroid/database/Cursor;",
			arg0.object(),
			arg1
		);
	}
	void Contacts_People::setPhotoData(android::content::ContentResolver arg0, android::net::Uri arg1, JByteArray arg2)
	{
		callStaticMethod<void>(
			"android.provider.Contacts$People",
			"setPhotoData",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;[B)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jbyteArray>()
		);
	}
} // namespace android::provider

