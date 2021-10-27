#pragma once

#ifndef ANDROID_GRAPHICS_POINTF
#define ANDROID_GRAPHICS_POINTF

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Point;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::graphics
{
	class PointF : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jfloat x();
		jfloat y();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::graphics::Point arg0);
		void __constructor(jfloat arg0, jfloat arg1);
		
		// Methods
		static jfloat length(jfloat arg0, jfloat arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		jboolean equals(jfloat arg0, jfloat arg1);
		jint hashCode();
		jfloat length();
		void negate();
		void offset(jfloat arg0, jfloat arg1);
		void readFromParcel(__jni_impl::android::os::Parcel arg0);
		void set(__jni_impl::android::graphics::PointF arg0);
		void set(jfloat arg0, jfloat arg1);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::graphics

#include "Point.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	QAndroidJniObject PointF::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PointF",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jfloat PointF::x()
	{
		return __thiz.getField<jfloat>(
			"x"
		);
	}
	jfloat PointF::y()
	{
		return __thiz.getField<jfloat>(
			"y"
		);
	}
	
	// Constructors
	void PointF::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PointF",
			"()V"
		);
	}
	void PointF::__constructor(__jni_impl::android::graphics::Point arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PointF",
			"(Landroid/graphics/Point;)V",
			arg0.__jniObject().object()
		);
	}
	void PointF::__constructor(jfloat arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PointF",
			"(FF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jfloat PointF::length(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.graphics.PointF",
			"length",
			"(FF)F",
			arg0,
			arg1
		);
	}
	jint PointF::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PointF::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean PointF::equals(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jint PointF::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jfloat PointF::length()
	{
		return __thiz.callMethod<jfloat>(
			"length",
			"()F"
		);
	}
	void PointF::negate()
	{
		__thiz.callMethod<void>(
			"negate",
			"()V"
		);
	}
	void PointF::offset(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"offset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void PointF::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void PointF::set(__jni_impl::android::graphics::PointF arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/graphics/PointF;)V",
			arg0.__jniObject().object()
		);
	}
	void PointF::set(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(FF)V",
			arg0,
			arg1
		);
	}
	jstring PointF::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PointF::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class PointF : public __jni_impl::android::graphics::PointF
	{
	public:
		PointF(QAndroidJniObject obj) { __thiz = obj; }
		PointF()
		{
			__constructor();
		}
		PointF(__jni_impl::android::graphics::Point arg0)
		{
			__constructor(
				arg0);
		}
		PointF(jfloat arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_POINTF

