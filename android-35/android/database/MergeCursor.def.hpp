#pragma once

#include "./AbstractCursor.def.hpp"

class JByteArray;
class JArray;
class JArray;
namespace android::database
{
	class ContentObserver;
}
namespace android::database
{
	class DataSetObserver;
}
class JString;

namespace android::database
{
	class MergeCursor : public android::database::AbstractCursor
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MergeCursor(const char *className, const char *sig, Ts...agv) : android::database::AbstractCursor(className, sig, std::forward<Ts>(agv)...) {}
		MergeCursor(QJniObject obj) : android::database::AbstractCursor(obj) {}
		
		// Constructors
		MergeCursor(JArray arg0);
		
		// Methods
		void close() const;
		void deactivate() const;
		JByteArray getBlob(jint arg0) const;
		JArray getColumnNames() const;
		jint getCount() const;
		jdouble getDouble(jint arg0) const;
		jfloat getFloat(jint arg0) const;
		jint getInt(jint arg0) const;
		jlong getLong(jint arg0) const;
		jshort getShort(jint arg0) const;
		JString getString(jint arg0) const;
		jint getType(jint arg0) const;
		jboolean isNull(jint arg0) const;
		jboolean onMove(jint arg0, jint arg1) const;
		void registerContentObserver(android::database::ContentObserver arg0) const;
		void registerDataSetObserver(android::database::DataSetObserver arg0) const;
		jboolean requery() const;
		void unregisterContentObserver(android::database::ContentObserver arg0) const;
		void unregisterDataSetObserver(android::database::DataSetObserver arg0) const;
	};
} // namespace android::database

