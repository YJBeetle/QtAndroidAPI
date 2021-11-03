#pragma once

#include "./AsyncTaskLoader.hpp"

class JArray;
namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}
class JObject;
class JString;

namespace android::content
{
	class CursorLoader : public android::content::AsyncTaskLoader
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CursorLoader(const char *className, const char *sig, Ts...agv) : android::content::AsyncTaskLoader(className, sig, std::forward<Ts>(agv)...) {}
		CursorLoader(QAndroidJniObject obj);
		
		// Constructors
		CursorLoader(android::content::Context arg0);
		CursorLoader(android::content::Context arg0, android::net::Uri arg1, JArray arg2, JString arg3, JArray arg4, JString arg5);
		
		// Methods
		void cancelLoadInBackground() const;
		void deliverResult(JObject arg0) const;
		void dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const;
		JArray getProjection() const;
		JString getSelection() const;
		JArray getSelectionArgs() const;
		JString getSortOrder() const;
		android::net::Uri getUri() const;
		JObject loadInBackground() const;
		void onCanceled(JObject arg0) const;
		void setProjection(JArray arg0) const;
		void setSelection(JString arg0) const;
		void setSelectionArgs(JArray arg0) const;
		void setSortOrder(JString arg0) const;
		void setUri(android::net::Uri arg0) const;
	};
} // namespace android::content

