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
		void cancel();
		jlong computeDurationHint();
		jint getBackgroundColor();
		jboolean getDetachWallpaper();
		jlong getDuration();
		jboolean getFillAfter();
		jboolean getFillBefore();
		JObject getInterpolator();
		jint getRepeatCount();
		jint getRepeatMode();
		jlong getStartOffset();
		jlong getStartTime();
		jboolean getTransformation(jlong arg0, android::view::animation::Transformation arg1);
		jboolean getTransformation(jlong arg0, android::view::animation::Transformation arg1, jfloat arg2);
		jint getZAdjustment();
		jboolean hasEnded();
		jboolean hasStarted();
		void initialize(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean isFillEnabled();
		jboolean isInitialized();
		void reset();
		void restrictDuration(jlong arg0);
		void scaleCurrentDuration(jfloat arg0);
		void setAnimationListener(JObject arg0);
		void setBackgroundColor(jint arg0);
		void setDetachWallpaper(jboolean arg0);
		void setDuration(jlong arg0);
		void setFillAfter(jboolean arg0);
		void setFillBefore(jboolean arg0);
		void setFillEnabled(jboolean arg0);
		void setInterpolator(JObject arg0);
		void setInterpolator(android::content::Context arg0, jint arg1);
		void setRepeatCount(jint arg0);
		void setRepeatMode(jint arg0);
		void setStartOffset(jlong arg0);
		void setStartTime(jlong arg0);
		void setZAdjustment(jint arg0);
		void start();
		void startNow();
		jboolean willChangeBounds();
		jboolean willChangeTransformationMatrix();
	};
} // namespace android::view::animation

