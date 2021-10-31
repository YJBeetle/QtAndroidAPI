#include "./Point.hpp"
#include "../os/Parcel.hpp"
#include "./PointF.hpp"

namespace android::graphics
{
	// Fields
	__JniBaseClass PointF::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.PointF",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jfloat PointF::x()
	{
		return getField<jfloat>(
			"x"
		);
	}
	jfloat PointF::y()
	{
		return getField<jfloat>(
			"y"
		);
	}
	
	// QAndroidJniObject forward
	PointF::PointF(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PointF::PointF()
		: __JniBaseClass(
			"android.graphics.PointF",
			"()V"
		) {}
	PointF::PointF(android::graphics::Point arg0)
		: __JniBaseClass(
			"android.graphics.PointF",
			"(Landroid/graphics/Point;)V",
			arg0.object()
		) {}
	PointF::PointF(jfloat arg0, jfloat arg1)
		: __JniBaseClass(
			"android.graphics.PointF",
			"(FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jfloat PointF::length(jfloat arg0, jfloat arg1)
	{
		return callStaticMethod<jfloat>(
			"android.graphics.PointF",
			"length",
			"(FF)F",
			arg0,
			arg1
		);
	}
	jint PointF::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PointF::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean PointF::equals(jfloat arg0, jfloat arg1)
	{
		return callMethod<jboolean>(
			"equals",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jint PointF::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jfloat PointF::length()
	{
		return callMethod<jfloat>(
			"length",
			"()F"
		);
	}
	void PointF::negate()
	{
		callMethod<void>(
			"negate",
			"()V"
		);
	}
	void PointF::offset(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"offset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void PointF::readFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void PointF::set(android::graphics::PointF arg0)
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/PointF;)V",
			arg0.object()
		);
	}
	void PointF::set(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"set",
			"(FF)V",
			arg0,
			arg1
		);
	}
	jstring PointF::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PointF::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics

