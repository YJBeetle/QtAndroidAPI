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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StandardWatchEventKinds(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StandardWatchEventKinds(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::nio::file

