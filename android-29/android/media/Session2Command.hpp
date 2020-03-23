#pragma once

#ifndef ANDROID_MEDIA_SESSION2COMMAND
#define ANDROID_MEDIA_SESSION2COMMAND

#include "../../__JniBaseClass.hpp"

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
	class Session2Command : public __JniBaseClass
	{
	public:
		// Fields
		static jint COMMAND_CODE_CUSTOM();
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jstring arg0, __jni_impl::android::os::Bundle arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jint getCommandCode();
		QAndroidJniObject getCustomAction();
		QAndroidJniObject getCustomExtras();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media

#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint Session2Command::COMMAND_CODE_CUSTOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Session2Command",
			"COMMAND_CODE_CUSTOM");
	}
	QAndroidJniObject Session2Command::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.Session2Command",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void Session2Command::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.Session2Command",
			"(I)V",
			arg0);
	}
	void Session2Command::__constructor(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.Session2Command",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	jboolean Session2Command::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint Session2Command::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint Session2Command::getCommandCode()
	{
		return __thiz.callMethod<jint>(
			"getCommandCode",
			"()I");
	}
	QAndroidJniObject Session2Command::getCustomAction()
	{
		return __thiz.callObjectMethod(
			"getCustomAction",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Session2Command::getCustomExtras()
	{
		return __thiz.callObjectMethod(
			"getCustomExtras",
			"()Landroid/os/Bundle;");
	}
	jint Session2Command::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void Session2Command::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class Session2Command : public __jni_impl::android::media::Session2Command
	{
	public:
		Session2Command(QAndroidJniObject obj) { __thiz = obj; }
		Session2Command(jint arg0)
		{
			__constructor(
				arg0);
		}
		Session2Command(jstring arg0, __jni_impl::android::os::Bundle arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_SESSION2COMMAND

