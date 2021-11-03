#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JArray;
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
class JObject;
class JString;

namespace android::database
{
	class AbstractCursor : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractCursor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractCursor(QJniObject obj);
		
		// Constructors
		AbstractCursor();
		
		// Methods
		void close();
		void copyStringToBuffer(jint arg0, android::database::CharArrayBuffer arg1);
		void deactivate();
		void fillWindow(jint arg0, android::database::CursorWindow arg1);
		JByteArray getBlob(jint arg0);
		jint getColumnCount();
		jint getColumnIndex(JString arg0);
		jint getColumnIndexOrThrow(JString arg0);
		JString getColumnName(jint arg0);
		JArray getColumnNames();
		jint getCount();
		jdouble getDouble(jint arg0);
		android::os::Bundle getExtras();
		jfloat getFloat(jint arg0);
		jint getInt(jint arg0);
		jlong getLong(jint arg0);
		android::net::Uri getNotificationUri();
		JObject getNotificationUris();
		jint getPosition();
		jshort getShort(jint arg0);
		JString getString(jint arg0);
		jint getType(jint arg0);
		jboolean getWantsAllOnMoveCalls();
		android::database::CursorWindow getWindow();
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
		android::os::Bundle respond(android::os::Bundle arg0);
		void setExtras(android::os::Bundle arg0);
		void setNotificationUri(android::content::ContentResolver arg0, android::net::Uri arg1);
		void setNotificationUris(android::content::ContentResolver arg0, JObject arg1);
		void unregisterContentObserver(android::database::ContentObserver arg0);
		void unregisterDataSetObserver(android::database::DataSetObserver arg0);
	};
} // namespace android::database

