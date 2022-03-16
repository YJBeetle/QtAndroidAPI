#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}

namespace android::widget
{
	class OverScroller : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OverScroller(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OverScroller(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		OverScroller(android::content::Context arg0);
		OverScroller(android::content::Context arg0, JObject arg1);
		OverScroller(android::content::Context arg0, JObject arg1, jfloat arg2, jfloat arg3);
		OverScroller(android::content::Context arg0, JObject arg1, jfloat arg2, jfloat arg3, jboolean arg4);
		
		// Methods
		void abortAnimation() const;
		jboolean computeScrollOffset() const;
		void fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7) const;
		void fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9) const;
		void forceFinished(jboolean arg0) const;
		jfloat getCurrVelocity() const;
		jint getCurrX() const;
		jint getCurrY() const;
		jint getFinalX() const;
		jint getFinalY() const;
		jint getStartX() const;
		jint getStartY() const;
		jboolean isFinished() const;
		jboolean isOverScrolled() const;
		void notifyHorizontalEdgeReached(jint arg0, jint arg1, jint arg2) const;
		void notifyVerticalEdgeReached(jint arg0, jint arg1, jint arg2) const;
		void setFriction(jfloat arg0) const;
		jboolean springBack(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const;
		void startScroll(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void startScroll(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
	};
} // namespace android::widget

