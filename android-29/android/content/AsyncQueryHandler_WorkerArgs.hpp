#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::content
{
	class AsyncQueryHandler_WorkerArgs : public __JniBaseClass
	{
	public:
		// Fields
		jobject cookie();
		android::os::Handler handler();
		jstring orderBy();
		jarray projection();
		jobject result();
		jstring selection();
		jarray selectionArgs();
		android::net::Uri uri();
		android::content::ContentValues values();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AsyncQueryHandler_WorkerArgs(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AsyncQueryHandler_WorkerArgs(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::content

