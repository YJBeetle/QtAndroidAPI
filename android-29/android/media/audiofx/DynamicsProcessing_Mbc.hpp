#pragma once

#include "../../../JObject.hpp"
#include "./DynamicsProcessing_Stage.hpp"
#include "./DynamicsProcessing_BandStage.hpp"

namespace android::media::audiofx
{
	class DynamicsProcessing_MbcBand;
}

namespace android::media::audiofx
{
	class DynamicsProcessing_Mbc : public android::media::audiofx::DynamicsProcessing_BandStage
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DynamicsProcessing_Mbc(const char *className, const char *sig, Ts...agv) : android::media::audiofx::DynamicsProcessing_BandStage(className, sig, std::forward<Ts>(agv)...) {}
		DynamicsProcessing_Mbc(QJniObject obj);
		
		// Constructors
		DynamicsProcessing_Mbc(android::media::audiofx::DynamicsProcessing_Mbc &arg0);
		DynamicsProcessing_Mbc(jboolean arg0, jboolean arg1, jint arg2);
		
		// Methods
		android::media::audiofx::DynamicsProcessing_MbcBand getBand(jint arg0);
		void setBand(jint arg0, android::media::audiofx::DynamicsProcessing_MbcBand arg1);
		jstring toString();
	};
} // namespace android::media::audiofx

