#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::net
{
	class StandardProtocolFamily : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject INET();
		static QAndroidJniObject INET6();
		static QAndroidJniObject UNIX();
		
		StandardProtocolFamily(QAndroidJniObject obj);
		// Constructors
		StandardProtocolFamily() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::net

