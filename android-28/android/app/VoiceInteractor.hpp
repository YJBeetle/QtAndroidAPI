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
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractor(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractor(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::app::VoiceInteractor_Request getActiveRequest(jstring arg0);
		jarray getActiveRequests();
		jboolean submitRequest(android::app::VoiceInteractor_Request arg0);
		jboolean submitRequest(android::app::VoiceInteractor_Request arg0, jstring arg1);
		jbooleanArray supportsCommands(jarray arg0);
	};
} // namespace android::app

