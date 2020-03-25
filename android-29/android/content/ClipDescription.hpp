#pragma once

#ifndef ANDROID_CONTENT_CLIPDESCRIPTION
#define ANDROID_CONTENT_CLIPDESCRIPTION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content
{
	class ClipDescription : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject MIMETYPE_TEXT_HTML();
		static QAndroidJniObject MIMETYPE_TEXT_INTENT();
		static QAndroidJniObject MIMETYPE_TEXT_PLAIN();
		static QAndroidJniObject MIMETYPE_TEXT_URILIST();
		
		// Constructors
		void __constructor(jstring arg0, jarray arg1);
		void __constructor(__jni_impl::android::content::ClipDescription arg0);
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getExtras();
		QAndroidJniObject getMimeType(jint arg0);
		QAndroidJniObject getLabel();
		jlong getTimestamp();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		void setExtras(__jni_impl::android::os::PersistableBundle arg0);
		jboolean hasMimeType(jstring arg0);
		static jboolean compareMimeTypes(jstring arg0, jstring arg1);
		QAndroidJniObject filterMimeTypes(jstring arg0);
		jint getMimeTypeCount();
	};
} // namespace __jni_impl::android::content

#include "../os/PersistableBundle.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject ClipDescription::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ClipDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	QAndroidJniObject ClipDescription::MIMETYPE_TEXT_HTML()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_HTML",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ClipDescription::MIMETYPE_TEXT_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_INTENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ClipDescription::MIMETYPE_TEXT_PLAIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_PLAIN",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ClipDescription::MIMETYPE_TEXT_URILIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_URILIST",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void ClipDescription::__constructor(jstring arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipDescription",
			"(Ljava/lang/CharSequence;[Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void ClipDescription::__constructor(__jni_impl::android::content::ClipDescription arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipDescription",
			"(Landroid/content/ClipDescription;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ClipDescription::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ClipDescription::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;");
	}
	QAndroidJniObject ClipDescription::getMimeType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getMimeType",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject ClipDescription::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;");
	}
	jlong ClipDescription::getTimestamp()
	{
		return __thiz.callMethod<jlong>(
			"getTimestamp",
			"()J");
	}
	jint ClipDescription::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void ClipDescription::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void ClipDescription::setExtras(__jni_impl::android::os::PersistableBundle arg0)
	{
		__thiz.callMethod<void>(
			"setExtras",
			"(Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object());
	}
	jboolean ClipDescription::hasMimeType(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasMimeType",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jboolean ClipDescription::compareMimeTypes(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.content.ClipDescription",
			"compareMimeTypes",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1);
	}
	QAndroidJniObject ClipDescription::filterMimeTypes(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"filterMimeTypes",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0);
	}
	jint ClipDescription::getMimeTypeCount()
	{
		return __thiz.callMethod<jint>(
			"getMimeTypeCount",
			"()I");
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class ClipDescription : public __jni_impl::android::content::ClipDescription
	{
	public:
		ClipDescription(QAndroidJniObject obj) { __thiz = obj; }
		ClipDescription(jstring arg0, jarray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ClipDescription(__jni_impl::android::content::ClipDescription arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_CLIPDESCRIPTION

