#pragma once

#include "./AbstractCursor.hpp"

class JByteArray;
namespace android::database
{
	class CharArrayBuffer;
}
namespace android::database
{
	class CursorWindow;
}
class JString;

namespace android::database
{
	class AbstractWindowedCursor : public android::database::AbstractCursor
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractWindowedCursor(const char *className, const char *sig, Ts...agv) : android::database::AbstractCursor(className, sig, std::forward<Ts>(agv)...) {}
		AbstractWindowedCursor(QAndroidJniObject obj);
		
		// Constructors
		AbstractWindowedCursor();
		
		// Methods
		void copyStringToBuffer(jint arg0, android::database::CharArrayBuffer arg1) const;
		JByteArray getBlob(jint arg0) const;
		jdouble getDouble(jint arg0) const;
		jfloat getFloat(jint arg0) const;
		jint getInt(jint arg0) const;
		jlong getLong(jint arg0) const;
		jshort getShort(jint arg0) const;
		JString getString(jint arg0) const;
		jint getType(jint arg0) const;
		android::database::CursorWindow getWindow() const;
		jboolean hasWindow() const;
		jboolean isBlob(jint arg0) const;
		jboolean isFloat(jint arg0) const;
		jboolean isLong(jint arg0) const;
		jboolean isNull(jint arg0) const;
		jboolean isString(jint arg0) const;
		void setWindow(android::database::CursorWindow arg0) const;
	};
} // namespace android::database

