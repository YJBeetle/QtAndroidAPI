#pragma once

#include "../graphics/Rect.def.hpp"
#include "../graphics/Region.def.hpp"
#include "../hardware/HardwareBuffer.def.hpp"
#include "../hardware/SyncFence.def.hpp"
#include "../os/Parcel.def.hpp"
#include "./SurfaceControl.def.hpp"
#include "./SurfaceControl_TrustedPresentationThresholds.def.hpp"
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
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::addTransactionCommittedListener(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"addTransactionCommittedListener",
			"(Ljava/util/concurrent/Executor;Landroid/view/SurfaceControl$TransactionCommittedListener;)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SurfaceControl_Transaction::apply() const
	{
		callMethod<void>(
			"apply",
			"()V"
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::clearFrameRate(android::view::SurfaceControl arg0) const
	{
		return callObjectMethod(
			"clearFrameRate",
			"(Landroid/view/SurfaceControl;)Landroid/view/SurfaceControl$Transaction;",
			arg0.object()
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::clearTrustedPresentationCallback(android::view::SurfaceControl arg0) const
	{
		return callObjectMethod(
			"clearTrustedPresentationCallback",
			"(Landroid/view/SurfaceControl;)Landroid/view/SurfaceControl$Transaction;",
			arg0.object()
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
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setBuffer(android::view::SurfaceControl arg0, android::hardware::HardwareBuffer arg1) const
	{
		return callObjectMethod(
			"setBuffer",
			"(Landroid/view/SurfaceControl;Landroid/hardware/HardwareBuffer;)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setBuffer(android::view::SurfaceControl arg0, android::hardware::HardwareBuffer arg1, android::hardware::SyncFence arg2) const
	{
		return callObjectMethod(
			"setBuffer",
			"(Landroid/view/SurfaceControl;Landroid/hardware/HardwareBuffer;Landroid/hardware/SyncFence;)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setBuffer(android::view::SurfaceControl arg0, android::hardware::HardwareBuffer arg1, android::hardware::SyncFence arg2, JObject arg3) const
	{
		return callObjectMethod(
			"setBuffer",
			"(Landroid/view/SurfaceControl;Landroid/hardware/HardwareBuffer;Landroid/hardware/SyncFence;Ljava/util/function/Consumer;)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
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
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setBufferTransform(android::view::SurfaceControl arg0, jint arg1) const
	{
		return callObjectMethod(
			"setBufferTransform",
			"(Landroid/view/SurfaceControl;I)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setCrop(android::view::SurfaceControl arg0, android::graphics::Rect arg1) const
	{
		return callObjectMethod(
			"setCrop",
			"(Landroid/view/SurfaceControl;Landroid/graphics/Rect;)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setDamageRegion(android::view::SurfaceControl arg0, android::graphics::Region arg1) const
	{
		return callObjectMethod(
			"setDamageRegion",
			"(Landroid/view/SurfaceControl;Landroid/graphics/Region;)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setDataSpace(android::view::SurfaceControl arg0, jint arg1) const
	{
		return callObjectMethod(
			"setDataSpace",
			"(Landroid/view/SurfaceControl;I)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setExtendedRangeBrightness(android::view::SurfaceControl arg0, jfloat arg1, jfloat arg2) const
	{
		return callObjectMethod(
			"setExtendedRangeBrightness",
			"(Landroid/view/SurfaceControl;FF)Landroid/view/SurfaceControl$Transaction;",
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
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setFrameRate(android::view::SurfaceControl arg0, jfloat arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"setFrameRate",
			"(Landroid/view/SurfaceControl;FII)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1,
			arg2,
			arg3
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
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setOpaque(android::view::SurfaceControl arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"setOpaque",
			"(Landroid/view/SurfaceControl;Z)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setPosition(android::view::SurfaceControl arg0, jfloat arg1, jfloat arg2) const
	{
		return callObjectMethod(
			"setPosition",
			"(Landroid/view/SurfaceControl;FF)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setScale(android::view::SurfaceControl arg0, jfloat arg1, jfloat arg2) const
	{
		return callObjectMethod(
			"setScale",
			"(Landroid/view/SurfaceControl;FF)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setTrustedPresentationCallback(android::view::SurfaceControl arg0, android::view::SurfaceControl_TrustedPresentationThresholds arg1, JObject arg2, JObject arg3) const
	{
		return callObjectMethod(
			"setTrustedPresentationCallback",
			"(Landroid/view/SurfaceControl;Landroid/view/SurfaceControl$TrustedPresentationThresholds;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
