#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./DynamicsProcessing_BandBase.hpp"


namespace android::media::audiofx
{
	class DynamicsProcessing_MbcBand : public android::media::audiofx::DynamicsProcessing_BandBase
	{
	public:
		// Fields
		
		DynamicsProcessing_MbcBand(QAndroidJniObject obj);
		// Constructors
		DynamicsProcessing_MbcBand(android::media::audiofx::DynamicsProcessing_MbcBand &arg0);
		DynamicsProcessing_MbcBand(jboolean arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jfloat arg8, jfloat arg9, jfloat arg10);
		DynamicsProcessing_MbcBand() = default;
		
		// Methods
		jfloat getAttackTime();
		jfloat getExpanderRatio();
		jfloat getKneeWidth();
		jfloat getNoiseGateThreshold();
		jfloat getPostGain();
		jfloat getPreGain();
		jfloat getRatio();
		jfloat getReleaseTime();
		jfloat getThreshold();
		void setAttackTime(jfloat arg0);
		void setExpanderRatio(jfloat arg0);
		void setKneeWidth(jfloat arg0);
		void setNoiseGateThreshold(jfloat arg0);
		void setPostGain(jfloat arg0);
		void setPreGain(jfloat arg0);
		void setRatio(jfloat arg0);
		void setReleaseTime(jfloat arg0);
		void setThreshold(jfloat arg0);
		jstring toString();
	};
} // namespace android::media::audiofx

