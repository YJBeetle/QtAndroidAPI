#pragma once

#ifndef ANDROID_APP_PICTUREINPICTUREPARAMS
#define ANDROID_APP_PICTUREINPICTUREPARAMS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class PictureInPictureParams : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject PictureInPictureParams::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.PictureInPictureParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void PictureInPictureParams::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.PictureInPictureParams",
			"(V)V");
	}
	
	// Methods
	jint PictureInPictureParams::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void PictureInPictureParams::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class PictureInPictureParams : public __jni_impl::android::app::PictureInPictureParams
	{
	public:
		PictureInPictureParams(QAndroidJniObject obj) { __thiz = obj; }
		PictureInPictureParams()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_PICTUREINPICTUREPARAMS

