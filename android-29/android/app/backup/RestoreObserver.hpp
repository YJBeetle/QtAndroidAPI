#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::backup
{
	class RestoreObserver : public __JniBaseClass
	{
	public:
		// Fields
		
		RestoreObserver(QAndroidJniObject obj);
		// Constructors
		RestoreObserver();
		
		// Methods
		void onUpdate(jint arg0, jstring arg1);
		void restoreFinished(jint arg0);
		void restoreStarting(jint arg0);
	};
} // namespace android::app::backup

