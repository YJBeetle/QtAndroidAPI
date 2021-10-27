#include "../os/Parcel.hpp"
#include "./Point.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject Point::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Point",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Point::x()
	{
		return __thiz.getField<jint>(
			"x"
		);
	}
	jint Point::y()
	{
		return __thiz.getField<jint>(
			"y"
		);
	}
	
	Point::Point(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Point::Point()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Point",
			"()V"
		);
	}
	Point::Point(android::graphics::Point &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Point",
			"(Landroid/graphics/Point;)V",
			arg0.__jniObject().object()
		);
	}
	Point::Point(jint &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Point",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint Point::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Point::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean Point::equals(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jint Point::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Point::negate()
	{
		__thiz.callMethod<void>(
			"negate",
			"()V"
		);
	}
	void Point::offset(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"offset",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Point::readFromParcel(android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void Point::set(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
	jstring Point::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Point::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::graphics

