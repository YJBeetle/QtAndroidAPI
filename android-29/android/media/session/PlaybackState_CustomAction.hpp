#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
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
		jint describeContents();
		jstring getAction();
		QAndroidJniObject getExtras();
		jint getIcon();
		jstring getName();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media::session

#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::media::session
{
	// Fields
	QAndroidJniObject PlaybackState_CustomAction::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.session.PlaybackState$CustomAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void PlaybackState_CustomAction::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.session.PlaybackState$CustomAction",
			"(V)V");
	}
	
	// Methods
	jint PlaybackState_CustomAction::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring PlaybackState_CustomAction::getAction()
	{
		return __thiz.callObjectMethod(
			"getAction",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject PlaybackState_CustomAction::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint PlaybackState_CustomAction::getIcon()
	{
		return __thiz.callMethod<jint>(
			"getIcon",
			"()I"
		);
	}
	jstring PlaybackState_CustomAction::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring PlaybackState_CustomAction::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PlaybackState_CustomAction::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
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

