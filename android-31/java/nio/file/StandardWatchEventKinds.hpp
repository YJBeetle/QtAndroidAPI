#pragma once

#include "../../../JObject.hpp"

namespace java::nio::file
{
	class StandardWatchEventKinds : public JObject
	{
	public:
		// Fields
		static JObject ENTRY_CREATE();
		static JObject ENTRY_DELETE();
		static JObject ENTRY_MODIFY();
		static JObject OVERFLOW();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StandardWatchEventKinds(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StandardWatchEventKinds(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::nio::file

