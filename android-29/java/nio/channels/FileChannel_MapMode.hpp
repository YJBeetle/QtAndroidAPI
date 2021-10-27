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
		
		FileChannel_MapMode(QAndroidJniObject obj);
		// Constructors
		FileChannel_MapMode() = default;
		
		// Methods
		jstring toString();
	};
} // namespace java::nio::channels

