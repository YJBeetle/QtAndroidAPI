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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClientInfoStatus(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ClientInfoStatus(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::sql

