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
		void addRow(JObjectArray arg0);
		void addRow(JObject arg0);
		JByteArray getBlob(jint arg0);
		JArray getColumnNames();
		jint getCount();
		jdouble getDouble(jint arg0);
		jfloat getFloat(jint arg0);
		jint getInt(jint arg0);
		jlong getLong(jint arg0);
		jshort getShort(jint arg0);
		JString getString(jint arg0);
		jint getType(jint arg0);
		jboolean isNull(jint arg0);
		android::database::MatrixCursor_RowBuilder newRow();
	};
} // namespace android::database

