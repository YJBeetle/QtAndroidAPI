#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::sql
{
	class ClientInfoStatus : public java::lang::Enum
	{
	public:
		// Fields
		static java::sql::ClientInfoStatus REASON_UNKNOWN();
		static java::sql::ClientInfoStatus REASON_UNKNOWN_PROPERTY();
		static java::sql::ClientInfoStatus REASON_VALUE_INVALID();
		static java::sql::ClientInfoStatus REASON_VALUE_TRUNCATED();
		
		// QJniObject forward
		template<typename ...Ts> explicit ClientInfoStatus(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ClientInfoStatus(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::sql::ClientInfoStatus valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::sql

