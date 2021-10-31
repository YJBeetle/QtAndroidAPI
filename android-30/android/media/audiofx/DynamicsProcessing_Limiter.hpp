#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./DynamicsProcessing_Stage.hpp"


namespace android::media::audiofx
{
	class DynamicsProcessing_Limiter : public android::media::audiofx::DynamicsProcessing_Stage
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DynamicsProcessing_Limiter(const char *className, const char *sig, Ts...agv) : android::media::audiofx::DynamicsProcessing_Stage(className, sig, std::forward<Ts>(agv)...) {}
		DynamicsProcessing_Limiter(QAndroidJniObject obj);
		
		// Constructors
		DynamicsProcessing_Limiter(android::media::audiofx::DynamicsProcessing_Limiter &arg0);
		DynamicsProcessing_Limiter(jboolean arg0, jboolean arg1, jint arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7);
		
		// Methods
		jfloat getAttackTime();
		jint getLinkGroup();
		jfloat getPostGain();
		jfloat getRatio();
		jfloat getReleaseTime();
		jfloat getThreshold();
		void setAttackTime(jfloat arg0);
		void setLinkGroup(jint arg0);
		void setPostGain(jfloat arg0);
		void setRatio(jfloat arg0);
		void setReleaseTime(jfloat arg0);
		void setThreshold(jfloat arg0);
		jstring toString();
	};
} // namespace android::media::audiofx

