#pragma once

#include "../../../JObject.hpp"

namespace android::media::effect
{
	class Effect;
}
class JString;

namespace android::media::effect
{
	class EffectFactory : public JObject
	{
	public:
		// Fields
		static JString EFFECT_AUTOFIX();
		static JString EFFECT_BACKDROPPER();
		static JString EFFECT_BITMAPOVERLAY();
		static JString EFFECT_BLACKWHITE();
		static JString EFFECT_BRIGHTNESS();
		static JString EFFECT_CONTRAST();
		static JString EFFECT_CROP();
		static JString EFFECT_CROSSPROCESS();
		static JString EFFECT_DOCUMENTARY();
		static JString EFFECT_DUOTONE();
		static JString EFFECT_FILLLIGHT();
		static JString EFFECT_FISHEYE();
		static JString EFFECT_FLIP();
		static JString EFFECT_GRAIN();
		static JString EFFECT_GRAYSCALE();
		static JString EFFECT_LOMOISH();
		static JString EFFECT_NEGATIVE();
		static JString EFFECT_POSTERIZE();
		static JString EFFECT_REDEYE();
		static JString EFFECT_ROTATE();
		static JString EFFECT_SATURATE();
		static JString EFFECT_SEPIA();
		static JString EFFECT_SHARPEN();
		static JString EFFECT_STRAIGHTEN();
		static JString EFFECT_TEMPERATURE();
		static JString EFFECT_TINT();
		static JString EFFECT_VIGNETTE();
		
		// QJniObject forward
		template<typename ...Ts> explicit EffectFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EffectFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isEffectSupported(JString arg0);
		android::media::effect::Effect createEffect(JString arg0);
	};
} // namespace android::media::effect

