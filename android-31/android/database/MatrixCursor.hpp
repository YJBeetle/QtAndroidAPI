#pragma once

#include "./AbstractCursor.hpp"

class JByteArray;
class JObjectArray;
class JArray;
namespace android::database
{
	class MatrixCursor_RowBuilder;
}
class JString;

namespace android::database
{
	class MatrixCursor : public android::database::AbstractCursor
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MatrixCursor(const char *className, const char *sig, Ts...agv) : android::database::AbstractCursor(className, sig, std::forward<Ts>(agv)...) {}
		MatrixCursor(QAndroidJniObject obj);
		
		// Constructors
		MatrixCursor(JArray arg0);
		MatrixCursor(JArray arg0, jint arg1);
		
		// Methods
		void addRow(JObjectArray arg0) const;
		void addRow(JObject arg0) const;
		JByteArray getBlob(jint arg0) const;
		JArray getColumnNames() const;
		jint getCount() const;
		jdouble getDouble(jint arg0) const;
		jfloat getFloat(jint arg0) const;
		jint getInt(jint arg0) const;
		jlong getLong(jint arg0) const;
		jshort getShort(jint arg0) const;
		JString getString(jint arg0) const;
		jint getType(jint arg0) const;
		jboolean isNull(jint arg0) const;
		android::database::MatrixCursor_RowBuilder newRow() const;
	};
} // namespace android::database

