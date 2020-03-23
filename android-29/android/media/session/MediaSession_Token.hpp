#pragma once

#ifndef ANDROID_MEDIA_SESSION_MEDIASESSION_TOKEN
#define ANDROID_MEDIA_SESSION_MEDIASESSION_TOKEN

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::media::session
{
	class MediaSession_Token : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media::session

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::media::session
{
	// Fields
	QAndroidJniObject MediaSession_Token::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.session.MediaSession$Token",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void MediaSession_Token::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.session.MediaSession$Token",
			"(V)V");
	}
	
	// Methods
	jboolean MediaSession_Token::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint MediaSession_Token::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint MediaSession_Token::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void MediaSession_Token::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::media::session

namespace android::media::session
{
	class MediaSession_Token : public __jni_impl::android::media::session::MediaSession_Token
	{
	public:
		MediaSession_Token(QAndroidJniObject obj) { __thiz = obj; }
		MediaSession_Token()
		{
			__constructor();
		}
	};
} // namespace android::media::session

#endif // ANDROID_MEDIA_SESSION_MEDIASESSION_TOKEN

