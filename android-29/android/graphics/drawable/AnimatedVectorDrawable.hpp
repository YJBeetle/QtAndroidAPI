#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Drawable.hpp"

namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}
namespace __jni_impl::android::graphics
{
	class BlendMode;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class ColorFilter;
}
namespace __jni_impl::android::graphics
{
	class Insets;
}
namespace __jni_impl::android::graphics
{
	class Outline;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics::drawable
{
	class Animatable2_AnimationCallback;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable_ConstantState;
}

namespace __jni_impl::android::graphics::drawable
{
	class AnimatedVectorDrawable : public __jni_impl::android::graphics::drawable::Drawable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void applyTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		void clearAnimationCallbacks();
		void draw(__jni_impl::android::graphics::Canvas arg0);
		jint getAlpha();
		jint getChangingConfigurations();
		QAndroidJniObject getColorFilter();
		QAndroidJniObject getConstantState();
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getOpacity();
		QAndroidJniObject getOpticalInsets();
		void getOutline(__jni_impl::android::graphics::Outline arg0);
		void inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3);
		jboolean isRunning();
		jboolean isStateful();
		QAndroidJniObject mutate();
		jboolean onLayoutDirectionChanged(jint arg0);
		void registerAnimationCallback(__jni_impl::android::graphics::drawable::Animatable2_AnimationCallback arg0);
		void reset();
		void setAlpha(jint arg0);
		void setColorFilter(__jni_impl::android::graphics::ColorFilter arg0);
		void setHotspot(jfloat arg0, jfloat arg1);
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		void setTintList(__jni_impl::android::content::res::ColorStateList arg0);
		jboolean setVisible(jboolean arg0, jboolean arg1);
		void start();
		void stop();
		jboolean unregisterAnimationCallback(__jni_impl::android::graphics::drawable::Animatable2_AnimationCallback arg0);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../BlendMode.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Insets.hpp"
#include "../Outline.hpp"
#include "../Rect.hpp"
#include "Animatable2_AnimationCallback.hpp"
#include "Drawable.hpp"
#include "Drawable_ConstantState.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void AnimatedVectorDrawable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.AnimatedVectorDrawable",
			"()V"
		);
	}
	
	// Methods
	void AnimatedVectorDrawable::applyTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AnimatedVectorDrawable::canApplyTheme()
	{
		return __thiz.callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void AnimatedVectorDrawable::clearAnimationCallbacks()
	{
		__thiz.callMethod<void>(
			"clearAnimationCallbacks",
			"()V"
		);
	}
	void AnimatedVectorDrawable::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jint AnimatedVectorDrawable::getAlpha()
	{
		return __thiz.callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint AnimatedVectorDrawable::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	QAndroidJniObject AnimatedVectorDrawable::getColorFilter()
	{
		return __thiz.callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	QAndroidJniObject AnimatedVectorDrawable::getConstantState()
	{
		return __thiz.callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	jint AnimatedVectorDrawable::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint AnimatedVectorDrawable::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint AnimatedVectorDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	QAndroidJniObject AnimatedVectorDrawable::getOpticalInsets()
	{
		return __thiz.callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	void AnimatedVectorDrawable::getOutline(__jni_impl::android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	void AnimatedVectorDrawable::inflate(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::content::res::Resources_Theme arg3)
	{
		__thiz.callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jboolean AnimatedVectorDrawable::isRunning()
	{
		return __thiz.callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	jboolean AnimatedVectorDrawable::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	QAndroidJniObject AnimatedVectorDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jboolean AnimatedVectorDrawable::onLayoutDirectionChanged(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	void AnimatedVectorDrawable::registerAnimationCallback(__jni_impl::android::graphics::drawable::Animatable2_AnimationCallback arg0)
	{
		__thiz.callMethod<void>(
			"registerAnimationCallback",
			"(Landroid/graphics/drawable/Animatable2$AnimationCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void AnimatedVectorDrawable::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void AnimatedVectorDrawable::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void AnimatedVectorDrawable::setColorFilter(__jni_impl::android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object()
		);
	}
	void AnimatedVectorDrawable::setHotspot(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void AnimatedVectorDrawable::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setHotspotBounds",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void AnimatedVectorDrawable::setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void AnimatedVectorDrawable::setTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AnimatedVectorDrawable::setVisible(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	void AnimatedVectorDrawable::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	void AnimatedVectorDrawable::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
	jboolean AnimatedVectorDrawable::unregisterAnimationCallback(__jni_impl::android::graphics::drawable::Animatable2_AnimationCallback arg0)
	{
		return __thiz.callMethod<jboolean>(
			"unregisterAnimationCallback",
			"(Landroid/graphics/drawable/Animatable2$AnimationCallback;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class AnimatedVectorDrawable : public __jni_impl::android::graphics::drawable::AnimatedVectorDrawable
	{
	public:
		AnimatedVectorDrawable(QAndroidJniObject obj) { __thiz = obj; }
		AnimatedVectorDrawable()
		{
			__constructor();
		}
	};
} // namespace android::graphics::drawable

