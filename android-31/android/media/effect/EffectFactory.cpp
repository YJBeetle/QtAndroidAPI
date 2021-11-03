#include "./Effect.hpp"
#include "../../../JString.hpp"
#include "./EffectFactory.hpp"

namespace android::media::effect
{
	// Fields
	JString EffectFactory::EFFECT_AUTOFIX()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_AUTOFIX",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_BACKDROPPER()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_BACKDROPPER",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_BITMAPOVERLAY()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_BITMAPOVERLAY",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_BLACKWHITE()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_BLACKWHITE",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_BRIGHTNESS()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_BRIGHTNESS",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_CONTRAST()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_CONTRAST",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_CROP()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_CROP",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_CROSSPROCESS()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_CROSSPROCESS",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_DOCUMENTARY()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_DOCUMENTARY",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_DUOTONE()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_DUOTONE",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_FILLLIGHT()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_FILLLIGHT",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_FISHEYE()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_FISHEYE",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_FLIP()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_FLIP",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_GRAIN()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_GRAIN",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_GRAYSCALE()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_GRAYSCALE",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_LOMOISH()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_LOMOISH",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_NEGATIVE()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_NEGATIVE",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_POSTERIZE()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_POSTERIZE",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_REDEYE()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_REDEYE",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_ROTATE()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_ROTATE",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_SATURATE()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_SATURATE",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_SEPIA()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_SEPIA",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_SHARPEN()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_SHARPEN",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_STRAIGHTEN()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_STRAIGHTEN",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_TEMPERATURE()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_TEMPERATURE",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_TINT()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_TINT",
			"Ljava/lang/String;"
		);
	}
	JString EffectFactory::EFFECT_VIGNETTE()
	{
		return getStaticObjectField(
			"android.media.effect.EffectFactory",
			"EFFECT_VIGNETTE",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	EffectFactory::EffectFactory(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EffectFactory::isEffectSupported(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.effect.EffectFactory",
			"isEffectSupported",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	android::media::effect::Effect EffectFactory::createEffect(JString arg0) const
	{
		return callObjectMethod(
			"createEffect",
			"(Ljava/lang/String;)Landroid/media/effect/Effect;",
			arg0.object<jstring>()
		);
	}
} // namespace android::media::effect

