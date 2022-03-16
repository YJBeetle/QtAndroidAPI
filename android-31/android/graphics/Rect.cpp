#include "./Insets.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	android::graphics::Rect Rect::unflattenFromString(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Rect",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/graphics/Rect;",
			arg0.object<jstring>()
		);
	}
	jint Rect::centerX() const
	{
		return callMethod<jint>(
			"centerX",
			"()I"
		);
	}
	jint Rect::centerY() const
	{
		return callMethod<jint>(
			"centerY",
			"()I"
		);
	}
	jboolean Rect::contains(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean Rect::contains(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"contains",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean Rect::contains(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	jint Rect::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Rect::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jfloat Rect::exactCenterX() const
	{
		return callMethod<jfloat>(
			"exactCenterX",
			"()F"
		);
	}
	jfloat Rect::exactCenterY() const
	{
		return callMethod<jfloat>(
			"exactCenterY",
			"()F"
		);
	}
	JString Rect::flattenToString() const
	{
		return callObjectMethod(
			"flattenToString",
			"()Ljava/lang/String;"
		);
	}
	jint Rect::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Rect::height() const
	{
		return callMethod<jint>(
			"height",
			"()I"
		);
	}
	void Rect::inset(android::graphics::Insets arg0) const
	{
		callMethod<void>(
			"inset",
			"(Landroid/graphics/Insets;)V",
			arg0.object()
		);
	}
	void Rect::inset(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"inset",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Rect::inset(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"inset",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Rect::intersect(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"intersect",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean Rect::intersect(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	jboolean Rect::intersects(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	jboolean Rect::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void Rect::offset(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"offset",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Rect::offsetTo(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"offsetTo",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Rect::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void Rect::set(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void Rect::set(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void Rect::setEmpty() const
	{
		callMethod<void>(
			"setEmpty",
			"()V"
		);
	}
	jboolean Rect::setIntersect(android::graphics::Rect arg0, android::graphics::Rect arg1) const
	{
		return callMethod<jboolean>(
			"setIntersect",
			"(Landroid/graphics/Rect;Landroid/graphics/Rect;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void Rect::sort() const
	{
		callMethod<void>(
			"sort",
			"()V"
		);
	}
	JString Rect::toShortString() const
	{
		return callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		);
	}
	JString Rect::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Rect::union_(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"union",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void Rect::union_(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"union",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Rect::union_(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	jint Rect::width() const
	{
		return callMethod<jint>(
			"width",
			"()I"
		);
	}
	void Rect::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics

