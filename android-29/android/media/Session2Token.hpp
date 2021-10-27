#pragma once

#ifndef ANDROID_MEDIA_SESSION2TOKEN
#define ANDROID_MEDIA_SESSION2TOKEN

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::media
{
	class Session2Token : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint TYPE_SESSION();
		static jint TYPE_SESSION_SERVICE();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getExtras();
		jstring getPackageName();
		jstring getServiceName();
		jint getType();
		jint getUid();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media

#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::media
{
	// Fields
	QAndroidJniObject Session2Token::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.Session2Token",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Session2Token::TYPE_SESSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Session2Token",
			"TYPE_SESSION"
		);
	}
	jint Session2Token::TYPE_SESSION_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Session2Token",
			"TYPE_SESSION_SERVICE"
		);
	}
	
	// Constructors
	void Session2Token::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.Session2Token",
			"(Landroid/content/Context;Landroid/content/ComponentName;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint Session2Token::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Session2Token::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Session2Token::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring Session2Token::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Session2Token::getServiceName()
	{
		return __thiz.callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Session2Token::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint Session2Token::getUid()
	{
		return __thiz.callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	jint Session2Token::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Session2Token::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Session2Token::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class Session2Token : public __jni_impl::android::media::Session2Token
	{
	public:
		Session2Token(QAndroidJniObject obj) { __thiz = obj; }
		Session2Token(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_SESSION2TOKEN

