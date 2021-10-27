#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::net
{
	class Proxy_Type : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DIRECT();
		static QAndroidJniObject HTTP();
		static QAndroidJniObject SOCKS();
		
		Proxy_Type(QAndroidJniObject obj);
		// Constructors
		Proxy_Type() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::net

