#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCursor.hpp"

namespace android::database
{
	class CharArrayBuffer;
}
namespace android::database
{
	class CursorWindow;
}

namespace android::database
{
	class AbstractWindowedCursor : public android::database::AbstractCursor
	{
	public:
		// Fields
		
		AbstractWindowedCursor(QAndroidJniObject obj);
		// Constructors
		AbstractWindowedCursor();
		
		// Methods
		void copyStringToBuffer(jint arg0, android::database::CharArrayBuffer arg1);
		jbyteArray getBlob(jint arg0);
		jdouble getDouble(jint arg0);
		jfloat getFloat(jint arg0);
		jint getInt(jint arg0);
		jlong getLong(jint arg0);
		jshort getShort(jint arg0);
		jstring getString(jint arg0);
		jint getType(jint arg0);
		QAndroidJniObject getWindow();
		jboolean hasWindow();
		jboolean isBlob(jint arg0);
		jboolean isFloat(jint arg0);
		jboolean isLong(jint arg0);
		jboolean isNull(jint arg0);
		jboolean isString(jint arg0);
		void setWindow(android::database::CursorWindow arg0);
	};
} // namespace android::database

