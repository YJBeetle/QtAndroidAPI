#pragma once

#ifndef ANDROID_GRAPHICS_RENDERNODE
#define ANDROID_GRAPHICS_RENDERNODE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class RecordingCanvas;
}
namespace __jni_impl::android::graphics
{
	class Matrix;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class Outline;
}

namespace __jni_impl::android::graphics
{
	class RenderNode : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		QAndroidJniObject beginRecording();
		QAndroidJniObject beginRecording(jint arg0, jint arg1);
		void endRecording();
		void getMatrix(__jni_impl::android::graphics::Matrix arg0);
		jfloat getCameraDistance();
		jboolean setCameraDistance(jfloat arg0);
		jfloat getRotationY();
		jboolean setRotationY(jfloat arg0);
		jfloat getRotationX();
		jboolean setRotationX(jfloat arg0);
		jfloat getScaleX();
		jboolean setScaleX(jfloat arg0);
		jfloat getScaleY();
		jboolean setScaleY(jfloat arg0);
		jfloat getPivotX();
		jboolean setPivotX(jfloat arg0);
		jfloat getPivotY();
		jboolean setPivotY(jfloat arg0);
		jboolean resetPivot();
		jfloat getAlpha();
		jboolean hasOverlappingRendering();
		jboolean setForceDarkAllowed(jboolean arg0);
		jboolean isForceDarkAllowed();
		jint getTop();
		jint getBottom();
		jint getLeft();
		jint getRight();
		jfloat getElevation();
		jboolean setElevation(jfloat arg0);
		jfloat getTranslationX();
		jboolean setTranslationX(jfloat arg0);
		jfloat getTranslationY();
		jboolean setTranslationY(jfloat arg0);
		jfloat getTranslationZ();
		jboolean setTranslationZ(jfloat arg0);
		jboolean getClipToOutline();
		jboolean setClipToOutline(jboolean arg0);
		jboolean offsetTopAndBottom(jint arg0);
		jboolean offsetLeftAndRight(jint arg0);
		jlong getUniqueId();
		void discardDisplayList();
		jboolean hasDisplayList();
		jboolean hasIdentityMatrix();
		void getInverseMatrix(__jni_impl::android::graphics::Matrix arg0);
		jboolean setUseCompositingLayer(jboolean arg0, __jni_impl::android::graphics::Paint arg1);
		jboolean getUseCompositingLayer();
		jboolean setClipRect(__jni_impl::android::graphics::Rect arg0);
		jboolean setClipToBounds(jboolean arg0);
		jboolean getClipToBounds();
		jboolean setProjectBackwards(jboolean arg0);
		jboolean setProjectionReceiver(jboolean arg0);
		jboolean setOutline(__jni_impl::android::graphics::Outline arg0);
		jboolean hasShadow();
		jboolean setSpotShadowColor(jint arg0);
		jint getSpotShadowColor();
		jboolean setAmbientShadowColor(jint arg0);
		jint getAmbientShadowColor();
		jboolean setHasOverlappingRendering(jboolean arg0);
		jboolean setRotationZ(jfloat arg0);
		jfloat getRotationZ();
		jboolean isPivotExplicitlySet();
		jboolean setPosition(__jni_impl::android::graphics::Rect arg0);
		jboolean setPosition(jint arg0, jint arg1, jint arg2, jint arg3);
		jlong computeApproximateMemoryUsage();
		jint getWidth();
		jint getHeight();
		jboolean setAlpha(jfloat arg0);
	};
} // namespace __jni_impl::android::graphics

#include "RecordingCanvas.hpp"
#include "Matrix.hpp"
#include "Paint.hpp"
#include "Rect.hpp"
#include "Outline.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void RenderNode::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RenderNode",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject RenderNode::beginRecording()
	{
		return __thiz.callObjectMethod(
			"beginRecording",
			"()Landroid/graphics/RecordingCanvas;"
		);
	}
	QAndroidJniObject RenderNode::beginRecording(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"beginRecording",
			"(II)Landroid/graphics/RecordingCanvas;",
			arg0,
			arg1
		);
	}
	void RenderNode::endRecording()
	{
		__thiz.callMethod<void>(
			"endRecording",
			"()V"
		);
	}
	void RenderNode::getMatrix(__jni_impl::android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"getMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object()
		);
	}
	jfloat RenderNode::getCameraDistance()
	{
		return __thiz.callMethod<jfloat>(
			"getCameraDistance",
			"()F"
		);
	}
	jboolean RenderNode::setCameraDistance(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setCameraDistance",
			"(F)Z",
			arg0
		);
	}
	jfloat RenderNode::getRotationY()
	{
		return __thiz.callMethod<jfloat>(
			"getRotationY",
			"()F"
		);
	}
	jboolean RenderNode::setRotationY(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setRotationY",
			"(F)Z",
			arg0
		);
	}
	jfloat RenderNode::getRotationX()
	{
		return __thiz.callMethod<jfloat>(
			"getRotationX",
			"()F"
		);
	}
	jboolean RenderNode::setRotationX(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setRotationX",
			"(F)Z",
			arg0
		);
	}
	jfloat RenderNode::getScaleX()
	{
		return __thiz.callMethod<jfloat>(
			"getScaleX",
			"()F"
		);
	}
	jboolean RenderNode::setScaleX(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setScaleX",
			"(F)Z",
			arg0
		);
	}
	jfloat RenderNode::getScaleY()
	{
		return __thiz.callMethod<jfloat>(
			"getScaleY",
			"()F"
		);
	}
	jboolean RenderNode::setScaleY(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setScaleY",
			"(F)Z",
			arg0
		);
	}
	jfloat RenderNode::getPivotX()
	{
		return __thiz.callMethod<jfloat>(
			"getPivotX",
			"()F"
		);
	}
	jboolean RenderNode::setPivotX(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPivotX",
			"(F)Z",
			arg0
		);
	}
	jfloat RenderNode::getPivotY()
	{
		return __thiz.callMethod<jfloat>(
			"getPivotY",
			"()F"
		);
	}
	jboolean RenderNode::setPivotY(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPivotY",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::resetPivot()
	{
		return __thiz.callMethod<jboolean>(
			"resetPivot",
			"()Z"
		);
	}
	jfloat RenderNode::getAlpha()
	{
		return __thiz.callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	jboolean RenderNode::hasOverlappingRendering()
	{
		return __thiz.callMethod<jboolean>(
			"hasOverlappingRendering",
			"()Z"
		);
	}
	jboolean RenderNode::setForceDarkAllowed(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setForceDarkAllowed",
			"(Z)Z",
			arg0
		);
	}
	jboolean RenderNode::isForceDarkAllowed()
	{
		return __thiz.callMethod<jboolean>(
			"isForceDarkAllowed",
			"()Z"
		);
	}
	jint RenderNode::getTop()
	{
		return __thiz.callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	jint RenderNode::getBottom()
	{
		return __thiz.callMethod<jint>(
			"getBottom",
			"()I"
		);
	}
	jint RenderNode::getLeft()
	{
		return __thiz.callMethod<jint>(
			"getLeft",
			"()I"
		);
	}
	jint RenderNode::getRight()
	{
		return __thiz.callMethod<jint>(
			"getRight",
			"()I"
		);
	}
	jfloat RenderNode::getElevation()
	{
		return __thiz.callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	jboolean RenderNode::setElevation(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setElevation",
			"(F)Z",
			arg0
		);
	}
	jfloat RenderNode::getTranslationX()
	{
		return __thiz.callMethod<jfloat>(
			"getTranslationX",
			"()F"
		);
	}
	jboolean RenderNode::setTranslationX(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setTranslationX",
			"(F)Z",
			arg0
		);
	}
	jfloat RenderNode::getTranslationY()
	{
		return __thiz.callMethod<jfloat>(
			"getTranslationY",
			"()F"
		);
	}
	jboolean RenderNode::setTranslationY(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setTranslationY",
			"(F)Z",
			arg0
		);
	}
	jfloat RenderNode::getTranslationZ()
	{
		return __thiz.callMethod<jfloat>(
			"getTranslationZ",
			"()F"
		);
	}
	jboolean RenderNode::setTranslationZ(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setTranslationZ",
			"(F)Z",
			arg0
		);
	}
	jboolean RenderNode::getClipToOutline()
	{
		return __thiz.callMethod<jboolean>(
			"getClipToOutline",
			"()Z"
		);
	}
	jboolean RenderNode::setClipToOutline(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setClipToOutline",
			"(Z)Z",
			arg0
		);
	}
	jboolean RenderNode::offsetTopAndBottom(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offsetTopAndBottom",
			"(I)Z",
			arg0
		);
	}
	jboolean RenderNode::offsetLeftAndRight(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offsetLeftAndRight",
			"(I)Z",
			arg0
		);
	}
	jlong RenderNode::getUniqueId()
	{
		return __thiz.callMethod<jlong>(
			"getUniqueId",
			"()J"
		);
	}
	void RenderNode::discardDisplayList()
	{
		__thiz.callMethod<void>(
			"discardDisplayList",
			"()V"
		);
	}
	jboolean RenderNode::hasDisplayList()
	{
		return __thiz.callMethod<jboolean>(
			"hasDisplayList",
			"()Z"
		);
	}
	jboolean RenderNode::hasIdentityMatrix()
	{
		return __thiz.callMethod<jboolean>(
			"hasIdentityMatrix",
			"()Z"
		);
	}
	void RenderNode::getInverseMatrix(__jni_impl::android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"getInverseMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean RenderNode::setUseCompositingLayer(jboolean arg0, __jni_impl::android::graphics::Paint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setUseCompositingLayer",
			"(ZLandroid/graphics/Paint;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean RenderNode::getUseCompositingLayer()
	{
		return __thiz.callMethod<jboolean>(
			"getUseCompositingLayer",
			"()Z"
		);
	}
	jboolean RenderNode::setClipRect(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setClipRect",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean RenderNode::setClipToBounds(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setClipToBounds",
			"(Z)Z",
			arg0
		);
	}
	jboolean RenderNode::getClipToBounds()
	{
		return __thiz.callMethod<jboolean>(
			"getClipToBounds",
			"()Z"
		);
	}
	jboolean RenderNode::setProjectBackwards(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setProjectBackwards",
			"(Z)Z",
			arg0
		);
	}
	jboolean RenderNode::setProjectionReceiver(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setProjectionReceiver",
			"(Z)Z",
			arg0
		);
	}
	jboolean RenderNode::setOutline(__jni_impl::android::graphics::Outline arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setOutline",
			"(Landroid/graphics/Outline;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean RenderNode::hasShadow()
	{
		return __thiz.callMethod<jboolean>(
			"hasShadow",
			"()Z"
		);
	}
	jboolean RenderNode::setSpotShadowColor(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setSpotShadowColor",
			"(I)Z",
			arg0
		);
	}
	jint RenderNode::getSpotShadowColor()
	{
		return __thiz.callMethod<jint>(
			"getSpotShadowColor",
			"()I"
		);
	}
	jboolean RenderNode::setAmbientShadowColor(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setAmbientShadowColor",
			"(I)Z",
			arg0
		);
	}
	jint RenderNode::getAmbientShadowColor()
	{
		return __thiz.callMethod<jint>(
			"getAmbientShadowColor",
			"()I"
		);
	}
	jboolean RenderNode::setHasOverlappingRendering(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setHasOverlappingRendering",
			"(Z)Z",
			arg0
		);
	}
	jboolean RenderNode::setRotationZ(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setRotationZ",
			"(F)Z",
			arg0
		);
	}
	jfloat RenderNode::getRotationZ()
	{
		return __thiz.callMethod<jfloat>(
			"getRotationZ",
			"()F"
		);
	}
	jboolean RenderNode::isPivotExplicitlySet()
	{
		return __thiz.callMethod<jboolean>(
			"isPivotExplicitlySet",
			"()Z"
		);
	}
	jboolean RenderNode::setPosition(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPosition",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean RenderNode::setPosition(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"setPosition",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jlong RenderNode::computeApproximateMemoryUsage()
	{
		return __thiz.callMethod<jlong>(
			"computeApproximateMemoryUsage",
			"()J"
		);
	}
	jint RenderNode::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint RenderNode::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jboolean RenderNode::setAlpha(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setAlpha",
			"(F)Z",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class RenderNode : public __jni_impl::android::graphics::RenderNode
	{
	public:
		RenderNode(QAndroidJniObject obj) { __thiz = obj; }
		RenderNode(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_RENDERNODE

