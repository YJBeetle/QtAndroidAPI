#pragma once

#include "../Service.def.hpp"

namespace android::app::appfunctions
{
	class ExecuteAppFunctionRequest;
}
namespace android::content
{
	class Intent;
}
namespace android::content::pm
{
	class SigningInfo;
}
namespace android::os
{
	class CancellationSignal;
}
class JString;

namespace android::app::appfunctions
{
	class AppFunctionService : public android::app::Service
	{
	public:
		// Fields
		static JString SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit AppFunctionService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		AppFunctionService(QJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		AppFunctionService();
		
		// Methods
		JObject onBind(android::content::Intent arg0) const;
		void onExecuteFunction(android::app::appfunctions::ExecuteAppFunctionRequest arg0, JString arg1, android::content::pm::SigningInfo arg2, android::os::CancellationSignal arg3, JObject arg4) const;
	};
} // namespace android::app::appfunctions

