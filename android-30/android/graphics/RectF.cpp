#include "./Rect.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RectF.hpp"

namespace android::graphics
{
	// Fields
	JObject RectF::CREATOR()
	{
		return getStaticObjectField(
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
	RectF::RectF(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	RectF::RectF()
		: JObject(
			"android.graphics.RectF",
			"()V"
		) {}
	RectF::RectF(android::graphics::Rect arg0)
		: JObject(
			"android.graphics.RectF",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		) {}
	RectF::RectF(android::graphics::RectF &arg0)
		: JObject(
			"android.graphics.RectF",
			"(Landroid/graphics/RectF;)V",
			arg0.object()
		) {}
	RectF::RectF(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		: JObject(
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
		return callStaticMethod<jboolean>(
			"android.graphics.RectF",
			"intersects",
			"(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jfloat RectF::centerX() const
	{
		return callMethod<jfloat>(
			"centerX",
			"()F"
		);
	}
	jfloat RectF::centerY() const
	{
		return callMethod<jfloat>(
			"centerY",
			"()F"
		);
	}
	jboolean RectF::contains(android::graphics::RectF arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Landroid/graphics/RectF;)Z",
			arg0.object()
		);
	}
	jboolean RectF::contains(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"contains",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean RectF::contains(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	jint RectF::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RectF::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint RectF::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jfloat RectF::height() const
	{
		return callMethod<jfloat>(
			"height",
			"()F"
		);
	}
	void RectF::inset(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"inset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	jboolean RectF::intersect(android::graphics::RectF arg0) const
	{
		return callMethod<jboolean>(
			"intersect",
			"(Landroid/graphics/RectF;)Z",
			arg0.object()
		);
	}
	jboolean RectF::intersect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	jboolean RectF::intersects(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	jboolean RectF::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void RectF::offset(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"offset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void RectF::offsetTo(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"offsetTo",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void RectF::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void RectF::round(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"round",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void RectF::roundOut(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"roundOut",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void RectF::set(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void RectF::set(android::graphics::RectF arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/RectF;)V",
			arg0.object()
		);
	}
	void RectF::set(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	void RectF::setEmpty() const
	{
		callMethod<void>(
			"setEmpty",
			"()V"
		);
	}
	jboolean RectF::setIntersect(android::graphics::RectF arg0, android::graphics::RectF arg1) const
	{
		return callMethod<jboolean>(
			"setIntersect",
			"(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void RectF::sort() const
	{
		callMethod<void>(
			"sort",
			"()V"
		);
	}
	JString RectF::toShortString() const
	{
		return callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		);
	}
	JString RectF::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void RectF::union_(android::graphics::RectF arg0) const
	{
		callMethod<void>(
			"union",
			"(Landroid/graphics/RectF;)V",
			arg0.object()
		);
	}
	void RectF::union_(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"union",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void RectF::union_(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	jfloat RectF::width() const
	{
		return callMethod<jfloat>(
			"width",
			"()F"
		);
	}
	void RectF::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics

