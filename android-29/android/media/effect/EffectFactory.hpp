#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::effect
{
	class Effect;
}
namespace __jni_impl::android::media::effect
{
	class EffectContext;
}

namespace __jni_impl::android::media::effect
{
	class EffectFactory : public __JniBaseClass
	{
	public:
		// Fields
		static jstring EFFECT_AUTOFIX();
		static jstring EFFECT_BACKDROPPER();
		static jstring EFFECT_BITMAPOVERLAY();
		static jstring EFFECT_BLACKWHITE();
		static jstring EFFECT_BRIGHTNESS();
		static jstring EFFECT_CONTRAST();
		static jstring EFFECT_CROP();
		static jstring EFFECT_CROSSPROCESS();
		static jstring EFFECT_DOCUMENTARY();
		static jstring EFFECT_DUOTONE();
		static jstring EFFECT_FILLLIGHT();
		static jstring EFFECT_FISHEYE();
		static jstring EFFECT_FLIP();
		static jstring EFFECT_GRAIN();
		static jstring EFFECT_GRAYSCALE();
		static jstring EFFECT_LOMOISH();
		static jstring EFFECT_NEGATIVE();
		static jstring EFFECT_POSTERIZE();
		static jstring EFFECT_REDEYE();
		static jstring EFFECT_ROTATE();
		static jstring EFFECT_SATURATE();
		static jstring EFFECT_SEPIA();
		static jstring EFFECT_SHARPEN();
		static jstring EFFECT_STRAIGHTEN();
		static jstring EFFECT_TEMPERATURE();
		static jstring EFFECT_TINT();
		static jstring EFFECT_VIGNETTE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean isEffectSupported(jstring arg0);
		static jboolean isEffectSupported(const QString &arg0);
		QAndroidJniObject createEffect(jstring arg0);
		QAndroidJniObject createEffect(const QString &arg0);
	};
} // namespace __jni_impl::android::media::effect

#include "Effect.hpp"
#include "EffectContext.hpp"

namespace __jni_impl::android::media::effect
{
	// Fields
	jstring EffectFactory::EFFECT_AUTOFIX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_AUTOFIX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_BACKDROPPER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_BACKDROPPER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_BITMAPOVERLAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_BITMAPOVERLAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_BLACKWHITE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_BLACKWHITE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_BRIGHTNESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_BRIGHTNESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_CONTRAST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_CONTRAST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_CROP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_CROP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_CROSSPROCESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_CROSSPROCESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_DOCUMENTARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_DOCUMENTARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_DUOTONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_DUOTONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_FILLLIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_FILLLIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_FISHEYE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_FISHEYE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_FLIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_FLIP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_GRAIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_GRAIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_GRAYSCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_GRAYSCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_LOMOISH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_LOMOISH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_NEGATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_NEGATIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_POSTERIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_POSTERIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_REDEYE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_REDEYE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_ROTATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_ROTATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_SATURATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_SATURATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_SEPIA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_SEPIA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_SHARPEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_SHARPEN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_STRAIGHTEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_STRAIGHTEN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_TEMPERATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_TEMPERATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_TINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_TINT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EffectFactory::EFFECT_VIGNETTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_VIGNETTE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void EffectFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.effect.EffectFactory",
			"(V)V");
	}
	
	// Methods
	jboolean EffectFactory::isEffectSupported(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.effect.EffectFactory",
			"isEffectSupported",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean EffectFactory::isEffectSupported(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.effect.EffectFactory",
			"isEffectSupported",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject EffectFactory::createEffect(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"createEffect",
			"(Ljava/lang/String;)Landroid/media/effect/Effect;",
			arg0
		);
	}
	QAndroidJniObject EffectFactory::createEffect(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"createEffect",
			"(Ljava/lang/String;)Landroid/media/effect/Effect;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::media::effect

namespace android::media::effect
{
	class EffectFactory : public __jni_impl::android::media::effect::EffectFactory
	{
	public:
		EffectFactory(QAndroidJniObject obj) { __thiz = obj; }
		EffectFactory()
		{
			__constructor();
		}
	};
} // namespace android::media::effect

