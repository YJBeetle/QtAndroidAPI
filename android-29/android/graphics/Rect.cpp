#include "../os/Parcel.hpp"
#include "./Rect.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject Rect::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Rect",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Rect::bottom()
	{
		return __thiz.getField<jint>(
			"bottom"
		);
	}
	jint Rect::left()
	{
		return __thiz.getField<jint>(
			"left"
		);
	}
	jint Rect::right()
	{
		return __thiz.getField<jint>(
			"right"
		);
	}
	jint Rect::top()
	{
		return __thiz.getField<jint>(
			"top"
		);
	}
	
	Rect::Rect(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Rect::Rect()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Rect",
			"()V"
		);
	}
	Rect::Rect(android::graphics::Rect &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Rect",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	Rect::Rect(jint &arg0, jint &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Rect",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jboolean Rect::intersects(android::graphics::Rect arg0, android::graphics::Rect arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.graphics.Rect",
			"intersects",
			"(Landroid/graphics/Rect;Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Rect::unflattenFromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Rect",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/graphics/Rect;",
			arg0
		);
	}
	QAndroidJniObject Rect::unflattenFromString(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Rect",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/graphics/Rect;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint Rect::centerX()
	{
		return __thiz.callMethod<jint>(
			"centerX",
			"()I"
		);
	}
	jint Rect::centerY()
	{
		return __thiz.callMethod<jint>(
			"centerY",
			"()I"
		);
	}
	jboolean Rect::contains(android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Rect::contains(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean Rect::contains(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Rect::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Rect::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat Rect::exactCenterX()
	{
		return __thiz.callMethod<jfloat>(
			"exactCenterX",
			"()F"
		);
	}
	jfloat Rect::exactCenterY()
	{
		return __thiz.callMethod<jfloat>(
			"exactCenterY",
			"()F"
		);
	}
	jstring Rect::flattenToString()
	{
		return __thiz.callObjectMethod(
			"flattenToString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Rect::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Rect::height()
	{
		return __thiz.callMethod<jint>(
			"height",
			"()I"
		);
	}
	void Rect::inset(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"inset",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean Rect::intersect(android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"intersect",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Rect::intersect(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"intersect",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Rect::intersects(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"intersects",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Rect::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void Rect::offset(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"offset",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Rect::offsetTo(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"offsetTo",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Rect::readFromParcel(android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void Rect::set(android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void Rect::set(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"set",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Rect::setEmpty()
	{
		__thiz.callMethod<void>(
			"setEmpty",
			"()V"
		);
	}
	jboolean Rect::setIntersect(android::graphics::Rect arg0, android::graphics::Rect arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setIntersect",
			"(Landroid/graphics/Rect;Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Rect::sort()
	{
		__thiz.callMethod<void>(
			"sort",
			"()V"
		);
	}
	jstring Rect::toShortString()
	{
		return __thiz.callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Rect::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Rect::_union(android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"union",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void Rect::_union(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"union",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Rect::_union(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"union",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Rect::width()
	{
		return __thiz.callMethod<jint>(
			"width",
			"()I"
		);
	}
	void Rect::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::graphics

