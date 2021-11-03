#include "../os/Parcel.hpp"
#include "./Rect.hpp"

namespace android::graphics
{
	// Fields
	JObject Rect::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.Rect",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Rect::bottom()
	{
		return getField<jint>(
			"bottom"
		);
	}
	jint Rect::left()
	{
		return getField<jint>(
			"left"
		);
	}
	jint Rect::right()
	{
		return getField<jint>(
			"right"
		);
	}
	jint Rect::top()
	{
		return getField<jint>(
			"top"
		);
	}
	
	// QJniObject forward
	Rect::Rect(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Rect::Rect()
		: JObject(
			"android.graphics.Rect",
			"()V"
		) {}
	Rect::Rect(android::graphics::Rect &arg0)
		: JObject(
			"android.graphics.Rect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		) {}
	Rect::Rect(jint arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.graphics.Rect",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jboolean Rect::intersects(android::graphics::Rect arg0, android::graphics::Rect arg1)
	{
		return callStaticMethod<jboolean>(
			"android.graphics.Rect",
			"intersects",
			"(Landroid/graphics/Rect;Landroid/graphics/Rect;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	android::graphics::Rect Rect::unflattenFromString(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Rect",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/graphics/Rect;",
			arg0
		);
	}
	jint Rect::centerX()
	{
		return callMethod<jint>(
			"centerX",
			"()I"
		);
	}
	jint Rect::centerY()
	{
		return callMethod<jint>(
			"centerY",
			"()I"
		);
	}
	jboolean Rect::contains(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean Rect::contains(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"contains",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean Rect::contains(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return callMethod<jboolean>(
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
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Rect::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat Rect::exactCenterX()
	{
		return callMethod<jfloat>(
			"exactCenterX",
			"()F"
		);
	}
	jfloat Rect::exactCenterY()
	{
		return callMethod<jfloat>(
			"exactCenterY",
			"()F"
		);
	}
	jstring Rect::flattenToString()
	{
		return callObjectMethod(
			"flattenToString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Rect::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Rect::height()
	{
		return callMethod<jint>(
			"height",
			"()I"
		);
	}
	void Rect::inset(jint arg0, jint arg1)
	{
		callMethod<void>(
			"inset",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean Rect::intersect(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"intersect",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean Rect::intersect(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return callMethod<jboolean>(
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
		return callMethod<jboolean>(
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
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void Rect::offset(jint arg0, jint arg1)
	{
		callMethod<void>(
			"offset",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Rect::offsetTo(jint arg0, jint arg1)
	{
		callMethod<void>(
			"offsetTo",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Rect::readFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void Rect::set(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void Rect::set(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
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
		callMethod<void>(
			"setEmpty",
			"()V"
		);
	}
	jboolean Rect::setIntersect(android::graphics::Rect arg0, android::graphics::Rect arg1)
	{
		return callMethod<jboolean>(
			"setIntersect",
			"(Landroid/graphics/Rect;Landroid/graphics/Rect;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void Rect::sort()
	{
		callMethod<void>(
			"sort",
			"()V"
		);
	}
	jstring Rect::toShortString()
	{
		return callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Rect::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Rect::_union(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"union",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void Rect::_union(jint arg0, jint arg1)
	{
		callMethod<void>(
			"union",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Rect::_union(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
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
		return callMethod<jint>(
			"width",
			"()I"
		);
	}
	void Rect::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics

