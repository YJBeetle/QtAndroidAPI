#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::android::content
{
	class ContentValues;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class BitmapFactory_Options;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::android::provider
{
	class Contacts_People : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_FILTER_URI();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static QAndroidJniObject DELETED_CONTENT_URI();
		static jstring PRIMARY_EMAIL_ID();
		static jstring PRIMARY_ORGANIZATION_ID();
		static jstring PRIMARY_PHONE_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject addToGroup(__jni_impl::android::content::ContentResolver arg0, jlong arg1, jstring arg2);
		static QAndroidJniObject addToGroup(__jni_impl::android::content::ContentResolver arg0, jlong arg1, const QString &arg2);
		static QAndroidJniObject addToGroup(__jni_impl::android::content::ContentResolver arg0, jlong arg1, jlong arg2);
		static QAndroidJniObject addToMyContactsGroup(__jni_impl::android::content::ContentResolver arg0, jlong arg1);
		static QAndroidJniObject createPersonInMyContactsGroup(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::content::ContentValues arg1);
		static QAndroidJniObject loadContactPhoto(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jint arg2, __jni_impl::android::graphics::BitmapFactory_Options arg3);
		static void markAsContacted(__jni_impl::android::content::ContentResolver arg0, jlong arg1);
		static QAndroidJniObject openContactPhotoInputStream(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1);
		static QAndroidJniObject queryGroups(__jni_impl::android::content::ContentResolver arg0, jlong arg1);
		static void setPhotoData(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jbyteArray arg2);
	};
} // namespace __jni_impl::android::provider

#include "../content/ContentResolver.hpp"
#include "../content/ContentValues.hpp"
#include "../content/Context.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/BitmapFactory_Options.hpp"
#include "../net/Uri.hpp"
#include "../../java/io/InputStream.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Contacts_People::CONTENT_FILTER_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$People",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_People::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$People",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_People::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$People",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Contacts_People::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$People",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_People::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$People",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Contacts_People::DELETED_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$People",
			"DELETED_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_People::PRIMARY_EMAIL_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$People",
			"PRIMARY_EMAIL_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_People::PRIMARY_ORGANIZATION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$People",
			"PRIMARY_ORGANIZATION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_People::PRIMARY_PHONE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$People",
			"PRIMARY_PHONE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Contacts_People::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Contacts$People",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Contacts_People::addToGroup(__jni_impl::android::content::ContentResolver arg0, jlong arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Contacts$People",
			"addToGroup",
			"(Landroid/content/ContentResolver;JLjava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Contacts_People::addToGroup(__jni_impl::android::content::ContentResolver arg0, jlong arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Contacts$People",
			"addToGroup",
			"(Landroid/content/ContentResolver;JLjava/lang/String;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject Contacts_People::addToGroup(__jni_impl::android::content::ContentResolver arg0, jlong arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Contacts$People",
			"addToGroup",
			"(Landroid/content/ContentResolver;JJ)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Contacts_People::addToMyContactsGroup(__jni_impl::android::content::ContentResolver arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Contacts$People",
			"addToMyContactsGroup",
			"(Landroid/content/ContentResolver;J)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Contacts_People::createPersonInMyContactsGroup(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::content::ContentValues arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Contacts$People",
			"createPersonInMyContactsGroup",
			"(Landroid/content/ContentResolver;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Contacts_People::loadContactPhoto(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jint arg2, __jni_impl::android::graphics::BitmapFactory_Options arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Contacts$People",
			"loadContactPhoto",
			"(Landroid/content/Context;Landroid/net/Uri;ILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	void Contacts_People::markAsContacted(__jni_impl::android::content::ContentResolver arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.Contacts$People",
			"markAsContacted",
			"(Landroid/content/ContentResolver;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Contacts_People::openContactPhotoInputStream(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Contacts$People",
			"openContactPhotoInputStream",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Ljava/io/InputStream;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Contacts_People::queryGroups(__jni_impl::android::content::ContentResolver arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Contacts$People",
			"queryGroups",
			"(Landroid/content/ContentResolver;J)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Contacts_People::setPhotoData(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jbyteArray arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.Contacts$People",
			"setPhotoData",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;[B)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Contacts_People : public __jni_impl::android::provider::Contacts_People
	{
	public:
		Contacts_People(QAndroidJniObject obj) { __thiz = obj; }
		Contacts_People()
		{
			__constructor();
		}
	};
} // namespace android::provider

