#include "./Matrix.hpp"
#include "./Outline.hpp"
#include "./Paint.hpp"
#include "./RecordingCanvas.hpp"
#include "./Rect.hpp"
#include "../../JString.hpp"
#include "./RenderNode.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	RenderNode::RenderNode(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	RenderNode::RenderNode(JString arg0)
		: JObject(
			"android.graphics.RenderNode",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::graphics::RecordingCanvas RenderNode::beginRecording()
	{
		return callObjectMethod(
			"beginRecording",
			"()Landroid/graphics/RecordingCanvas;"
		);
	}
	android::graphics::RecordingCanvas RenderNode::beginRecording(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"beginRecording",
			"(II)Landroid/graphics/RecordingCanvas;",
			arg0,
			arg1
		);
	}
	jlong RenderNode::computeApproximateMemoryUsage()
	{
		return callMethod<jlong>(
			"computeApproximateMemoryUsage",
			"()J"
		);
	}
	void RenderNode::discardDisplayList()
	{
		callMethod<void>(
			"discardDisplayList",
			"()V"
		);
	}
	void RenderNode::endRecording()
	{
		callMethod<void>(
			"endRecording",
			"()V"
		);
	}
	jfloat RenderNode::getAlpha()
	{
		return callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	jint RenderNode::getAmbientShadowColor()
	{
		return callMethod<jint>(
			"getAmbientShadowColor",
			"()I"
		);
	}
	jint RenderNode::getBottom()
	{
		return callMethod<jint>(
			"getBottom",
			"()I"
		);
	}
	jfloat RenderNode::getCameraDistance()
	{
		return callMethod<jfloat>(
			"getCameraDistance",
			"()F"
		);
	}
	jboolean RenderNode::getClipToBounds()
	{
		return callMethod<jboolean>(
			"getClipToBounds",
			"()Z"
		);
	}
	jboolean RenderNode::getClipToOutline()
	{
		return callMethod<jboolean>(
			"getClipToOutline",
			"()Z"
		);
	}
	jfloat RenderNode::getElevation()
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	jint RenderNode::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	void RenderNode::getInverseMatrix(android::graphics::Matrix arg0)
	{
		callMethod<void>(
			"getInverseMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	jint RenderNode::getLeft()
	{
		return callMethod<jint>(
			"getLeft",
			"()I"
		);
	}
	void RenderNode::getMatrix(android::graphics::Matrix arg0)
	{
		callMethod<void>(
			"getMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	jfloat RenderNode::getPivotX()
	{
		return callMethod<jfloat>(
			"getPivotX",
			"()F"
		);
	}
	jfloat RenderNode::getPivotY()
	{
		return callMethod<jfloat>(
			"getPivotY",
			"()F"
		);
	}
	jint RenderNode::getRight()
	{
		return callMethod<jint>(
			"getRight",
			"()I"
		);
	}
	jfloat RenderNode::getRotationX()
	{
		return callMethod<jfloat>(
			"getRotationX",
			"()F"
		);
	}
	jfloat RenderNode::getRotationY()
	{
		return callMethod<jfloat>(
			"getRotationY",
			"()F"
		);
	}
	jfloat RenderNode::getRotationZ()
	{
		return callMethod<jfloat>(
			"getRotationZ",
			"()F"
		);
	}
	jfloat RenderNode::getScaleX()
	{
		return callMethod<jfloat>(
			"getScaleX",
			"()F"
		);
	}
	jfloat RenderNode::getScaleY()
	{
		return callMethod<jfloat>(
			"getScaleY",
			"()F"
		);
	}
	jint RenderNode::getSpotShadowColor()
	{
		return callMethod<jint>(
			"getSpotShadowColor",
			"()I"
		);
	}
	jint RenderNode::getTop()
	{
		return callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	jfloat RenderNode::getTranslationX()
	{
		return callMethod<jfloat>(
			"getTranslationX",
			"()F"
		);
	}
	jfloat RenderNode::getTranslationY()
	{
		return callMethod<jfloat>(
			"getTranslationY",
			"()F"
		);
	}
	jfloat RenderNode::getTranslationZ()
	{
		return callMethod<jfloat>(
			"getTranslationZ",
			"()F"
		);
	}
	jlong RenderNode::getUniqueId()
	{
		return callMethod<jlong>(
			"getUniqueId",
			"()J"
		);
	}
	jboolean RenderNode::getUseCompositingLayer()
	{
		return callMethod<jboolean>(
			"getUseCompositingLayer",
			"()Z"
		);
	}
	jint RenderNode::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean RenderNode::hasDisplayList()
	{
		return callMethod<jboolean>(
			"hasDisplayList",
			"()Z"
		);
	}
	jboolean RenderNode::hasIdentityMatrix()
	{
		return callMethod<jboolean>(
			"hasIdentityMatrix",
			"()Z"
		);
	}
	jboolean RenderNode::hasOverlappingRendering()
	{
		return callMethod<jboolean>(
			"hasOverlappingRendering",
			"()Z"
		);
	}
	jboolean RenderNode::hasShadow()
	{
		return callMethod<jboolean>(
			"hasShadow",
			"()Z"
		);
	}
	jboolean RenderNode::isForceDarkAllowed()
	{
		return callMethod<jboolean>(
			"isForceDarkAllowed",
			"()Z"
		);
	}
	jboolean RenderNode::isPivotExplicitlySet()
	{
		return callMethod<jboolean>(
			"isPivotExplicitlySet",
			"()Z"
		);
	}
	jboolean RenderNode::offsetLeftAndRight(jint arg0)
	{
		return callMethod<jboolean>(
			"offsetLeftAndRight",
			"(I)Z",
			arg0
		);
	}
	jboolean RenderNode::offsetTopAndBottom(jint arg0)
	{
		return callMethod<jboolean>(
			"offsetTopAndBottom",
			"(I)Z",
			arg0
		);
	}
	jboolean RenderNode::resetPivot()
	{
		return callMethod<jboolean>(
			"resetPivot",
			"()Z"
		);
	}
	jboolean RenderNode::setAlpha(jfloat arg0)
	{
		return callMethod<jboolean>(
			"setAlpha",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setAmbientShadowColor(jint arg0)
	{
		return callMethod<jboolean>(
			"setAmbientShadowColor",
			"(I)Z",
			arg0
		);
	}
	jboolean RenderNode::setCameraDistance(jfloat arg0)
	{
		return callMethod<jboolean>(
			"setCameraDistance",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setClipRect(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"setClipRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean RenderNode::setClipToBounds(jboolean arg0)
	{
		return callMethod<jboolean>(
			"setClipToBounds",
			"(Z)Z",
			arg0
		);
	}
	jboolean RenderNode::setClipToOutline(jboolean arg0)
	{
		return callMethod<jboolean>(
			"setClipToOutline",
			"(Z)Z",
			arg0
		);
	}
	jboolean RenderNode::setElevation(jfloat arg0)
	{
		return callMethod<jboolean>(
			"setElevation",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setForceDarkAllowed(jboolean arg0)
	{
		return callMethod<jboolean>(
			"setForceDarkAllowed",
			"(Z)Z",
			arg0
		);
	}
	jboolean RenderNode::setHasOverlappingRendering(jboolean arg0)
	{
		return callMethod<jboolean>(
			"setHasOverlappingRendering",
			"(Z)Z",
			arg0
		);
	}
	jboolean RenderNode::setOutline(android::graphics::Outline arg0)
	{
		return callMethod<jboolean>(
			"setOutline",
			"(Landroid/graphics/Outline;)Z",
			arg0.object()
		);
	}
	jboolean RenderNode::setPivotX(jfloat arg0)
	{
		return callMethod<jboolean>(
			"setPivotX",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setPivotY(jfloat arg0)
	{
		return callMethod<jboolean>(
			"setPivotY",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setPosition(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"setPosition",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean RenderNode::setPosition(jint arg0, jint arg1, jint arg2, jint arg3)
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
	jboolean RenderNode::setProjectBackwards(jboolean arg0)
	{
		return callMethod<jboolean>(
			"setProjectBackwards",
			"(Z)Z",
			arg0
		);
	}
	jboolean RenderNode::setProjectionReceiver(jboolean arg0)
	{
		return callMethod<jboolean>(
			"setProjectionReceiver",
			"(Z)Z",
			arg0
		);
	}
	jboolean RenderNode::setRotationX(jfloat arg0)
	{
		return callMethod<jboolean>(
			"setRotationX",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setRotationY(jfloat arg0)
	{
		return callMethod<jboolean>(
			"setRotationY",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setRotationZ(jfloat arg0)
	{
		return callMethod<jboolean>(
			"setRotationZ",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setScaleX(jfloat arg0)
	{
		return callMethod<jboolean>(
			"setScaleX",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setScaleY(jfloat arg0)
	{
		return callMethod<jboolean>(
			"setScaleY",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setSpotShadowColor(jint arg0)
	{
		return callMethod<jboolean>(
			"setSpotShadowColor",
			"(I)Z",
			arg0
		);
	}
	jboolean RenderNode::setTranslationX(jfloat arg0)
	{
		return callMethod<jboolean>(
			"setTranslationX",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setTranslationY(jfloat arg0)
	{
		return callMethod<jboolean>(
			"setTranslationY",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setTranslationZ(jfloat arg0)
	{
		return callMethod<jboolean>(
			"setTranslationZ",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::setUseCompositingLayer(jboolean arg0, android::graphics::Paint arg1)
	{
		return callMethod<jboolean>(
			"setUseCompositingLayer",
			"(ZLandroid/graphics/Paint;)Z",
			arg0,
			arg1.object()
		);
	}
} // namespace android::graphics

