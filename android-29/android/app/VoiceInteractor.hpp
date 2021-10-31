#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class VoiceInteractor_Request;
}

namespace android::app
{
	class VoiceInteractor : public __JniBaseClass
	{
	public:
		// Fields
		
		VoiceInteractor(QAndroidJniObject obj);
		// Constructors
		VoiceInteractor() = default;
		
		// Methods
		QAndroidJniObject getActiveRequest(jstring arg0);
		jarray getActiveRequests();
		jboolean isDestroyed();
		void notifyDirectActionsChanged();
		jboolean registerOnDestroyedCallback(__JniBaseClass arg0, __JniBaseClass arg1);
		jboolean submitRequest(android::app::VoiceInteractor_Request arg0);
		jboolean submitRequest(android::app::VoiceInteractor_Request arg0, jstring arg1);
		jbooleanArray supportsCommands(jarray arg0);
		jboolean unregisterOnDestroyedCallback(__JniBaseClass arg0);
	};
} // namespace android::app

