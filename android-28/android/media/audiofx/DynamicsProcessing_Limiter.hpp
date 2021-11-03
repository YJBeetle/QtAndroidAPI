#pragma once

#include "./DynamicsProcessing_Stage.hpp"

class JString;

namespace android::media::audiofx
{
	class DynamicsProcessing_Limiter : public android::media::audiofx::DynamicsProcessing_Stage
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DynamicsProcessing_Limiter(const char *className, const char *sig, Ts...agv) : android::media::audiofx::DynamicsProcessing_Stage(className, sig, std::forward<Ts>(agv)...) {}
		DynamicsProcessing_Limiter(QJniObject obj);
		
		// Constructors
		DynamicsProcessing_Limiter(android::media::audiofx::DynamicsProcessing_Limiter &arg0);
		DynamicsProcessing_Limiter(jboolean arg0, jboolean arg1, jint arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7);
		
		// Methods
		jfloat getAttackTime() const;
		jint getLinkGroup() const;
		jfloat getPostGain() const;
		jfloat getRatio() const;
		jfloat getReleaseTime() const;
		jfloat getThreshold() const;
		void setAttackTime(jfloat arg0) const;
		void setLinkGroup(jint arg0) const;
		void setPostGain(jfloat arg0) const;
		void setRatio(jfloat arg0) const;
		void setReleaseTime(jfloat arg0) const;
		void setThreshold(jfloat arg0) const;
		JString toString() const;
	};
} // namespace android::media::audiofx

