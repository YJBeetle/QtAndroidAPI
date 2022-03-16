#include "./Matrix.hpp"
#include "./Outline.hpp"
#include "./Paint.hpp"
#include "./RecordingCanvas.hpp"
#include "./Rect.hpp"
#include "./RenderEffect.hpp"
#include "../../JString.hpp"
#include "./RenderNode.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	RenderNode::RenderNode(JString arg0)
		: JObject(
			"android.graphics.RenderNode",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::graphics::RecordingCanvas RenderNode::beginRecording() const
	{
		return callObjectMethod(
			"beginRecording",
			"()Landroid/graphics/RecordingCanvas;"
		);
	}
	android::graphics::RecordingCanvas RenderNode::beginRecording(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"beginRecording",
			"(II)Landroid/graphics/RecordingCanvas;",
			arg0,
			arg1
		);
	}
	jlong RenderNode::computeApproximateMemoryUsage() const
	{
		return callMethod<jlong>(
			"computeApproximateMemoryUsage",
			"()J"
		);
	}
	void RenderNode::discardDisplayList() const
	{
		callMethod<void>(
			"discardDisplayList",
			"()V"
		);
	}
	void RenderNode::endRecording() const
	{
		callMethod<void>(
			"endRecording",
			"()V"
		);
	}
	jfloat RenderNode::getAlpha() const
	{
		return callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	jint RenderNode::getAmbientShadowColor() const
	{
		return callMethod<jint>(
			"getAmbientShadowColor",
			"()I"
		);
	}
	jint RenderNode::getBottom() const
	{
		return callMethod<jint>(
			"getBottom",
			"()I"
		);
	}
	jfloat RenderNode::getCameraDistance() const
	{
		return callMethod<jfloat>(
			"getCameraDistance",
			"()F"
		);
	}
	jboolean RenderNode::getClipToBounds() const
	{
		return callMethod<jboolean>(
			"getClipToBounds",
			"()Z"
		);
	}
	jboolean RenderNode::getClipToOutline() const
	{
		return callMethod<jboolean>(
			"getClipToOutline",
			"()Z"
		);
	}
	jfloat RenderNode::getElevation() const
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	jint RenderNode::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	void RenderNode::getInverseMatrix(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"getInverseMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	jint RenderNode::getLeft() const
	{
		return callMethod<jint>(
			"getLeft",
			"()I"
		);
	}
	void RenderNode::getMatrix(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"getMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	jfloat RenderNode::getPivotX() const
	{
		return callMethod<jfloat>(
			"getPivotX",
			"()F"
		);
	}
	jfloat RenderNode::getPivotY() const
	{
		return callMethod<jfloat>(
			"getPivotY",
			"()F"
		);
	}
	jint RenderNode::getRight() const
	{
		return callMethod<jint>(
			"getRight",
			"()I"
		);
	}
	jfloat RenderNode::getRotationX() const
	{
		return callMethod<jfloat>(
			"getRotationX",
			"()F"
		);
	}
	jfloat RenderNode::getRotationY() const
	{
		return callMethod<jfloat>(
			"getRotationY",
			"()F"
		);
	}
	jfloat RenderNode::getRotationZ() const
	{
		return callMethod<jfloat>(
			"getRotationZ",
			"()F"
		);
	}
	jfloat RenderNode::getScaleX() const
	{
		return callMethod<jfloat>(
			"getScaleX",
			"()F"
		);
	}
	jfloat RenderNode::getScaleY() const
	{
		return callMethod<jfloat>(
			"getScaleY",
			"()F"
		);
	}
	jint RenderNode::getSpotShadowColor() const
	{
		return callMethod<jint>(
			"getSpotShadowColor",
			"()I"
		);
	}
	jint RenderNode::getTop() const
	{
		return callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	jfloat RenderNode::getTranslationX() const
	{
		return callMethod<jfloat>(
			"getTranslationX",
			"()F"
		);
	}
	jfloat RenderNode::getTranslationY() const
	{
		return callMethod<jfloat>(
			"getTranslationY",
			"()F"
		);
	}
	jfloat RenderNode::getTranslationZ() const
	{
		return callMethod<jfloat>(
			"getTranslationZ",
			"()F"
		);
	}
	jlong RenderNode::getUniqueId() const
	{
		return callMethod<jlong>(
			"getUniqueId",
			"()J"
		);
	}
	jboolean RenderNode::getUseCompositingLayer() const
	{
		return callMethod<jboolean>(
			"getUseCompositingLayer",
			"()Z"
		);
	}
	jint RenderNode::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean RenderNode::hasDisplayList() const
	{
		return callMethod<jboolean>(
			"hasDisplayList",
			"()Z"
		);
	}
	jboolean RenderNode::hasIdentityMatrix() const
	{
		return callMethod<jboolean>(
			"hasIdentityMatrix",
			"()Z"
		);
	}
	jboolean RenderNode::hasOverlappingRendering() const
	{
		return callMethod<jboolean>(
			"hasOverlappingRendering",
			"()Z"
		);
	}
	jboolean RenderNode::hasShadow() const
	{
		return callMethod<jboolean>(
			"hasShadow",
			"()Z"
		);
	}
	jboolean RenderNode::isForceDarkAllowed() const
	{
		return callMethod<jboolean>(
			"isForceDarkAllowed",
			"()Z"
		);
	}
	jboolean RenderNode::isPivotExplicitlySet() const
	{
		return callMethod<jboolean>(
			"isPivotExplicitlySet",
			"()Z"
		);
	}
	jboolean RenderNode::offsetLeftAndRight(jint arg0) const
	{
		return callMethod<jboolean>(
			"offsetLeftAndRight",
			"(I)Z",
			arg0
		);
	}
	jboolean RenderNode::offsetTopAndBottom(jint arg0) const
	{
		return callMethod<jboolean>(
			"offsetTopAndBottom",
			"(I)Z",
			arg0
		);
	}
	jboolean RenderNode::resetPivot() const
	{
		return callMethod<jboolean>(
			"resetPivot",
			"()Z"
		);
	}
	jboolean RenderNode::setAlpha(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setAlpha",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setAmbientShadowColor(jint arg0) const
	{
		return callMethod<jboolean>(
			"setAmbientShadowColor",
			"(I)Z",
			arg0
		);
	}
	jboolean RenderNode::setCameraDistance(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setCameraDistance",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setClipRect(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"setClipRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean RenderNode::setClipToBounds(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setClipToBounds",
			"(Z)Z",
			arg0
		);
	}
	jboolean RenderNode::setClipToOutline(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setClipToOutline",
			"(Z)Z",
			arg0
		);
	}
	jboolean RenderNode::setElevation(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setElevation",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setForceDarkAllowed(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setForceDarkAllowed",
			"(Z)Z",
			arg0
		);
	}
	jboolean RenderNode::setHasOverlappingRendering(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setHasOverlappingRendering",
			"(Z)Z",
			arg0
		);
	}
	jboolean RenderNode::setOutline(android::graphics::Outline arg0) const
	{
		return callMethod<jboolean>(
			"setOutline",
			"(Landroid/graphics/Outline;)Z",
			arg0.object()
		);
	}
	jboolean RenderNode::setPivotX(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setPivotX",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setPivotY(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setPivotY",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setPosition(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"setPosition",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean RenderNode::setPosition(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"setPosition",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean RenderNode::setProjectBackwards(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setProjectBackwards",
			"(Z)Z",
			arg0
		);
	}
	jboolean RenderNode::setProjectionReceiver(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setProjectionReceiver",
			"(Z)Z",
			arg0
		);
	}
	jboolean RenderNode::setRenderEffect(android::graphics::RenderEffect arg0) const
	{
		return callMethod<jboolean>(
			"setRenderEffect",
			"(Landroid/graphics/RenderEffect;)Z",
			arg0.object()
		);
	}
	jboolean RenderNode::setRotationX(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setRotationX",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setRotationY(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setRotationY",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setRotationZ(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setRotationZ",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setScaleX(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setScaleX",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setScaleY(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setScaleY",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setSpotShadowColor(jint arg0) const
	{
		return callMethod<jboolean>(
			"setSpotShadowColor",
			"(I)Z",
			arg0
		);
	}
	jboolean RenderNode::setTranslationX(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setTranslationX",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setTranslationY(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setTranslationY",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setTranslationZ(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setTranslationZ",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setUseCompositingLayer(jboolean arg0, android::graphics::Paint arg1) const
	{
		return callMethod<jboolean>(
			"setUseCompositingLayer",
			"(ZLandroid/graphics/Paint;)Z",
			arg0,
			arg1.object()
		);
	}
} // namespace android::graphics

