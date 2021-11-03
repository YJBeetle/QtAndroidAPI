#pragma once

#include "./DynamicsProcessing_BandBase.hpp"

class JString;

namespace android::media::audiofx
{
	class DynamicsProcessing_EqBand : public android::media::audiofx::DynamicsProcessing_BandBase
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DynamicsProcessing_EqBand(const char *className, const char *sig, Ts...agv) : android::media::audiofx::DynamicsProcessing_BandBase(className, sig, std::forward<Ts>(agv)...) {}
		DynamicsProcessing_EqBand(QJniObject obj);
		
		// Constructors
		DynamicsProcessing_EqBand(android::media::audiofx::DynamicsProcessing_EqBand &arg0);
		DynamicsProcessing_EqBand(jboolean arg0, jfloat arg1, jfloat arg2);
		
		// Methods
		jfloat getGain();
		void setGain(jfloat arg0);
		JString toString();
	};
} // namespace android::media::audiofx

