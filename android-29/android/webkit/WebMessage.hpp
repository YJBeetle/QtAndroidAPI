#pragma once

#include "../../JObject.hpp"


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
		WebMessage(jstring arg0);
		WebMessage(jstring arg0, jarray arg1);
		
		// Methods
		jstring getData();
		jarray getPorts();
	};
} // namespace android::webkit

