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
namespace __jni_impl::android::content
{
	class Intent;
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
	class ClipData : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::content::ClipData arg0);
		void __constructor(__jni_impl::android::content::ClipDescription arg0, __jni_impl::android::content::ClipData_Item arg1);
		void __constructor(jstring arg0, jarray arg1, __jni_impl::android::content::ClipData_Item arg2);
		
		// Methods
		QAndroidJniObject toString();
		jint getItemCount();
		static QAndroidJniObject newIntent(jstring arg0, __jni_impl::android::content::Intent arg1);
		QAndroidJniObject getDescription();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		static QAndroidJniObject newPlainText(jstring arg0, jstring arg1);
		static QAndroidJniObject newHtmlText(jstring arg0, jstring arg1, jstring arg2);
		static QAndroidJniObject newUri(__jni_impl::android::content::ContentResolver arg0, jstring arg1, __jni_impl::android::net::Uri arg2);
		static QAndroidJniObject newRawUri(jstring arg0, __jni_impl::android::net::Uri arg1);
		void addItem(__jni_impl::android::content::ClipData_Item arg0);
		void addItem(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::content::ClipData_Item arg1);
		QAndroidJniObject getItemAt(jint arg0);
	};
} // namespace __jni_impl::android::content

#include "ClipDescription.hpp"
#include "ClipData_Item.hpp"
#include "Intent.hpp"
#include "../os/Parcel.hpp"
#include "ContentResolver.hpp"
#include "../net/Uri.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject ClipData::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ClipData",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void ClipData::__constructor(__jni_impl::android::content::ClipData arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData",
			"(Landroid/content/ClipData;)V",
			arg0.__jniObject().object());
	}
	void ClipData::__constructor(__jni_impl::android::content::ClipDescription arg0, __jni_impl::android::content::ClipData_Item arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData",
			"(Landroid/content/ClipDescription;Landroid/content/ClipData$Item;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ClipData::__constructor(jstring arg0, jarray arg1, __jni_impl::android::content::ClipData_Item arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipData",
			"(Ljava/lang/CharSequence;[Ljava/lang/String;Landroid/content/ClipData$Item;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ClipData::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint ClipData::getItemCount()
	{
		return __thiz.callMethod<jint>(
			"getItemCount",
			"()I");
	}
	QAndroidJniObject ClipData::newIntent(jstring arg0, __jni_impl::android::content::Intent arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newIntent",
			"(Ljava/lang/CharSequence;Landroid/content/Intent;)Landroid/content/ClipData;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ClipData::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Landroid/content/ClipDescription;");
	}
	jint ClipData::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void ClipData::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject ClipData::newPlainText(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newPlainText",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/ClipData;",
			arg0,
			arg1);
	}
	QAndroidJniObject ClipData::newHtmlText(jstring arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newHtmlText",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;)Landroid/content/ClipData;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject ClipData::newUri(__jni_impl::android::content::ContentResolver arg0, jstring arg1, __jni_impl::android::net::Uri arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newUri",
			"(Landroid/content/ContentResolver;Ljava/lang/CharSequence;Landroid/net/Uri;)Landroid/content/ClipData;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject ClipData::newRawUri(jstring arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ClipData",
			"newRawUri",
			"(Ljava/lang/CharSequence;Landroid/net/Uri;)Landroid/content/ClipData;",
			arg0,
			arg1.__jniObject().object());
	}
	void ClipData::addItem(__jni_impl::android::content::ClipData_Item arg0)
	{
		__thiz.callMethod<void>(
			"addItem",
			"(Landroid/content/ClipData$Item;)V",
			arg0.__jniObject().object());
	}
	void ClipData::addItem(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::content::ClipData_Item arg1)
	{
		__thiz.callMethod<void>(
			"addItem",
			"(Landroid/content/ContentResolver;Landroid/content/ClipData$Item;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ClipData::getItemAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getItemAt",
			"(I)Landroid/content/ClipData$Item;",
			arg0);
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

