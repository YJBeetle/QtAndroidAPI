#pragma once

#include "./DynamicsProcessing_Stage.hpp"

class JString;

namespace android::media::audiofx
{
	class DynamicsProcessing_BandStage : public android::media::audiofx::DynamicsProcessing_Stage
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DynamicsProcessing_BandStage(const char *className, const char *sig, Ts...agv) : android::media::audiofx::DynamicsProcessing_Stage(className, sig, std::forward<Ts>(agv)...) {}
		DynamicsProcessing_BandStage(QJniObject obj);
		
		// Constructors
		DynamicsProcessing_BandStage(jboolean arg0, jboolean arg1, jint arg2);
		
		// Methods
		jint getBandCount();
		JString toString();
	};
} // namespace android::media::audiofx

