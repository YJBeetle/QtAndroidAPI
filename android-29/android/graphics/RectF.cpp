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
		return getField<jfloat>(
			"bottom"
		);
	}
	jfloat RectF::left()
	{
		return getField<jfloat>(
			"left"
		);
	}
	jfloat RectF::right()
	{
		return getField<jfloat>(
			"right"
		);
	}
	jfloat RectF::top()
	{
		return getField<jfloat>(
			"top"
		);
	}
	
	// QAndroidJniObject forward
	RectF::RectF(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RectF::RectF()
		: __JniBaseClass(
			"android.graphics.RectF",
			"()V"
		) {}
	RectF::RectF(android::graphics::Rect arg0)
		: __JniBaseClass(
			"android.graphics.RectF",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		) {}
	RectF::RectF(android::graphics::RectF &arg0)
		: __JniBaseClass(
			"android.graphics.RectF",
			"(Landroid/graphics/RectF;)V",
			arg0.object()
		) {}
	RectF::RectF(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		: __JniBaseClass(
			"android.graphics.RectF",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jboolean RectF::intersects(android::graphics::RectF arg0, android::graphics::RectF arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.graphics.RectF",
			"intersects",
			"(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jfloat RectF::centerX()
	{
		return callMethod<jfloat>(
			"centerX",
			"()F"
		);
	}
	jfloat RectF::centerY()
	{
		return callMethod<jfloat>(
			"centerY",
			"()F"
		);
	}
	jboolean RectF::contains(android::graphics::RectF arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Landroid/graphics/RectF;)Z",
			arg0.object()
		);
	}
	jboolean RectF::contains(jfloat arg0, jfloat arg1)
	{
		return callMethod<jboolean>(
			"contains",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean RectF::contains(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return callMethod<jboolean>(
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
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RectF::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint RectF::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jfloat RectF::height()
	{
		return callMethod<jfloat>(
			"height",
			"()F"
		);
	}
	void RectF::inset(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"inset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	jboolean RectF::intersect(android::graphics::RectF arg0)
	{
		return callMethod<jboolean>(
			"intersect",
			"(Landroid/graphics/RectF;)Z",
			arg0.object()
		);
	}
	jboolean RectF::intersect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return callMethod<jboolean>(
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
		return callMethod<jboolean>(
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
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void RectF::offset(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"offset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void RectF::offsetTo(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"offsetTo",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void RectF::readFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void RectF::round(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"round",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void RectF::roundOut(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"roundOut",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void RectF::set(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void RectF::set(android::graphics::RectF arg0)
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/RectF;)V",
			arg0.object()
		);
	}
	void RectF::set(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		callMethod<void>(
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
		callMethod<void>(
			"setEmpty",
			"()V"
		);
	}
	jboolean RectF::setIntersect(android::graphics::RectF arg0, android::graphics::RectF arg1)
	{
		return callMethod<jboolean>(
			"setIntersect",
			"(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void RectF::sort()
	{
		callMethod<void>(
			"sort",
			"()V"
		);
	}
	jstring RectF::toShortString()
	{
		return callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RectF::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void RectF::_union(android::graphics::RectF arg0)
	{
		callMethod<void>(
			"union",
			"(Landroid/graphics/RectF;)V",
			arg0.object()
		);
	}
	void RectF::_union(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"union",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void RectF::_union(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		callMethod<void>(
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
		return callMethod<jfloat>(
			"width",
			"()F"
		);
	}
	void RectF::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics

