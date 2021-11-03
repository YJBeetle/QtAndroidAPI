#pragma once

#include "./DynamicsProcessing_BandBase.hpp"

class JString;

namespace android::media::audiofx
{
	class DynamicsProcessing_MbcBand : public android::media::audiofx::DynamicsProcessing_BandBase
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DynamicsProcessing_MbcBand(const char *className, const char *sig, Ts...agv) : android::media::audiofx::DynamicsProcessing_BandBase(className, sig, std::forward<Ts>(agv)...) {}
		DynamicsProcessing_MbcBand(QAndroidJniObject obj);
		
		// Constructors
		DynamicsProcessing_MbcBand(android::media::audiofx::DynamicsProcessing_MbcBand &arg0);
		DynamicsProcessing_MbcBand(jboolean arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jfloat arg8, jfloat arg9, jfloat arg10);
		
		// Methods
		jfloat getAttackTime() const;
		jfloat getExpanderRatio() const;
		jfloat getKneeWidth() const;
		jfloat getNoiseGateThreshold() const;
		jfloat getPostGain() const;
		jfloat getPreGain() const;
		jfloat getRatio() const;
		jfloat getReleaseTime() const;
		jfloat getThreshold() const;
		void setAttackTime(jfloat arg0) const;
		void setExpanderRatio(jfloat arg0) const;
		void setKneeWidth(jfloat arg0) const;
		void setNoiseGateThreshold(jfloat arg0) const;
		void setPostGain(jfloat arg0) const;
		void setPreGain(jfloat arg0) const;
		void setRatio(jfloat arg0) const;
		void setReleaseTime(jfloat arg0) const;
		void setThreshold(jfloat arg0) const;
		JString toString() const;
	};
} // namespace android::media::audiofx

