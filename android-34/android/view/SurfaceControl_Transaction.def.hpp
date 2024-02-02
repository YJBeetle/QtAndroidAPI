#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class Region;
}
namespace android::hardware
{
	class HardwareBuffer;
}
namespace android::hardware
{
	class SyncFence;
}
namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class SurfaceControl;
}
namespace android::view
{
	class SurfaceControl_TrustedPresentationThresholds;
}

namespace android::view
{
	class SurfaceControl_Transaction : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceControl_Transaction(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceControl_Transaction(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SurfaceControl_Transaction();
		
		// Methods
		android::view::SurfaceControl_Transaction addTransactionCommittedListener(JObject arg0, JObject arg1) const;
		void apply() const;
		android::view::SurfaceControl_Transaction clearFrameRate(android::view::SurfaceControl arg0) const;
		android::view::SurfaceControl_Transaction clearTrustedPresentationCallback(android::view::SurfaceControl arg0) const;
		void close() const;
		jint describeContents() const;
		android::view::SurfaceControl_Transaction merge(android::view::SurfaceControl_Transaction arg0) const;
		android::view::SurfaceControl_Transaction reparent(android::view::SurfaceControl arg0, android::view::SurfaceControl arg1) const;
		android::view::SurfaceControl_Transaction setAlpha(android::view::SurfaceControl arg0, jfloat arg1) const;
		android::view::SurfaceControl_Transaction setBuffer(android::view::SurfaceControl arg0, android::hardware::HardwareBuffer arg1) const;
		android::view::SurfaceControl_Transaction setBuffer(android::view::SurfaceControl arg0, android::hardware::HardwareBuffer arg1, android::hardware::SyncFence arg2) const;
		android::view::SurfaceControl_Transaction setBuffer(android::view::SurfaceControl arg0, android::hardware::HardwareBuffer arg1, android::hardware::SyncFence arg2, JObject arg3) const;
		android::view::SurfaceControl_Transaction setBufferSize(android::view::SurfaceControl arg0, jint arg1, jint arg2) const;
		android::view::SurfaceControl_Transaction setBufferTransform(android::view::SurfaceControl arg0, jint arg1) const;
		android::view::SurfaceControl_Transaction setCrop(android::view::SurfaceControl arg0, android::graphics::Rect arg1) const;
		android::view::SurfaceControl_Transaction setDamageRegion(android::view::SurfaceControl arg0, android::graphics::Region arg1) const;
		android::view::SurfaceControl_Transaction setDataSpace(android::view::SurfaceControl arg0, jint arg1) const;
		android::view::SurfaceControl_Transaction setExtendedRangeBrightness(android::view::SurfaceControl arg0, jfloat arg1, jfloat arg2) const;
		android::view::SurfaceControl_Transaction setFrameRate(android::view::SurfaceControl arg0, jfloat arg1, jint arg2) const;
		android::view::SurfaceControl_Transaction setFrameRate(android::view::SurfaceControl arg0, jfloat arg1, jint arg2, jint arg3) const;
		android::view::SurfaceControl_Transaction setGeometry(android::view::SurfaceControl arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, jint arg3) const;
		android::view::SurfaceControl_Transaction setLayer(android::view::SurfaceControl arg0, jint arg1) const;
		android::view::SurfaceControl_Transaction setOpaque(android::view::SurfaceControl arg0, jboolean arg1) const;
		android::view::SurfaceControl_Transaction setPosition(android::view::SurfaceControl arg0, jfloat arg1, jfloat arg2) const;
		android::view::SurfaceControl_Transaction setScale(android::view::SurfaceControl arg0, jfloat arg1, jfloat arg2) const;
		android::view::SurfaceControl_Transaction setTrustedPresentationCallback(android::view::SurfaceControl arg0, android::view::SurfaceControl_TrustedPresentationThresholds arg1, JObject arg2, JObject arg3) const;
		android::view::SurfaceControl_Transaction setVisibility(android::view::SurfaceControl arg0, jboolean arg1) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

