#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}

namespace android::widget
{
	class Scroller : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Scroller(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Scroller(QAndroidJniObject obj);
		
		// Constructors
		Scroller(android::content::Context arg0);
		Scroller(android::content::Context arg0, JObject arg1);
		Scroller(android::content::Context arg0, JObject arg1, jboolean arg2);
		
		// Methods
		void abortAnimation() const;
		jboolean computeScrollOffset() const;
		void extendDuration(jint arg0) const;
		void fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7) const;
		void forceFinished(jboolean arg0) const;
		jfloat getCurrVelocity() const;
		jint getCurrX() const;
		jint getCurrY() const;
		jint getDuration() const;
		jint getFinalX() const;
		jint getFinalY() const;
		jint getStartX() const;
		jint getStartY() const;
		jboolean isFinished() const;
		void setFinalX(jint arg0) const;
		void setFinalY(jint arg0) const;
		void setFriction(jfloat arg0) const;
		void startScroll(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void startScroll(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		jint timePassed() const;
	};
} // namespace android::widget

