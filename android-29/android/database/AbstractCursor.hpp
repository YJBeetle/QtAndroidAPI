#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::database
{
	class CharArrayBuffer;
}
namespace android::database
{
	class ContentObserver;
}
namespace android::database
{
	class CursorWindow;
}
namespace android::database
{
	class DataSetObserver;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}

namespace android::database
{
	class AbstractCursor : public __JniBaseClass
	{
	public:
		// Fields
		
		AbstractCursor(QAndroidJniObject obj);
		// Constructors
		AbstractCursor();
		
		// Methods
		void close();
		void copyStringToBuffer(jint arg0, android::database::CharArrayBuffer arg1);
		void deactivate();
		void fillWindow(jint arg0, android::database::CursorWindow arg1);
		jbyteArray getBlob(jint arg0);
		jint getColumnCount();
		jint getColumnIndex(jstring arg0);
		jint getColumnIndex(const QString &arg0);
		jint getColumnIndexOrThrow(jstring arg0);
		jint getColumnIndexOrThrow(const QString &arg0);
		jstring getColumnName(jint arg0);
		jarray getColumnNames();
		jint getCount();
		jdouble getDouble(jint arg0);
		QAndroidJniObject getExtras();
		jfloat getFloat(jint arg0);
		jint getInt(jint arg0);
		jlong getLong(jint arg0);
		QAndroidJniObject getNotificationUri();
		QAndroidJniObject getNotificationUris();
		jint getPosition();
		jshort getShort(jint arg0);
		jstring getString(jint arg0);
		jint getType(jint arg0);
		jboolean getWantsAllOnMoveCalls();
		QAndroidJniObject getWindow();
		jboolean isAfterLast();
		jboolean isBeforeFirst();
		jboolean isClosed();
		jboolean isFirst();
		jboolean isLast();
		jboolean isNull(jint arg0);
		jboolean move(jint arg0);
		jboolean moveToFirst();
		jboolean moveToLast();
		jboolean moveToNext();
		jboolean moveToPosition(jint arg0);
		jboolean moveToPrevious();
		jboolean onMove(jint arg0, jint arg1);
		void registerContentObserver(android::database::ContentObserver arg0);
		void registerDataSetObserver(android::database::DataSetObserver arg0);
		jboolean requery();
		QAndroidJniObject respond(android::os::Bundle arg0);
		void setExtras(android::os::Bundle arg0);
		void setNotificationUri(android::content::ContentResolver arg0, android::net::Uri arg1);
		void setNotificationUris(android::content::ContentResolver arg0, __JniBaseClass arg1);
		void unregisterContentObserver(android::database::ContentObserver arg0);
		void unregisterDataSetObserver(android::database::DataSetObserver arg0);
	};
} // namespace android::database

