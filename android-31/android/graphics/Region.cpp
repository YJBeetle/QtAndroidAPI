#include "./Path.hpp"
#include "./Rect.hpp"
#include "./Region_Op.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Region.hpp"

namespace android::graphics
{
	// Fields
	JObject Region::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.Region",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Region::Region(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Region::Region()
		: JObject(
			"android.graphics.Region",
			"()V"
		) {}
	Region::Region(android::graphics::Rect arg0)
		: JObject(
			"android.graphics.Region",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		) {}
	Region::Region(android::graphics::Region &arg0)
		: JObject(
			"android.graphics.Region",
			"(Landroid/graphics/Region;)V",
			arg0.object()
		) {}
	Region::Region(jint arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.graphics.Region",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jboolean Region::contains(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"contains",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jint Region::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Region::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::graphics::Path Region::getBoundaryPath() const
	{
		return callObjectMethod(
			"getBoundaryPath",
			"()Landroid/graphics/Path;"
		);
	}
	jboolean Region::getBoundaryPath(android::graphics::Path arg0) const
	{
		return callMethod<jboolean>(
			"getBoundaryPath",
			"(Landroid/graphics/Path;)Z",
			arg0.object()
		);
	}
	android::graphics::Rect Region::getBounds() const
	{
		return callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	jboolean Region::getBounds(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getBounds",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean Region::isComplex() const
	{
		return callMethod<jboolean>(
			"isComplex",
			"()Z"
		);
	}
	jboolean Region::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean Region::isRect() const
	{
		return callMethod<jboolean>(
			"isRect",
			"()Z"
		);
	}
	jboolean Region::op(android::graphics::Rect arg0, android::graphics::Region_Op arg1) const
	{
		return callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Rect;Landroid/graphics/Region$Op;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Region::op(android::graphics::Region arg0, android::graphics::Region_Op arg1) const
	{
		return callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Region;Landroid/graphics/Region$Op;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Region::op(android::graphics::Rect arg0, android::graphics::Region arg1, android::graphics::Region_Op arg2) const
	{
		return callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Rect;Landroid/graphics/Region;Landroid/graphics/Region$Op;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean Region::op(android::graphics::Region arg0, android::graphics::Region arg1, android::graphics::Region_Op arg2) const
	{
		return callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Region;Landroid/graphics/Region;Landroid/graphics/Region$Op;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean Region::op(jint arg0, jint arg1, jint arg2, jint arg3, android::graphics::Region_Op arg4) const
	{
		return callMethod<jboolean>(
			"op",
			"(IIIILandroid/graphics/Region$Op;)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	jboolean Region::quickContains(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"quickContains",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean Region::quickContains(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"quickContains",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Region::quickReject(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"quickReject",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean Region::quickReject(android::graphics::Region arg0) const
	{
		return callMethod<jboolean>(
			"quickReject",
			"(Landroid/graphics/Region;)Z",
			arg0.object()
		);
	}
	jboolean Region::quickReject(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"quickReject",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Region::set(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"set",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean Region::set(android::graphics::Region arg0) const
	{
		return callMethod<jboolean>(
			"set",
			"(Landroid/graphics/Region;)Z",
			arg0.object()
		);
	}
	jboolean Region::set(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"set",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Region::setEmpty() const
	{
		callMethod<void>(
			"setEmpty",
			"()V"
		);
	}
	jboolean Region::setPath(android::graphics::Path arg0, android::graphics::Region arg1) const
	{
		return callMethod<jboolean>(
			"setPath",
			"(Landroid/graphics/Path;Landroid/graphics/Region;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	JString Region::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Region::translate(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"translate",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Region::translate(jint arg0, jint arg1, android::graphics::Region arg2) const
	{
		callMethod<void>(
			"translate",
			"(IILandroid/graphics/Region;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean Region::_union(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"union",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	void Region::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics

