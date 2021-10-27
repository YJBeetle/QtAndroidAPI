#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::database
{
	class CursorJoiner_Result;
}

namespace android::database
{
	class CursorJoiner : public __JniBaseClass
	{
	public:
		// Fields
		
		CursorJoiner(QAndroidJniObject obj);
		// Constructors
		CursorJoiner(__JniBaseClass &arg0, jarray &arg1, __JniBaseClass &arg2, jarray &arg3);
		CursorJoiner() = default;
		
		// Methods
		jboolean hasNext();
		QAndroidJniObject iterator();
		QAndroidJniObject next();
		void remove();
	};
} // namespace android::database

