#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
class JBooleanArray;
namespace android::app
{
	class VoiceInteractor_Request;
}
class JString;

namespace android::app
{
	class VoiceInteractor : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractor(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::app::VoiceInteractor_Request getActiveRequest(JString arg0);
		JArray getActiveRequests();
		jboolean submitRequest(android::app::VoiceInteractor_Request arg0);
		jboolean submitRequest(android::app::VoiceInteractor_Request arg0, JString arg1);
		JBooleanArray supportsCommands(JArray arg0);
	};
} // namespace android::app

