#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::system
{
	class StructUtsname : public __JniBaseClass
	{
	public:
		// Fields
		jstring machine();
		jstring nodename();
		jstring release();
		jstring sysname();
		jstring version();
		
		// QJniObject forward
		template<typename ...Ts> explicit StructUtsname(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StructUtsname(QJniObject obj);
		
		// Constructors
		StructUtsname(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		
		// Methods
		jstring toString();
	};
} // namespace android::system

