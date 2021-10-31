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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentQueryMap(const char *className, const char *sig, Ts...agv) : java::util::Observable(className, sig, std::forward<Ts>(agv)...) {}
		ContentQueryMap(QAndroidJniObject obj);
		
		// Constructors
		ContentQueryMap(__JniBaseClass arg0, jstring arg1, jboolean arg2, android::os::Handler arg3);
		
		// Methods
		void close();
		QAndroidJniObject getRows();
		QAndroidJniObject getValues(jstring arg0);
		void requery();
		void setKeepUpdated(jboolean arg0);
	};
} // namespace android::content

