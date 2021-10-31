#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::effect
{
	class Effect;
}
namespace android::media::effect
{
	class EffectContext;
}

namespace android::media::effect
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
		
		// QJniObject forward
		template<typename ...Ts> explicit EffectFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EffectFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isEffectSupported(jstring arg0);
		android::media::effect::Effect createEffect(jstring arg0);
	};
} // namespace android::media::effect

