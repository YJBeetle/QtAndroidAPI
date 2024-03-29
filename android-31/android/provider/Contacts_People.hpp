#pragma once

#include "../../JByteArray.hpp"
#include "../content/ContentResolver.def.hpp"
#include "../content/ContentValues.def.hpp"
#include "../content/Context.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../graphics/BitmapFactory_Options.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../JString.hpp"
#include "./Contacts_People.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri Contacts_People::CONTENT_FILTER_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Contacts_People::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_People::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri Contacts_People::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Contacts_People::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri Contacts_People::DELETED_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People",
			"DELETED_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Contacts_People::PRIMARY_EMAIL_ID()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People",
			"PRIMARY_EMAIL_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_People::PRIMARY_ORGANIZATION_ID()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People",
			"PRIMARY_ORGANIZATION_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_People::PRIMARY_PHONE_ID()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People",
			"PRIMARY_PHONE_ID",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::Uri Contacts_People::addToGroup(android::content::ContentResolver arg0, jlong arg1, JString arg2)
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
	inline android::net::Uri Contacts_People::addToGroup(android::content::ContentResolver arg0, jlong arg1, jlong arg2)
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
	inline android::net::Uri Contacts_People::addToMyContactsGroup(android::content::ContentResolver arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$People",
			"addToMyContactsGroup",
			"(Landroid/content/ContentResolver;J)Landroid/net/Uri;",
			arg0.object(),
			arg1
		);
	}
	inline android::net::Uri Contacts_People::createPersonInMyContactsGroup(android::content::ContentResolver arg0, android::content::ContentValues arg1)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$People",
			"createPersonInMyContactsGroup",
			"(Landroid/content/ContentResolver;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::graphics::Bitmap Contacts_People::loadContactPhoto(android::content::Context arg0, android::net::Uri arg1, jint arg2, android::graphics::BitmapFactory_Options arg3)
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
	inline void Contacts_People::markAsContacted(android::content::ContentResolver arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"android.provider.Contacts$People",
			"markAsContacted",
			"(Landroid/content/ContentResolver;J)V",
			arg0.object(),
			arg1
		);
	}
	inline java::io::InputStream Contacts_People::openContactPhotoInputStream(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$People",
			"openContactPhotoInputStream",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Ljava/io/InputStream;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Contacts_People::queryGroups(android::content::ContentResolver arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$People",
			"queryGroups",
			"(Landroid/content/ContentResolver;J)Landroid/database/Cursor;",
			arg0.object(),
			arg1
		);
	}
	inline void Contacts_People::setPhotoData(android::content::ContentResolver arg0, android::net::Uri arg1, JByteArray arg2)
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
