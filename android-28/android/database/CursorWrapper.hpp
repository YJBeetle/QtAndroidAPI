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
class JString;

namespace android::database
{
	class CursorWrapper : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CursorWrapper(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CursorWrapper(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		CursorWrapper(JObject arg0);
		
		// Methods
		void close() const;
		void copyStringToBuffer(jint arg0, android::database::CharArrayBuffer arg1) const;
		void deactivate() const;
		JByteArray getBlob(jint arg0) const;
		jint getColumnCount() const;
		jint getColumnIndex(JString arg0) const;
		jint getColumnIndexOrThrow(JString arg0) const;
		JString getColumnName(jint arg0) const;
		JArray getColumnNames() const;
		jint getCount() const;
		jdouble getDouble(jint arg0) const;
		android::os::Bundle getExtras() const;
		jfloat getFloat(jint arg0) const;
		jint getInt(jint arg0) const;
		jlong getLong(jint arg0) const;
		android::net::Uri getNotificationUri() const;
		jint getPosition() const;
		jshort getShort(jint arg0) const;
		JString getString(jint arg0) const;
		jint getType(jint arg0) const;
		jboolean getWantsAllOnMoveCalls() const;
		JObject getWrappedCursor() const;
		jboolean isAfterLast() const;
		jboolean isBeforeFirst() const;
		jboolean isClosed() const;
		jboolean isFirst() const;
		jboolean isLast() const;
		jboolean isNull(jint arg0) const;
		jboolean move(jint arg0) const;
		jboolean moveToFirst() const;
		jboolean moveToLast() const;
		jboolean moveToNext() const;
		jboolean moveToPosition(jint arg0) const;
		jboolean moveToPrevious() const;
		void registerContentObserver(android::database::ContentObserver arg0) const;
		void registerDataSetObserver(android::database::DataSetObserver arg0) const;
		jboolean requery() const;
		android::os::Bundle respond(android::os::Bundle arg0) const;
		void setExtras(android::os::Bundle arg0) const;
		void setNotificationUri(android::content::ContentResolver arg0, android::net::Uri arg1) const;
		void unregisterContentObserver(android::database::ContentObserver arg0) const;
		void unregisterDataSetObserver(android::database::DataSetObserver arg0) const;
	};
} // namespace android::database

