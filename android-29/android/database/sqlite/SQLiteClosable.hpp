#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::database::sqlite
{
	class SQLiteClosable : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteClosable(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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

