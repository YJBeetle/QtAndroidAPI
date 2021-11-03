#pragma once

#include "../../JObject.hpp"


namespace android::system
{
	class StructUtsname : public JObject
	{
	public:
		// Fields
		jstring machine();
		jstring nodename();
		jstring release();
		jstring sysname();
		jstring version();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StructUtsname(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StructUtsname(QAndroidJniObject obj);
		
		// Constructors
		StructUtsname(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		
		// Methods
		jstring toString();
	};
} // namespace android::system

