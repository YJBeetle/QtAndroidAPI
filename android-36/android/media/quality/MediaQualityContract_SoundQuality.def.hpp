#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::media::quality
{
	class MediaQualityContract_SoundQuality : public JObject
	{
	public:
		// Fields
		static JString PARAMETER_AUTO_VOLUME_CONTROL();
		static JString PARAMETER_BALANCE();
		static JString PARAMETER_BASS();
		static JString PARAMETER_DIALOGUE_ENHANCER();
		static JString PARAMETER_DIGITAL_OUTPUT_DELAY_MILLIS();
		static JString PARAMETER_DIGITAL_OUTPUT_MODE();
		static JString PARAMETER_DOLBY_AUDIO_PROCESSING_DOLBY_ATMOS();
		static JString PARAMETER_DOLBY_AUDIO_PROCESSING_SOUND_MODE();
		static JString PARAMETER_DOLBY_AUDIO_PROCESSING_SURROUND_VIRTUALIZER();
		static JString PARAMETER_DOLBY_AUDIO_PROCESSING_VOLUME_LEVELER();
		static JString PARAMETER_DOWN_MIX_MODE();
		static JString PARAMETER_DTS_DRC();
		static JString PARAMETER_DTS_VIRTUAL_X_DEFINITION();
		static JString PARAMETER_DTS_VIRTUAL_X_DIALOG_CLARITY();
		static JString PARAMETER_DTS_VIRTUAL_X_HEIGHT();
		static JString PARAMETER_DTS_VIRTUAL_X_LIMITER();
		static JString PARAMETER_DTS_VIRTUAL_X_TBHDX();
		static JString PARAMETER_DTS_VIRTUAL_X_TRU_SURROUND_X();
		static JString PARAMETER_DTS_VIRTUAL_X_TRU_VOLUME_HD();
		static JString PARAMETER_EARC();
		static JString PARAMETER_SPEAKERS();
		static JString PARAMETER_SPEAKERS_DELAY_MILLIS();
		static JString PARAMETER_SURROUND_SOUND();
		static JString PARAMETER_TREBLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaQualityContract_SoundQuality(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaQualityContract_SoundQuality(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::media::quality

