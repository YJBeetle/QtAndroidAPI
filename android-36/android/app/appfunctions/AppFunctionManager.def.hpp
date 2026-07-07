#pragma once

#include "../../../JObject.hpp"

namespace android::app::appfunctions
{
	class ExecuteAppFunctionRequest;
}
namespace android::os
{
	class CancellationSignal;
}
class JString;

namespace android::app::appfunctions
{
	class AppFunctionManager : public JObject
	{
	public:
		// Fields
		static jint APP_FUNCTION_STATE_DEFAULT();
		static jint APP_FUNCTION_STATE_DISABLED();
		static jint APP_FUNCTION_STATE_ENABLED();
		
		// QJniObject forward
		template<typename ...Ts> explicit AppFunctionManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppFunctionManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void executeAppFunction(android::app::appfunctions::ExecuteAppFunctionRequest arg0, JObject arg1, android::os::CancellationSignal arg2, JObject arg3) const;
		void isAppFunctionEnabled(JString arg0, JObject arg1, JObject arg2) const;
		void isAppFunctionEnabled(JString arg0, JString arg1, JObject arg2, JObject arg3) const;
		void setAppFunctionEnabled(JString arg0, jint arg1, JObject arg2, JObject arg3) const;
	};
} // namespace android::app::appfunctions

