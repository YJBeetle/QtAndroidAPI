#pragma once

#include "../../../JObject.hpp"
#include "./DynamicsProcessing_Stage.hpp"
#include "./DynamicsProcessing_BandStage.hpp"

namespace android::media::audiofx
{
	class DynamicsProcessing_EqBand;
}

namespace android::media::audiofx
{
	class DynamicsProcessing_Eq : public android::media::audiofx::DynamicsProcessing_BandStage
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DynamicsProcessing_Eq(const char *className, const char *sig, Ts...agv) : android::media::audiofx::DynamicsProcessing_BandStage(className, sig, std::forward<Ts>(agv)...) {}
		DynamicsProcessing_Eq(QJniObject obj);
		
		// Constructors
		DynamicsProcessing_Eq(android::media::audiofx::DynamicsProcessing_Eq &arg0);
		DynamicsProcessing_Eq(jboolean arg0, jboolean arg1, jint arg2);
		
		// Methods
		android::media::audiofx::DynamicsProcessing_EqBand getBand(jint arg0);
		void setBand(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1);
		jstring toString();
	};
} // namespace android::media::audiofx

