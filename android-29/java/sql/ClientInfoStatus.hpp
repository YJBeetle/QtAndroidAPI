#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::sql
{
	class ClientInfoStatus : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject REASON_UNKNOWN();
		static QAndroidJniObject REASON_UNKNOWN_PROPERTY();
		static QAndroidJniObject REASON_VALUE_INVALID();
		static QAndroidJniObject REASON_VALUE_TRUNCATED();
		
		ClientInfoStatus(QAndroidJniObject obj);
		// Constructors
		ClientInfoStatus() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::sql

