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
	class ExecuteAppFunctionResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString PROPERTY_RETURN_VALUE();
		
		// QJniObject forward
		template<typename ...Ts> explicit ExecuteAppFunctionResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExecuteAppFunctionResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ExecuteAppFunctionResponse(android::app::appsearch::GenericDocument arg0);
		ExecuteAppFunctionResponse(android::app::appsearch::GenericDocument arg0, android::os::Bundle arg1);
		
		// Methods
		jint describeContents() const;
		android::os::Bundle getExtras() const;
		android::app::appsearch::GenericDocument getResultDocument() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::appfunctions

