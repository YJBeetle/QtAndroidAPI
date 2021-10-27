#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::net
{
	class Authenticator_RequestorType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject PROXY();
		static QAndroidJniObject SERVER();
		
		Authenticator_RequestorType(QAndroidJniObject obj);
		// Constructors
		Authenticator_RequestorType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::net

