#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::audiofx
{
	class DynamicsProcessing_BandBase : public __JniBaseClass
	{
	public:
		// Fields
		
		DynamicsProcessing_BandBase(QAndroidJniObject obj);
		// Constructors
		DynamicsProcessing_BandBase(jboolean &arg0, jfloat &arg1);
		DynamicsProcessing_BandBase() = default;
		
		// Methods
		jfloat getCutoffFrequency();
		jboolean isEnabled();
		void setCutoffFrequency(jfloat arg0);
		void setEnabled(jboolean arg0);
		jstring toString();
	};
} // namespace android::media::audiofx

