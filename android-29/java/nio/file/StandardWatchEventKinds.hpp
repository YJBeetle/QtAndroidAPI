#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::nio::file
{
	class StandardWatchEventKinds : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ENTRY_CREATE();
		static QAndroidJniObject ENTRY_DELETE();
		static QAndroidJniObject ENTRY_MODIFY();
		static QAndroidJniObject OVERFLOW();
		
		StandardWatchEventKinds(QAndroidJniObject obj);
		// Constructors
		StandardWatchEventKinds() = default;
		
		// Methods
	};
} // namespace java::nio::file

