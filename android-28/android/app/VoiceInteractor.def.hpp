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
		VoiceInteractor(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::app::VoiceInteractor_Request getActiveRequest(JString arg0) const;
		JArray getActiveRequests() const;
		jboolean submitRequest(android::app::VoiceInteractor_Request arg0) const;
		jboolean submitRequest(android::app::VoiceInteractor_Request arg0, JString arg1) const;
		JBooleanArray supportsCommands(JArray arg0) const;
	};
} // namespace android::app

