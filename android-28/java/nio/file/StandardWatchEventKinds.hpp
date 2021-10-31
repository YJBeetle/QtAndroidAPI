#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::nio::file
{
	class StandardWatchEventKinds : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass ENTRY_CREATE();
		static __JniBaseClass ENTRY_DELETE();
		static __JniBaseClass ENTRY_MODIFY();
		static __JniBaseClass OVERFLOW();
		
		// QJniObject forward
		template<typename ...Ts> explicit StandardWatchEventKinds(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StandardWatchEventKinds(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::nio::file

