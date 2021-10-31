#include "./Effect.hpp"
#include "./EffectContext.hpp"
#include "./EffectFactory.hpp"

namespace android::media::effect
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
	
	// QAndroidJniObject forward
	EffectFactory::EffectFactory(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
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
	android::media::effect::Effect EffectFactory::createEffect(jstring arg0)
	{
		return callObjectMethod(
			"createEffect",
			"(Ljava/lang/String;)Landroid/media/effect/Effect;",
			arg0
		);
	}
} // namespace android::media::effect

