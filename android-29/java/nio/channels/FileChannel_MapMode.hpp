#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::nio::channels
{
	class FileChannel_MapMode : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject PRIVATE();
		static QAndroidJniObject READ_ONLY();
		static QAndroidJniObject READ_WRITE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileChannel_MapMode(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FileChannel_MapMode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring toString();
	};
} // namespace java::nio::channels

