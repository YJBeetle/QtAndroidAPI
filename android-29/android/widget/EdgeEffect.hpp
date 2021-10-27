#pragma once

#ifndef ANDROID_WIDGET_EDGEEFFECT
#define ANDROID_WIDGET_EDGEEFFECT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class BlendMode;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}

namespace __jni_impl::android::widget
{
	class EdgeEffect : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DEFAULT_BLEND_MODE();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jboolean draw(__jni_impl::android::graphics::Canvas arg0);
		void finish();
		QAndroidJniObject getBlendMode();
		jint getColor();
		jint getMaxHeight();
		jboolean isFinished();
		void onAbsorb(jint arg0);
		void onPull(jfloat arg0);
		void onPull(jfloat arg0, jfloat arg1);
		void onRelease();
		void setBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		void setColor(jint arg0);
		void setSize(jint arg0, jint arg1);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Canvas.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	QAndroidJniObject EdgeEffect::DEFAULT_BLEND_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.EdgeEffect",
			"DEFAULT_BLEND_MODE",
			"Landroid/graphics/BlendMode;"
		);
	}
	
	// Constructors
	void EdgeEffect::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.EdgeEffect",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean EdgeEffect::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		return __thiz.callMethod<jboolean>(
			"draw",
			"(Landroid/graphics/Canvas;)Z",
			arg0.__jniObject().object()
		);
	}
	void EdgeEffect::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V"
		);
	}
	QAndroidJniObject EdgeEffect::getBlendMode()
	{
		return __thiz.callObjectMethod(
			"getBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	jint EdgeEffect::getColor()
	{
		return __thiz.callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	jint EdgeEffect::getMaxHeight()
	{
		return __thiz.callMethod<jint>(
			"getMaxHeight",
			"()I"
		);
	}
	jboolean EdgeEffect::isFinished()
	{
		return __thiz.callMethod<jboolean>(
			"isFinished",
			"()Z"
		);
	}
	void EdgeEffect::onAbsorb(jint arg0)
	{
		__thiz.callMethod<void>(
			"onAbsorb",
			"(I)V",
			arg0
		);
	}
	void EdgeEffect::onPull(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"onPull",
			"(F)V",
			arg0
		);
	}
	void EdgeEffect::onPull(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"onPull",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void EdgeEffect::onRelease()
	{
		__thiz.callMethod<void>(
			"onRelease",
			"()V"
		);
	}
	void EdgeEffect::setBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void EdgeEffect::setColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setColor",
			"(I)V",
			arg0
		);
	}
	void EdgeEffect::setSize(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSize",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class EdgeEffect : public __jni_impl::android::widget::EdgeEffect
	{
	public:
		EdgeEffect(QAndroidJniObject obj) { __thiz = obj; }
		EdgeEffect(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_EDGEEFFECT

