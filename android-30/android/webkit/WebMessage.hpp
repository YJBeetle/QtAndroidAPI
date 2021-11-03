#pragma once

#include "../../JObject.hpp"

class JArray;
class JString;

namespace android::webkit
{
	class WebMessage : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebMessage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebMessage(QJniObject obj);
		
		// Constructors
		WebMessage(JString arg0);
		WebMessage(JString arg0, JArray arg1);
		
		// Methods
		JString getData();
		JArray getPorts();
	};
} // namespace android::webkit

