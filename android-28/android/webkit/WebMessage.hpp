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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebMessage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebMessage(QAndroidJniObject obj);
		
		// Constructors
		WebMessage(JString arg0);
		WebMessage(JString arg0, JArray arg1);
		
		// Methods
		JString getData();
		JArray getPorts();
	};
} // namespace android::webkit

