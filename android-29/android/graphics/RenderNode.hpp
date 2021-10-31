#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Matrix;
}
namespace android::graphics
{
	class Outline;
}
namespace android::graphics
{
	class Paint;
}
namespace android::graphics
{
	class RecordingCanvas;
}
namespace android::graphics
{
	class Rect;
}

namespace android::graphics
{
	class RenderNode : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RenderNode(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RenderNode(QAndroidJniObject obj);
		
		// Constructors
		RenderNode(jstring arg0);
		
		// Methods
		QAndroidJniObject beginRecording();
		QAndroidJniObject beginRecording(jint arg0, jint arg1);
		jlong computeApproximateMemoryUsage();
		void discardDisplayList();
		void endRecording();
		jfloat getAlpha();
		jint getAmbientShadowColor();
		jint getBottom();
		jfloat getCameraDistance();
		jboolean getClipToBounds();
		jboolean getClipToOutline();
		jfloat getElevation();
		jint getHeight();
		void getInverseMatrix(android::graphics::Matrix arg0);
		jint getLeft();
		void getMatrix(android::graphics::Matrix arg0);
		jfloat getPivotX();
		jfloat getPivotY();
		jint getRight();
		jfloat getRotationX();
		jfloat getRotationY();
		jfloat getRotationZ();
		jfloat getScaleX();
		jfloat getScaleY();
		jint getSpotShadowColor();
		jint getTop();
		jfloat getTranslationX();
		jfloat getTranslationY();
		jfloat getTranslationZ();
		jlong getUniqueId();
		jboolean getUseCompositingLayer();
		jint getWidth();
		jboolean hasDisplayList();
		jboolean hasIdentityMatrix();
		jboolean hasOverlappingRendering();
		jboolean hasShadow();
		jboolean isForceDarkAllowed();
		jboolean isPivotExplicitlySet();
		jboolean offsetLeftAndRight(jint arg0);
		jboolean offsetTopAndBottom(jint arg0);
		jboolean resetPivot();
		jboolean setAlpha(jfloat arg0);
		jboolean setAmbientShadowColor(jint arg0);
		jboolean setCameraDistance(jfloat arg0);
		jboolean setClipRect(android::graphics::Rect arg0);
		jboolean setClipToBounds(jboolean arg0);
		jboolean setClipToOutline(jboolean arg0);
		jboolean setElevation(jfloat arg0);
		jboolean setForceDarkAllowed(jboolean arg0);
		jboolean setHasOverlappingRendering(jboolean arg0);
		jboolean setOutline(android::graphics::Outline arg0);
		jboolean setPivotX(jfloat arg0);
		jboolean setPivotY(jfloat arg0);
		jboolean setPosition(android::graphics::Rect arg0);
		jboolean setPosition(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean setProjectBackwards(jboolean arg0);
		jboolean setProjectionReceiver(jboolean arg0);
		jboolean setRotationX(jfloat arg0);
		jboolean setRotationY(jfloat arg0);
		jboolean setRotationZ(jfloat arg0);
		jboolean setScaleX(jfloat arg0);
		jboolean setScaleY(jfloat arg0);
		jboolean setSpotShadowColor(jint arg0);
		jboolean setTranslationX(jfloat arg0);
		jboolean setTranslationY(jfloat arg0);
		jboolean setTranslationZ(jfloat arg0);
		jboolean setUseCompositingLayer(jboolean arg0, android::graphics::Paint arg1);
	};
} // namespace android::graphics

