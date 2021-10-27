#include "./Rect.hpp"
#include "../os/Parcel.hpp"
#include "./RectF.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject RectF::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.RectF",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jfloat RectF::bottom()
	{
		return __thiz.getField<jfloat>(
			"bottom"
		);
	}
	jfloat RectF::left()
	{
		return __thiz.getField<jfloat>(
			"left"
		);
	}
	jfloat RectF::right()
	{
		return __thiz.getField<jfloat>(
			"right"
		);
	}
	jfloat RectF::top()
	{
		return __thiz.getField<jfloat>(
			"top"
		);
	}
	
	RectF::RectF(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RectF::RectF()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RectF",
			"()V"
		);
	}
	RectF::RectF(android::graphics::Rect &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RectF",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	RectF::RectF(android::graphics::RectF &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RectF",
			"(Landroid/graphics/RectF;)V",
			arg0.__jniObject().object()
		);
	}
	RectF::RectF(jfloat &arg0, jfloat &arg1, jfloat &arg2, jfloat &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RectF",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jboolean RectF::intersects(android::graphics::RectF arg0, android::graphics::RectF arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.graphics.RectF",
			"intersects",
			"(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jfloat RectF::centerX()
	{
		return __thiz.callMethod<jfloat>(
			"centerX",
			"()F"
		);
	}
	jfloat RectF::centerY()
	{
		return __thiz.callMethod<jfloat>(
			"centerY",
			"()F"
		);
	}
	jboolean RectF::contains(android::graphics::RectF arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Landroid/graphics/RectF;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean RectF::contains(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean RectF::contains(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint RectF::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RectF::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint RectF::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jfloat RectF::height()
	{
		return __thiz.callMethod<jfloat>(
			"height",
			"()F"
		);
	}
	void RectF::inset(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"inset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	jboolean RectF::intersect(android::graphics::RectF arg0)
	{
		return __thiz.callMethod<jboolean>(
			"intersect",
			"(Landroid/graphics/RectF;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean RectF::intersect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"intersect",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean RectF::intersects(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"intersects",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean RectF::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void RectF::offset(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"offset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void RectF::offsetTo(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"offsetTo",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void RectF::readFromParcel(android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void RectF::round(android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"round",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void RectF::roundOut(android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"roundOut",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void RectF::set(android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void RectF::set(android::graphics::RectF arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/graphics/RectF;)V",
			arg0.__jniObject().object()
		);
	}
	void RectF::set(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"set",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void RectF::setEmpty()
	{
		__thiz.callMethod<void>(
			"setEmpty",
			"()V"
		);
	}
	jboolean RectF::setIntersect(android::graphics::RectF arg0, android::graphics::RectF arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setIntersect",
			"(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RectF::sort()
	{
		__thiz.callMethod<void>(
			"sort",
			"()V"
		);
	}
	jstring RectF::toShortString()
	{
		return __thiz.callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RectF::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void RectF::_union(android::graphics::RectF arg0)
	{
		__thiz.callMethod<void>(
			"union",
			"(Landroid/graphics/RectF;)V",
			arg0.__jniObject().object()
		);
	}
	void RectF::_union(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"union",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void RectF::_union(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"union",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jfloat RectF::width()
	{
		return __thiz.callMethod<jfloat>(
			"width",
			"()F"
		);
	}
	void RectF::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::graphics

