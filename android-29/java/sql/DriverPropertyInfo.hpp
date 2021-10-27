#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::sql
{
	class DriverPropertyInfo : public __JniBaseClass
	{
	public:
		// Fields
		jarray choices();
		jstring description();
		jstring name();
		jboolean required();
		jstring value();
		
		DriverPropertyInfo(QAndroidJniObject obj);
		// Constructors
		DriverPropertyInfo(jstring &arg0, jstring &arg1);
		DriverPropertyInfo(const QString &arg0, const QString &arg1);
		DriverPropertyInfo() = default;
		
		// Methods
	};
} // namespace java::sql

