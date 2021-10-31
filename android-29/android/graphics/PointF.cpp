#include "./Point.hpp"
#include "../os/Parcel.hpp"
#include "./PointF.hpp"

namespace android::graphics
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
	
	PointF::PointF(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PointF::PointF()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PointF",
			"()V"
		);
	}
	PointF::PointF(android::graphics::Point arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PointF",
			"(Landroid/graphics/Point;)V",
			arg0.__jniObject().object()
		);
	}
	PointF::PointF(jfloat arg0, jfloat arg1)
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
	void PointF::readFromParcel(android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void PointF::set(android::graphics::PointF arg0)
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
	void PointF::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::graphics

