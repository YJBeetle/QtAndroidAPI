#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::audiofx
{
	class Virtualizer_Settings : public __JniBaseClass
	{
	public:
		// Fields
		jshort strength();
		
		Virtualizer_Settings(QAndroidJniObject obj);
		// Constructors
		Virtualizer_Settings();
		Virtualizer_Settings(jstring &arg0);
		Virtualizer_Settings(const QString &arg0);
		
		// Methods
		jstring toString();
	};
} // namespace android::media::audiofx

