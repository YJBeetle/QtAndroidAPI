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
		static jstring MIMETYPE_TEXT_HTML();
		static jstring MIMETYPE_TEXT_INTENT();
		static jstring MIMETYPE_TEXT_PLAIN();
		static jstring MIMETYPE_TEXT_URILIST();
		
		// Constructors
		void __constructor(jstring arg0, jarray arg1);
		void __constructor(const QString &arg0, jarray arg1);
		void __constructor(__jni_impl::android::content::ClipDescription arg0);
		
		// Methods
		jstring toString();
		void setExtras(__jni_impl::android::os::PersistableBundle arg0);
		static jboolean compareMimeTypes(jstring arg0, jstring arg1);
		static jboolean compareMimeTypes(const QString &arg0, const QString &arg1);
		jarray filterMimeTypes(jstring arg0);
		jarray filterMimeTypes(const QString &arg0);
		jint getMimeTypeCount();
		jstring getLabel();
		jstring getMimeType(jint arg0);
		jlong getTimestamp();
		jboolean hasMimeType(jstring arg0);
		jboolean hasMimeType(const QString &arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getExtras();
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
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring ClipDescription::MIMETYPE_TEXT_HTML()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_HTML",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ClipDescription::MIMETYPE_TEXT_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ClipDescription::MIMETYPE_TEXT_PLAIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_PLAIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ClipDescription::MIMETYPE_TEXT_URILIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ClipDescription",
			"MIMETYPE_TEXT_URILIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ClipDescription::__constructor(jstring arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipDescription",
			"(Ljava/lang/CharSequence;[Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void ClipDescription::__constructor(const QString &arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipDescription",
			"(Ljava/lang/CharSequence;[Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void ClipDescription::__constructor(__jni_impl::android::content::ClipDescription arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipDescription",
			"(Landroid/content/ClipDescription;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jstring ClipDescription::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ClipDescription::setExtras(__jni_impl::android::os::PersistableBundle arg0)
	{
		__thiz.callMethod<void>(
			"setExtras",
			"(Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ClipDescription::compareMimeTypes(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.content.ClipDescription",
			"compareMimeTypes",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jboolean ClipDescription::compareMimeTypes(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.content.ClipDescription",
			"compareMimeTypes",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jarray ClipDescription::filterMimeTypes(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"filterMimeTypes",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jarray ClipDescription::filterMimeTypes(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"filterMimeTypes",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	jint ClipDescription::getMimeTypeCount()
	{
		return __thiz.callMethod<jint>(
			"getMimeTypeCount",
			"()I"
		);
	}
	jstring ClipDescription::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring ClipDescription::getMimeType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getMimeType",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jlong ClipDescription::getTimestamp()
	{
		return __thiz.callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	jboolean ClipDescription::hasMimeType(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasMimeType",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean ClipDescription::hasMimeType(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasMimeType",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint ClipDescription::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ClipDescription::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ClipDescription::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/PersistableBundle;"
		);
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

