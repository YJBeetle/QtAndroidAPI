#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JString;

namespace android::database::sqlite
{
	class SQLiteRawStatement : public JObject
	{
	public:
		// Fields
		static jint SQLITE_DATA_TYPE_BLOB();
		static jint SQLITE_DATA_TYPE_FLOAT();
		static jint SQLITE_DATA_TYPE_INTEGER();
		static jint SQLITE_DATA_TYPE_NULL();
		static jint SQLITE_DATA_TYPE_TEXT();
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteRawStatement(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteRawStatement(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void bindBlob(jint arg0, JByteArray arg1) const;
		void bindBlob(jint arg0, JByteArray arg1, jint arg2, jint arg3) const;
		void bindDouble(jint arg0, jdouble arg1) const;
		void bindInt(jint arg0, jint arg1) const;
		void bindLong(jint arg0, jlong arg1) const;
		void bindNull(jint arg0) const;
		void bindText(jint arg0, JString arg1) const;
		void clearBindings() const;
		void close() const;
		JByteArray getColumnBlob(jint arg0) const;
		jdouble getColumnDouble(jint arg0) const;
		jint getColumnInt(jint arg0) const;
		jint getColumnLength(jint arg0) const;
		jlong getColumnLong(jint arg0) const;
		JString getColumnName(jint arg0) const;
		JString getColumnText(jint arg0) const;
		jint getColumnType(jint arg0) const;
		jint getParameterCount() const;
		jint getParameterIndex(JString arg0) const;
		JString getParameterName(jint arg0) const;
		jint getResultColumnCount() const;
		jboolean isOpen() const;
		jint readColumnBlob(jint arg0, JByteArray arg1, jint arg2, jint arg3, jint arg4) const;
		void reset() const;
		jboolean step() const;
		JString toString() const;
	};
} // namespace android::database::sqlite

