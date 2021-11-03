#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::app
{
	class RemoteInput;
}
namespace android::os
{
	class Bundle;
}
class JString;
class JString;

namespace android::app
{
	class RemoteInput_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteInput_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteInput_Builder(QJniObject obj);
		
		// Constructors
		RemoteInput_Builder(JString arg0);
		
		// Methods
		android::app::RemoteInput_Builder addExtras(android::os::Bundle arg0);
		android::app::RemoteInput build();
		android::os::Bundle getExtras();
		android::app::RemoteInput_Builder setAllowDataType(JString arg0, jboolean arg1);
		android::app::RemoteInput_Builder setAllowFreeFormInput(jboolean arg0);
		android::app::RemoteInput_Builder setChoices(JArray arg0);
		android::app::RemoteInput_Builder setLabel(JString arg0);
	};
} // namespace android::app

