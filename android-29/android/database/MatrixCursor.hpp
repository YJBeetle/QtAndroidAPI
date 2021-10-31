#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCursor.hpp"

namespace android::database
{
	class MatrixCursor_RowBuilder;
}

namespace android::database
{
	class MatrixCursor : public android::database::AbstractCursor
	{
	public:
		// Fields
		
		MatrixCursor(QAndroidJniObject obj);
		// Constructors
		MatrixCursor(jarray arg0);
		MatrixCursor(jarray arg0, jint arg1);
		MatrixCursor() = default;
		
		// Methods
		void addRow(jobjectArray arg0);
		void addRow(__JniBaseClass arg0);
		jbyteArray getBlob(jint arg0);
		jarray getColumnNames();
		jint getCount();
		jdouble getDouble(jint arg0);
		jfloat getFloat(jint arg0);
		jint getInt(jint arg0);
		jlong getLong(jint arg0);
		jshort getShort(jint arg0);
		jstring getString(jint arg0);
		jint getType(jint arg0);
		jboolean isNull(jint arg0);
		QAndroidJniObject newRow();
	};
} // namespace android::database

