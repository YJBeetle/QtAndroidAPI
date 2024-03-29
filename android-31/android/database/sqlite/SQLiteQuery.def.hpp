#pragma once

#include "./SQLiteProgram.def.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteQuery : public android::database::sqlite::SQLiteProgram
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteQuery(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteProgram(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteQuery(QJniObject obj) : android::database::sqlite::SQLiteProgram(obj) {}
		
		// Constructors
		
		// Methods
		JString toString() const;
	};
} // namespace android::database::sqlite

