#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::app::backup
{
	class RestoreObserver : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RestoreObserver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RestoreObserver(QAndroidJniObject obj);
		
		// Constructors
		RestoreObserver();
		
		// Methods
		void onUpdate(jint arg0, JString arg1);
		void restoreFinished(jint arg0);
		void restoreStarting(jint arg0);
	};
} // namespace android::app::backup

