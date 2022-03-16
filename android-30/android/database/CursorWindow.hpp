#pragma once

#include "./sqlite/SQLiteClosable.hpp"

class JByteArray;
namespace android::database
{
	class CharArrayBuffer;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::database
{
	class CursorWindow : public android::database::sqlite::SQLiteClosable
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CursorWindow(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteClosable(className, sig, std::forward<Ts>(agv)...) {}
		CursorWindow(QAndroidJniObject obj) : android::database::sqlite::SQLiteClosable(obj) {}
		
		// Constructors
		CursorWindow(jboolean arg0);
		CursorWindow(JString arg0);
		CursorWindow(JString arg0, jlong arg1);
		
		// Methods
		static android::database::CursorWindow newFromParcel(android::os::Parcel arg0);
		jboolean allocRow() const;
		void clear() const;
		void copyStringToBuffer(jint arg0, jint arg1, android::database::CharArrayBuffer arg2) const;
		jint describeContents() const;
		void freeLastRow() const;
		JByteArray getBlob(jint arg0, jint arg1) const;
		jdouble getDouble(jint arg0, jint arg1) const;
		jfloat getFloat(jint arg0, jint arg1) const;
		jint getInt(jint arg0, jint arg1) const;
		jlong getLong(jint arg0, jint arg1) const;
		jint getNumRows() const;
		jshort getShort(jint arg0, jint arg1) const;
		jint getStartPosition() const;
		JString getString(jint arg0, jint arg1) const;
		jint getType(jint arg0, jint arg1) const;
		jboolean isBlob(jint arg0, jint arg1) const;
		jboolean isFloat(jint arg0, jint arg1) const;
		jboolean isLong(jint arg0, jint arg1) const;
		jboolean isNull(jint arg0, jint arg1) const;
		jboolean isString(jint arg0, jint arg1) const;
		jboolean putBlob(JByteArray arg0, jint arg1, jint arg2) const;
		jboolean putDouble(jdouble arg0, jint arg1, jint arg2) const;
		jboolean putLong(jlong arg0, jint arg1, jint arg2) const;
		jboolean putNull(jint arg0, jint arg1) const;
		jboolean putString(JString arg0, jint arg1, jint arg2) const;
		jboolean setNumColumns(jint arg0) const;
		void setStartPosition(jint arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::database

