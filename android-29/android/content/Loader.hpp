#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
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
	class Loader : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Loader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Loader(QJniObject obj);
		
		// Constructors
		Loader(android::content::Context arg0);
		
		// Methods
		void abandon();
		jboolean cancelLoad();
		void commitContentChanged();
		jstring dataToString(jobject arg0);
		void deliverCancellation();
		void deliverResult(jobject arg0);
		void dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3);
		void forceLoad();
		android::content::Context getContext();
		jint getId();
		jboolean isAbandoned();
		jboolean isReset();
		jboolean isStarted();
		void onContentChanged();
		void registerListener(jint arg0, JObject arg1);
		void registerOnLoadCanceledListener(JObject arg0);
		void reset();
		void rollbackContentChanged();
		void startLoading();
		void stopLoading();
		jboolean takeContentChanged();
		jstring toString();
		void unregisterListener(JObject arg0);
		void unregisterOnLoadCanceledListener(JObject arg0);
	};
} // namespace android::content

