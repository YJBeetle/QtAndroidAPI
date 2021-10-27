#pragma once

#include "../../__JniBaseClass.hpp"
#include "./sqlite/SQLiteClosable.hpp"

namespace android::database
{
	class CharArrayBuffer;
}
namespace android::os
{
	class Parcel;
}

namespace android::database
{
	class CursorWindow : public android::database::sqlite::SQLiteClosable
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		CursorWindow(QAndroidJniObject obj);
		// Constructors
		CursorWindow(jboolean &arg0);
		CursorWindow(jstring &arg0);
		CursorWindow(const QString &arg0);
		CursorWindow(jstring &arg0, jlong &arg1);
		CursorWindow(const QString &arg0, jlong &arg1);
		CursorWindow() = default;
		
		// Methods
		static QAndroidJniObject newFromParcel(android::os::Parcel arg0);
		jboolean allocRow();
		void clear();
		void copyStringToBuffer(jint arg0, jint arg1, android::database::CharArrayBuffer arg2);
		jint describeContents();
		void freeLastRow();
		jbyteArray getBlob(jint arg0, jint arg1);
		jdouble getDouble(jint arg0, jint arg1);
		jfloat getFloat(jint arg0, jint arg1);
		jint getInt(jint arg0, jint arg1);
		jlong getLong(jint arg0, jint arg1);
		jint getNumRows();
		jshort getShort(jint arg0, jint arg1);
		jint getStartPosition();
		jstring getString(jint arg0, jint arg1);
		jint getType(jint arg0, jint arg1);
		jboolean isBlob(jint arg0, jint arg1);
		jboolean isFloat(jint arg0, jint arg1);
		jboolean isLong(jint arg0, jint arg1);
		jboolean isNull(jint arg0, jint arg1);
		jboolean isString(jint arg0, jint arg1);
		jboolean putBlob(jbyteArray arg0, jint arg1, jint arg2);
		jboolean putDouble(jdouble arg0, jint arg1, jint arg2);
		jboolean putLong(jlong arg0, jint arg1, jint arg2);
		jboolean putNull(jint arg0, jint arg1);
		jboolean putString(jstring arg0, jint arg1, jint arg2);
		jboolean putString(const QString &arg0, jint arg1, jint arg2);
		jboolean setNumColumns(jint arg0);
		void setStartPosition(jint arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::database

