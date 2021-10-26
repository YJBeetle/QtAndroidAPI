#pragma once

#ifndef ANDROID_CONTENT_CLIPDATA
#define ANDROID_CONTENT_CLIPDATA

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ClipDescription;
}
namespace __jni_impl::android::content
{
	class ClipData_Item;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::content
{
	class ClipData : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::content::ClipData arg0);
		void __constructor(__jni_impl::android::content::ClipDescription arg0, __jni_impl::android::content::ClipData_Item arg1);
		void __constructor(jstring arg0, jarray arg1, __jni_impl::android::content::ClipData_Item arg2);
		void __constructor(const QString &arg0, jarray arg1, __jni_impl::android::content::ClipData_Item arg2);
		
		// Methods
		jstring toString();
		jint getItemCount();
		QAndroidJniObject getDescription();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		static QAndroidJniObject newPlainText(jstring arg0, jstring arg1);
		static QAndroidJniObject newPlainText(const QString &arg0, const QString &arg1);
		static QAndroidJniObject newHtmlText(jstring arg0, jstring arg1, jstring arg2);
		static QAndroidJniObject newHtmlText(const QString &arg0, const QString &arg1, const QString &arg2);
		static QAndroidJniObject newUri(__jni_impl::android::content::ContentResolver arg0, jstring arg1, __jni_impl::android::net::Uri arg2);
		static QAndroidJniObject newUri(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, __jni_impl::android::net::Uri arg2);
		static QAndroidJniObject newRawUri(jstring arg0, __jni_impl::android::net::Uri arg1);
		static QAndroidJniObject newRawUri(const QString &arg0, __jni_impl::android::net::Uri arg1);
		void addItem(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::content::ClipData_Item arg1);
		void addItem(__jni_impl::android::content::ClipData_Item arg0);
		QAndroidJniObject getItemAt(jint arg0);
		static QAndroidJniObject newIntent(jstring arg0, __jni_impl::android::content::Intent arg1);
		static QAndroidJniObject newIntent(const QString &arg0, __jni_impl::android::content::Intent arg1);
	};
} // namespace __jni_impl::android::content

#include "ClipDescription.hpp"
#include "ClipData_Item.hpp"
#include "../os/Parcel.hpp"
#include "ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "Intent.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject ClipData::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ClipData",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void ClipData::__constructor(__jni_impl::android::content::ClipData arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData",
			"(Landroid/content/ClipData;)V",
			arg0.__jniObject().object()
		);
	}
	void ClipData::__constructor(__jni_impl::android::content::ClipDescription arg0, __jni_impl::android::content::ClipData_Item arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData",
			"(Landroid/content/ClipDescription;Landroid/content/ClipData$Item;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ClipData::__constructor(jstring arg0, jarray arg1, __jni_impl::android::content::ClipData_Item arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData",
			"(Ljava/lang/CharSequence;[Ljava/lang/String;Landroid/content/ClipData$Item;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void ClipData::__constructor(const QString &arg0, jarray arg1, __jni_impl::android::content::ClipData_Item arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData",
			"(Ljava/lang/CharSequence;[Ljava/lang/String;Landroid/content/ClipData$Item;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	jstring ClipData::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ClipData::getItemCount()
	{
		return __thiz.callMethod<jint>(
			"getItemCount",
			"()I"
		);
	}
	QAndroidJniObject ClipData::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Landroid/content/ClipDescription;"
		);
	}
	jint ClipData::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ClipData::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ClipData::newPlainText(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newPlainText",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/ClipData;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ClipData::newPlainText(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newPlainText",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/ClipData;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject ClipData::newHtmlText(jstring arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newHtmlText",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;)Landroid/content/ClipData;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ClipData::newHtmlText(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newHtmlText",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;)Landroid/content/ClipData;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject ClipData::newUri(__jni_impl::android::content::ContentResolver arg0, jstring arg1, __jni_impl::android::net::Uri arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newUri",
			"(Landroid/content/ContentResolver;Ljava/lang/CharSequence;Landroid/net/Uri;)Landroid/content/ClipData;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ClipData::newUri(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, __jni_impl::android::net::Uri arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newUri",
			"(Landroid/content/ContentResolver;Ljava/lang/CharSequence;Landroid/net/Uri;)Landroid/content/ClipData;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ClipData::newRawUri(jstring arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newRawUri",
			"(Ljava/lang/CharSequence;Landroid/net/Uri;)Landroid/content/ClipData;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ClipData::newRawUri(const QString &arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newRawUri",
			"(Ljava/lang/CharSequence;Landroid/net/Uri;)Landroid/content/ClipData;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void ClipData::addItem(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::content::ClipData_Item arg1)
	{
		__thiz.callMethod<void>(
			"addItem",
			"(Landroid/content/ContentResolver;Landroid/content/ClipData$Item;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ClipData::addItem(__jni_impl::android::content::ClipData_Item arg0)
	{
		__thiz.callMethod<void>(
			"addItem",
			"(Landroid/content/ClipData$Item;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ClipData::getItemAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getItemAt",
			"(I)Landroid/content/ClipData$Item;",
			arg0
		);
	}
	QAndroidJniObject ClipData::newIntent(jstring arg0, __jni_impl::android::content::Intent arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newIntent",
			"(Ljava/lang/CharSequence;Landroid/content/Intent;)Landroid/content/ClipData;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ClipData::newIntent(const QString &arg0, __jni_impl::android::content::Intent arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newIntent",
			"(Ljava/lang/CharSequence;Landroid/content/Intent;)Landroid/content/ClipData;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class ClipData : public __jni_impl::android::content::ClipData
	{
	public:
		ClipData(QAndroidJniObject obj) { __thiz = obj; }
		ClipData(__jni_impl::android::content::ClipData arg0)
		{
			__constructor(
				arg0);
		}
		ClipData(__jni_impl::android::content::ClipDescription arg0, __jni_impl::android::content::ClipData_Item arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ClipData(jstring arg0, jarray arg1, __jni_impl::android::content::ClipData_Item arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_CLIPDATA

