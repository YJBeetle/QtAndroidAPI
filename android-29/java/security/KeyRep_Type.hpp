#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::security
{
	class KeyRep_Type : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject PRIVATE();
		static QAndroidJniObject PUBLIC();
		static QAndroidJniObject SECRET();
		
		KeyRep_Type(QAndroidJniObject obj);
		// Constructors
		KeyRep_Type() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::security

