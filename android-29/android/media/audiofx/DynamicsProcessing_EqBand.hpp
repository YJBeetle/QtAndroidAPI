#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./DynamicsProcessing_BandBase.hpp"


namespace android::media::audiofx
{
	class DynamicsProcessing_EqBand : public android::media::audiofx::DynamicsProcessing_BandBase
	{
	public:
		// Fields
		
		DynamicsProcessing_EqBand(QAndroidJniObject obj);
		// Constructors
		DynamicsProcessing_EqBand(android::media::audiofx::DynamicsProcessing_EqBand &arg0);
		DynamicsProcessing_EqBand(jboolean &arg0, jfloat &arg1, jfloat &arg2);
		DynamicsProcessing_EqBand() = default;
		
		// Methods
		jfloat getGain();
		void setGain(jfloat arg0);
		jstring toString();
	};
} // namespace android::media::audiofx

