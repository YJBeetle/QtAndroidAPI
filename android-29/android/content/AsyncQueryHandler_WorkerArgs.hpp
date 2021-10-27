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
		QAndroidJniObject handler();
		jstring orderBy();
		jarray projection();
		jobject result();
		jstring selection();
		jarray selectionArgs();
		QAndroidJniObject uri();
		QAndroidJniObject values();
		
		AsyncQueryHandler_WorkerArgs(QAndroidJniObject obj);
		// Constructors
		AsyncQueryHandler_WorkerArgs() = default;
		
		// Methods
	};
} // namespace android::content

