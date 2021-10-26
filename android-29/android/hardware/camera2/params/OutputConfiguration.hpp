#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_PARAMS_OUTPUTCONFIGURATION
#define ANDROID_HARDWARE_CAMERA2_PARAMS_OUTPUTCONFIGURATION

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::util
{
	class Size;
}
namespace __jni_impl::android::view
{
	class Surface;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::hardware::camera2::params
{
	class OutputConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint SURFACE_GROUP_ID_NONE();
		
		// Constructors
		void __constructor(__jni_impl::android::util::Size arg0, jclass arg1);
		void __constructor(jint arg0, __jni_impl::android::view::Surface arg1);
		void __constructor(__jni_impl::android::view::Surface arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject getSurface();
		void enableSurfaceSharing();
		void setPhysicalCameraId(jstring arg0);
		void setPhysicalCameraId(const QString &arg0);
		void addSurface(__jni_impl::android::view::Surface arg0);
		void removeSurface(__jni_impl::android::view::Surface arg0);
		jint getMaxSharedSurfaceCount();
		QAndroidJniObject getSurfaces();
		jint getSurfaceGroupId();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::hardware::camera2::params

#include "../../../util/Size.hpp"
#include "../../../view/Surface.hpp"
#include "../../../os/Parcel.hpp"

namespace __jni_impl::android::hardware::camera2::params
{
	// Fields
	QAndroidJniObject OutputConfiguration::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.camera2.params.OutputConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint OutputConfiguration::SURFACE_GROUP_ID_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.OutputConfiguration",
			"SURFACE_GROUP_ID_NONE"
		);
	}
	
	// Constructors
	void OutputConfiguration::__constructor(__jni_impl::android::util::Size arg0, jclass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.OutputConfiguration",
			"(Landroid/util/Size;Ljava/lang/Class;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void OutputConfiguration::__constructor(jint arg0, __jni_impl::android::view::Surface arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.OutputConfiguration",
			"(ILandroid/view/Surface;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void OutputConfiguration::__constructor(__jni_impl::android::view::Surface arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.OutputConfiguration",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean OutputConfiguration::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint OutputConfiguration::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject OutputConfiguration::getSurface()
	{
		return __thiz.callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	void OutputConfiguration::enableSurfaceSharing()
	{
		__thiz.callMethod<void>(
			"enableSurfaceSharing",
			"()V"
		);
	}
	void OutputConfiguration::setPhysicalCameraId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPhysicalCameraId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void OutputConfiguration::setPhysicalCameraId(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPhysicalCameraId",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void OutputConfiguration::addSurface(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"addSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	void OutputConfiguration::removeSurface(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"removeSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	jint OutputConfiguration::getMaxSharedSurfaceCount()
	{
		return __thiz.callMethod<jint>(
			"getMaxSharedSurfaceCount",
			"()I"
		);
	}
	QAndroidJniObject OutputConfiguration::getSurfaces()
	{
		return __thiz.callObjectMethod(
			"getSurfaces",
			"()Ljava/util/List;"
		);
	}
	jint OutputConfiguration::getSurfaceGroupId()
	{
		return __thiz.callMethod<jint>(
			"getSurfaceGroupId",
			"()I"
		);
	}
	jint OutputConfiguration::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void OutputConfiguration::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::hardware::camera2::params

namespace android::hardware::camera2::params
{
	class OutputConfiguration : public __jni_impl::android::hardware::camera2::params::OutputConfiguration
	{
	public:
		OutputConfiguration(QAndroidJniObject obj) { __thiz = obj; }
		OutputConfiguration(__jni_impl::android::util::Size arg0, jclass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		OutputConfiguration(jint arg0, __jni_impl::android::view::Surface arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		OutputConfiguration(__jni_impl::android::view::Surface arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::hardware::camera2::params

#endif // ANDROID_HARDWARE_CAMERA2_PARAMS_OUTPUTCONFIGURATION

