#pragma once

#include "../../../__JniBaseClass.hpp"
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
		
		DynamicsProcessing_Mbc(QAndroidJniObject obj);
		// Constructors
		DynamicsProcessing_Mbc(android::media::audiofx::DynamicsProcessing_Mbc &arg0);
		DynamicsProcessing_Mbc(jboolean arg0, jboolean arg1, jint arg2);
		DynamicsProcessing_Mbc() = default;
		
		// Methods
		QAndroidJniObject getBand(jint arg0);
		void setBand(jint arg0, android::media::audiofx::DynamicsProcessing_MbcBand arg1);
		jstring toString();
	};
} // namespace android::media::audiofx

