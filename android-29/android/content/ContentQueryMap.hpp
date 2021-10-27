#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/util/Observable.hpp"

namespace android::content
{
	class ContentValues;
}
namespace android::os
{
	class Handler;
}

namespace android::content
{
	class ContentQueryMap : public java::util::Observable
	{
	public:
		// Fields
		
		ContentQueryMap(QAndroidJniObject obj);
		// Constructors
		ContentQueryMap(__JniBaseClass &arg0, jstring &arg1, jboolean &arg2, android::os::Handler &arg3);
		ContentQueryMap(__JniBaseClass &arg0, const QString &arg1, jboolean &arg2, android::os::Handler &arg3);
		ContentQueryMap() = default;
		
		// Methods
		void close();
		QAndroidJniObject getRows();
		QAndroidJniObject getValues(jstring arg0);
		QAndroidJniObject getValues(const QString &arg0);
		void requery();
		void setKeepUpdated(jboolean arg0);
	};
} // namespace android::content

