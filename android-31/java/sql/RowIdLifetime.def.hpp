#pragma once

#include "../lang/Enum.def.hpp"

class JArray;
class JString;

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RowIdLifetime(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RowIdLifetime(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::sql::RowIdLifetime valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::sql

