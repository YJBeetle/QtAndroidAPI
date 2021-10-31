#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./DynamicsProcessing_Stage.hpp"


namespace android::media::audiofx
{
	class DynamicsProcessing_BandStage : public android::media::audiofx::DynamicsProcessing_Stage
	{
	public:
		// Fields
		
		DynamicsProcessing_BandStage(QAndroidJniObject obj);
		// Constructors
		DynamicsProcessing_BandStage(jboolean arg0, jboolean arg1, jint arg2);
		DynamicsProcessing_BandStage() = default;
		
		// Methods
		jint getBandCount();
		jstring toString();
	};
} // namespace android::media::audiofx

