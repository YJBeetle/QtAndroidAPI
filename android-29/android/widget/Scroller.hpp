#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

namespace android::widget
{
	class Scroller : public __JniBaseClass
	{
	public:
		// Fields
		
		Scroller(QAndroidJniObject obj);
		// Constructors
		Scroller(android::content::Context arg0);
		Scroller(android::content::Context arg0, __JniBaseClass arg1);
		Scroller(android::content::Context arg0, __JniBaseClass arg1, jboolean arg2);
		Scroller() = default;
		
		// Methods
		void abortAnimation();
		jboolean computeScrollOffset();
		void extendDuration(jint arg0);
		void fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7);
		void forceFinished(jboolean arg0);
		jfloat getCurrVelocity();
		jint getCurrX();
		jint getCurrY();
		jint getDuration();
		jint getFinalX();
		jint getFinalY();
		jint getStartX();
		jint getStartY();
		jboolean isFinished();
		void setFinalX(jint arg0);
		void setFinalY(jint arg0);
		void setFriction(jfloat arg0);
		void startScroll(jint arg0, jint arg1, jint arg2, jint arg3);
		void startScroll(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		jint timePassed();
	};
} // namespace android::widget

