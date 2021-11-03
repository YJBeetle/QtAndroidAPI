#pragma once

#include "../../JObject.hpp"

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
class JString;

namespace android::graphics
{
	class RenderNode : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RenderNode(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RenderNode(QJniObject obj);
		
		// Constructors
		RenderNode(JString arg0);
		
		// Methods
		android::graphics::RecordingCanvas beginRecording() const;
		android::graphics::RecordingCanvas beginRecording(jint arg0, jint arg1) const;
		jlong computeApproximateMemoryUsage() const;
		void discardDisplayList() const;
		void endRecording() const;
		jfloat getAlpha() const;
		jint getAmbientShadowColor() const;
		jint getBottom() const;
		jfloat getCameraDistance() const;
		jboolean getClipToBounds() const;
		jboolean getClipToOutline() const;
		jfloat getElevation() const;
		jint getHeight() const;
		void getInverseMatrix(android::graphics::Matrix arg0) const;
		jint getLeft() const;
		void getMatrix(android::graphics::Matrix arg0) const;
		jfloat getPivotX() const;
		jfloat getPivotY() const;
		jint getRight() const;
		jfloat getRotationX() const;
		jfloat getRotationY() const;
		jfloat getRotationZ() const;
		jfloat getScaleX() const;
		jfloat getScaleY() const;
		jint getSpotShadowColor() const;
		jint getTop() const;
		jfloat getTranslationX() const;
		jfloat getTranslationY() const;
		jfloat getTranslationZ() const;
		jlong getUniqueId() const;
		jboolean getUseCompositingLayer() const;
		jint getWidth() const;
		jboolean hasDisplayList() const;
		jboolean hasIdentityMatrix() const;
		jboolean hasOverlappingRendering() const;
		jboolean hasShadow() const;
		jboolean isForceDarkAllowed() const;
		jboolean isPivotExplicitlySet() const;
		jboolean offsetLeftAndRight(jint arg0) const;
		jboolean offsetTopAndBottom(jint arg0) const;
		jboolean resetPivot() const;
		jboolean setAlpha(jfloat arg0) const;
		jboolean setAmbientShadowColor(jint arg0) const;
		jboolean setCameraDistance(jfloat arg0) const;
		jboolean setClipRect(android::graphics::Rect arg0) const;
		jboolean setClipToBounds(jboolean arg0) const;
		jboolean setClipToOutline(jboolean arg0) const;
		jboolean setElevation(jfloat arg0) const;
		jboolean setForceDarkAllowed(jboolean arg0) const;
		jboolean setHasOverlappingRendering(jboolean arg0) const;
		jboolean setOutline(android::graphics::Outline arg0) const;
		jboolean setPivotX(jfloat arg0) const;
		jboolean setPivotY(jfloat arg0) const;
		jboolean setPosition(android::graphics::Rect arg0) const;
		jboolean setPosition(jint arg0, jint arg1, jint arg2, jint arg3) const;
		jboolean setProjectBackwards(jboolean arg0) const;
		jboolean setProjectionReceiver(jboolean arg0) const;
		jboolean setRotationX(jfloat arg0) const;
		jboolean setRotationY(jfloat arg0) const;
		jboolean setRotationZ(jfloat arg0) const;
		jboolean setScaleX(jfloat arg0) const;
		jboolean setScaleY(jfloat arg0) const;
		jboolean setSpotShadowColor(jint arg0) const;
		jboolean setTranslationX(jfloat arg0) const;
		jboolean setTranslationY(jfloat arg0) const;
		jboolean setTranslationZ(jfloat arg0) const;
		jboolean setUseCompositingLayer(jboolean arg0, android::graphics::Paint arg1) const;
	};
} // namespace android::graphics

