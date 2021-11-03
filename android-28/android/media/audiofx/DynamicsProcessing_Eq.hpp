#pragma once

#include "./DynamicsProcessing_BandStage.hpp"

namespace android::media::audiofx
{
	class DynamicsProcessing_EqBand;
}
class JString;

namespace android::media::audiofx
{
	class DynamicsProcessing_Eq : public android::media::audiofx::DynamicsProcessing_BandStage
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DynamicsProcessing_Eq(const char *className, const char *sig, Ts...agv) : android::media::audiofx::DynamicsProcessing_BandStage(className, sig, std::forward<Ts>(agv)...) {}
		DynamicsProcessing_Eq(QAndroidJniObject obj);
		
		// Constructors
		DynamicsProcessing_Eq(android::media::audiofx::DynamicsProcessing_Eq &arg0);
		DynamicsProcessing_Eq(jboolean arg0, jboolean arg1, jint arg2);
		
		// Methods
		android::media::audiofx::DynamicsProcessing_EqBand getBand(jint arg0) const;
		void setBand(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1) const;
		JString toString() const;
	};
} // namespace android::media::audiofx

