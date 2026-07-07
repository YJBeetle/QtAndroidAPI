#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class GenericDocument;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app::appfunctions
{
	class ExecuteAppFunctionRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ExecuteAppFunctionRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExecuteAppFunctionRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::os::Bundle getExtras() const;
		JString getFunctionIdentifier() const;
		android::app::appsearch::GenericDocument getParameters() const;
		JString getTargetPackageName() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::appfunctions

