#pragma once

#include "../os/Handler.hpp"

class JArray;
namespace android::content
{
	class ContentResolver;
}
namespace android::content
{
	class ContentValues;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class Looper;
}
namespace android::os
{
	class Message;
}
class JObject;
class JString;

namespace android::content
{
	class AsyncQueryHandler : public android::os::Handler
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AsyncQueryHandler(const char *className, const char *sig, Ts...agv) : android::os::Handler(className, sig, std::forward<Ts>(agv)...) {}
		AsyncQueryHandler(QJniObject obj);
		
		// Constructors
		AsyncQueryHandler(android::content::ContentResolver arg0);
		
		// Methods
		void cancelOperation(jint arg0);
		void handleMessage(android::os::Message arg0);
		void startDelete(jint arg0, JObject arg1, android::net::Uri arg2, JString arg3, JArray arg4);
		void startInsert(jint arg0, JObject arg1, android::net::Uri arg2, android::content::ContentValues arg3);
		void startQuery(jint arg0, JObject arg1, android::net::Uri arg2, JArray arg3, JString arg4, JArray arg5, JString arg6);
		void startUpdate(jint arg0, JObject arg1, android::net::Uri arg2, android::content::ContentValues arg3, JString arg4, JArray arg5);
	};
} // namespace android::content

