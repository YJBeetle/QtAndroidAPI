#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class WebMessage : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebMessage(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WebMessage(QJniObject obj);
		
		// Constructors
		WebMessage(jstring arg0);
		WebMessage(jstring arg0, jarray arg1);
		
		// Methods
		jstring getData();
		jarray getPorts();
	};
} // namespace android::webkit

