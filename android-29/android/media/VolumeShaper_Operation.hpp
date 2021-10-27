#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::media
{
	class VolumeShaper_Operation : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject PLAY();
		static QAndroidJniObject REVERSE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media

#include "../os/Parcel.hpp"

namespace __jni_impl::android::media
{
	// Fields
	QAndroidJniObject VolumeShaper_Operation::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.VolumeShaper$Operation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject VolumeShaper_Operation::PLAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.VolumeShaper$Operation",
			"PLAY",
			"Landroid/media/VolumeShaper$Operation;"
		);
	}
	QAndroidJniObject VolumeShaper_Operation::REVERSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.VolumeShaper$Operation",
			"REVERSE",
			"Landroid/media/VolumeShaper$Operation;"
		);
	}
	
	// Constructors
	void VolumeShaper_Operation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.VolumeShaper$Operation",
			"(V)V");
	}
	
	// Methods
	jint VolumeShaper_Operation::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean VolumeShaper_Operation::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint VolumeShaper_Operation::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring VolumeShaper_Operation::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VolumeShaper_Operation::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class VolumeShaper_Operation : public __jni_impl::android::media::VolumeShaper_Operation
	{
	public:
		VolumeShaper_Operation(QAndroidJniObject obj) { __thiz = obj; }
		VolumeShaper_Operation()
		{
			__constructor();
		}
	};
} // namespace android::media

