#pragma once

#include "./Matrix.def.hpp"
#include "./Outline.def.hpp"
#include "./Paint.def.hpp"
#include "./RecordingCanvas.def.hpp"
#include "./Rect.def.hpp"
#include "../../JString.hpp"
#include "./RenderNode.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline RenderNode::RenderNode(JString arg0)
		: JObject(
			"android.graphics.RenderNode",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::graphics::RecordingCanvas RenderNode::beginRecording() const
	{
		return callObjectMethod(
			"beginRecording",
			"()Landroid/graphics/RecordingCanvas;"
		);
	}
	inline android::graphics::RecordingCanvas RenderNode::beginRecording(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"beginRecording",
			"(II)Landroid/graphics/RecordingCanvas;",
			arg0,
			arg1
		);
	}
	inline jlong RenderNode::computeApproximateMemoryUsage() const
	{
		return callMethod<jlong>(
			"computeApproximateMemoryUsage",
			"()J"
		);
	}
	inline void RenderNode::discardDisplayList() const
	{
		callMethod<void>(
			"discardDisplayList",
			"()V"
		);
	}
	inline void RenderNode::endRecording() const
	{
		callMethod<void>(
			"endRecording",
			"()V"
		);
	}
	inline jfloat RenderNode::getAlpha() const
	{
		return callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	inline jint RenderNode::getAmbientShadowColor() const
	{
		return callMethod<jint>(
			"getAmbientShadowColor",
			"()I"
		);
	}
	inline jint RenderNode::getBottom() const
	{
		return callMethod<jint>(
			"getBottom",
			"()I"
		);
	}
	inline jfloat RenderNode::getCameraDistance() const
	{
		return callMethod<jfloat>(
			"getCameraDistance",
			"()F"
		);
	}
	inline jboolean RenderNode::getClipToBounds() const
	{
		return callMethod<jboolean>(
			"getClipToBounds",
			"()Z"
		);
	}
	inline jboolean RenderNode::getClipToOutline() const
	{
		return callMethod<jboolean>(
			"getClipToOutline",
			"()Z"
		);
	}
	inline jfloat RenderNode::getElevation() const
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	inline jint RenderNode::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline void RenderNode::getInverseMatrix(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"getInverseMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	inline jint RenderNode::getLeft() const
	{
		return callMethod<jint>(
			"getLeft",
			"()I"
		);
	}
	inline void RenderNode::getMatrix(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"getMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	inline jfloat RenderNode::getPivotX() const
	{
		return callMethod<jfloat>(
			"getPivotX",
			"()F"
		);
	}
	inline jfloat RenderNode::getPivotY() const
	{
		return callMethod<jfloat>(
			"getPivotY",
			"()F"
		);
	}
	inline jint RenderNode::getRight() const
	{
		return callMethod<jint>(
			"getRight",
			"()I"
		);
	}
	inline jfloat RenderNode::getRotationX() const
	{
		return callMethod<jfloat>(
			"getRotationX",
			"()F"
		);
	}
	inline jfloat RenderNode::getRotationY() const
	{
		return callMethod<jfloat>(
			"getRotationY",
			"()F"
		);
	}
	inline jfloat RenderNode::getRotationZ() const
	{
		return callMethod<jfloat>(
			"getRotationZ",
			"()F"
		);
	}
	inline jfloat RenderNode::getScaleX() const
	{
		return callMethod<jfloat>(
			"getScaleX",
			"()F"
		);
	}
	inline jfloat RenderNode::getScaleY() const
	{
		return callMethod<jfloat>(
			"getScaleY",
			"()F"
		);
	}
	inline jint RenderNode::getSpotShadowColor() const
	{
		return callMethod<jint>(
			"getSpotShadowColor",
			"()I"
		);
	}
	inline jint RenderNode::getTop() const
	{
		return callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	inline jfloat RenderNode::getTranslationX() const
	{
		return callMethod<jfloat>(
			"getTranslationX",
			"()F"
		);
	}
	inline jfloat RenderNode::getTranslationY() const
	{
		return callMethod<jfloat>(
			"getTranslationY",
			"()F"
		);
	}
	inline jfloat RenderNode::getTranslationZ() const
	{
		return callMethod<jfloat>(
			"getTranslationZ",
			"()F"
		);
	}
	inline jlong RenderNode::getUniqueId() const
	{
		return callMethod<jlong>(
			"getUniqueId",
			"()J"
		);
	}
	inline jboolean RenderNode::getUseCompositingLayer() const
	{
		return callMethod<jboolean>(
			"getUseCompositingLayer",
			"()Z"
		);
	}
	inline jint RenderNode::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline jboolean RenderNode::hasDisplayList() const
	{
		return callMethod<jboolean>(
			"hasDisplayList",
			"()Z"
		);
	}
	inline jboolean RenderNode::hasIdentityMatrix() const
	{
		return callMethod<jboolean>(
			"hasIdentityMatrix",
			"()Z"
		);
	}
	inline jboolean RenderNode::hasOverlappingRendering() const
	{
		return callMethod<jboolean>(
			"hasOverlappingRendering",
			"()Z"
		);
	}
	inline jboolean RenderNode::hasShadow() const
	{
		return callMethod<jboolean>(
			"hasShadow",
			"()Z"
		);
	}
	inline jboolean RenderNode::isForceDarkAllowed() const
	{
		return callMethod<jboolean>(
			"isForceDarkAllowed",
			"()Z"
		);
	}
	inline jboolean RenderNode::isPivotExplicitlySet() const
	{
		return callMethod<jboolean>(
			"isPivotExplicitlySet",
			"()Z"
		);
	}
	inline jboolean RenderNode::offsetLeftAndRight(jint arg0) const
	{
		return callMethod<jboolean>(
			"offsetLeftAndRight",
			"(I)Z",
			arg0
		);
	}
	inline jboolean RenderNode::offsetTopAndBottom(jint arg0) const
	{
		return callMethod<jboolean>(
			"offsetTopAndBottom",
			"(I)Z",
			arg0
		);
	}
	inline jboolean RenderNode::resetPivot() const
	{
		return callMethod<jboolean>(
			"resetPivot",
			"()Z"
		);
	}
	inline jboolean RenderNode::setAlpha(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setAlpha",
			"(F)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setAmbientShadowColor(jint arg0) const
	{
		return callMethod<jboolean>(
			"setAmbientShadowColor",
			"(I)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setCameraDistance(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setCameraDistance",
			"(F)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setClipRect(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"setClipRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline jboolean RenderNode::setClipToBounds(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setClipToBounds",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setClipToOutline(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setClipToOutline",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setElevation(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setElevation",
			"(F)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setForceDarkAllowed(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setForceDarkAllowed",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setHasOverlappingRendering(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setHasOverlappingRendering",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setOutline(android::graphics::Outline arg0) const
	{
		return callMethod<jboolean>(
			"setOutline",
			"(Landroid/graphics/Outline;)Z",
			arg0.object()
		);
	}
	inline jboolean RenderNode::setPivotX(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setPivotX",
			"(F)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setPivotY(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setPivotY",
			"(F)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setPosition(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"setPosition",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline jboolean RenderNode::setPosition(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline jboolean RenderNode::setProjectBackwards(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setProjectBackwards",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setProjectionReceiver(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setProjectionReceiver",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setRotationX(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setRotationX",
			"(F)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setRotationY(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setRotationY",
			"(F)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setRotationZ(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setRotationZ",
			"(F)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setScaleX(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setScaleX",
			"(F)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setScaleY(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setScaleY",
			"(F)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setSpotShadowColor(jint arg0) const
	{
		return callMethod<jboolean>(
			"setSpotShadowColor",
			"(I)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setTranslationX(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setTranslationX",
			"(F)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setTranslationY(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setTranslationY",
			"(F)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setTranslationZ(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"setTranslationZ",
			"(F)Z",
			arg0
		);
	}
	inline jboolean RenderNode::setUseCompositingLayer(jboolean arg0, android::graphics::Paint arg1) const
	{
		return callMethod<jboolean>(
			"setUseCompositingLayer",
			"(ZLandroid/graphics/Paint;)Z",
			arg0,
			arg1.object()
		);
	}
} // namespace android::graphics

// Base class headers

