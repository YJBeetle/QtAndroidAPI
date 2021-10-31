#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::audiofx
{
	class DynamicsProcessing_Stage : public __JniBaseClass
	{
	public:
		// Fields
		
		DynamicsProcessing_Stage(QAndroidJniObject obj);
		// Constructors
		DynamicsProcessing_Stage(jboolean arg0, jboolean arg1);
		DynamicsProcessing_Stage() = default;
		
		// Methods
		jboolean isEnabled();
		jboolean isInUse();
		void setEnabled(jboolean arg0);
		jstring toString();
	};
} // namespace android::media::audiofx

