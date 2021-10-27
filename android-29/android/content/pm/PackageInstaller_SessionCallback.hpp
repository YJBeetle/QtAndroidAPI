#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::content::pm
{
	class PackageInstaller_SessionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		PackageInstaller_SessionCallback(QAndroidJniObject obj);
		// Constructors
		PackageInstaller_SessionCallback();
		
		// Methods
		void onActiveChanged(jint arg0, jboolean arg1);
		void onBadgingChanged(jint arg0);
		void onCreated(jint arg0);
		void onFinished(jint arg0, jboolean arg1);
		void onProgressChanged(jint arg0, jfloat arg1);
	};
} // namespace android::content::pm

