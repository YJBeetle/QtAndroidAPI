#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::media::quality
{
	class MediaQualityContract_PictureQuality : public JObject
	{
	public:
		// Fields
		static JString PARAMETER_AUTO_PICTURE_QUALITY_ENABLED();
		static JString PARAMETER_AUTO_SUPER_RESOLUTION_ENABLED();
		static JString PARAMETER_BLUE_STRETCH();
		static JString PARAMETER_BRIGHTNESS();
		static JString PARAMETER_COLOR_TEMPERATURE();
		static JString PARAMETER_COLOR_TUNE();
		static JString PARAMETER_COLOR_TUNER_BLUE_GAIN();
		static JString PARAMETER_COLOR_TUNER_BLUE_OFFSET();
		static JString PARAMETER_COLOR_TUNER_BRIGHTNESS();
		static JString PARAMETER_COLOR_TUNER_GREEN_GAIN();
		static JString PARAMETER_COLOR_TUNER_GREEN_OFFSET();
		static JString PARAMETER_COLOR_TUNER_HUE();
		static JString PARAMETER_COLOR_TUNER_RED_GAIN();
		static JString PARAMETER_COLOR_TUNER_RED_OFFSET();
		static JString PARAMETER_COLOR_TUNER_SATURATION();
		static JString PARAMETER_CONTRAST();
		static JString PARAMETER_DECONTOUR();
		static JString PARAMETER_DYNAMIC_LUMA_CONTROL();
		static JString PARAMETER_FILM_MODE();
		static JString PARAMETER_FLESH_TONE();
		static JString PARAMETER_GLOBAL_DIMMING();
		static JString PARAMETER_HUE();
		static JString PARAMETER_MPEG_NOISE_REDUCTION();
		static JString PARAMETER_NOISE_REDUCTION();
		static JString PARAMETER_SATURATION();
		static JString PARAMETER_SHARPNESS();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaQualityContract_PictureQuality(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaQualityContract_PictureQuality(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::media::quality

