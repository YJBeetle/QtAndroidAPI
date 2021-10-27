#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::database::sqlite
{
	class SQLiteClosable : public __JniBaseClass
	{
	public:
		// Fields
		
		SQLiteClosable(QAndroidJniObject obj);
		// Constructors
		SQLiteClosable();
		
		// Methods
		void acquireReference();
		void close();
		void releaseReference();
		void releaseReferenceFromContainer();
	};
} // namespace android::database::sqlite

