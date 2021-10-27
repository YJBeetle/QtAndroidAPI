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
		
		StructUtsname(QAndroidJniObject obj);
		// Constructors
		StructUtsname(jstring &arg0, jstring &arg1, jstring &arg2, jstring &arg3, jstring &arg4);
		StructUtsname(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4);
		StructUtsname() = default;
		
		// Methods
		jstring toString();
	};
} // namespace android::system

