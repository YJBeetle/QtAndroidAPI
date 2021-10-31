#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::audiofx
{
	class BassBoost_Settings : public __JniBaseClass
	{
	public:
		// Fields
		jshort strength();
		
		BassBoost_Settings(QAndroidJniObject obj);
		// Constructors
		BassBoost_Settings();
		BassBoost_Settings(jstring arg0);
		
		// Methods
		jstring toString();
	};
} // namespace android::media::audiofx

