#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

namespace android::widget
{
	class OverScroller : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OverScroller(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		OverScroller(QAndroidJniObject obj);
		
		// Constructors
		OverScroller(android::content::Context arg0);
		OverScroller(android::content::Context arg0, __JniBaseClass arg1);
		OverScroller(android::content::Context arg0, __JniBaseClass arg1, jfloat arg2, jfloat arg3);
		OverScroller(android::content::Context arg0, __JniBaseClass arg1, jfloat arg2, jfloat arg3, jboolean arg4);
		
		// Methods
		void abortAnimation();
		jboolean computeScrollOffset();
		void fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7);
		void fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9);
		void forceFinished(jboolean arg0);
		jfloat getCurrVelocity();
		jint getCurrX();
		jint getCurrY();
		jint getFinalX();
		jint getFinalY();
		jint getStartX();
		jint getStartY();
		jboolean isFinished();
		jboolean isOverScrolled();
		void notifyHorizontalEdgeReached(jint arg0, jint arg1, jint arg2);
		void notifyVerticalEdgeReached(jint arg0, jint arg1, jint arg2);
		void setFriction(jfloat arg0);
		jboolean springBack(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void startScroll(jint arg0, jint arg1, jint arg2, jint arg3);
		void startScroll(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
	};
} // namespace android::widget

