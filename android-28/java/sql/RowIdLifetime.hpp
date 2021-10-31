#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::sql
{
	class RowIdLifetime : public java::lang::Enum
	{
	public:
		// Fields
		static java::sql::RowIdLifetime ROWID_UNSUPPORTED();
		static java::sql::RowIdLifetime ROWID_VALID_FOREVER();
		static java::sql::RowIdLifetime ROWID_VALID_OTHER();
		static java::sql::RowIdLifetime ROWID_VALID_SESSION();
		static java::sql::RowIdLifetime ROWID_VALID_TRANSACTION();
		
		// QJniObject forward
		template<typename ...Ts> explicit RowIdLifetime(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RowIdLifetime(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::sql::RowIdLifetime valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::sql

