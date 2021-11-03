#pragma once

#include "../../JObject.hpp"

class JArray;
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
class JObject;
class JString;

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
		JString dataToString(JObject arg0);
		void deliverCancellation();
		void deliverResult(JObject arg0);
		void dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3);
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
		JString toString();
		void unregisterListener(JObject arg0);
		void unregisterOnLoadCanceledListener(JObject arg0);
	};
} // namespace android::content

