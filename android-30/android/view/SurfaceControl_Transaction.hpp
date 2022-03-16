#pragma once

#include "../graphics/Rect.def.hpp"
#include "../os/Parcel.def.hpp"
#include "./SurfaceControl.def.hpp"
#include "./SurfaceControl_Transaction.def.hpp"

namespace android::view
{
	// Fields
	inline JObject SurfaceControl_Transaction::CREATOR()
	{
		return getStaticObjectField(
			"android.view.SurfaceControl$Transaction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline SurfaceControl_Transaction::SurfaceControl_Transaction()
		: JObject(
			"android.view.SurfaceControl$Transaction",
			"()V"
		) {}
	
	// Methods
	inline void SurfaceControl_Transaction::apply() const
	{
		callMethod<void>(
			"apply",
			"()V"
		);
	}
	inline void SurfaceControl_Transaction::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint SurfaceControl_Transaction::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::merge(android::view::SurfaceControl_Transaction arg0) const
	{
		return callObjectMethod(
			"merge",
			"(Landroid/view/SurfaceControl$Transaction;)Landroid/view/SurfaceControl$Transaction;",
			arg0.object()
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::reparent(android::view::SurfaceControl arg0, android::view::SurfaceControl arg1) const
	{
		return callObjectMethod(
			"reparent",
			"(Landroid/view/SurfaceControl;Landroid/view/SurfaceControl;)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setAlpha(android::view::SurfaceControl arg0, jfloat arg1) const
	{
		return callObjectMethod(
			"setAlpha",
			"(Landroid/view/SurfaceControl;F)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setBufferSize(android::view::SurfaceControl arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"setBufferSize",
			"(Landroid/view/SurfaceControl;II)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setFrameRate(android::view::SurfaceControl arg0, jfloat arg1, jint arg2) const
	{
		return callObjectMethod(
			"setFrameRate",
			"(Landroid/view/SurfaceControl;FI)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setGeometry(android::view::SurfaceControl arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, jint arg3) const
	{
		return callObjectMethod(
			"setGeometry",
			"(Landroid/view/SurfaceControl;Landroid/graphics/Rect;Landroid/graphics/Rect;I)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setLayer(android::view::SurfaceControl arg0, jint arg1) const
	{
		return callObjectMethod(
			"setLayer",
			"(Landroid/view/SurfaceControl;I)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setVisibility(android::view::SurfaceControl arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"setVisibility",
			"(Landroid/view/SurfaceControl;Z)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1
		);
	}
	inline void SurfaceControl_Transaction::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

// Base class headers

