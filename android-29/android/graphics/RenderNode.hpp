#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Matrix;
}
namespace __jni_impl::android::graphics
{
	class Outline;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::graphics
{
	class RecordingCanvas;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}

namespace __jni_impl::android::graphics
{
	class RenderNode : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
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
		void getInverseMatrix(__jni_impl::android::graphics::Matrix arg0);
		jint getLeft();
		void getMatrix(__jni_impl::android::graphics::Matrix arg0);
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
		jboolean setClipRect(__jni_impl::android::graphics::Rect arg0);
		jboolean setClipToBounds(jboolean arg0);
		jboolean setClipToOutline(jboolean arg0);
		jboolean setElevation(jfloat arg0);
		jboolean setForceDarkAllowed(jboolean arg0);
		jboolean setHasOverlappingRendering(jboolean arg0);
		jboolean setOutline(__jni_impl::android::graphics::Outline arg0);
		jboolean setPivotX(jfloat arg0);
		jboolean setPivotY(jfloat arg0);
		jboolean setPosition(__jni_impl::android::graphics::Rect arg0);
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
		jboolean setUseCompositingLayer(jboolean arg0, __jni_impl::android::graphics::Paint arg1);
	};
} // namespace __jni_impl::android::graphics

#include "./Matrix.hpp"
#include "./Outline.hpp"
#include "./Paint.hpp"
#include "./RecordingCanvas.hpp"
#include "./Rect.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void RenderNode::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RenderNode",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RenderNode::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RenderNode",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
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
	jlong RenderNode::computeApproximateMemoryUsage()
	{
		return __thiz.callMethod<jlong>(
			"computeApproximateMemoryUsage",
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
	void RenderNode::endRecording()
	{
		__thiz.callMethod<void>(
			"endRecording",
			"()V"
		);
	}
	jfloat RenderNode::getAlpha()
	{
		return __thiz.callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	jint RenderNode::getAmbientShadowColor()
	{
		return __thiz.callMethod<jint>(
			"getAmbientShadowColor",
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
	jfloat RenderNode::getCameraDistance()
	{
		return __thiz.callMethod<jfloat>(
			"getCameraDistance",
			"()F"
		);
	}
	jboolean RenderNode::getClipToBounds()
	{
		return __thiz.callMethod<jboolean>(
			"getClipToBounds",
			"()Z"
		);
	}
	jboolean RenderNode::getClipToOutline()
	{
		return __thiz.callMethod<jboolean>(
			"getClipToOutline",
			"()Z"
		);
	}
	jfloat RenderNode::getElevation()
	{
		return __thiz.callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	jint RenderNode::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
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
	jint RenderNode::getLeft()
	{
		return __thiz.callMethod<jint>(
			"getLeft",
			"()I"
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
	jfloat RenderNode::getPivotX()
	{
		return __thiz.callMethod<jfloat>(
			"getPivotX",
			"()F"
		);
	}
	jfloat RenderNode::getPivotY()
	{
		return __thiz.callMethod<jfloat>(
			"getPivotY",
			"()F"
		);
	}
	jint RenderNode::getRight()
	{
		return __thiz.callMethod<jint>(
			"getRight",
			"()I"
		);
	}
	jfloat RenderNode::getRotationX()
	{
		return __thiz.callMethod<jfloat>(
			"getRotationX",
			"()F"
		);
	}
	jfloat RenderNode::getRotationY()
	{
		return __thiz.callMethod<jfloat>(
			"getRotationY",
			"()F"
		);
	}
	jfloat RenderNode::getRotationZ()
	{
		return __thiz.callMethod<jfloat>(
			"getRotationZ",
			"()F"
		);
	}
	jfloat RenderNode::getScaleX()
	{
		return __thiz.callMethod<jfloat>(
			"getScaleX",
			"()F"
		);
	}
	jfloat RenderNode::getScaleY()
	{
		return __thiz.callMethod<jfloat>(
			"getScaleY",
			"()F"
		);
	}
	jint RenderNode::getSpotShadowColor()
	{
		return __thiz.callMethod<jint>(
			"getSpotShadowColor",
			"()I"
		);
	}
	jint RenderNode::getTop()
	{
		return __thiz.callMethod<jint>(
			"getTop",
			"()I"
		);
	}
	jfloat RenderNode::getTranslationX()
	{
		return __thiz.callMethod<jfloat>(
			"getTranslationX",
			"()F"
		);
	}
	jfloat RenderNode::getTranslationY()
	{
		return __thiz.callMethod<jfloat>(
			"getTranslationY",
			"()F"
		);
	}
	jfloat RenderNode::getTranslationZ()
	{
		return __thiz.callMethod<jfloat>(
			"getTranslationZ",
			"()F"
		);
	}
	jlong RenderNode::getUniqueId()
	{
		return __thiz.callMethod<jlong>(
			"getUniqueId",
			"()J"
		);
	}
	jboolean RenderNode::getUseCompositingLayer()
	{
		return __thiz.callMethod<jboolean>(
			"getUseCompositingLayer",
			"()Z"
		);
	}
	jint RenderNode::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
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
	jboolean RenderNode::hasOverlappingRendering()
	{
		return __thiz.callMethod<jboolean>(
			"hasOverlappingRendering",
			"()Z"
		);
	}
	jboolean RenderNode::hasShadow()
	{
		return __thiz.callMethod<jboolean>(
			"hasShadow",
			"()Z"
		);
	}
	jboolean RenderNode::isForceDarkAllowed()
	{
		return __thiz.callMethod<jboolean>(
			"isForceDarkAllowed",
			"()Z"
		);
	}
	jboolean RenderNode::isPivotExplicitlySet()
	{
		return __thiz.callMethod<jboolean>(
			"isPivotExplicitlySet",
			"()Z"
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
	jboolean RenderNode::offsetTopAndBottom(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offsetTopAndBottom",
			"(I)Z",
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
	jboolean RenderNode::setAlpha(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setAlpha",
			"(F)Z",
			arg0
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
	jboolean RenderNode::setCameraDistance(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setCameraDistance",
			"(F)Z",
			arg0
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
	jboolean RenderNode::setClipToOutline(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setClipToOutline",
			"(Z)Z",
			arg0
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
	jboolean RenderNode::setForceDarkAllowed(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setForceDarkAllowed",
			"(Z)Z",
			arg0
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
	jboolean RenderNode::setOutline(__jni_impl::android::graphics::Outline arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setOutline",
			"(Landroid/graphics/Outline;)Z",
			arg0.__jniObject().object()
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
	jboolean RenderNode::setPivotY(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPivotY",
			"(F)Z",
			arg0
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
	jboolean RenderNode::setRotationX(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setRotationX",
			"(F)Z",
			arg0
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
	jboolean RenderNode::setRotationZ(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setRotationZ",
			"(F)Z",
			arg0
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
	jboolean RenderNode::setScaleY(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setScaleY",
			"(F)Z",
			arg0
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
	jboolean RenderNode::setTranslationX(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setTranslationX",
			"(F)Z",
			arg0
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
	jboolean RenderNode::setTranslationZ(jfloat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setTranslationZ",
			"(F)Z",
			arg0
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

