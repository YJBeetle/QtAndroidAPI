#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::view::animation
{
	class Transformation;
}
class JObject;

namespace android::view::animation
{
	class Animation : public JObject
	{
	public:
		// Fields
		static jint ABSOLUTE();
		static jint INFINITE();
		static jint RELATIVE_TO_PARENT();
		static jint RELATIVE_TO_SELF();
		static jint RESTART();
		static jint REVERSE();
		static jint START_ON_FIRST_FRAME();
		static jint ZORDER_BOTTOM();
		static jint ZORDER_NORMAL();
		static jint ZORDER_TOP();
		
		// QJniObject forward
		template<typename ...Ts> explicit Animation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Animation(QJniObject obj);
		
		// Constructors
		Animation();
		Animation(android::content::Context arg0, JObject arg1);
		
		// Methods
		void cancel() const;
		jlong computeDurationHint() const;
		jint getBackgroundColor() const;
		jboolean getDetachWallpaper() const;
		jlong getDuration() const;
		jboolean getFillAfter() const;
		jboolean getFillBefore() const;
		JObject getInterpolator() const;
		jint getRepeatCount() const;
		jint getRepeatMode() const;
		jlong getStartOffset() const;
		jlong getStartTime() const;
		jboolean getTransformation(jlong arg0, android::view::animation::Transformation arg1) const;
		jboolean getTransformation(jlong arg0, android::view::animation::Transformation arg1, jfloat arg2) const;
		jint getZAdjustment() const;
		jboolean hasEnded() const;
		jboolean hasStarted() const;
		void initialize(jint arg0, jint arg1, jint arg2, jint arg3) const;
		jboolean isFillEnabled() const;
		jboolean isInitialized() const;
		void reset() const;
		void restrictDuration(jlong arg0) const;
		void scaleCurrentDuration(jfloat arg0) const;
		void setAnimationListener(JObject arg0) const;
		void setBackgroundColor(jint arg0) const;
		void setDetachWallpaper(jboolean arg0) const;
		void setDuration(jlong arg0) const;
		void setFillAfter(jboolean arg0) const;
		void setFillBefore(jboolean arg0) const;
		void setFillEnabled(jboolean arg0) const;
		void setInterpolator(JObject arg0) const;
		void setInterpolator(android::content::Context arg0, jint arg1) const;
		void setRepeatCount(jint arg0) const;
		void setRepeatMode(jint arg0) const;
		void setStartOffset(jlong arg0) const;
		void setStartTime(jlong arg0) const;
		void setZAdjustment(jint arg0) const;
		void start() const;
		void startNow() const;
		jboolean willChangeBounds() const;
		jboolean willChangeTransformationMatrix() const;
	};
} // namespace android::view::animation

