#pragma once

#include "../../../JObject.hpp"

namespace android::app::appfunctions
{
	class ExecuteAppFunctionRequest;
}
namespace android::app::appsearch
{
	class GenericDocument;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::app::appfunctions
{
	class ExecuteAppFunctionRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExecuteAppFunctionRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExecuteAppFunctionRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ExecuteAppFunctionRequest_Builder(JString arg0, JString arg1);
		
		// Methods
		android::app::appfunctions::ExecuteAppFunctionRequest build() const;
		android::app::appfunctions::ExecuteAppFunctionRequest_Builder setExtras(android::os::Bundle arg0) const;
		android::app::appfunctions::ExecuteAppFunctionRequest_Builder setParameters(android::app::appsearch::GenericDocument arg0) const;
	};
} // namespace android::app::appfunctions

