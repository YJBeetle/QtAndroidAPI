#pragma once

#include "../../JObject.hpp"
#include "./AbstractCursor.hpp"

namespace android::database
{
	class ContentObserver;
}
namespace android::database
{
	class DataSetObserver;
}

namespace android::database
{
	class MergeCursor : public android::database::AbstractCursor
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MergeCursor(const char *className, const char *sig, Ts...agv) : android::database::AbstractCursor(className, sig, std::forward<Ts>(agv)...) {}
		MergeCursor(QJniObject obj);
		
		// Constructors
		MergeCursor(jarray arg0);
		
		// Methods
		void close();
		void deactivate();
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
		jboolean onMove(jint arg0, jint arg1);
		void registerContentObserver(android::database::ContentObserver arg0);
		void registerDataSetObserver(android::database::DataSetObserver arg0);
		jboolean requery();
		void unregisterContentObserver(android::database::ContentObserver arg0);
		void unregisterDataSetObserver(android::database::DataSetObserver arg0);
	};
} // namespace android::database

