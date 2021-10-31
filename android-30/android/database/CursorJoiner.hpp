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
		
		// QJniObject forward
		template<typename ...Ts> explicit CursorJoiner(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CursorJoiner(QJniObject obj);
		
		// Constructors
		CursorJoiner(__JniBaseClass arg0, jarray arg1, __JniBaseClass arg2, jarray arg3);
		
		// Methods
		jboolean hasNext();
		__JniBaseClass iterator();
		android::database::CursorJoiner_Result next();
		void remove();
	};
} // namespace android::database

