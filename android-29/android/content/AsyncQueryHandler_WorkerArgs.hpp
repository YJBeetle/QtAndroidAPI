#pragma once

#include "../../JObject.hpp"

class JArray;
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
class JObject;
class JString;

namespace android::content
{
	class AsyncQueryHandler_WorkerArgs : public JObject
	{
	public:
		// Fields
		JObject cookie();
		android::os::Handler handler();
		JString orderBy();
		JArray projection();
		JObject result();
		JString selection();
		JArray selectionArgs();
		android::net::Uri uri();
		android::content::ContentValues values();
		
		// QJniObject forward
		template<typename ...Ts> explicit AsyncQueryHandler_WorkerArgs(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AsyncQueryHandler_WorkerArgs(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::content

