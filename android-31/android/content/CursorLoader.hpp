#pragma once

#include "../../JObject.hpp"
#include "./Loader.hpp"
#include "./AsyncTaskLoader.hpp"

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

namespace android::content
{
	class CursorLoader : public android::content::AsyncTaskLoader
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CursorLoader(const char *className, const char *sig, Ts...agv) : android::content::AsyncTaskLoader(className, sig, std::forward<Ts>(agv)...) {}
		CursorLoader(QJniObject obj);
		
		// Constructors
		CursorLoader(android::content::Context arg0);
		CursorLoader(android::content::Context arg0, android::net::Uri arg1, jarray arg2, jstring arg3, jarray arg4, jstring arg5);
		
		// Methods
		void cancelLoadInBackground();
		void deliverResult(JObject arg0);
		void deliverResult(jobject arg0);
		void dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3);
		jarray getProjection();
		jstring getSelection();
		jarray getSelectionArgs();
		jstring getSortOrder();
		android::net::Uri getUri();
		JObject loadInBackground();
		void onCanceled(JObject arg0);
		void onCanceled(jobject arg0);
		void setProjection(jarray arg0);
		void setSelection(jstring arg0);
		void setSelectionArgs(jarray arg0);
		void setSortOrder(jstring arg0);
		void setUri(android::net::Uri arg0);
	};
} // namespace android::content

