#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		CursorLoader(QAndroidJniObject obj);
		// Constructors
		CursorLoader(android::content::Context &arg0);
		CursorLoader(android::content::Context &arg0, android::net::Uri &arg1, jarray &arg2, jstring &arg3, jarray &arg4, jstring &arg5);
		CursorLoader(android::content::Context &arg0, android::net::Uri &arg1, jarray &arg2, const QString &arg3, jarray &arg4, const QString &arg5);
		CursorLoader() = default;
		
		// Methods
		void cancelLoadInBackground();
		void deliverResult(__JniBaseClass arg0);
		void deliverResult(jobject arg0);
		void dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3);
		void dump(const QString &arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3);
		jarray getProjection();
		jstring getSelection();
		jarray getSelectionArgs();
		jstring getSortOrder();
		QAndroidJniObject getUri();
		QAndroidJniObject loadInBackground();
		void onCanceled(__JniBaseClass arg0);
		void onCanceled(jobject arg0);
		void setProjection(jarray arg0);
		void setSelection(jstring arg0);
		void setSelection(const QString &arg0);
		void setSelectionArgs(jarray arg0);
		void setSortOrder(jstring arg0);
		void setSortOrder(const QString &arg0);
		void setUri(android::net::Uri arg0);
	};
} // namespace android::content

