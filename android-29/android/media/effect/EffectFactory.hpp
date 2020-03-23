#pragma once

#ifndef ANDROID_MEDIA_EFFECT_EFFECTFACTORY
#define ANDROID_MEDIA_EFFECT_EFFECTFACTORY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::effect
{
	class EffectContext;
}
namespace __jni_impl::android::media::effect
{
	class Effect;
}

namespace __jni_impl::android::media::effect
{
	class EffectFactory : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject EFFECT_AUTOFIX();
		static QAndroidJniObject EFFECT_BACKDROPPER();
		static QAndroidJniObject EFFECT_BITMAPOVERLAY();
		static QAndroidJniObject EFFECT_BLACKWHITE();
		static QAndroidJniObject EFFECT_BRIGHTNESS();
		static QAndroidJniObject EFFECT_CONTRAST();
		static QAndroidJniObject EFFECT_CROP();
		static QAndroidJniObject EFFECT_CROSSPROCESS();
		static QAndroidJniObject EFFECT_DOCUMENTARY();
		static QAndroidJniObject EFFECT_DUOTONE();
		static QAndroidJniObject EFFECT_FILLLIGHT();
		static QAndroidJniObject EFFECT_FISHEYE();
		static QAndroidJniObject EFFECT_FLIP();
		static QAndroidJniObject EFFECT_GRAIN();
		static QAndroidJniObject EFFECT_GRAYSCALE();
		static QAndroidJniObject EFFECT_LOMOISH();
		static QAndroidJniObject EFFECT_NEGATIVE();
		static QAndroidJniObject EFFECT_POSTERIZE();
		static QAndroidJniObject EFFECT_REDEYE();
		static QAndroidJniObject EFFECT_ROTATE();
		static QAndroidJniObject EFFECT_SATURATE();
		static QAndroidJniObject EFFECT_SEPIA();
		static QAndroidJniObject EFFECT_SHARPEN();
		static QAndroidJniObject EFFECT_STRAIGHTEN();
		static QAndroidJniObject EFFECT_TEMPERATURE();
		static QAndroidJniObject EFFECT_TINT();
		static QAndroidJniObject EFFECT_VIGNETTE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject createEffect(jstring arg0);
		static jboolean isEffectSupported(jstring arg0);
	};
} // namespace __jni_impl::android::media::effect

#include "EffectContext.hpp"
#include "Effect.hpp"

namespace __jni_impl::android::media::effect
{
	// Fields
	QAndroidJniObject EffectFactory::EFFECT_AUTOFIX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_AUTOFIX",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_BACKDROPPER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_BACKDROPPER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_BITMAPOVERLAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_BITMAPOVERLAY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_BLACKWHITE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_BLACKWHITE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_BRIGHTNESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_BRIGHTNESS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_CONTRAST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_CONTRAST",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_CROP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_CROP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_CROSSPROCESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_CROSSPROCESS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_DOCUMENTARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_DOCUMENTARY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_DUOTONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_DUOTONE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_FILLLIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_FILLLIGHT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_FISHEYE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_FISHEYE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_FLIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_FLIP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_GRAIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_GRAIN",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_GRAYSCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_GRAYSCALE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_LOMOISH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_LOMOISH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_NEGATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_NEGATIVE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_POSTERIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_POSTERIZE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_REDEYE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_REDEYE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_ROTATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_ROTATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_SATURATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_SATURATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_SEPIA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_SEPIA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_SHARPEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_SHARPEN",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_STRAIGHTEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_STRAIGHTEN",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_TEMPERATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_TEMPERATURE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_TINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_TINT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject EffectFactory::EFFECT_VIGNETTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_VIGNETTE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void EffectFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.effect.EffectFactory",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject EffectFactory::createEffect(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"createEffect",
			"(Ljava/lang/String;)Landroid/media/effect/Effect;",
			arg0);
	}
	jboolean EffectFactory::isEffectSupported(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.effect.EffectFactory",
			"isEffectSupported",
			"(Ljava/lang/String;)Z",
			arg0);
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

#endif // ANDROID_MEDIA_EFFECT_EFFECTFACTORY

