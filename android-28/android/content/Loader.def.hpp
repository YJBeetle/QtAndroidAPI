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
		Loader(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Loader(android::content::Context arg0);
		
		// Methods
		void abandon() const;
		jboolean cancelLoad() const;
		void commitContentChanged() const;
		JString dataToString(JObject arg0) const;
		void deliverCancellation() const;
		void deliverResult(JObject arg0) const;
		void dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const;
		void forceLoad() const;
		android::content::Context getContext() const;
		jint getId() const;
		jboolean isAbandoned() const;
		jboolean isReset() const;
		jboolean isStarted() const;
		void onContentChanged() const;
		void registerListener(jint arg0, JObject arg1) const;
		void registerOnLoadCanceledListener(JObject arg0) const;
		void reset() const;
		void rollbackContentChanged() const;
		void startLoading() const;
		void stopLoading() const;
		jboolean takeContentChanged() const;
		JString toString() const;
		void unregisterListener(JObject arg0) const;
		void unregisterOnLoadCanceledListener(JObject arg0) const;
	};
} // namespace android::content

