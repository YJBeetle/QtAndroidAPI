#pragma once

#ifndef ANDROID_MEDIA_SESSION_PLAYBACKSTATE_CUSTOMACTION
#define ANDROID_MEDIA_SESSION_PLAYBACKSTATE_CUSTOMACTION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::media::session
{
	class PlaybackState_CustomAction : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getName();
		QAndroidJniObject toString();
		QAndroidJniObject getExtras();
		QAndroidJniObject getAction();
		jint getIcon();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media::session

#include "../../os/Parcel.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::media::session
{
	// Fields
	QAndroidJniObject PlaybackState_CustomAction::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.session.PlaybackState$CustomAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void PlaybackState_CustomAction::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.session.PlaybackState$CustomAction",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PlaybackState_CustomAction::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject PlaybackState_CustomAction::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject PlaybackState_CustomAction::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	QAndroidJniObject PlaybackState_CustomAction::getAction()
	{
		return __thiz.callObjectMethod(
			"getAction",
			"()Ljava/lang/String;");
	}
	jint PlaybackState_CustomAction::getIcon()
	{
		return __thiz.callMethod<jint>(
			"getIcon",
			"()I");
	}
	jint PlaybackState_CustomAction::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void PlaybackState_CustomAction::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class PlaybackState_CustomAction : public __jni_impl::android::media::session::PlaybackState_CustomAction
	{
	public:
		PlaybackState_CustomAction(QAndroidJniObject obj) { __thiz = obj; }
		PlaybackState_CustomAction()
		{
			__constructor();
		}
	};
} // namespace android::media::session

#endif // ANDROID_MEDIA_SESSION_PLAYBACKSTATE_CUSTOMACTION

