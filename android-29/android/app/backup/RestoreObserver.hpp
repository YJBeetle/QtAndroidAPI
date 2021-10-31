#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::backup
{
	class RestoreObserver : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RestoreObserver(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RestoreObserver(QAndroidJniObject obj);
		
		// Constructors
		RestoreObserver();
		
		// Methods
		void onUpdate(jint arg0, jstring arg1);
		void restoreFinished(jint arg0);
		void restoreStarting(jint arg0);
	};
} // namespace android::app::backup

