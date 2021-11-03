#pragma once

#include "../../../JObject.hpp"


namespace android::app::backup
{
	class RestoreObserver : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RestoreObserver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RestoreObserver(QJniObject obj);
		
		// Constructors
		RestoreObserver();
		
		// Methods
		void onUpdate(jint arg0, jstring arg1);
		void restoreFinished(jint arg0);
		void restoreStarting(jint arg0);
	};
} // namespace android::app::backup

